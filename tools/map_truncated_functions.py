#!/usr/bin/env python3
"""
Mapeia funções truncadas no ELF vs. .cpp gerados.

Para cada função declarada em src/recompiled/, decodifica os bytes do ELF
até encontrar o REAL fim da função (jr $ra + delay slot) e compara com o
range declarado pelo recompilador. Lista as truncadas.

Em seguida faz BFS a partir do entry point (0x100008) para identificar
quais funções truncadas estão alcançáveis no boot path.
"""

import os
import re
import struct
import sys
from collections import deque

ELF_PATH = "GOD_PC_PORT_FINAL/data/SCUS_973.99"
RECOMP_DIR = "src/recompiled"
TEXT_VADDR = 0x100000
TEXT_FOFF = 0x1000
TEXT_END = 0x29BBA4
ENTRY_PC = 0x100008


def load_elf_text():
    data = open(ELF_PATH, "rb").read()
    return data


def read_word(data, pc):
    """Lê uma word do ELF dada um PC virtual."""
    if pc < TEXT_VADDR or pc >= TEXT_END:
        return None
    foff = pc - TEXT_VADDR + TEXT_FOFF
    if foff + 4 > len(data):
        return None
    return struct.unpack_from("<I", data, foff)[0]


def parse_recompiled_files():
    """
    Retorna dict: start_pc -> (declared_end_pc, filename)
    Lê o range REAL declarado no comentário "// Address: 0xSTART - 0xEND"
    no header de cada .cpp (nome do arquivo é só convenção, não confiável).
    """
    funcs = {}
    pattern_addr = re.compile(
        r"//\s*Address:\s*0x([0-9a-fA-F]+)\s*-\s*0x([0-9a-fA-F]+)"
    )
    pattern_name = re.compile(r"^(?:entry|sub|FUN)_.*\.cpp$")
    for name in os.listdir(RECOMP_DIR):
        if not pattern_name.match(name):
            continue
        path = os.path.join(RECOMP_DIR, name)
        # Ler só as primeiras 30 linhas (header)
        try:
            with open(path, "r", encoding="utf-8", errors="ignore") as f:
                head = "".join([next(f, "") for _ in range(30)])
        except Exception:
            continue
        m = pattern_addr.search(head)
        if not m:
            # Sem comentário Address — usar nome do arquivo como fallback
            fb = re.match(
                r"^(?:entry|sub|FUN)_0*([0-9a-fA-F]+)_0x([0-9a-fA-F]+)\.cpp$", name
            )
            if fb:
                start = int(fb.group(1), 16)
                end = int(fb.group(2), 16)
                funcs[start] = (end, name)
            continue
        start = int(m.group(1), 16)
        end = int(m.group(2), 16)
        funcs[start] = (end, name)
    return funcs


def find_real_end(data, start_pc, all_starts_sorted, max_instructions=2000):
    """
    Decodifica do start_pc procurando o fim real da função:
      - jr $ra (op=000000, funct=001000, rs=31) seguido de delay slot
      - OU encontra outro start declarado (limita aqui)
      - OU max_instructions (segurança)
    Retorna (real_end_pc, jal_targets, j_targets).
    """
    jal_targets = []
    j_targets = []
    pc = start_pc

    # próximo start declarado depois deste
    next_start = None
    for s in all_starts_sorted:
        if s > start_pc:
            next_start = s
            break

    for _ in range(max_instructions):
        if pc >= TEXT_END:
            return pc, jal_targets, j_targets
        if next_start is not None and pc >= next_start:
            return pc, jal_targets, j_targets

        word = read_word(data, pc)
        if word is None:
            return pc, jal_targets, j_targets

        op = (word >> 26) & 0x3F
        funct = word & 0x3F
        rs = (word >> 21) & 0x1F

        # jr $ra (rs=31)
        if op == 0x00 and funct == 0x08 and rs == 31:
            # jr ra encontrado; precisa consumir 1 delay slot
            return pc + 8, jal_targets, j_targets

        # jal: opcode 0x03
        if op == 0x03:
            target = (word & 0x3FFFFFF) << 2
            jal_targets.append(target)

        # j: opcode 0x02 (tail call ou jump dentro da função)
        if op == 0x02:
            target = (word & 0x3FFFFFF) << 2
            j_targets.append(target)
            # j incondicional pode ser fim da função se delay slot não puxa nada
            # Mas pode ser jump interno também — só termina se for tail call.
            # Heurística: se o target NÃO está no range [start_pc, next_start),
            # é tail call; senão é jump interno e continua.
            if target < start_pc or (next_start is not None and target >= next_start):
                return pc + 8, jal_targets, j_targets

        pc += 4

    return pc, jal_targets, j_targets


def main():
    print("[1/4] Carregando ELF...")
    data = load_elf_text()
    print(f"      ELF size: {len(data)} bytes")

    print("[2/4] Lendo funções declaradas em src/recompiled/...")
    funcs = parse_recompiled_files()
    starts_sorted = sorted(funcs.keys())
    print(f"      Funções declaradas: {len(funcs)}")

    print("[3/4] Decodificando ELF e detectando truncamento...")
    truncated = []  # (start, declared_end, real_end, name, jal_targets, j_targets)
    real_info = {}  # start -> (real_end, jals, js)

    for start in starts_sorted:
        declared_end, name = funcs[start]
        real_end, jals, js = find_real_end(data, start, starts_sorted)
        real_info[start] = (real_end, jals, js)
        declared_size = declared_end - start
        real_size = real_end - start
        # truncada se real é estritamente maior (e por margem >= 1 instrução)
        if real_size > declared_size and (real_size - declared_size) >= 4:
            truncated.append((start, declared_end, real_end, name, jals, js))

    print(f"      Funções truncadas detectadas: {len(truncated)}")

    print("[4/4] BFS no boot path a partir de 0x100008...")
    visited = set()
    boot_truncated = []
    queue = deque([ENTRY_PC])

    # Para cada PC visitado, achar a função que o contém (start mais próximo abaixo)
    def find_func_start(pc):
        # busca binária simples
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

    truncated_starts = {t[0] for t in truncated}
    truncated_by_start = {t[0]: t for t in truncated}

    while queue:
        pc = queue.popleft()
        fstart = find_func_start(pc)
        if fstart is None or fstart in visited:
            continue
        visited.add(fstart)

        if fstart in truncated_starts:
            boot_truncated.append(truncated_by_start[fstart])

        info = real_info.get(fstart)
        if info is None:
            continue
        real_end, jals, js = info
        for t in jals + js:
            if TEXT_VADDR <= t < TEXT_END:
                queue.append(t)

    print(f"      Funções alcançáveis a partir do entry: {len(visited)}")
    print(f"      Funções TRUNCADAS no boot path: {len(boot_truncated)}")
    print()
    print("=" * 70)
    print("FUNÇÕES TRUNCADAS NO BOOT PATH (ordenadas por endereço)")
    print("=" * 70)
    print(f"{'start':<10} {'decl_end':<10} {'real_end':<10} {'falta':<8} {'arquivo'}")
    print("-" * 70)
    for start, dend, rend, name, jals, js in sorted(boot_truncated, key=lambda x: x[0]):
        missing_bytes = rend - dend
        missing_insns = missing_bytes // 4
        print(f"0x{start:08X} 0x{dend:08X} 0x{rend:08X} {missing_insns:>3}ins  {name}")

    print()
    print("=" * 70)
    print(f"RESUMO GERAL")
    print("=" * 70)
    print(f"  Total de funções declaradas:     {len(funcs):>5}")
    print(f"  Total truncadas (todas):         {len(truncated):>5}")
    print(f"  Alcançáveis a partir do entry:   {len(visited):>5}")
    print(f"  Truncadas no boot path:          {len(boot_truncated):>5}")


if __name__ == "__main__":
    main()
