#!/usr/bin/env python3
"""scan_7th_floor.py — Análise estática de funções recompiladas do God of War PC Port.

CATEGORIA: GoW-specific (análise pré-round)
RESOLVE: Custo de análise manual antes do round — varre automaticamente arquivos
         .cpp recompilados e reporta: status de truncação, chamadas externas,
         loops (com/sem cooperativeGuestYield), handleBreak e risco estimado.

EXEMPLOS:
    # Escaneia as guardas do 7º andar + entry_1389d8 (padrão):
    python3 tools/scan_7th_floor.py

    # Escaneia endereços específicos:
    python3 tools/scan_7th_floor.py 0x27c100 0x1389d8

    # Análise recursiva de callees (profundidade 2):
    python3 tools/scan_7th_floor.py --depth 2

    # Analisa um arquivo .cpp diretamente:
    python3 tools/scan_7th_floor.py --file GOD_PC_PORT_FINAL/src/recompiled/sub_00297290_0x297290.cpp

NOTAS DE PORTABILIDADE:
    RECOMP_DIR e DEFAULT_ADDRS são GoW-specific. Para outro jogo, ajustar essas
    constantes. A lógica de análise é genérica para qualquer código PS2Recomp.
"""

import argparse
import re
import sys
from pathlib import Path

RECOMP_DIR = Path("GOD_PC_PORT_FINAL/src/recompiled")

# Endereços padrão: 7º andar (guardas) + motor do jogo
DEFAULT_ADDRS = [
    0x298058,  # guarda 1 — sub_00298058 (memset 4 bytes)
    0x27C100,  # guarda 2 — sub_0027C100 (CreateSema × 3 + CreateThread + inits)
    0x283570,  # guarda 3 — sub_00283570 (sceSifSetDma loop + sceSifDmaStat)
    0x1389D8,  # motor    — entry_1389d8 (inicializador do engine, PASSO 6 target)
]

# Padrões de detecção nos arquivos .cpp recompilados
_RE_CALLEE     = re.compile(r'lookupFunction\((0x[0-9a-fA-F]+)u\)')
_RE_YIELD      = re.compile(r'cooperativeGuestYield\(\)')
_RE_BREAK      = re.compile(r'handleBreak\(')
_RE_GOTO       = re.compile(r'\bgoto\s+label_')
_RE_FUNC_NAME  = re.compile(r'// Function:\s+(\S+)')
_RE_ADDR_RANGE = re.compile(r'// Address:\s+(0x[0-9a-fA-F]+)\s+-\s+(0x[0-9a-fA-F]+)')

# Wrappers de syscall conhecidos (endereço → rótulo legível)
KNOWN_WRAPPERS = {
    0x293C20: "CreateSema",
    0x293A20: "CreateThread",
    0x293FE0: "sceSifSetDma(0x77)",
    0x293FC0: "sceSifDmaStat(0x76)",
    0x297470: "CacheFlush(0x64)",
    0x29B520: "StartThread",
    0x29B4A0: "ExitThread",
    0x13DA10: "alloc_stub(override)",
    0x182F28: "VBlank_stub(override)",
    0x296A54: "BugL_stub(override)",
}

# Cores ANSI (desabilitável)
USE_COLOR = sys.stdout.isatty()
_C = {
    "reset":  "\033[0m"  if USE_COLOR else "",
    "bold":   "\033[1m"  if USE_COLOR else "",
    "green":  "\033[32m" if USE_COLOR else "",
    "yellow": "\033[33m" if USE_COLOR else "",
    "red":    "\033[31m" if USE_COLOR else "",
    "cyan":   "\033[36m" if USE_COLOR else "",
    "gray":   "\033[90m" if USE_COLOR else "",
}


def _color(text: str, *keys: str) -> str:
    return "".join(_C[k] for k in keys) + text + _C["reset"]


def find_file(addr: int) -> Path | None:
    """Localiza o arquivo .cpp pelo endereço (sufixo _0xADDR.cpp)."""
    hex_lower = f"{addr:x}"
    for pattern in (f"*_0x{hex_lower}.cpp", f"*_{hex_lower}.cpp"):
        matches = list(RECOMP_DIR.glob(pattern))
        if matches:
            return matches[0]
    return None


def analyze_file(path: Path) -> dict:
    """Extrai métricas estáticas de um arquivo .cpp recompilado."""
    text = path.read_text(encoding="utf-8", errors="replace")
    lines = text.splitlines()

    callees = sorted(set(
        int(m.group(1), 16) for m in _RE_CALLEE.finditer(text)
    ))
    yields     = len(_RE_YIELD.findall(text))
    breaks     = len(_RE_BREAK.findall(text))
    gotos      = len(_RE_GOTO.findall(text))
    line_count = len(lines)

    m_name = _RE_FUNC_NAME.search(text)
    m_range = _RE_ADDR_RANGE.search(text)

    # Tight-loops: gotos sem cooperativeGuestYield nas 3 linhas anteriores
    tight_loops = 0
    for i, ln in enumerate(lines):
        if "goto label_" in ln:
            ctx = "\n".join(lines[max(0, i - 3):i])
            if "cooperativeGuestYield" not in ctx:
                tight_loops += 1

    return {
        "path":        path,
        "func_name":   m_name.group(1) if m_name else None,
        "addr_range":  (m_range.group(1), m_range.group(2)) if m_range else None,
        "line_count":  line_count,
        "callees":     callees,
        "yields":      yields,
        "breaks":      breaks,
        "gotos":       gotos,
        "tight_loops": tight_loops,
    }


def estimate_risk(info: dict) -> tuple[str, str]:
    """Retorna (ícone_risco, descrição)."""
    if info["tight_loops"] > 3:
        return ("🔴", "ALTO       — tight-loops sem yield (risco de trava)")
    if info["tight_loops"] > 0:
        return ("⚠️ ", "MÉDIO      — tight-loop(s) sem yield detectado(s)")
    if info["breaks"] > 0:
        return ("⚠️ ", "BAIXO      — handleBreak (assert-like, geralmente ok)")
    return ("✅", "SEGURO     — sem tight-loops, sem handleBreak")


def callee_label(addr: int) -> str:
    if addr in KNOWN_WRAPPERS:
        return _color(f"0x{addr:x}[{KNOWN_WRAPPERS[addr]}]", "cyan")
    f = find_file(addr)
    if f:
        m = _RE_FUNC_NAME.search(f.read_text(encoding="utf-8", errors="replace"))
        name = m.group(1) if m else f"0x{addr:x}"
        return _color(f"0x{addr:x}[{name}]", "gray")
    return _color(f"0x{addr:x}[NÃO ENCONTRADO]", "red")


def scan(addr: int, depth: int = 0, visited: set = None, max_depth: int = 1) -> list[str]:
    """Escaneia recursivamente addr e seus callees até max_depth."""
    if visited is None:
        visited = set()
    if addr in visited:
        return []
    visited.add(addr)

    indent = "    " * depth
    lines_out: list[str] = []

    f = find_file(addr)
    if f is None:
        lines_out.append(
            indent + _color(f"0x{addr:x}", "bold") + "  " +
            _color("⚠️  arquivo .cpp não encontrado", "red")
        )
        return lines_out

    info = analyze_file(f)
    icon, risk_desc = estimate_risk(info)
    fname = info["func_name"] or f"0x{addr:x}"
    rng   = (f"{info['addr_range'][0]}–{info['addr_range'][1]}"
             if info["addr_range"] else "?")

    lines_out.append(
        indent + _color("┌─ ", "bold") +
        _color(fname, "bold", "cyan") +
        f"  [{rng}]  {info['line_count']} linhas"
    )
    lines_out.append(
        indent + f"│  Risco:  {icon} {risk_desc}"
    )
    lines_out.append(
        indent + f"│  Loops com yield : {info['yields']}"
        f"  │  Tight-loops (sem yield): {info['tight_loops']}"
        f"  │  handleBreak: {info['breaks']}"
    )

    if info["callees"]:
        callee_str = "  ".join(callee_label(c) for c in info["callees"])
        lines_out.append(indent + f"│  Callees ({len(info['callees'])}): {callee_str}")
    else:
        lines_out.append(indent + "│  Callees: nenhum")

    lines_out.append(indent + _color(f"└─ {f.name}", "gray"))

    if depth < max_depth:
        unknown_callees = [c for c in info["callees"]
                           if c not in visited and c not in KNOWN_WRAPPERS]
        for callee_addr in unknown_callees:
            sub = scan(callee_addr, depth + 1, visited, max_depth)
            if sub:
                lines_out.append(indent + "    │")
                lines_out.extend(sub)

    return lines_out


def main() -> None:
    ap = argparse.ArgumentParser(
        description="Análise estática pré-round de funções recompiladas (GoW PC Port)."
    )
    ap.add_argument("addrs", nargs="*",
                    help="Endereços hex a escanear (ex: 0x1389d8 0x27c100). "
                         "Padrão: 7º andar + engine.")
    ap.add_argument("--depth", type=int, default=1, metavar="N",
                    help="Profundidade de análise recursiva de callees (padrão: 1)")
    ap.add_argument("--file", metavar="PATH",
                    help="Analisa um único arquivo .cpp diretamente (ignora addrs)")
    args = ap.parse_args()

    print(_color("=" * 74, "bold"))
    print(_color("  SCAN ESTÁTICO — God of War PC Port (análise pré-round)", "bold"))
    print(f"  Diretório : {RECOMP_DIR}")
    print(_color("=" * 74, "bold"))

    if args.file:
        p = Path(args.file)
        if not p.exists():
            print(f"[erro] Arquivo não encontrado: {args.file}", file=sys.stderr)
            sys.exit(1)
        info = analyze_file(p)
        icon, risk_desc = estimate_risk(info)
        print(f"\n  {info['func_name'] or p.name}")
        print(f"  Risco         : {icon} {risk_desc}")
        print(f"  Linhas        : {info['line_count']}")
        print(f"  Yields        : {info['yields']}")
        print(f"  Tight-loops   : {info['tight_loops']}")
        print(f"  handleBreak   : {info['breaks']}")
        print(f"  Gotos total   : {info['gotos']}")
        print(f"  Callees       : {[hex(c) for c in info['callees']]}")
        print()
        return

    if args.addrs:
        try:
            addrs = [int(a, 16) for a in args.addrs]
        except ValueError as e:
            print(f"[erro] Endereço inválido: {e}", file=sys.stderr)
            sys.exit(1)
    else:
        addrs = DEFAULT_ADDRS
        print(f"\n  Endereços padrão: 7º andar + engine (--depth {args.depth})\n")

    visited: set = set()
    for addr in addrs:
        result_lines = scan(addr, depth=0, visited=visited, max_depth=args.depth)
        for ln in result_lines:
            print(f"  {ln}")
        print()

    print(_color("=" * 74, "bold"))
    print("  Dicas:")
    print("    Análise recursiva completa : python3 tools/scan_7th_floor.py --depth 2")
    print("    Endereço específico        : python3 tools/scan_7th_floor.py 0x1389d8")
    print("    Arquivo direto             : python3 tools/scan_7th_floor.py --file PATH")
    print(_color("=" * 74, "bold"))


if __name__ == "__main__":
    main()
