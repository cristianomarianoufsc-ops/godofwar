#!/usr/bin/env python3
"""triage_passo23.py — Triagem focada no round pós-Bug AH (PASSO 23).

OBJETIVO: Ler o log filtrado do GitHub e reportar APENAS os marcadores
          críticos do round atual em ~10 linhas, sem precisar fazer grep manual.

MARCADORES MONITORADOS:
  [PASSO 23A]  GS init stub (0x1838d0) — confirma que JAL[5/11] rodou
  [PASSO 23B]  sub_0017A940 logs (N/10) — pinça onde JAL[9/11] trava
  [PASSO 23C]  guard init 0x283770 — confirma que Bug AH fix rodou certo
  frame:upload — nonBlack>0 é a vitória principal
  activeThreads — mostra quantas threads estão vivas
  Bug AF/PASSO 22A — pool forge logs

USO:
    python3 tools/triage_passo23.py              # lê GitHub (log filtrado)
    python3 tools/triage_passo23.py --full       # lê GitHub (log completo)
    python3 tools/triage_passo23.py --local arquivo.txt
    python3 tools/triage_passo23.py --raw        # imprime linhas brutas sem formatação
"""

import argparse
import re
import sys
import urllib.request
import urllib.error
from pathlib import Path

_BASE = ("https://raw.githubusercontent.com/"
         "cristianomarianoufsc-ops/godofwar/logs/auto/runs_automaticos/")
URL_FILTERED = _BASE + "log_latest_filtered.txt"
URL_FULL     = _BASE + "log_latest_full.txt"

# ── Regexes dos marcadores-alvo ─────────────────────────────────────────────

_RE_23A      = re.compile(r"\[PASSO 23A\].*")
_RE_23B      = re.compile(r"\[PASSO 23B\].*")
_RE_23C      = re.compile(r"\[PASSO 23C\].*")
_RE_FRAME    = re.compile(r"frame:upload.*nonBlack=(\d+).*")
_RE_THREADS  = re.compile(r"activeThreads=(-?\d+)")
_RE_BUG_AF   = re.compile(r"\[Bug AF\].*")
_RE_P22A     = re.compile(r"\[PASSO 22A\].*")
_RE_P22B     = re.compile(r"\[PASSO 22B\].*")
_RE_SIGINT   = re.compile(r"SIGINT|Interrupt|signal 2", re.IGNORECASE)
_RE_SIGSEGV  = re.compile(r"SIGSEGV|Segmentation fault|segfault", re.IGNORECASE)
_RE_CRASH    = re.compile(r"SIGABRT|SIGFPE|SIGBUS|core dump", re.IGNORECASE)
_RE_GS_INIT  = re.compile(
    r"\[PASSO 23A\].*PMODE=(0x\w+).*SMODE1=(0x\w+).*DISPLAY1/2=(\d+).*IMR=(0x\w+)")
_RE_23B_STEP = re.compile(r"\[PASSO 23B\].*apos\s+func_([\w]+)\s+\((\d+)/10\)")
_RE_23B_STRT = re.compile(r"\[PASSO 23B\].*START")
_RE_23C_DETS = re.compile(r"\[PASSO 23C\].*0x326940=(\d+)\s*->\s*setando\s*(\d+)")


def fetch_url(url: str) -> str:
    try:
        with urllib.request.urlopen(url, timeout=20) as resp:
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
            return "⏱️  TIMEOUT 300s (SIGINT) — processo vivo, cortado pelo auto_round.sh"
    return "❓ Término desconhecido"


def analyse(text: str, raw: bool) -> None:
    lines = text.splitlines()

    if raw:
        for line in lines:
            for pat in (_RE_23A, _RE_23B, _RE_23C, _RE_FRAME,
                        _RE_BUG_AF, _RE_P22A, _RE_P22B):
                if pat.search(line):
                    print(line)
                    break
        return

    # ── Coleta ──────────────────────────────────────────────────────────────
    p23a_lines: list[str] = []
    p23b_lines: list[str] = []
    p23c_lines: list[str] = []
    frame_lines: list[str] = []
    bugaf_lines: list[str] = []
    p22a_lines:  list[str] = []
    p22b_lines:  list[str] = []
    last_threads: str | None = None

    for line in lines:
        if _RE_23A.search(line):
            p23a_lines.append(line.strip())
        if _RE_23B.search(line):
            p23b_lines.append(line.strip())
        if _RE_23C.search(line):
            p23c_lines.append(line.strip())
        if _RE_FRAME.search(line):
            frame_lines.append(line.strip())
        if _RE_BUG_AF.search(line):
            bugaf_lines.append(line.strip())
        if _RE_P22A.search(line):
            p22a_lines.append(line.strip())
        if _RE_P22B.search(line):
            p22b_lines.append(line.strip())
        m = _RE_THREADS.search(line)
        if m:
            last_threads = m.group(1)

    termination = classify_termination(lines)

    # ── Relatório ────────────────────────────────────────────────────────────
    SEP = "─" * 60
    print(SEP)
    print("  TRIAGEM PASSO 23 — God of War PC Port")
    print(SEP)

    # PASSO 23C (Bug AH fix) — verificar primeiro, é pré-requisito
    print("\n🔧 PASSO 23C — Guard init 0x283770 (Bug AH fix):")
    if p23c_lines:
        for l in p23c_lines:
            m = _RE_23C_DETS.search(l)
            if m:
                print(f"   ✅ guard: 0x326940={m.group(1)} → setando {m.group(2)} → retornou ao caller")
            else:
                print(f"   ✅ {l}")
    else:
        print("   ❌ NÃO apareceu — stub 0x283770 não foi chamado neste round")

    # PASSO 23A — GS init
    print("\n🖥️  PASSO 23A — GS init stub 0x1838d0 (JAL[5/11]):")
    if p23a_lines:
        for l in p23a_lines:
            m = _RE_GS_INIT.search(l)
            if m:
                print(f"   ✅ RODOU — PMODE={m.group(1)} SMODE1={m.group(2)} "
                      f"DISPLAY1/2={m.group(3)} IMR={m.group(4)}")
            else:
                print(f"   ✅ {l}")
    else:
        print("   ❌ NÃO apareceu — JAL[5/11] ainda não chegou (Bug AH pode ainda bloquear)")

    # PASSO 23B — sub_0017A940 steps (JAL[9/11])
    print("\n🔍 PASSO 23B — sub_0017A940 steps (JAL[9/11]):")
    if p23b_lines:
        started = any(_RE_23B_STRT.search(l) for l in p23b_lines)
        if started:
            print("   ✅ START detectado")
        steps_seen: list[tuple[str, str]] = []
        last_step: tuple[str, str] | None = None
        for l in p23b_lines:
            m = _RE_23B_STEP.search(l)
            if m:
                steps_seen.append((m.group(1), m.group(2)))
                last_step = (m.group(1), m.group(2))
        if steps_seen:
            seen_nums = [int(s[1]) for s in steps_seen]
            max_step = max(seen_nums)
            print(f"   📊 Steps vistos: {sorted(set(seen_nums))} de 10")
            if last_step:
                print(f"   ⏸️  Último step antes de travar: func_{last_step[0]} ({last_step[1]}/10)")
            if max_step < 10:
                print(f"   ⚠️  Travou em algum ponto após step {max_step}/10 — analisar cadeia")
            else:
                print("   ✅ Todos os 10 steps concluídos — JAL[9/11] passou!")
        else:
            print(f"   ⚠️  START presente mas nenhum 'apos func_' logado — trava logo no início")
        for l in p23b_lines[-3:]:
            print(f"   └ {l}")
    else:
        print("   ❌ NÃO apareceu — JAL[9/11] (sub_0017A940) ainda não foi chamado")

    # frame:upload — resultado principal
    print("\n🎮 frame:upload (objetivo principal — nonBlack > 0):")
    if frame_lines:
        last_frame = frame_lines[-1]
        m = _RE_FRAME.search(last_frame)
        nb = int(m.group(1)) if m else -1
        if nb > 0:
            print(f"   🏆 nonBlack={nb} — PRIMEIRO(S) PIXEL(S) DO JOGO VISÍVEL(IS)!")
        else:
            print(f"   ⬛ nonBlack=0 — tela ainda preta (mas frame rodou)")
        print(f"   └ {last_frame}")
        if len(frame_lines) > 1:
            print(f"   └ (total de {len(frame_lines)} frames no round)")
    else:
        print("   ❌ NÃO apareceu — loop de render ainda não chegou")

    # activeThreads
    print("\n🧵 Threads ativas (último valor):")
    if last_threads is not None:
        val = int(last_threads)
        if val < 0:
            print(f"   🔴 activeThreads={val} — threads não foram criadas (JALs abortados)")
        elif val == 0:
            print(f"   🔴 activeThreads=0 — todas as threads encerraram")
        elif val == 2:
            print(f"   🟡 activeThreads=2 — tid=2 (IOP loader) + tid=3 (SIF stub) vivos, sem render")
        else:
            print(f"   🟢 activeThreads={val}")
    else:
        print("   ❓ Não encontrado no log")

    # Bug AF / PASSO 22A — pool forges
    print("\n🔩 Pool forges (Bug AF / PASSO 22A):")
    forge_count = sum(1 for l in p22a_lines if "forge" in l.lower())
    af_count    = len(bugaf_lines)
    ok_count    = sum(1 for l in p22a_lines if "entry válida" in l or "OK" in l)
    if p22a_lines or bugaf_lines:
        print(f"   entries válidas: {ok_count} | entradas nulas forjadas: {forge_count} | Bug AF hits: {af_count}")
        if p22b_lines:
            starts = sum(1 for l in p22b_lines if "StartThread" in l)
            print(f"   StartThread via func_293930: {starts}x")
    else:
        print("   (nenhuma linha de pool neste log)")

    # Término
    print(f"\n🏁 Término do round: {termination}")
    print(SEP)

    # Diagnóstico rápido
    print("\n📋 DIAGNÓSTICO RÁPIDO:")
    issues: list[str] = []
    if not p23c_lines:
        issues.append("stub 0x283770 não chamado — verificar se fix Bug AH chegou ao build")
    if not p23a_lines and p23c_lines:
        issues.append("23C ok mas 23A ausente — JAL[5/11] ainda bloqueado?")
    if p23b_lines and not any(_RE_23B_STEP.search(l) for l in p23b_lines):
        issues.append("23B START mas sem steps — trava antes do primeiro JAL interno de sub_0017A940")
    if last_threads is not None and int(last_threads) < 0:
        issues.append("activeThreads negativo — JALs abortaram antes de criar threads")
    if not issues:
        if frame_lines:
            nb_last = int(_RE_FRAME.search(frame_lines[-1]).group(1))
            if nb_last > 0:
                issues.append("🏆 Tudo OK — primeiro frame com pixels visíveis!")
            else:
                issues.append("Boot avançou, frames rodando, tela preta — próximo passo: investigar render thread")
        else:
            issues.append("Nenhum problema crítico detectado, mas frame:upload não apareceu ainda")
    for issue in issues:
        print(f"   • {issue}")
    print()


def main() -> None:
    ap = argparse.ArgumentParser(description="Triagem focada no round PASSO 23.")
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
