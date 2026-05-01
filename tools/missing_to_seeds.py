#!/usr/bin/env python3
"""missing_to_seeds.py — Converte entradas do ps2_missing.log em seeds de alcançabilidade.

CATEGORIA: Universal (adaptável a qualquer port PS2→PC)
RESOLVE: Lacuna metodológica — PCs de funções ausentes identificadas em runtime nunca
         retroalimentavam o scanner estático (reachable_after_boot.py). Esta ferramenta
         fecha esse loop automaticamente.
INPUTS:
    --log   <path>  Arquivo ps2_missing.log  (default: ./ps2_missing.log)
    --seeds <path>  Arquivo de seeds de saída (default: tools/reachable_seeds.txt)
OUTPUTS:
    Relatório no stdout + (com --apply) atualização do arquivo de seeds.
EXEMPLOS:
    # Só mostra o que seria adicionado (modo seco):
    python3 tools/missing_to_seeds.py

    # Lê log de outro caminho:
    python3 tools/missing_to_seeds.py --log build/ps2_missing.log

    # Filtra só funções chamadas ≥5 vezes:
    python3 tools/missing_to_seeds.py --min-calls 5

    # Aplica os top-20 mais chamados ao arquivo de seeds:
    python3 tools/missing_to_seeds.py --apply --top 20

    # Aplica todos sem filtro de contagem:
    python3 tools/missing_to_seeds.py --apply --min-calls 1

    # Pipeline pós-round automático (modo silencioso pra scripts):
    python3 tools/missing_to_seeds.py --apply --min-calls 3 --quiet

NOTAS DE PORTABILIDADE:
    - Nenhum endereço GoW hard-coded aqui. Toda lógica é baseada no formato do relatório
      gerado por ps2_missing_report.cpp (ps2xRuntime), que é universal.
    - Para outro jogo: basta apontar --log e --seeds pro caminho correto.
    - O formato esperado do log é o gerado por ps2_missing_report::writeReportToStream():
        kind(9) calls(12) 1stMs(8) 1stPC(12) 1stRA(12) name args
      Linhas que não casam com esse padrão são ignoradas silenciosamente.
"""

import argparse
import re
import sys
from pathlib import Path

DEFAULT_LOG = "./ps2_missing.log"
DEFAULT_SEEDS = "tools/reachable_seeds.txt"

# Regex que casa uma linha de dados do relatório ps2_missing_report.
# Exemplo real:
#   FUNCTION   33          0       0x296a54    0x0         func_0x296a54 (0x0,0x0,0x0,0x0)
_RE_ENTRY = re.compile(
    r"^(?P<kind>FUNCTION|STUB|SYSCALL)\s+"
    r"(?P<calls>\d+)\s+"
    r"(?P<firstMs>\d+)\s+"
    r"(?P<firstPC>0x[0-9a-fA-F]+)\s+"
    r"(?P<firstRA>0x[0-9a-fA-F]+)\s+"
    r"(?P<name>\S+)\s+"
    r"(?P<args>\(.*\))\s*$"
)

# Para entradas FUNCTION, o nome é "func_0xADDR" — extraímos o endereço.
_RE_FUNC_NAME = re.compile(r"^func_0x([0-9a-fA-F]+)$", re.IGNORECASE)


def parse_missing_log(log_path: Path) -> list[dict]:
    """Lê ps2_missing.log e retorna lista de entradas parsed, ordenadas por calls desc."""
    if not log_path.exists():
        print(f"[erro] Arquivo não encontrado: {log_path}", file=sys.stderr)
        sys.exit(1)

    entries = []
    with log_path.open(encoding="utf-8", errors="replace") as f:
        for line in f:
            m = _RE_ENTRY.match(line.rstrip())
            if not m:
                continue
            entry = {
                "kind":    m.group("kind"),
                "calls":   int(m.group("calls")),
                "firstMs": int(m.group("firstMs")),
                "firstPC": int(m.group("firstPC"), 16),
                "firstRA": int(m.group("firstRA"), 16),
                "name":    m.group("name"),
                "args":    m.group("args"),
            }
            # Para FUNCTION, extrai o endereço da função ausente do nome.
            if entry["kind"] == "FUNCTION":
                fm = _RE_FUNC_NAME.match(entry["name"])
                entry["func_addr"] = int(fm.group(1), 16) if fm else entry["firstPC"]
            entries.append(entry)

    entries.sort(key=lambda e: -e["calls"])
    return entries


def load_existing_seeds(seeds_path: Path) -> tuple[list[str], set[int]]:
    """Carrega seeds existentes. Retorna (linhas originais, set de endereços já presentes)."""
    if not seeds_path.exists():
        return [], set()
    lines = seeds_path.read_text(encoding="utf-8").splitlines(keepends=True)
    existing = set()
    for line in lines:
        stripped = line.split("#", 1)[0].strip()
        if not stripped:
            continue
        try:
            existing.add(int(stripped, 0))
        except ValueError:
            pass
    return lines, existing


def main() -> None:
    ap = argparse.ArgumentParser(
        description="Converte entradas FUNCTION do ps2_missing.log em seeds de alcançabilidade."
    )
    ap.add_argument(
        "--log", default=DEFAULT_LOG,
        help=f"Caminho para o ps2_missing.log (default: {DEFAULT_LOG})"
    )
    ap.add_argument(
        "--seeds", default=DEFAULT_SEEDS,
        help=f"Arquivo de seeds a ler/atualizar (default: {DEFAULT_SEEDS})"
    )
    ap.add_argument(
        "--min-calls", type=int, default=1,
        help="Só considerar funções chamadas ≥ N vezes (default: 1)"
    )
    ap.add_argument(
        "--top", type=int, default=0,
        help="Limitar aos top-N mais chamados (0 = sem limite, default: 0)"
    )
    ap.add_argument(
        "--apply", action="store_true",
        help="Escreve seeds novos no arquivo --seeds (sem isso, modo seco)"
    )
    ap.add_argument(
        "--quiet", action="store_true",
        help="Suprime saída detalhada (útil em scripts automáticos)"
    )
    args = ap.parse_args()

    log_path   = Path(args.log)
    seeds_path = Path(args.seeds)

    # ── 1. Parse do log ──────────────────────────────────────────────────────
    all_entries = parse_missing_log(log_path)
    func_entries = [e for e in all_entries if e["kind"] == "FUNCTION"]

    if not args.quiet:
        print(f"[missing_to_seeds] Log: {log_path}")
        print(f"  Entradas totais no log : {len(all_entries)}")
        print(f"  Entradas FUNCTION      : {len(func_entries)}")

    # ── 2. Filtros ────────────────────────────────────────────────────────────
    candidates = [e for e in func_entries if e["calls"] >= args.min_calls]
    if args.top > 0:
        candidates = candidates[:args.top]

    if not args.quiet:
        print(f"  Após filtro (min_calls={args.min_calls}, top={args.top or '∞'}): "
              f"{len(candidates)} candidatos")

    # ── 3. Diff contra seeds existentes ──────────────────────────────────────
    orig_lines, existing_addrs = load_existing_seeds(seeds_path)

    new_seeds = [e for e in candidates if e["func_addr"] not in existing_addrs]
    already   = [e for e in candidates if e["func_addr"] in existing_addrs]

    # ── 4. Relatório ──────────────────────────────────────────────────────────
    if not args.quiet:
        print()
        print("=" * 70)
        print("FUNÇÕES AUSENTES (FUNCTION) — candidatos a seeds")
        print("=" * 70)
        print(f"  {'addr':<12} {'calls':>7}  {'firstMs':>8}ms  {'firstPC':<12} nome")
        print("-" * 70)
        for e in candidates:
            tag = " ← já existe" if e["func_addr"] in existing_addrs else ""
            print(f"  0x{e['func_addr']:08X}  {e['calls']:>7}  "
                  f"{e['firstMs']:>9}   0x{e['firstPC']:08X}  "
                  f"{e['name']}{tag}")

        print()
        print(f"  Seeds novos a adicionar : {len(new_seeds)}")
        print(f"  Já existentes (ignorados): {len(already)}")

    # ── 5. Aplicar (se pedido) ────────────────────────────────────────────────
    if not new_seeds:
        if not args.quiet:
            print()
            print("[ok] Nenhum seed novo para adicionar.")
        return

    if not args.apply:
        if not args.quiet:
            print()
            print("[modo seco] Use --apply para escrever no arquivo de seeds.")
            print("Comando sugerido:")
            print(f"  python3 tools/missing_to_seeds.py --apply "
                  f"--min-calls {args.min_calls}"
                  + (f" --top {args.top}" if args.top else ""))
        return

    # Monta bloco novo a acrescentar no final do arquivo de seeds.
    import datetime
    timestamp = datetime.datetime.now().strftime("%Y-%m-%d %H:%M")
    block_lines = [
        f"\n# --- Adicionado por missing_to_seeds.py em {timestamp} ---\n",
        f"# Fonte: {log_path}  (min_calls={args.min_calls})\n",
        f"# {len(new_seeds)} entrada(s) nova(s), ordenadas por contagem decrescente\n",
    ]
    for e in new_seeds:
        block_lines.append(
            f"0x{e['func_addr']:08X}    "
            f"# {e['name']}  calls={e['calls']}  firstPC=0x{e['firstPC']:08X}\n"
        )

    # Preserva conteúdo original + acrescenta bloco.
    seeds_path.parent.mkdir(parents=True, exist_ok=True)
    with seeds_path.open("a", encoding="utf-8") as f:
        f.writelines(block_lines)

    if not args.quiet:
        print()
        print(f"[ok] {len(new_seeds)} seed(s) adicionado(s) em {seeds_path}:")
        for e in new_seeds:
            print(f"     0x{e['func_addr']:08X}  ({e['name']}, calls={e['calls']})")
        print()
        print("Próximo passo:")
        print("  python3 tools/reachable_after_boot.py")
        print("  (vai usar os seeds novos automaticamente)")
    else:
        print(f"missing_to_seeds: +{len(new_seeds)} seed(s) em {seeds_path}")


if __name__ == "__main__":
    main()
