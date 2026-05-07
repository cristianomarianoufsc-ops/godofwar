#!/usr/bin/env python3
"""triage_passo30.py — Triagem focada no round pós-Bug AS (PASSO 30).

OBJETIVO: Ler o log filtrado do GitHub e reportar APENAS os marcadores
          críticos do round atual em ~20 linhas, sem precisar fazer grep manual.

MARCADORES MONITORADOS:
  [PASSO 30]   sub_0017C628 jalr guard — 0x1789e0/0x178be8 REGISTRADO vs NAO registrado
  [PASSO 22C]  sub_0013DC78 forge — conta total (era 133 → passou para 400+ — monitorar)
  [CreateThread] / [StartThread] thid=8 — render thread criada
  frame:upload — nonBlack>0 é a vitória principal
  ExitThread   — término normal de tid=1
  SIGINT/SIGSEGV — timeout ou crash

USO:
    python3 tools/triage_passo30.py              # lê GitHub (log filtrado)
    python3 tools/triage_passo30.py --full       # lê GitHub (log completo)
    python3 tools/triage_passo30.py --local arquivo.txt
    python3 tools/triage_passo30.py --raw        # linhas brutas sem formatação
"""

import argparse
import os
import re
import sys
import urllib.request
import urllib.error
from pathlib import Path

_BASE = ("https://raw.githubusercontent.com/"
         "cristianomarianoufsc-ops/godofwar/logs/auto/runs_automaticos/")
URL_FILTERED = _BASE + "log_latest_filtered.txt"
URL_FULL     = _BASE + "log_latest_full.txt"

_RE_P30        = re.compile(r"\[PASSO 30\].*v0=(0x[\da-f]+)\s+(REGISTRADO|NAO registrado)")
_RE_P30_RAW    = re.compile(r"\[PASSO 30\].*")
_RE_P22C       = re.compile(r"\[PASSO 22C\].*forge #(\d+):")
_RE_CREATE     = re.compile(r"\[CreateThread\].*id=(\d+).*entry=(0x[\da-f]+)")
_RE_START      = re.compile(r"\[StartThread\].*thid=(\d+)")
_RE_FRAME      = re.compile(r"frame:upload.*nonBlack=(\d+)")
_RE_EXIT       = re.compile(r"ExitThread.*tid=(\d+)|entry_2996b0:ExitThread")
_RE_SIGINT     = re.compile(r"SIGINT|signal 2|sinal 2", re.IGNORECASE)
_RE_SIGSEGV    = re.compile(r"SIGSEGV|Segmentation fault|segfault", re.IGNORECASE)
_RE_CRASH      = re.compile(r"SIGABRT|SIGFPE|SIGBUS|core dump", re.IGNORECASE)
_RE_BOOT       = re.compile(r"Starting execution at address (0x[\da-f]+)")
_RE_THREADS    = re.compile(r"activeThreads=(-?\d+)")
_RE_NEW_NAO    = re.compile(r"\[PASSO 30\].*v0=(0x[\da-f]+) NAO registrado")


def fetch_url(url: str) -> str:
    token = os.environ.get("GITHUB_TOKEN", "")
    req = urllib.request.Request(url)
    if token:
        req.add_header("Authorization", f"token {token}")
    try:
        with urllib.request.urlopen(req, timeout=20) as resp:
            return resp.read().decode("utf-8", errors="replace")
    except urllib.error.URLError as e:
        print(f"[erro] Não foi possível baixar {url}: {e}", file=sys.stderr)
        sys.exit(1)


def read_local(path: str) -> str:
    p = Path(path)
    if not p.exists():
        print(f"[erro] Arquivo não encontrado: {path}", file=sys.stderr)
        sys.exit(1)
    return p.read_text(encoding="utf-8", errors="replace")


def classify_termination(lines: list[str]) -> str:
    for line in reversed(lines):
        if _RE_SIGSEGV.search(line):
            return "💥 CRASH — SIGSEGV (segfault)"
        if _RE_CRASH.search(line):
            return "💥 CRASH — sinal fatal"
        if _RE_SIGINT.search(line):
            return "⏱️  TIMEOUT 60s (SIGINT) — processo vivo, cortado pelo auto_round.sh"
        if _RE_EXIT.search(line):
            return "✅ ExitThread normal — tid=1 finalizou init"
    return "❓ Término desconhecido"


def analyse(text: str, raw: bool) -> None:
    lines = text.splitlines()

    if raw:
        for line in lines:
            for pat in (_RE_P30_RAW, _RE_P22C, _RE_CREATE, _RE_START, _RE_FRAME):
                if pat.search(line):
                    print(line)
                    break
        return

    # ── Coleta ───────────────────────────────────────────────────────────────
    p30_registrado:     dict[str, int] = {}
    p30_nao_registrado: dict[str, int] = {}
    p30_novos_nao: list[str] = []
    max_forge = 0
    create_threads: list[tuple[str, str]] = []
    start_threads: list[str] = []
    frame_lines: list[str] = []
    boot_addr: str | None = None
    last_threads: str | None = None

    known_nao = {"0x1789e0", "0x178be8"}

    for line in lines:
        m = _RE_P30.search(line)
        if m:
            addr   = m.group(1)
            status = m.group(2)
            if status == "REGISTRADO":
                p30_registrado[addr] = p30_registrado.get(addr, 0) + 1
            else:
                p30_nao_registrado[addr] = p30_nao_registrado.get(addr, 0) + 1
                if addr not in known_nao and addr not in p30_novos_nao:
                    p30_novos_nao.append(addr)

        m2 = _RE_P22C.search(line)
        if m2:
            n = int(m2.group(1))
            if n > max_forge:
                max_forge = n

        m3 = _RE_CREATE.search(line)
        if m3:
            create_threads.append((m3.group(1), m3.group(2)))

        m4 = _RE_START.search(line)
        if m4:
            start_threads.append(m4.group(1))

        if _RE_FRAME.search(line):
            frame_lines.append(line.strip())

        m5 = _RE_BOOT.search(line)
        if m5:
            boot_addr = m5.group(1)

        mt = _RE_THREADS.search(line)
        if mt:
            last_threads = mt.group(1)

    termination = classify_termination(lines)

    # ── Relatório ─────────────────────────────────────────────────────────────
    SEP = "─" * 64
    print(SEP)
    print("  TRIAGEM PASSO 30 — God of War PC Port  (Bug AS fix)")
    print(SEP)

    # ── Boot ──────────────────────────────────────────────────────────────────
    print("\n🚀 Boot:")
    if boot_addr:
        print(f"   ✅ entry={boot_addr} alcançado — boot init concluído")
    else:
        print("   ❌ 'Starting execution at' NÃO apareceu — boot travou antes do entry")

    # ── PASSO 30 — jalr guard 0x1789e0 ───────────────────────────────────────
    print("\n🔑 PASSO 30 — sub_0017C628 jalr guard (Bug AS fix — 0x1789e0 / 0x178be8):")

    addr_189 = "0x1789e0"
    addr_be8 = "0x178be8"

    reg_189 = p30_registrado.get(addr_189, 0)
    nao_189 = p30_nao_registrado.get(addr_189, 0)
    reg_be8 = p30_registrado.get(addr_be8, 0)
    nao_be8 = p30_nao_registrado.get(addr_be8, 0)

    if reg_189 > 0:
        print(f"   🏆 0x1789e0 REGISTRADO {reg_189}x → vtables BST sendo inicializadas!")
        if nao_189 > 0:
            print(f"   ⚠️  ainda {nao_189}x NAO registrado (mix — binário parcialmente atualizado?)")
    elif nao_189 > 0:
        print(f"   ❌ 0x1789e0 ainda NAO registrado {nao_189}x → recompilar.sh ainda não terminou ou .cpp não compilou")
    else:
        print(f"   ❓ 0x1789e0 não apareceu no log — PASSO 30 guard não foi atingido")

    if reg_be8 > 0:
        print(f"   ✅ 0x178be8 REGISTRADO {reg_be8}x")
    elif nao_be8 > 0:
        print(f"   ❌ 0x178be8 ainda NAO registrado {nao_be8}x")

    if p30_novos_nao:
        print(f"\n   🆕 NOVOS endereços NAO registrados (potencial Bug AT):")
        for addr in p30_novos_nao:
            cnt = p30_nao_registrado.get(addr, 0)
            print(f"      → {addr} apareceu {cnt}x — novo .cpp manual necessário?")

    # ── PASSO 22C — forge count ────────────────────────────────────────────────
    print("\n🔢 PASSO 22C — forge count (sub_0013DC78 a0=null):")
    if max_forge > 0:
        if max_forge > 500:
            print(f"   🔴 forge #{max_forge} — MUITO ALTO (era ~133 no round pós-Bug AF, 400+ no último)")
            print(f"      → loop infinito de forges? Verificar se sub_0013DC78 está em loop")
        elif max_forge > 200:
            print(f"   🟡 forge #{max_forge} — crescendo (era ~133 pós-Bug AF) — monitorar")
        else:
            print(f"   🟢 forge #{max_forge} — dentro do esperado (~133 pós-Bug AF)")
    else:
        print("   ❓ Nenhum forge detectado no log")

    # ── CreateThread / StartThread ────────────────────────────────────────────
    print("\n🧵 Threads:")
    if create_threads:
        print(f"   CreateThread: {len(create_threads)} thread(s) criada(s)")
        for tid, entry in create_threads[-4:]:
            print(f"   └ id={tid} entry={entry}")
    else:
        print("   ❌ Nenhum CreateThread detectado")

    if start_threads:
        has_tid8 = "8" in start_threads
        print(f"   StartThread: {len(start_threads)} chamada(s) — tids={start_threads[:8]}")
        if has_tid8:
            print("   🏆 StartThread thid=8 → RENDER THREAD CRIADA!")
        else:
            print("   ⚠️  StartThread chamado mas thid=8 ausente — render thread ainda não criada")
    else:
        print("   ❌ Nenhum StartThread detectado")

    # ── frame:upload ──────────────────────────────────────────────────────────
    print("\n🎮 frame:upload (objetivo final — nonBlack > 0):")
    if frame_lines:
        last_frame = frame_lines[-1]
        m6 = _RE_FRAME.search(last_frame)
        nb = int(m6.group(1)) if m6 else -1
        if nb > 0:
            print(f"   🏆🏆🏆 nonBlack={nb} — PRIMEIRO FRAME DO JOGO! MARCO HISTÓRICO!")
        else:
            print(f"   ⬛ nonBlack=0 — tela ainda preta (frame loop rodou mas sem pixel)")
        print(f"   └ {last_frame}")
        if len(frame_lines) > 1:
            print(f"   └ (total de {len(frame_lines)} frame(s) no round)")
    else:
        print("   ❌ NÃO apareceu — render thread não chegou ao loop de frame")

    # ── activeThreads ─────────────────────────────────────────────────────────
    print("\n🧮 Threads ativas (último valor):")
    if last_threads is not None:
        val = int(last_threads)
        if val < 0:
            print(f"   🔴 activeThreads={val} — threads abortaram")
        elif val == 0:
            print(f"   🔴 activeThreads=0 — todas as threads encerraram")
        elif val <= 3:
            print(f"   🟡 activeThreads={val} — poucas threads (render thread ausente?)")
        else:
            print(f"   🟢 activeThreads={val} — várias threads ativas (render thread provável!)")
    else:
        print("   ❓ Não encontrado no log")

    # ── Término ───────────────────────────────────────────────────────────────
    print(f"\n🏁 Término do round: {termination}")
    print(SEP)

    # ── Diagnóstico rápido ────────────────────────────────────────────────────
    print("\n📋 DIAGNÓSTICO RÁPIDO:")
    issues: list[str] = []

    if not boot_addr:
        issues.append("Boot não concluiu — travou antes de entry_2996b0")
    elif reg_189 == 0 and nao_189 > 0:
        issues.append(f"Bug AS ainda ativo — 0x1789e0 NAO registrado {nao_189}x → recompilar.sh ainda não terminou ou .cpp não compilou corretamente")
    elif reg_189 > 0 and not start_threads:
        issues.append("0x1789e0 REGISTRADO mas StartThread não chamado — bug dentro de sub_001789E0 (novo Bug AT?)")
    elif reg_189 > 0 and "8" not in start_threads:
        issues.append("0x1789e0 REGISTRADO + StartThread chamado mas thid≠8 — render thread ainda bloqueada")
    elif reg_189 > 0 and "8" in start_threads and not frame_lines:
        issues.append("render thread criada mas frame:upload ausente — render thread travou internamente")
    elif frame_lines:
        m7 = _RE_FRAME.search(frame_lines[-1])
        nb_last = int(m7.group(1)) if m7 else 0
        if nb_last > 0:
            issues.append(f"🏆 MISSÃO CUMPRIDA — nonBlack={nb_last} — PRIMEIRO FRAME DO JOGO!")
        else:
            issues.append("render thread chegou ao frame loop mas tela preta — GS/renderer precisa de fix")

    if p30_novos_nao:
        issues.append(f"Novos endereços NAO registrados: {p30_novos_nao} — potencial Bug AT")

    if max_forge > 500:
        issues.append(f"forge #{max_forge} explosivo — sub_0013DC78 em loop? Investigar causa raiz")

    if not issues:
        issues.append("Nenhum problema crítico detectado — analisar log completo")

    for issue in issues:
        print(f"   • {issue}")
    print()


def main() -> None:
    ap = argparse.ArgumentParser(description="Triagem focada no round PASSO 30 (Bug AS fix).")
    src = ap.add_mutually_exclusive_group()
    src.add_argument("--full",  action="store_true", help="Lê log completo do GitHub")
    src.add_argument("--local", metavar="ARQUIVO",   help="Lê de arquivo local")
    ap.add_argument("--raw", action="store_true",
                    help="Imprime só as linhas brutas dos marcadores, sem formatação")
    args = ap.parse_args()

    if args.local:
        text = read_local(args.local)
    elif args.full:
        print("Baixando log completo do GitHub...", file=sys.stderr)
        text = fetch_url(URL_FULL)
    else:
        print("Baixando log filtrado do GitHub...", file=sys.stderr)
        text = fetch_url(URL_FILTERED)

    analyse(text, raw=args.raw)


if __name__ == "__main__":
    main()
