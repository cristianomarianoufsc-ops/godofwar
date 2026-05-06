#!/usr/bin/env python3
"""triage_passo26.py — Triagem focada no round pós-Bug AJ (PASSO 26).

OBJETIVO: Ler o log filtrado do GitHub e reportar APENAS os marcadores
          críticos do round atual em ~15 linhas, sem precisar fazer grep manual.

MARCADORES MONITORADOS:
  [PASSO 26]   func_180D08 stub — jalr vtable dispatch PULADO (Bug AJ fix)
  [PASSO 25]   func_180A10 stub — dispatch pulado (Bug AI fix, confirmação)
  [PASSO 24]   sub_0017E530 logs (N/8) — pinça progresso das 8 callees
  [PASSO 23B]  sub_0017A940 logs (N/10) — pinça progresso dos 10 steps
  [PASSO 22B]  func_293930 StartThread — confirma render thread criada (thid=8)
  frame:upload — nonBlack>0 é a vitória principal
  activeThreads — mostra quantas threads estão vivas

USO:
    python3 tools/triage_passo26.py              # lê GitHub (log filtrado)
    python3 tools/triage_passo26.py --full       # lê GitHub (log completo)
    python3 tools/triage_passo26.py --local arquivo.txt
    python3 tools/triage_passo26.py --raw        # linhas brutas sem formatação
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

# ── Regexes dos marcadores-alvo ──────────────────────────────────────────────

_RE_P26      = re.compile(r"\[PASSO 26\].*")
_RE_P25      = re.compile(r"\[PASSO 25\].*")
_RE_P24      = re.compile(r"\[PASSO 24\].*")
_RE_P23B     = re.compile(r"\[PASSO 23B\].*")
_RE_P22B     = re.compile(r"\[PASSO 22B\].*")
_RE_FRAME    = re.compile(r"frame:upload.*nonBlack=(\d+).*")
_RE_THREADS  = re.compile(r"activeThreads=(-?\d+)")
_RE_SIGINT   = re.compile(r"SIGINT|Interrupt|signal 2", re.IGNORECASE)
_RE_SIGSEGV  = re.compile(r"SIGSEGV|Segmentation fault|segfault", re.IGNORECASE)
_RE_CRASH    = re.compile(r"SIGABRT|SIGFPE|SIGBUS|core dump", re.IGNORECASE)

_RE_P26_DETS  = re.compile(r"\[PASSO 26\].*a0=(0x\w+).*a1=(0x\w+)")
_RE_P24_STEP  = re.compile(r"\[PASSO 24\].*apos\s+(\S+)\s+\((\d+)/8\)")
_RE_P24_ALLOC = re.compile(r"\[PASSO 24\].*apos alloc5")
_RE_P24_OK    = re.compile(r"\[PASSO 24\].*SUCESSO")
_RE_23B_STEP  = re.compile(r"\[PASSO 23B\].*apos\s+func_([\w]+)\s+\((\d+)/10\)")
_RE_23B_STRT  = re.compile(r"\[PASSO 23B\].*START")
_RE_P22B_TID8 = re.compile(r"\[PASSO 22B\].*thid=8")
_RE_P22B_V0   = re.compile(r"\[PASSO 22B\].*resultado.*v0=(0x\w+|\d+)")

# Callees de sub_0017E530 (1/8 a 8/8)
_CALLEES_E530 = [
    "180A10", "17ECE0", "13DC78_2", "13E180",
    "180D08", "180CD8", "181068", "17E690"
]

# Steps de sub_0017A940 (1/10 a 10/10)
_STEPS_A940 = [
    "175978", "175CD0", "17E530", "17BFF0", "131A58",
    "118798", "293930/StartThread", "182810", "21C788", "17D778"
]


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
            for pat in (_RE_P26, _RE_P25, _RE_P24, _RE_P23B, _RE_P22B, _RE_FRAME):
                if pat.search(line):
                    print(line)
                    break
        return

    # ── Coleta ───────────────────────────────────────────────────────────────
    p26_lines:  list[str] = []
    p25_lines:  list[str] = []
    p24_lines:  list[str] = []
    p23b_lines: list[str] = []
    p22b_lines: list[str] = []
    frame_lines: list[str] = []
    last_threads: str | None = None

    for line in lines:
        if _RE_P26.search(line):
            p26_lines.append(line.strip())
        if _RE_P25.search(line):
            p25_lines.append(line.strip())
        if _RE_P24.search(line):
            p24_lines.append(line.strip())
        if _RE_P23B.search(line):
            p23b_lines.append(line.strip())
        if _RE_P22B.search(line):
            p22b_lines.append(line.strip())
        if _RE_FRAME.search(line):
            frame_lines.append(line.strip())
        m = _RE_THREADS.search(line)
        if m:
            last_threads = m.group(1)

    termination = classify_termination(lines)

    # ── Relatório ─────────────────────────────────────────────────────────────
    SEP = "─" * 62
    print(SEP)
    print("  TRIAGEM PASSO 26 — God of War PC Port  (Bug AJ fix)")
    print(SEP)

    # ── PASSO 26 — Bug AJ fix ─────────────────────────────────────────────────
    print("\n🔧 PASSO 26 — func_180D08 vtable dispatch skip (Bug AJ fix):")
    if p26_lines:
        m = _RE_P26_DETS.search(p26_lines[0])
        if m:
            print(f"   ✅ RODOU — a0={m.group(1)} a1={m.group(2)} → jalr dispatch PULADO")
        else:
            print(f"   ✅ {p26_lines[0]}")
        if len(p26_lines) > 1:
            print(f"   └ (apareceu {len(p26_lines)}x no round)")
    else:
        print("   ❌ NÃO apareceu — stub 0x180D08 não foi chamado")
        print("      → verificar se rebuild_runtime.sh rodou com o fix do Bug AJ")

    # ── PASSO 25 — Bug AI fix (confirmação) ───────────────────────────────────
    print("\n🔧 PASSO 25 — func_180A10 dispatch skip (Bug AI fix — confirmação):")
    if p25_lines:
        print(f"   ✅ {p25_lines[0]}")
    else:
        print("   ❌ NÃO apareceu — func_180A10 não foi chamada ainda")

    # ── PASSO 24 — sub_0017E530 callees (1/8 a 8/8) ──────────────────────────
    print("\n🔬 PASSO 24 — sub_0017E530 callees (Bug AJ: 5/8 é o alvo):")
    if p24_lines:
        alloc_ok = any(_RE_P24_ALLOC.search(l) for l in p24_lines)
        success  = any(_RE_P24_OK.search(l) for l in p24_lines)
        steps_seen: list[int] = []
        for l in p24_lines:
            m2 = _RE_P24_STEP.search(l)
            if m2:
                steps_seen.append(int(m2.group(2)))

        if alloc_ok:
            print("   ✅ alloc5 confirmado — entrou na fase dos callees")
        if success:
            print("   🏆 (8/8) SUCESSO — sub_0017E530 passou INTEIRA!")
        elif steps_seen:
            unique = sorted(set(steps_seen))
            last_step = unique[-1]
            print(f"   📊 Callees vistos: {unique} de 8")
            callee_name = _CALLEES_E530[last_step - 1] if last_step <= 8 else "?"
            print(f"   ⏸️  Último OK: func_{callee_name} ({last_step}/8)")
            if last_step < 8:
                next_name = _CALLEES_E530[last_step] if last_step < len(_CALLEES_E530) else "?"
                print(f"   🎯 Próximo a testar: func_{next_name} ({last_step + 1}/8)")
        elif alloc_ok:
            print("   ⚠️  alloc5 passou mas nenhum step (1/8) → func_180A10 ainda bloqueia?")
        for l in p24_lines[-3:]:
            print(f"   └ {l}")
    else:
        print("   ❌ NÃO apareceu — sub_0017E530 ainda não foi chamada")
        print("      (step 3/10 de sub_0017A940 nunca atingido, ou recompilar.sh não rodou)")

    # ── PASSO 23B — sub_0017A940 steps (1/10 a 10/10) ────────────────────────
    print("\n🔍 PASSO 23B — sub_0017A940 steps (1/10 a 10/10):")
    if p23b_lines:
        started = any(_RE_23B_STRT.search(l) for l in p23b_lines)
        if started:
            print("   ✅ START detectado")
        steps_seen_b: list[int] = []
        for l in p23b_lines:
            m3 = _RE_23B_STEP.search(l)
            if m3:
                steps_seen_b.append(int(m3.group(2)))
        if steps_seen_b:
            unique_b = sorted(set(steps_seen_b))
            last_b = unique_b[-1]
            print(f"   📊 Steps vistos: {unique_b} de 10")
            step_name = _STEPS_A940[last_b - 1] if last_b <= 10 else "?"
            print(f"   ⏸️  Último step: func_{step_name} ({last_b}/10)")
            if last_b >= 7:
                print("   🔔 Step 7/10 = StartThread(tid=8) — verificar PASSO 22B abaixo!")
            if last_b == 10:
                print("   ✅ Todos os 10 steps concluídos!")
        elif started:
            print("   ⚠️  START presente mas nenhum 'apos func_' logado — trava no 1º step")
        for l in p23b_lines[-3:]:
            print(f"   └ {l}")
    else:
        print("   ❌ NÃO apareceu — sub_0017A940 não foi chamada ainda")

    # ── PASSO 22B — StartThread thid=8 (render thread) ───────────────────────
    print("\n🧵 PASSO 22B — StartThread(thid=8) — render thread:")
    if p22b_lines:
        tid8_lines = [l for l in p22b_lines if _RE_P22B_TID8.search(l)]
        if tid8_lines:
            print(f"   ✅ StartThread thid=8 CHAMADO ({len(tid8_lines)}x)!")
            for l in tid8_lines[:2]:
                print(f"   └ {l}")
            v0_ok = any(_RE_P22B_V0.search(l) and
                        re.search(r"v0=0x0\b|v0=0\b", l)
                        for l in p22b_lines)
            if v0_ok:
                print("   ✅ resultado v0=0 → StartThread com sucesso!")
        else:
            print(f"   🟡 StartThread chamado mas NÃO para thid=8 — render thread ainda ausente")
            for l in p22b_lines[-2:]:
                print(f"   └ {l}")
    else:
        print("   ❌ NÃO apareceu — StartThread não foi chamado ainda")

    # ── frame:upload — objetivo principal ─────────────────────────────────────
    print("\n🎮 frame:upload (objetivo principal — nonBlack > 0):")
    if frame_lines:
        last_frame = frame_lines[-1]
        m4 = _RE_FRAME.search(last_frame)
        nb = int(m4.group(1)) if m4 else -1
        if nb > 0:
            print(f"   🏆 nonBlack={nb} — PRIMEIRO(S) PIXEL(S) DO JOGO VISÍVEL(IS)!")
        else:
            print(f"   ⬛ nonBlack=0 — tela ainda preta (render rodou mas sem pixel)")
        print(f"   └ {last_frame}")
        if len(frame_lines) > 1:
            print(f"   └ (total de {len(frame_lines)} frames no round)")
    else:
        print("   ❌ NÃO apareceu — render thread ainda não chegou ao loop de frame")

    # ── activeThreads ─────────────────────────────────────────────────────────
    print("\n🧮 Threads ativas (último valor):")
    if last_threads is not None:
        val = int(last_threads)
        if val < 0:
            print(f"   🔴 activeThreads={val} — threads abortaram (JALs redirecionados)")
        elif val == 0:
            print(f"   🔴 activeThreads=0 — todas as threads encerraram")
        elif val == 2:
            print(f"   🟡 activeThreads=2 — tid=2 (IOP loader) + tid=3 (SIF stub), sem render")
        elif val >= 3:
            print(f"   🟢 activeThreads={val} — novas threads criadas! render thread provável")
        else:
            print(f"   🟡 activeThreads={val}")
    else:
        print("   ❓ Não encontrado no log")

    # ── Término ───────────────────────────────────────────────────────────────
    print(f"\n🏁 Término do round: {termination}")
    print(SEP)

    # ── Diagnóstico rápido ────────────────────────────────────────────────────
    print("\n📋 DIAGNÓSTICO RÁPIDO:")
    issues: list[str] = []

    if not p26_lines:
        issues.append("PASSO 26 ausente — rebuild_runtime.sh com Bug AJ fix não rodou ainda")
    elif not p24_lines:
        issues.append("PASSO 26 rodou mas PASSO 24 ausente — recompilar.sh para sub_0017E530.cpp necessário")
    else:
        p24_steps_diag: list[int] = []
        for l in p24_lines:
            m5 = _RE_P24_STEP.search(l)
            if m5:
                p24_steps_diag.append(int(m5.group(2)))
        has_success = any(_RE_P24_OK.search(l) for l in p24_lines)

        if has_success:
            if p23b_lines:
                b_steps: list[int] = []
                for l in p23b_lines:
                    m6 = _RE_23B_STEP.search(l)
                    if m6:
                        b_steps.append(int(m6.group(2)))
                if b_steps and max(b_steps) >= 7:
                    if p22b_lines and any(_RE_P22B_TID8.search(l) for l in p22b_lines):
                        if frame_lines:
                            nb_last = int(_RE_FRAME.search(frame_lines[-1]).group(1))
                            if nb_last > 0:
                                issues.append("🏆 MISSÃO CUMPRIDA — primeiro frame com pixels visíveis!")
                            else:
                                issues.append("render thread criada + frame loop rodando, mas tela preta — próximo: investigar GS/renderer")
                        else:
                            issues.append("StartThread(thid=8) chamado mas frame:upload não apareceu — render thread travou?")
                    else:
                        issues.append("sub_0017E530 passou (8/8) e step 7/10 chegou mas StartThread(thid=8) não logado")
                else:
                    step_str = str(max(b_steps)) if b_steps else "?"
                    issues.append(f"sub_0017E530 passou mas sub_0017A940 travou em step {step_str}/10")
            else:
                issues.append("sub_0017E530 passou (8/8) mas PASSO 23B não apareceu — verificar se sub_0017A940 rodou")
        elif p24_steps_diag:
            last_ok = max(p24_steps_diag)
            next_idx = last_ok  # 0-based
            culprit = _CALLEES_E530[next_idx] if next_idx < len(_CALLEES_E530) else "?"
            issues.append(f"sub_0017E530 travou: último OK={last_ok}/8, próximo callee=func_{culprit} — novo bug vtable dispatch?")
        elif p26_lines and not p24_lines:
            issues.append("PASSO 26 rodou mas sem PASSO 24 — sub_0017E530.cpp não foi recompilado (recompilar.sh necessário)")

    if not issues:
        issues.append("Nenhum problema crítico detectado — analisar log completo")

    for issue in issues:
        print(f"   • {issue}")
    print()


def main() -> None:
    ap = argparse.ArgumentParser(description="Triagem focada no round PASSO 26 (Bug AJ fix).")
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
