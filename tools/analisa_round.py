#!/usr/bin/env python3
"""analisa_round.py — Análise de PASSOs e bloqueio atual do round GoW PC Port.

Complementa triage_round.py com foco em:
  - Sequência de PASSOs disparados (12-99) e os que faltam
  - Estado dos flags VBlank (notify2a1710, rpcBusy2a1734, sifClient2a28d0)
  - Identificação automática do padrão de bloqueio atual
  - Sugestão do próximo PASSO a implementar

EXEMPLOS:
    python3 tools/analisa_round.py
    python3 tools/analisa_round.py --local /tmp/log.txt
    python3 tools/analisa_round.py --full
"""

import argparse
import re
import sys
import urllib.request
import urllib.error
from collections import defaultdict, OrderedDict
from pathlib import Path

_BASE = ("https://raw.githubusercontent.com/"
         "cristianomarianoufsc-ops/godofwar/logs/auto/runs_automaticos/")
URL_FILTERED = _BASE + "log_latest_filtered.txt"
URL_FULL     = _BASE + "log_latest_full.txt"

# ── PASSOs conhecidos e o que cada um significa ──────────────────────────────
PASSO_DESCRICAO = {
    "3":   "iSignalSema forjado (IOP ack simulado)",
    "3b":  "PollSema forjado KE_OK",
    "3c":  "PASSO 3c:auto disparado",
    "3d":  "RPC busy/SIFclient zerados",
    "5":   "notify2a1710 detectado — boot SIF iniciou",
    "6":   "sub_00297290 retornou (IOP bind OK)",
    "7":   "sub_00294AF8 / StartThread desbloqueado",
    "8A":  "sub_0027A6B8 path notify disparado",
    "9A":  "sub_00297470 forçou v0=1 (func_2969D0 retornou 0)",
    "9B":  "sub_00297470 caminho OK (func_2969D0 retornou !=0)",
    "9C":  "entry_27ab00 forçou v0=1 (label_27ab80 retornou s0=0)",
    "11A": "sub_00297290 sid=0x123456 retornou v0=1",
    "11B": "connected flag 1 em 0x3055C8+0x24 = 1",
    "11C": "sub_00297290 sid=0x123457 retornou v0=1",
    "11D": "connected flag 2 em 0x30A200+0x24 = 1",
    "12":  "sub_0013DC78: sentinela fila prioridade inicializada",
    "13":  "sub_0017AA18: flag renderer/GS em 0x29C4D8 forçado=1",
    "14":  "sub_0026BF28: 0x2A1338=0 OK (libera label_26c034)",
    "14B": "sub_0026BC40: IOP DMA simulado (0xFFFFFFFF em queue)",
    "15":  "sub_0026BF28: após label_26c0e0 sair (diagnóstico 0x2A1378/7C)",
    "15B": "entry_1389d8: após retorno de sub_0026B6D0",
    "15C": "sub_0026BF28: chamando sub_0026C4B8",
    "16":  "sub_0026C4B8: entry_297670 forçado v0=0 (busy simulado OK)",
    "17":  "sub_0026BB98: stub v0=1 (IOP módulo pronto simulado)",
}

PASSO_ORDEM = [
    "3","3b","3c","3d","5","6","7","8A",
    "9A","9B","9C",
    "11A","11B","11C","11D",
    "12","13","14","14B","15","15B","15C","16","17",
]

# ── Padrões de bloqueio conhecidos ───────────────────────────────────────────
BLOQUEIOS = [
    {
        "nome": "Loop label_26c0e0 (sub_0026BB98 retorna 0)",
        "detectar": lambda d: d["vblank_max"] > 100 and not d["passos"].get("17") and not d["passos"].get("15"),
        "fix": "PASSO 17 — stub sub_0026BB98 para retornar v0=1",
        "arquivo": "sub_0026BB98_0x26bb98.cpp",
    },
    {
        "nome": "entry_297670 busy em sub_0026C4B8 (label_26c530)",
        "detectar": lambda d: d["passos"].get("15C") and not d["engine_done"],
        "fix": "PASSO 16 — força v0=0 após entry_297670 retornar !=0",
        "arquivo": "sub_0026C4B8_0x26c4b8.cpp",
    },
    {
        "nome": "entry_1389d8 travada (renderer_type não detectado)",
        "detectar": lambda d: d["engine_start"] and not d["engine_rtype"],
        "fix": "Analisar callees de entry_1389d8: sub_0026B6D0, sub_0013DC78, sub_0017AA18, sub_0026BF28",
        "arquivo": "entry_1389d8_0x138cb0.cpp",
    },
    {
        "nome": "notify2a1710 persistente (IOP não responde notificação)",
        "detectar": lambda d: d["notify_stuck"],
        "fix": "Identificar qual sub-thread de entry_1389d8 aguarda callback IOP em 0x2A1710",
        "arquivo": "sub_0027A6B8_0x27a6b8.cpp",
    },
]


def fetch(url):
    try:
        with urllib.request.urlopen(url, timeout=20) as r:
            return r.read().decode("utf-8", errors="replace")
    except urllib.error.URLError as e:
        print(f"[erro] Não foi possível baixar {url}: {e}", file=sys.stderr)
        sys.exit(1)


def read_local(path):
    p = Path(path)
    if not p.exists():
        print(f"[erro] Arquivo não encontrado: {path}", file=sys.stderr)
        sys.exit(1)
    return p.read_text(encoding="utf-8", errors="replace")


def parse(text):
    d = {
        "passos": defaultdict(list),
        "vblank_max": 0,
        "vblank_min": None,
        "notify_final": None,
        "rpcbusy_final": None,
        "sifclient_final": None,
        "notify_stuck": False,
        "engine_start": False,
        "engine_rtype": None,
        "engine_done": False,
        "c100_done": False,
        "iop_sids": [],
        "vblank_flags": [],
    }

    re_passo   = re.compile(r"\[PASSO ([^\]]+)\]")
    re_vblank  = re.compile(
        r"VBlank tick #(\d+).*notify2a1710=(\d+).*rpcBusy2a1734=(\d+).*sifClient2a28d0=(\d+)")
    re_engine  = re.compile(r"\[entry_1389d8\]\s+(START|renderer_type=(0x\w+)|DONE)")
    re_c100    = re.compile(r"\[sub_0027C100\] DONE")
    re_iop     = re.compile(r"RPC_BIND.*sid=(0x[0-9a-fA-F]+)")
    re_passo5  = re.compile(r"\[stub:0x182f28\] PASSO 5.*@tick #(\d+)")

    notify_vals = []

    for line in text.splitlines():
        m = re_passo.search(line)
        if m:
            key = m.group(1).strip()
            d["passos"][key].append(line.strip())

        m = re_vblank.search(line)
        if m:
            tick = int(m.group(1))
            notify = int(m.group(2))
            rpc = int(m.group(3))
            sif = int(m.group(4))
            if d["vblank_min"] is None:
                d["vblank_min"] = tick
            d["vblank_max"] = max(d["vblank_max"], tick)
            d["notify_final"] = notify
            d["rpcbusy_final"] = rpc
            d["sifclient_final"] = sif
            notify_vals.append(notify)

        m = re_engine.search(line)
        if m:
            tag = m.group(1)
            if tag == "START":
                d["engine_start"] = True
            elif tag == "DONE":
                d["engine_done"] = True
            elif m.group(2):
                d["engine_rtype"] = m.group(2)

        if re_c100.search(line):
            d["c100_done"] = True

        m = re_iop.search(line)
        if m:
            sid = m.group(1)
            if sid not in d["iop_sids"]:
                d["iop_sids"].append(sid)

        m = re_passo5.search(line)
        if m:
            d["passos"]["5"].append(line.strip())

    if notify_vals and len(notify_vals) > 5:
        tail = notify_vals[-min(10, len(notify_vals)):]
        if all(v == 1 for v in tail):
            d["notify_stuck"] = True

    return d


def report(d, verbose=False):
    SEP = "=" * 68

    print(SEP)
    print("  ANÁLISE DE ROUND — God of War PC Port")
    print(SEP)

    print("\n── BOOT SEQUENCE ──────────────────────────────────────────────────")
    marcos = [
        ("sub_0027C100 DONE",      d["c100_done"]),
        ("entry_1389d8 START",     d["engine_start"]),
        ("entry_1389d8 renderer",  d["engine_rtype"] is not None),
        ("entry_1389d8 DONE",      d["engine_done"]),
    ]
    for nome, ok in marcos:
        estado = "✅" if ok else "❌"
        extra = f" → {d['engine_rtype']}" if (nome == "entry_1389d8 renderer" and d["engine_rtype"]) else ""
        print(f"  {estado} {nome}{extra}")

    print("\n── VBLANK ─────────────────────────────────────────────────────────")
    if d["vblank_max"] > 0:
        duracao_s = d["vblank_max"] / 60
        print(f"  Ticks: #{d['vblank_min']} → #{d['vblank_max']}  (~{duracao_s:.0f}s de execução)")
        notify_s  = "🔴 PRESO=1" if d["notify_stuck"] else ("🟢 0" if d["notify_final"] == 0 else f"={d['notify_final']}")
        rpc_s     = "🔴=1" if d["rpcbusy_final"] else "🟢=0"
        sif_s     = "🔴=1" if d["sifclient_final"] else "🟢=0"
        print(f"  notify2a1710  {notify_s}")
        print(f"  rpcBusy2a1734 {rpc_s}")
        print(f"  sifClient2a28d0 {sif_s}")
    else:
        print("  Nenhum tick VBlank detectado.")

    print("\n── PASSOs DISPARADOS ──────────────────────────────────────────────")
    disparados = []
    ausentes = []
    for p in PASSO_ORDEM:
        if d["passos"].get(p):
            cnt = len(d["passos"][p])
            desc = PASSO_DESCRICAO.get(p, "")
            disparados.append((p, cnt, desc))
        else:
            desc = PASSO_DESCRICAO.get(p, "")
            ausentes.append((p, desc))

    for p, cnt, desc in disparados:
        plural = f" (x{cnt})" if cnt > 1 else ""
        print(f"  ✅ PASSO {p}{plural} — {desc}")

    if ausentes:
        print("\n── PASSOs NÃO DISPARADOS ──────────────────────────────────────────")
        for p, desc in ausentes:
            print(f"  ⬜ PASSO {p} — {desc}")

    passos_extras = [k for k in d["passos"] if k not in PASSO_ORDEM and k not in ("5",)]
    if passos_extras:
        print("\n── PASSOs EXTRAS (não catalogados) ────────────────────────────────")
        for p in sorted(passos_extras):
            print(f"  ℹ️  PASSO {p} — {len(d['passos'][p])}x")

    if verbose and d["passos"]:
        print("\n── ÚLTIMAS LINHAS POR PASSO ───────────────────────────────────────")
        for p in PASSO_ORDEM:
            linhas = d["passos"].get(p)
            if linhas:
                print(f"\n  [PASSO {p}] última ocorrência:")
                print(f"    {linhas[-1][:120]}")

    print("\n── DIAGNÓSTICO DO BLOQUEIO ────────────────────────────────────────")
    bloqueios_ativos = [b for b in BLOQUEIOS if b["detectar"](d)]
    if bloqueios_ativos:
        for b in bloqueios_ativos:
            print(f"  🔴 {b['nome']}")
            print(f"     Fix sugerido: {b['fix']}")
            print(f"     Arquivo:      {b['arquivo']}")
    elif d["engine_done"]:
        print("  🟢 entry_1389d8 completou! Motor inicializado.")
        print("     Verificar se loop principal de gameplay está rodando.")
    else:
        print("  ⚠️  Bloqueio não catalogado. Ler log completo para diagnóstico manual.")
        print("     python3 tools/triage_round.py --full")

    if d["iop_sids"]:
        print(f"\n── IOP SIDs vinculados: {', '.join(d['iop_sids'])} ({len(d['iop_sids'])} total)")

    print(SEP)


def main():
    ap = argparse.ArgumentParser(description="Análise de PASSOs do round GoW PC Port.")
    src = ap.add_mutually_exclusive_group()
    src.add_argument("--local", metavar="PATH", help="Lê de arquivo local")
    src.add_argument("--full", action="store_true", help="Usa log completo do GitHub")
    ap.add_argument("--verbose", "-v", action="store_true",
                    help="Mostra última linha de cada PASSO disparado")
    args = ap.parse_args()

    if args.local:
        print(f"[analisa_round] Lendo local: {args.local}", file=sys.stderr)
        text = read_local(args.local)
    elif args.full:
        print(f"[analisa_round] Baixando log completo...", file=sys.stderr)
        text = fetch(URL_FULL)
    else:
        print(f"[analisa_round] Baixando log filtrado...", file=sys.stderr)
        text = fetch(URL_FILTERED)

    d = parse(text)
    report(d, verbose=args.verbose)


if __name__ == "__main__":
    main()
