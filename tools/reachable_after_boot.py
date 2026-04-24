#!/usr/bin/env python3
"""reachable_after_boot.py - Scanner de alcançabilidade pós-boot.

Versão estendida de `map_truncated_functions.py`. Em vez de fazer BFS apenas
do entry point (0x100008), aceita uma LISTA de seeds — entry + funções de
menu, VU0/VU1, dispatch de game state, root_func do crt0, etc — e produz:

  1) Resumo de alcançabilidade (quantas funções por tier de seed).
  2) Truncadas no conjunto alcançável (mesmo critério do scanner antigo).
  3) FRONTEIRA: alvos chamados pelo código alcançável que ainda NÃO têm
     .cpp recompilado em `src/recompiled/`. Esses são os candidatos a
     "próxima quebra" — ranqueados pelo número de call sites distintos
     que apontam pra eles. Quanto mais call sites, mais provável que o
     jogo bata logo cedo lá.

Diferenciais em relação ao scanner antigo:
  - Múltiplos seeds (CLI ou arquivo `tools/reachable_seeds.txt`).
  - Resolve indirect calls (jalr) através de padrões `lui rN, hi` +
    `addiu rM, rN, lo` na mesma função, capturando function pointers
    carregados em registradores antes do jalr.
  - Diff opcional contra o scanner-base (somente entry) para mostrar o
    que VIRA alcançável quando você adiciona um seed novo.
  - Marca alvos de fronteira que estão dentro do .text do ELF mas fora
    de qualquer função declarada — esses são gaps puros (não recompilados
    por falta de símbolo).

Uso:
  python3 tools/reachable_after_boot.py
  python3 tools/reachable_after_boot.py --seed 0x100008 --seed 0x123abc
  python3 tools/reachable_after_boot.py --seeds tools/reachable_seeds.txt
  python3 tools/reachable_after_boot.py --diff-entry      # diff vs entry-only
  python3 tools/reachable_after_boot.py --top 50          # top-50 fronteira
  python3 tools/reachable_after_boot.py --json out.json   # exporta JSON

Requer: nenhum (usa apenas stdlib).
"""

import argparse
import json
import os
import re
import struct
import sys
from collections import defaultdict, deque

ELF_PATH = "GOD_PC_PORT_FINAL/data/SCUS_973.99"
RECOMP_DIR = "src/recompiled"
TEXT_VADDR = 0x100000
TEXT_FOFF = 0x1000
TEXT_END = 0x29BBA4
ENTRY_PC = 0x100008
DEFAULT_SEEDS_FILE = "tools/reachable_seeds.txt"
DISCOVERED_CSV = "tools/discovered_functions.csv"


# ------------------------------------------------------------------ ELF I/O


def load_elf_text():
    with open(ELF_PATH, "rb") as f:
        return f.read()


def read_word(data, pc):
    if pc < TEXT_VADDR or pc >= TEXT_END:
        return None
    foff = pc - TEXT_VADDR + TEXT_FOFF
    if foff + 4 > len(data):
        return None
    return struct.unpack_from("<I", data, foff)[0]


# ----------------------------------------------------- Parse recompiled .cpp


def parse_recompiled_files():
    """start_pc -> (declared_end_pc, filename)."""
    funcs = {}
    pattern_addr = re.compile(
        r"//\s*Address:\s*0x([0-9a-fA-F]+)\s*-\s*0x([0-9a-fA-F]+)"
    )
    pattern_name = re.compile(r"^(?:entry|sub|FUN)_.*\.cpp$")
    if not os.path.isdir(RECOMP_DIR):
        return funcs
    for name in os.listdir(RECOMP_DIR):
        if not pattern_name.match(name):
            continue
        path = os.path.join(RECOMP_DIR, name)
        try:
            with open(path, "r", encoding="utf-8", errors="ignore") as f:
                head = "".join([next(f, "") for _ in range(30)])
        except Exception:
            continue
        m = pattern_addr.search(head)
        if not m:
            fb = re.match(
                r"^(?:entry|sub|FUN)_0*([0-9a-fA-F]+)_0x([0-9a-fA-F]+)\.cpp$",
                name,
            )
            if fb:
                funcs[int(fb.group(1), 16)] = (int(fb.group(2), 16), name)
            continue
        funcs[int(m.group(1), 16)] = (int(m.group(2), 16), name)
    return funcs


def parse_discovered_csv():
    """start_pc -> (end_pc, name) do gap_discover.py, se existir."""
    extras = {}
    if not os.path.isfile(DISCOVERED_CSV):
        return extras
    with open(DISCOVERED_CSV, "r", encoding="utf-8") as f:
        next(f, None)  # header
        for line in f:
            parts = [p.strip() for p in line.strip().split(",")]
            if len(parts) < 4:
                continue
            try:
                start = int(parts[1], 16)
                end = int(parts[2], 16)
            except ValueError:
                continue
            extras[start] = (end, parts[0])
    return extras


# --------------------------------------------------- Decode helpers (R5900-ish)


def decode_jal_target(word):
    op = (word >> 26) & 0x3F
    if op != 0x03:
        return None
    return (word & 0x03FFFFFF) << 2


def decode_j_target(word):
    op = (word >> 26) & 0x3F
    if op != 0x02:
        return None
    return (word & 0x03FFFFFF) << 2


def decode_branch(word):
    """Returns target PC for relative branches inside same function (best-effort)."""
    op = (word >> 26) & 0x3F
    # BEQ/BNE/BLEZ/BGTZ + likely variants + REGIMM (BLTZ/BGEZ/etc)
    if op in (0x04, 0x05, 0x06, 0x07, 0x14, 0x15, 0x16, 0x17, 0x01):
        imm = word & 0xFFFF
        sdisp = imm - 0x10000 if imm & 0x8000 else imm
        return sdisp
    return None


def is_jr_ra(word):
    op = (word >> 26) & 0x3F
    funct = word & 0x3F
    rs = (word >> 21) & 0x1F
    return op == 0x00 and funct == 0x08 and rs == 31


def decode_jalr(word):
    """jalr rd, rs (op=000000, funct=001001). Returns (rs, rd) ou None."""
    op = (word >> 26) & 0x3F
    funct = word & 0x3F
    if op == 0x00 and funct == 0x09:
        rs = (word >> 21) & 0x1F
        rd = (word >> 11) & 0x1F
        return (rs, rd)
    return None


def decode_lui(word):
    op = (word >> 26) & 0x3F
    if op != 0x0F:
        return None
    rt = (word >> 16) & 0x1F
    imm = word & 0xFFFF
    return (rt, imm)


def decode_addiu(word):
    op = (word >> 26) & 0x3F
    if op not in (0x09, 0x19):  # addiu (0x09), daddiu (0x19)
        return None
    rs = (word >> 21) & 0x1F
    rt = (word >> 16) & 0x1F
    imm = word & 0xFFFF
    sdisp = imm - 0x10000 if imm & 0x8000 else imm
    return (rs, rt, sdisp)


def decode_ori(word):
    op = (word >> 26) & 0x3F
    if op != 0x0D:
        return None
    rs = (word >> 21) & 0x1F
    rt = (word >> 16) & 0x1F
    imm = word & 0xFFFF
    return (rs, rt, imm)


# ------------------------------------------------ Function-end + call extraction


def scan_function(data, start_pc, all_starts_sorted, max_instructions=4000):
    """
    Walk a function from start_pc, returning:
      real_end_pc, jal_targets, j_targets, jalr_targets

    jalr_targets is a list of resolved function pointers (when we can track
    a `lui+addiu`/`lui+ori` pair into the rs register before the jalr).
    Targets that we can't resolve are skipped silently (they often are
    vtable dispatches resolved at runtime).
    """
    jal_targets = []
    j_targets = []
    jalr_targets = []

    # Track upper-half + computed value per register.
    reg_upper = {}    # reg -> imm16 (raw)
    reg_value = {}    # reg -> 32-bit computed value

    # Find the next declared start to bound this function.
    next_start = None
    for s in all_starts_sorted:
        if s > start_pc:
            next_start = s
            break

    pc = start_pc
    for _ in range(max_instructions):
        if pc >= TEXT_END:
            return pc, jal_targets, j_targets, jalr_targets
        if next_start is not None and pc >= next_start:
            return pc, jal_targets, j_targets, jalr_targets

        word = read_word(data, pc)
        if word is None:
            return pc, jal_targets, j_targets, jalr_targets

        if is_jr_ra(word):
            return pc + 8, jal_targets, j_targets, jalr_targets

        t = decode_jal_target(word)
        if t is not None:
            jal_targets.append(t)
            pc += 4
            continue

        t = decode_j_target(word)
        if t is not None:
            j_targets.append(t)
            # tail call detection — if outside this function, treat as end
            if t < start_pc or (next_start is not None and t >= next_start):
                return pc + 8, jal_targets, j_targets, jalr_targets
            pc += 4
            continue

        jr = decode_jalr(word)
        if jr is not None:
            rs, _rd = jr
            if rs in reg_value:
                jalr_targets.append(reg_value[rs])
            pc += 4
            continue

        lui = decode_lui(word)
        if lui is not None:
            rt, imm = lui
            reg_upper[rt] = imm
            reg_value[rt] = (imm << 16) & 0xFFFFFFFF
            pc += 4
            continue

        addiu = decode_addiu(word)
        if addiu is not None:
            rs, rt, sdisp = addiu
            if rs in reg_value:
                reg_value[rt] = (reg_value[rs] + sdisp) & 0xFFFFFFFF
            else:
                reg_value.pop(rt, None)
            pc += 4
            continue

        ori = decode_ori(word)
        if ori is not None:
            rs, rt, imm = ori
            if rs in reg_value:
                reg_value[rt] = (reg_value[rs] | imm) & 0xFFFFFFFF
            else:
                reg_value.pop(rt, None)
            pc += 4
            continue

        # Any other instruction that writes a GPR (rt or rd) might invalidate
        # our cached upper/value. Be conservative: if we can't tell, drop the
        # tracking only when it's a clear move/load to a tracked reg.
        # (For our purposes — finding function pointers — staleness is OK
        # as long as we don't produce bogus targets. The branches above
        # already cover the common pointer-formation idioms.)

        pc += 4

    return pc, jal_targets, j_targets, jalr_targets


# --------------------------------------------------------------- BFS


def find_func_start(starts_sorted, pc):
    """Binary search: largest start <= pc."""
    lo, hi = 0, len(starts_sorted) - 1
    result = None
    while lo <= hi:
        mid = (lo + hi) // 2
        if starts_sorted[mid] <= pc:
            result = starts_sorted[mid]
            lo = mid + 1
        else:
            hi = mid - 1
    return result


def bfs_reachable(seeds, scan_cache):
    """Returns (visited_starts, frontier_call_sites)

    frontier_call_sites: dict target_pc -> set of (caller_start, call_kind)
      where the target is NOT a known recompiled function start.
    """
    visited = set()
    frontier = defaultdict(set)
    queue = deque(seeds)

    while queue:
        fstart = queue.popleft()
        if fstart in visited:
            continue
        visited.add(fstart)

        info = scan_cache.get(fstart)
        if info is None:
            continue
        _real_end, jals, js, jalrs = info

        for kind, targets in (("jal", jals), ("j", js), ("jalr", jalrs)):
            for t in targets:
                if not (TEXT_VADDR <= t < TEXT_END):
                    continue
                if t in scan_cache:
                    queue.append(t)
                else:
                    # target is inside .text but not a declared function start
                    frontier[t].add((fstart, kind))

    return visited, frontier


# --------------------------------------------------------------- Seeds


def load_seeds(args):
    seeds = []
    if args.seed:
        for s in args.seed:
            seeds.append(int(s, 0))
    if args.seeds and os.path.isfile(args.seeds):
        with open(args.seeds, "r", encoding="utf-8") as f:
            for line in f:
                line = line.split("#", 1)[0].strip()
                if not line:
                    continue
                try:
                    seeds.append(int(line, 0))
                except ValueError:
                    print(f"[warn] seed inválido ignorado: {line!r}",
                          file=sys.stderr)
    if not seeds:
        # Default: arquivo de seeds se existir, senão entry.
        if os.path.isfile(DEFAULT_SEEDS_FILE):
            args.seeds = DEFAULT_SEEDS_FILE
            return load_seeds(args)
        seeds = [ENTRY_PC]
    # dedup preservando ordem
    seen = set()
    out = []
    for s in seeds:
        if s in seen:
            continue
        seen.add(s)
        out.append(s)
    return out


# --------------------------------------------------------------- Main


def main():
    ap = argparse.ArgumentParser(
        description="Scanner de alcançabilidade pós-boot (entry + seeds extras)."
    )
    ap.add_argument("--seed", action="append", default=None,
                    help="seed address adicional (hex, pode repetir)")
    ap.add_argument("--seeds", default=None,
                    help=f"arquivo com 1 seed por linha "
                         f"(default: {DEFAULT_SEEDS_FILE} se existir)")
    ap.add_argument("--diff-entry", action="store_true",
                    help="mostra o que VIRA alcançável quando os seeds extras "
                         "são adicionados (vs scan só do entry)")
    ap.add_argument("--top", type=int, default=30,
                    help="quantos itens mostrar nas listas top (default: 30)")
    ap.add_argument("--json", default=None,
                    help="exporta resultado completo em JSON")
    args = ap.parse_args()

    print("[1/5] Carregando ELF + funções recompiladas...")
    data = load_elf_text()
    funcs = parse_recompiled_files()
    discovered = parse_discovered_csv()
    # `funcs` é a fonte de verdade pra "está recompilado". `discovered` ajuda
    # a classificar a fronteira: alvos descobertos pelo gap_discover mas que
    # ainda não viraram .cpp ainda contam como fronteira (precisam de rebuild).
    starts_sorted = sorted(funcs.keys())
    print(f"      Funções recompiladas declaradas: {len(funcs)}")
    print(f"      Funções no discovered_functions.csv: {len(discovered)}")

    print("[2/5] Resolvendo seeds...")
    raw_seeds = load_seeds(args)
    seeds = []
    for s in raw_seeds:
        fstart = find_func_start(starts_sorted, s)
        if fstart is None:
            print(f"      [warn] seed 0x{s:08X} fora do range de funções "
                  f"declaradas — pulando")
            continue
        if fstart != s:
            print(f"      seed 0x{s:08X} → resolvido pra start 0x{fstart:08X}")
        seeds.append(fstart)
    seeds = list(dict.fromkeys(seeds))
    print(f"      Seeds efetivos: {len(seeds)}")

    print("[3/5] Decodificando funções (real_end + alvos de chamada)...")
    scan_cache = {}
    truncated_by_start = {}
    for start in starts_sorted:
        declared_end, name = funcs[start]
        real_end, jals, js, jalrs = scan_function(data, start, starts_sorted)
        scan_cache[start] = (real_end, jals, js, jalrs)
        if (real_end - start) > (declared_end - start) and \
                (real_end - declared_end) >= 4:
            truncated_by_start[start] = (declared_end, real_end, name)
    print(f"      Funções decodificadas: {len(scan_cache)}")
    print(f"      Funções truncadas (todas): {len(truncated_by_start)}")

    print("[4/5] BFS a partir dos seeds...")
    visited, frontier = bfs_reachable(seeds, scan_cache)
    print(f"      Funções alcançáveis: {len(visited)}")
    print(f"      Alvos de fronteira (não recompilados): {len(frontier)}")

    boot_only_visited = set()
    boot_only_frontier = {}
    if args.diff_entry:
        print("[5/5] BFS comparativo só do entry...")
        boot_only_visited, boot_only_frontier = bfs_reachable(
            [find_func_start(starts_sorted, ENTRY_PC)], scan_cache
        )
        print(f"      Entry-only alcançáveis: {len(boot_only_visited)}")
    else:
        print("[5/5] (--diff-entry não usado, pulando comparativo)")

    # ----- relatório -----
    print()
    print("=" * 72)
    print("TRUNCADAS NO CONJUNTO ALCANÇÁVEL")
    print("=" * 72)
    truncated_in_reach = [
        (s, *truncated_by_start[s]) for s in sorted(visited)
        if s in truncated_by_start
    ]
    if not truncated_in_reach:
        print("  (nenhuma)")
    else:
        print(f"{'start':<10} {'decl_end':<10} {'real_end':<10} "
              f"{'falta':<8} arquivo")
        print("-" * 72)
        for start, dend, rend, name in truncated_in_reach[:args.top]:
            miss = (rend - dend) // 4
            print(f"0x{start:08X} 0x{dend:08X} 0x{rend:08X} "
                  f"{miss:>3}ins  {name}")
        if len(truncated_in_reach) > args.top:
            print(f"  ... e mais {len(truncated_in_reach) - args.top} "
                  f"(use --top N pra ver mais)")

    print()
    print("=" * 72)
    print("FRONTEIRA — próximos candidatos a quebra")
    print("(ordenado por nº de call sites distintos que apontam pro alvo)")
    print("=" * 72)
    frontier_ranked = sorted(
        frontier.items(),
        key=lambda kv: (-len(kv[1]), kv[0]),
    )
    if not frontier_ranked:
        print("  (nenhuma — todo alvo alcançável já tem .cpp recompilado)")
    else:
        print(f"{'target':<12} {'callers':<8} {'kinds':<14} "
              f"{'gap_discover':<13} amostra_caller")
        print("-" * 72)
        for target, callers in frontier_ranked[:args.top]:
            kinds = sorted({k for _, k in callers})
            in_disc = "sim" if target in discovered else "—"
            sample = sorted(callers)[0][0]
            print(f"0x{target:08X}   {len(callers):>5}   "
                  f"{','.join(kinds):<14} {in_disc:<13} 0x{sample:08X}")
        if len(frontier_ranked) > args.top:
            print(f"  ... e mais {len(frontier_ranked) - args.top} "
                  f"(use --top N pra ver mais)")

    if args.diff_entry:
        new_visited = visited - boot_only_visited
        print()
        print("=" * 72)
        print("DIFF — funções que VIRAM alcançáveis pelos seeds extras")
        print("=" * 72)
        print(f"  entry-only:        {len(boot_only_visited):>5}")
        print(f"  com seeds extras:  {len(visited):>5}")
        print(f"  ganho:             {len(new_visited):>5}")
        if new_visited:
            print()
            print("  amostra (até 20):")
            for s in sorted(new_visited)[:20]:
                _, name = funcs[s]
                tag = " [TRUNCADA]" if s in truncated_by_start else ""
                print(f"    0x{s:08X}  {name}{tag}")

    print()
    print("=" * 72)
    print("RESUMO")
    print("=" * 72)
    print(f"  Seeds usados:                    {len(seeds):>5}")
    print(f"  Funções recompiladas (total):    {len(funcs):>5}")
    print(f"  Alcançáveis com seeds:           {len(visited):>5}")
    print(f"  Truncadas no conjunto alcançável:{len(truncated_in_reach):>5}")
    print(f"  Alvos de fronteira:              {len(frontier):>5}")

    if args.json:
        out = {
            "seeds": [f"0x{s:08X}" for s in seeds],
            "reachable": sorted(f"0x{s:08X}" for s in visited),
            "truncated_in_reach": [
                {
                    "start": f"0x{s:08X}",
                    "declared_end": f"0x{d:08X}",
                    "real_end": f"0x{r:08X}",
                    "missing_insns": (r - d) // 4,
                    "file": n,
                }
                for s, d, r, n in truncated_in_reach
            ],
            "frontier": [
                {
                    "target": f"0x{t:08X}",
                    "callers": sorted(f"0x{c:08X}" for c, _ in cs),
                    "kinds": sorted({k for _, k in cs}),
                    "in_discovered_csv": t in discovered,
                }
                for t, cs in frontier_ranked
            ],
        }
        with open(args.json, "w", encoding="utf-8") as f:
            json.dump(out, f, indent=2)
        print()
        print(f"  → resultado completo gravado em {args.json}")


if __name__ == "__main__":
    main()
