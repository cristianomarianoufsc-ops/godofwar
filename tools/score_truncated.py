#!/usr/bin/env python3
"""
Prioriza funções truncadas pelo impacto estimado no caminho de execução.

Score = call_refs * 40 + bytes_faltando + proximity_bonus
  call_refs      : nº de .cpp que referenciam o endereço da função (chamadas estáticas)
  bytes_faltando : bytes que estão faltando (real_end - decl_end)
  proximity_bonus: +500 se estiver a ≤0x1000 bytes de um endereço semente crítico

Saída: tabela ordenada por score (maior = corrigir primeiro).
Funções já no truncation_overrides.csv aparecem marcadas com ✅.

Uso:
  uv run python tools/score_truncated.py [--top N] [--min-bytes B]
"""

import os
import re
import struct
import sys
import argparse
import csv as csvmod

# ---------------------------------------------------------------------------
# Config
# ---------------------------------------------------------------------------
ELF_PATH      = "GOD_PC_PORT_FINAL/data/SCUS_973.99"
RECOMP_DIR    = "GOD_PC_PORT_FINAL/src/recompiled"
CSV_PATH      = "tools/truncation_overrides.csv"
TEXT_VADDR    = 0x100000
TEXT_FOFF     = 0x1000
TEXT_END      = 0x29BBA4

# Endereços críticos conhecidos (sementes do caminho de execução confirmado)
CRITICAL_SEEDS = [
    0x100008,   # crt0 entry
    0x297290,   # sub_00297290 — bind loop SIF (35 módulos IOP)
    0x2947c8,   # FUN_002947c8 — thread id=2 entry (Bug P)
    0x294990,   # FUN_00294990 — GetThreadId pós-bind (Bug Q)
    0x296a50,   # FUN_00296a50 — callback 0x296a54 (Bug L)
    0x2971c0,   # FUN_002971c0 — antes do bind loop (Bug T)
    0x297058,   # FUN_00297058 — vizinhança bind (Bug S)
    0x294c70,   # FUN_00294c70 — init thread region (Bug R)
]
PROXIMITY_RADIUS = 0x2000   # bytes
PROXIMITY_BONUS  = 500

# ---------------------------------------------------------------------------
# Lê ELF
# ---------------------------------------------------------------------------
def load_elf_bytes():
    with open(ELF_PATH, "rb") as f:
        return f.read()

def vaddr_to_offset(vaddr):
    return TEXT_FOFF + (vaddr - TEXT_VADDR)

def find_real_end(elf: bytes, start: int, next_func_start: int = 0) -> int:
    """
    Detecta o jr $ra + delay slot real a partir de 'start'.
    Limita a busca ao início da próxima função declarada (next_func_start).
    """
    JR_RA = 0x03E00008
    cap = next_func_start if next_func_start and next_func_start > start else start + 0x2000
    max_scan = min(cap, TEXT_END)
    off = vaddr_to_offset(start)
    end = vaddr_to_offset(max_scan)
    i = off
    while i < end - 4:
        word = struct.unpack_from("<I", elf, i)[0]
        if word == JR_RA:
            vaddr_jr = TEXT_VADDR + (i - TEXT_FOFF)
            return vaddr_jr + 8   # jr + delay slot
        i += 4
    return start + 4   # fallback — só 1 instrução

# ---------------------------------------------------------------------------
# Lê funções declaradas nos .cpp
# ---------------------------------------------------------------------------
HDR_RE = re.compile(r'// Address: (0x[0-9a-fA-F]+) - (0x[0-9a-fA-F]+)')

def load_declared_functions():
    funcs = {}
    for fname in os.listdir(RECOMP_DIR):
        if not fname.endswith('.cpp') or fname in ('register_functions.cpp',):
            continue
        path = os.path.join(RECOMP_DIR, fname)
        with open(path) as f:
            content = f.read(600)
        m = HDR_RE.search(content)
        if not m:
            continue
        start = int(m.group(1), 16)
        end   = int(m.group(2), 16)
        funcs[start] = {'start': start, 'decl_end': end, 'file': fname}
    return funcs

# ---------------------------------------------------------------------------
# Conta referências a cada endereço nos .cpp
# ---------------------------------------------------------------------------
def count_call_refs(funcs: dict) -> dict:
    """
    Para cada endereço de função, conta quantos .cpp o referenciam
    (excluindo o próprio arquivo da função).
    Padrão: 0xADDRESSu (com ou sem 'u') como literal hex.
    """
    addr_hex = {start: f"0x{start:x}" for start in funcs}
    refs = {start: set() for start in funcs}

    all_cpp = [f for f in os.listdir(RECOMP_DIR) if f.endswith('.cpp')]
    for fname in all_cpp:
        path = os.path.join(RECOMP_DIR, fname)
        try:
            with open(path) as f:
                content = f.read()
        except Exception:
            continue
        for start, hex_str in addr_hex.items():
            own_file = funcs[start]['file']
            if fname == own_file:
                continue
            if hex_str in content:
                refs[start].add(fname)

    return {start: len(v) for start, v in refs.items()}

# ---------------------------------------------------------------------------
# Lê overrides já no CSV
# ---------------------------------------------------------------------------
def load_overrides() -> set:
    already = set()
    if not os.path.exists(CSV_PATH):
        return already
    with open(CSV_PATH) as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith('#'):
                continue
            parts = line.split(',')
            if len(parts) >= 2:
                try:
                    already.add(int(parts[1], 16))
                except ValueError:
                    pass
    return already

# ---------------------------------------------------------------------------
# Calcula proximity bonus
# ---------------------------------------------------------------------------
def proximity_bonus(start: int) -> int:
    for seed in CRITICAL_SEEDS:
        if abs(start - seed) <= PROXIMITY_RADIUS:
            return PROXIMITY_BONUS
    return 0

# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------
def main():
    ap = argparse.ArgumentParser(description="Prioriza funções truncadas")
    ap.add_argument('--top',       type=int, default=50,  help="Mostrar top N (default 50)")
    ap.add_argument('--min-bytes', type=int, default=4,   help="Bytes faltando mínimo (default 4)")
    ap.add_argument('--min-refs',  type=int, default=0,   help="Refs mínimas (default 0)")
    args = ap.parse_args()

    print("[1/4] Carregando ELF...")
    elf = load_elf_bytes()

    print("[2/4] Lendo funções declaradas...")
    funcs = load_declared_functions()
    print(f"      {len(funcs)} funções encontradas")

    print("[3/4] Detectando truncadas + contando referências (pode demorar ~30s)...")
    already = load_overrides()

    # Monta lista ordenada de starts para calcular "próxima função"
    sorted_starts = sorted(funcs.keys())
    next_start_map = {}
    for i, s in enumerate(sorted_starts):
        next_start_map[s] = sorted_starts[i + 1] if i + 1 < len(sorted_starts) else 0

    results = []
    for start, info in funcs.items():
        decl_end = info['decl_end']
        decl_size = decl_end - start
        if decl_size > 8:
            continue   # não é candidata óbvia (>2 instruções declaradas)
        next_fn = next_start_map.get(start, 0)
        real_end = find_real_end(elf, start, next_fn)
        missing  = real_end - decl_end
        if missing < args.min_bytes:
            continue
        results.append({
            'start':    start,
            'decl_end': decl_end,
            'real_end': real_end,
            'missing':  missing,
            'file':     info['file'],
            'in_csv':   start in already,
        })

    print(f"      {len(results)} candidatas truncadas detectadas")
    print("[4/4] Contando referências nos .cpp...")

    # Filtra só as candidatas para não varrer 5626 funções
    cand_funcs = {r['start']: funcs[r['start']] for r in results}
    refs = count_call_refs(cand_funcs)

    for r in results:
        r['refs'] = refs.get(r['start'], 0)
        r['prox'] = proximity_bonus(r['start'])
        r['score'] = r['refs'] * 40 + r['missing'] + r['prox']

    # Filtros
    results = [r for r in results if r['refs'] >= args.min_refs]
    results.sort(key=lambda x: -x['score'])

    # Saída
    print()
    print("=" * 90)
    print(f"TOP {args.top} FUNÇÕES TRUNCADAS — ordenadas por score de impacto")
    print("=" * 90)
    print(f"{'CSV':3} {'Score':>6}  {'Start':10} {'Missing':>8}  {'Refs':>5}  {'Prox':>5}  Arquivo")
    print("-" * 90)

    shown = 0
    for r in results:
        if shown >= args.top:
            break
        tag  = "✅" if r['in_csv'] else "  "
        prox = "+500" if r['prox'] else "   0"
        print(f"{tag}  {r['score']:>6}  0x{r['start']:08x}  {r['missing']:>7}b  {r['refs']:>5}x  {prox}  {r['file']}")
        shown += 1

    print()
    covered = sum(1 for r in results if r['in_csv'])
    print(f"Total candidatas: {len(results)} | Já no CSV: {covered} | Pendentes: {len(results)-covered}")

    # Salva CSV de saída
    out_path = "tools/truncated_scores.csv"
    with open(out_path, 'w', newline='') as f:
        w = csvmod.DictWriter(f, fieldnames=['score','start','real_end','missing','refs','prox','in_csv','file'])
        w.writeheader()
        for r in results:
            w.writerow({k: r[k] for k in w.fieldnames})
    print(f"Resultados completos salvos em: {out_path}")

if __name__ == '__main__':
    main()
