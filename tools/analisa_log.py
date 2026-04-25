#!/usr/bin/env python3
"""
analisa_log.py — Analisador de log do God of War PC Port

Uso:
  python3 tools/analisa_log.py log.txt
  python3 tools/analisa_log.py log_novo.txt --diff log_anterior.txt

Saída: resumo estruturado com boot, funções novas, frames, syscalls, erros.
"""

import sys
import re
import argparse
from collections import Counter, defaultdict

def parse_log(path):
    events = {
        "boot_steps":    [],
        "exit_steps":    [],
        "pc_trace":      [],
        "frames":        [],
        "threads":       [],
        "semas":         [],
        "syscall_falls": Counter(),
        "func_entries":  [],
        "errors":        [],
        "stubs_called":  Counter(),
        "missing":       [],
        "jalr_targets":  Counter(),
        "pc_zero":       [],
        "raw_lines":     0,
    }

    with open(path, encoding="utf-8", errors="replace") as f:
        for line in f:
            events["raw_lines"] += 1
            line = line.rstrip()

            if m := re.search(r'\[BOOT#(\d+)\] pc=(0x\w+) ra=(0x\w+)', line):
                events["boot_steps"].append({"n": m.group(1), "pc": m.group(2), "ra": m.group(3)})

            elif m := re.search(r'\[EXIT#(\d+)\] from=(0x\w+) -> pc=(0x\w+)', line):
                events["exit_steps"].append({"n": m.group(1), "from": m.group(2), "pc": m.group(3)})

            elif m := re.search(r'\[dispatch:pc-zero\].*trace=([\d\w\s>-]+)', line):
                events["pc_zero"].append(m.group(1).strip())

            elif m := re.search(r'\[frame:upload\] idx=(\d+).*size=(\d+x\d+) nonBlack=(\d+)', line):
                events["frames"].append({"idx": m.group(1), "size": m.group(2), "nonBlack": m.group(3)})

            elif m := re.search(r'\[CreateThread\] id=(\d+) entry=(0x\w+)', line):
                events["threads"].append({"id": m.group(1), "entry": m.group(2)})

            elif m := re.search(r'\[CreateSema\] id=(\d+)', line):
                events["semas"].append(m.group(1))

            elif m := re.search(r'\[SyscallOverride:fallback\] syscall=(0x\w+) handler=(0x\w+) pc=(0x\w+) ra=(0x\w+)', line):
                key = f"syscall={m.group(1)} handler={m.group(2)}"
                events["syscall_falls"][key] += 1

            elif m := re.search(r'\[stub\] (0x\w+) registrado', line):
                events["stubs_called"][m.group(1)] += 1

            elif m := re.search(r'\[boot_stub\] (.+)', line):
                events["boot_steps"].append({"boot_stub": m.group(1)})

            elif "[TRUNCATED]" in line or "truncated" in line.lower():
                events["missing"].append(line[:120])

            elif m := re.search(r'jalr_target=(0x\w+)', line):
                events["jalr_targets"][m.group(1)] += 1

            elif any(kw in line for kw in ["ERROR", "ERRO", "WARN", "AVISO", "exception", "Segfault"]):
                events["errors"].append(line[:120])

            elif m := re.search(r'\[([a-zA-Z_0-9]+):enter\]', line):
                events["func_entries"].append(m.group(1))

    return events

def summarize(events, label=""):
    print(f"\n{'='*60}")
    print(f"  ANÁLISE DO LOG{': ' + label if label else ''}")
    print(f"  {events['raw_lines']} linhas processadas")
    print(f"{'='*60}\n")

    print("── SEQUÊNCIA DE BOOT ──────────────────────────────────────")
    for s in events["boot_steps"]:
        if "boot_stub" in s:
            print(f"  [boot_stub] {s['boot_stub']}")
        else:
            print(f"  BOOT#{s['n']}: pc={s['pc']}  ra={s['ra']}")
    for s in events["exit_steps"]:
        print(f"  EXIT#{s['n']}: {s['from']} → {s['pc']}")
    for t in events["pc_zero"]:
        print(f"  [pc=0] trace: {t}")
    print()

    print("── THREADS E SEMÁFOROS ────────────────────────────────────")
    for t in events["threads"]:
        print(f"  Thread id={t['id']}  entry={t['entry']}")
    print(f"  Semáforos criados: {len(events['semas'])} (ids: {', '.join(events['semas'][:10])})")
    print()

    print("── FRAMES RENDERIZADOS ────────────────────────────────────")
    if events["frames"]:
        for fr in events["frames"][:10]:
            black = "PRETO" if fr["nonBlack"] == "0" else f"nonBlack={fr['nonBlack']}"
            print(f"  Frame #{fr['idx']} | {fr['size']} | {black}")
        if len(events["frames"]) > 10:
            print(f"  ... e mais {len(events['frames']) - 10} frames")
    else:
        print("  Nenhum frame uploadado.")
    print()

    print("── FUNÇÕES CHAMADAS (primeiras únicas) ────────────────────")
    seen = []
    for fn in events["func_entries"]:
        if fn not in seen:
            seen.append(fn)
    for fn in seen[:20]:
        print(f"  {fn}")
    if len(seen) > 20:
        print(f"  ... e mais {len(seen) - 20} funções únicas")
    print()

    print("── SYSCALLS (fallback — não implementadas) ─────────────────")
    for k, v in events["syscall_falls"].most_common(10):
        print(f"  {v:>6}x  {k}")
    print()

    print("── JALR TARGETS ────────────────────────────────────────────")
    for target, count in events["jalr_targets"].most_common(10):
        print(f"  {count:>8}x  {target}")
    print()

    if events["errors"]:
        print("── ERROS/AVISOS ────────────────────────────────────────────")
        for e in events["errors"][:10]:
            print(f"  {e}")
        print()

    if events["missing"]:
        print("── FUNÇÕES TRUNCADAS/FALTANDO ──────────────────────────────")
        for m in events["missing"][:5]:
            print(f"  {m}")
        print()

def diff_events(old, new):
    print(f"\n{'='*60}")
    print(f"  DIFF — o que mudou em relação ao log anterior")
    print(f"{'='*60}\n")

    old_funcs = set(old["func_entries"])
    new_funcs = set(new["func_entries"])
    gained = new_funcs - old_funcs
    lost   = old_funcs - new_funcs

    print(f"── FUNÇÕES NOVAS (nunca chamadas antes) [{len(gained)}] ──────────")
    for fn in sorted(gained)[:30]:
        print(f"  + {fn}")
    if len(gained) > 30:
        print(f"  ... e mais {len(gained) - 30}")
    print()

    if lost:
        print(f"── FUNÇÕES QUE SUMIRAM [{len(lost)}] ──────────────────────────")
        for fn in sorted(lost)[:20]:
            print(f"  - {fn}")
        print()

    old_frames = len(old["frames"])
    new_frames = len(new["frames"])
    print(f"── FRAMES: {old_frames} → {new_frames} ({'↑ ' + str(new_frames - old_frames) if new_frames > old_frames else '↓ ' + str(old_frames - new_frames) if new_frames < old_frames else '= sem mudança'})")

    old_nonblack = [f for f in old["frames"] if f["nonBlack"] != "0"]
    new_nonblack = [f for f in new["frames"] if f["nonBlack"] != "0"]
    print(f"  Frames não-pretos: {len(old_nonblack)} → {len(new_nonblack)}")
    print()

    print("── SYSCALLS NOVAS ──────────────────────────────────────────")
    old_sys = set(old["syscall_falls"].keys())
    new_sys = set(new["syscall_falls"].keys())
    for s in sorted(new_sys - old_sys):
        print(f"  + {s}")
    if not (new_sys - old_sys):
        print("  (nenhuma nova)")
    print()

def main():
    parser = argparse.ArgumentParser(description="Analisador de log do GoW PC Port")
    parser.add_argument("log", help="Arquivo de log a analisar")
    parser.add_argument("--diff", metavar="LOG_ANTERIOR", help="Log anterior para comparação")
    args = parser.parse_args()

    events = parse_log(args.log)
    summarize(events, label=args.log)

    if args.diff:
        old_events = parse_log(args.diff)
        diff_events(old_events, events)

if __name__ == "__main__":
    main()
