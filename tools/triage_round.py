#!/usr/bin/env python3
"""triage_round.py — Triagem automática do log de round do God of War PC Port.

CATEGORIA: GoW-specific (URLs e padrões de log do projeto)
RESOLVE: Custo de análise manual pós-round — substitui a sequência manual
         de `curl | grep | tail` por um relatório estruturado em 1 comando.
INPUTS:
    --filtered  URL ou caminho do log filtrado
    --full      URL ou caminho do log completo (opcional, para mais detalhes)
    --local     Lê de arquivo local em vez de URL
OUTPUTS:
    Relatório estruturado no stdout com:
      - Progresso dos módulos IOP (sids carregados, último delta_ms)
      - Último frame VBlank
      - Erros/crashes/funções ausentes
      - Boot-loop suspects
      - Diagnóstico resumido do término do round
EXEMPLOS:
    # Triagem padrão (lê log filtrado do GitHub):
    python3 tools/triage_round.py

    # Lê de arquivo local:
    python3 tools/triage_round.py --local build/log_filtered.txt

    # Modo compacto (só o resumo final):
    python3 tools/triage_round.py --short

    # Lê log completo pra mais detalhes:
    python3 tools/triage_round.py --full

NOTAS DE PORTABILIDADE:
    URLs do GitHub e padrões de log são GoW-specific. Para outro jogo,
    substituir as constantes URL_* e ajustar os padrões de regex conforme
    o runtime desse jogo. A lógica de parse é separada da lógica de fetch.
"""

import argparse
import re
import sys
import urllib.request
import urllib.error
from collections import defaultdict
from pathlib import Path

# ── GoW-specific: URLs do repositório ──────────────────────────────────────
_BASE = ("https://raw.githubusercontent.com/"
         "cristianomarianoufsc-ops/godofwar/logs/auto/runs_automaticos/")
URL_FILTERED = _BASE + "log_latest_filtered.txt"
URL_FULL     = _BASE + "log_latest_full.txt"

# ── Padrões de linha (GoW + ps2xRuntime) ───────────────────────────────────
_RE_SEMA_CREATE  = re.compile(r"\[CreateSema\] id=(\d+)")
_RE_SEMA_BLOCK   = re.compile(
    r"\[WaitSema:block\] tid=(\d+) sid=(\d+) pc=(0x\w+) ra=(0x\w+)"
    r"(?:\s+delta_ms_since_RPC_BIND=(\d+))?")
_RE_SEMA_WAKE    = re.compile(r"\[WaitSema:wake\] tid=(\d+) sid=(\d+)")
_RE_SEMA_FORGE   = re.compile(
    r"\[PASSO 3\] Forjando iSignalSema\(sid=(\d+)\) delta_ms=(\d+)")
_RE_VBLANK       = re.compile(
    r"\[stub:0x182f28\].*VBlank tick #(\d+).*frameCount=(\d+)")
_RE_RPC_BIND     = re.compile(
    r"RPC\{.*rpc_id=(0x\w+).*\}")
_RE_NOT_FOUND    = re.compile(
    r"(0x[0-9a-fA-F]+)\s+not found|function.*not found.*pc=(0x\w+)",
    re.IGNORECASE)
_RE_BOOT_LOOP    = re.compile(
    r"\[boot-loop:suspect\]\s+pc=(0x\w+).*a0=(0x\w+).*repeated=(\d+)")
_RE_SIGINT       = re.compile(r"SIGINT|Interrupt|timeout|killed", re.IGNORECASE)
_RE_SIGSEGV      = re.compile(r"SIGSEGV|Segmentation fault|segfault", re.IGNORECASE)
_RE_CRASH        = re.compile(r"SIGABRT|SIGFPE|SIGBUS|core dump", re.IGNORECASE)
_RE_WARNING      = re.compile(r"\[(?:WARN|Warning|warn)\]", re.IGNORECASE)
_RE_ALLOC        = re.compile(
    r"\[stub:sub_0013DA10\].*alloc #(\d+).*guestPtr=(0x\w+)")
_RE_CALLBACK     = re.compile(
    r"\[stub:0x296a54\] Bug L: callback IOP modulo #(\d+)")
_RE_MISSING_FUNC = re.compile(
    r"func_(0x[0-9a-fA-F]+).*not found", re.IGNORECASE)


def fetch_url(url: str) -> str:
    try:
        with urllib.request.urlopen(url, timeout=15) as resp:
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


def parse_log(text: str) -> dict:
    """Extrai métricas estruturadas do texto do log."""
    d = {
        "semas_created":   [],   # lista de ids
        "sema_blocks":     [],   # [{tid, sid, pc, ra, delta_ms}]
        "sema_wakes":      [],   # [{tid, sid}]
        "sema_forged":     [],   # [{sid, delta_ms}]
        "vblank_ticks":    [],   # [(tick, frameCount)]
        "rpc_binds":       [],   # [rpc_id_hex]
        "not_found":       [],   # [addr_hex]
        "boot_loops":      [],   # [{pc, a0, repeated}]
        "allocs":          [],   # [(n, guestPtr)]
        "iop_callbacks":   [],   # [module_n]
        "warnings":        [],   # [line]
        "sigint":          False,
        "sigsegv":         False,
        "crash":           False,
        "last_lines":      [],   # últimas 10 linhas
        "total_lines":     0,
    }

    lines = text.splitlines()
    d["total_lines"] = len(lines)
    d["last_lines"]  = lines[-10:] if len(lines) >= 10 else lines[:]

    for line in lines:
        if m := _RE_SEMA_CREATE.search(line):
            d["semas_created"].append(int(m.group(1)))
        if m := _RE_SEMA_BLOCK.search(line):
            d["sema_blocks"].append({
                "tid": int(m.group(1)), "sid": int(m.group(2)),
                "pc": m.group(3), "ra": m.group(4),
                "delta_ms": int(m.group(5)) if m.group(5) else None,
            })
        if m := _RE_SEMA_WAKE.search(line):
            d["sema_wakes"].append({"tid": int(m.group(1)), "sid": int(m.group(2))})
        if m := _RE_SEMA_FORGE.search(line):
            d["sema_forged"].append({"sid": int(m.group(1)), "delta_ms": int(m.group(2))})
        if m := _RE_VBLANK.search(line):
            d["vblank_ticks"].append((int(m.group(1)), int(m.group(2))))
        if m := _RE_RPC_BIND.search(line):
            d["rpc_binds"].append(m.group(1))
        if m := _RE_NOT_FOUND.search(line):
            addr = m.group(1) or m.group(2)
            if addr and addr not in d["not_found"]:
                d["not_found"].append(addr)
        if m := _RE_BOOT_LOOP.search(line):
            d["boot_loops"].append({
                "pc": m.group(1), "a0": m.group(2), "repeated": int(m.group(3))
            })
        if m := _RE_ALLOC.search(line):
            d["allocs"].append((int(m.group(1)), m.group(2)))
        if m := _RE_CALLBACK.search(line):
            d["iop_callbacks"].append(int(m.group(1)))
        if _RE_SIGSEGV.search(line):
            d["sigsegv"] = True
        if _RE_CRASH.search(line):
            d["crash"] = True
        if _RE_SIGINT.search(line):
            d["sigint"] = True
        if _RE_WARNING.search(line):
            d["warnings"].append(line[:120])

    return d


def _ms_to_s(ms) -> str:
    if ms is None:
        return "?"
    return f"{ms/1000:.1f}s"


def report(d: dict, short: bool = False) -> None:
    sids_created = sorted(set(d["semas_created"]))
    last_sid      = sids_created[-1] if sids_created else None
    last_vblank   = d["vblank_ticks"][-1] if d["vblank_ticks"] else None
    last_block    = d["sema_blocks"][-1] if d["sema_blocks"] else None
    last_wake     = d["sema_wakes"][-1] if d["sema_wakes"] else None
    forged_sids   = {f["sid"]: f["delta_ms"] for f in d["sema_forged"]}

    if not short:
        print("=" * 70)
        print("  TRIAGEM DO ROUND — God of War PC Port")
        print("=" * 70)
        print(f"  Linhas no log         : {d['total_lines']}")
        print()

        print("── MÓDULOS IOP (SIF RPC_BIND) ────────────────────────────────────────")
        print(f"  CreateSema total      : {len(sids_created)}  "
              f"(ids: {sids_created[0] if sids_created else '—'}–{last_sid})")
        print(f"  WaitSema:block total  : {len(d['sema_blocks'])}")
        print(f"  Forjados (Passo 3)    : {len(d['sema_forged'])}")
        print(f"  Callbacks IOP (#0–#N) : {len(d['iop_callbacks'])}  "
              f"(último: #{d['iop_callbacks'][-1] if d['iop_callbacks'] else '—'})")
        if last_block:
            dm = last_block.get("delta_ms")
            print(f"  Último WaitSema:block : sid={last_block['sid']}  "
                  f"pc={last_block['pc']}  delta={_ms_to_s(dm)}")
        if last_wake:
            print(f"  Último WaitSema:wake  : sid={last_wake['sid']}")

        if d["sema_blocks"]:
            print()
            print("  Sequência de módulos (sid → delta_ms forjado):")
            # Mostra os últimos 8 para não lotar
            for blk in d["sema_blocks"][-8:]:
                sid = blk["sid"]
                dm_forge = forged_sids.get(sid)
                woke = any(w["sid"] == sid for w in d["sema_wakes"])
                status = "✅ acordou" if woke else "⏳ pendente"
                print(f"    sid={sid:>3}  delta_forge={_ms_to_s(dm_forge)}  {status}")

        print()
        print("── VBLANK / FRAMES ───────────────────────────────────────────────────")
        if last_vblank:
            tick, frame = last_vblank
            print(f"  Último VBlank tick    : #{tick}  frameCount={frame}  "
                  f"(~{frame/60:.1f}s de jogo)")
        else:
            print("  Nenhum VBlank registrado.")

        print()
        print("── ALOCAÇÕES (almoxarifado stub_0013DA10) ────────────────────────────")
        if d["allocs"]:
            print(f"  Total de allocs       : {d['allocs'][-1][0]}")
            print(f"  Último ptr alocado    : {d['allocs'][-1][1]}")
        else:
            print("  Nenhuma alocação registrada.")

        print()
        print("── ERROS / ALERTAS ───────────────────────────────────────────────────")
        if d["sigsegv"]:
            print("  🔴 SIGSEGV detectado!")
        if d["crash"]:
            print("  🔴 CRASH (SIGABRT/SIGFPE/SIGBUS) detectado!")
        if d["not_found"]:
            print(f"  ⚠️  Funções/endereços não encontrados: {len(d['not_found'])}")
            for addr in d["not_found"][:5]:
                print(f"       {addr}")
        if d["boot_loops"]:
            print(f"  ⚠️  Boot-loop suspects: {len(d['boot_loops'])}")
            for bl in d["boot_loops"][:3]:
                print(f"       pc={bl['pc']} a0={bl['a0']} repeated={bl['repeated']}")
        if d["warnings"]:
            print(f"  ⚠️  Warnings: {len(d['warnings'])}")
            for w in d["warnings"][:3]:
                print(f"       {w}")
        if not any([d["sigsegv"], d["crash"], d["not_found"],
                    d["boot_loops"], d["warnings"]]):
            print("  (sem erros registrados)")

        print()
        print("── ÚLTIMAS 10 LINHAS DO LOG ──────────────────────────────────────────")
        for ln in d["last_lines"]:
            print(f"  {ln}")

    print()
    print("=" * 70)
    print("  DIAGNÓSTICO RESUMIDO")
    print("=" * 70)

    # Determinar estado do round
    if d["sigsegv"]:
        estado = "🔴 CRASH — SIGSEGV. Novo bug para investigar."
    elif d["crash"]:
        estado = "🔴 CRASH (sinal fatal). Novo bug para investigar."
    elif not d["semas_created"]:
        estado = "🔴 Log vazio ou round não completou nem o boot."
    elif last_wake and last_block and last_wake["sid"] == last_block["sid"]:
        # Último módulo acordou mas pode ter sido cortado depois
        if d["sigint"] or (last_vblank and last_vblank[1] > 5000):
            estado = (f"🟡 Round cortado por SIGINT/timeout após sid={last_sid}. "
                      f"Jogo ainda carregando módulos IOP.")
        else:
            estado = (f"🟢 sid={last_sid} acordou — jogo avançou além dos módulos IOP? "
                      f"Verificar log completo.")
    else:
        estado = f"🟡 Aguardando wake de sid={last_block['sid'] if last_block else '?'}."

    print(f"  {estado}")

    if last_sid:
        print(f"  Progresso IOP: {len(d['sema_wakes'])} módulos acordados "
              f"(último sid={last_sid})")
    if last_vblank:
        print(f"  Frames renderizados: {last_vblank[1]} "
              f"(~{last_vblank[1]/60:.0f}s de jogo)")

    # Sugestão de próximo passo
    print()
    print("  Próximo passo sugerido:")
    if d["sigsegv"] or d["crash"]:
        print("  → Analisar backtrace. Bug novo (SIGSEGV) — identificar PC do crash.")
    elif d["not_found"]:
        print("  → Funções ausentes detectadas. Rodar:")
        print("    python3 tools/missing_to_seeds.py --log build/ps2_missing.log --min-calls 1")
    elif d["boot_loops"]:
        print("  → Boot-loop detectado. Verificar PC e implementar stub/override.")
    elif last_sid and last_sid > 30:
        print(f"  → Round ainda cortando em sid={last_sid} por timeout. "
              f"Considerar aumentar RUN_TIMEOUT ou investigar módulo lento.")
    else:
        print("  → Ler log completo para mais contexto.")
    print("=" * 70)


def main() -> None:
    ap = argparse.ArgumentParser(
        description="Triagem automática do log de round do GoW PC Port."
    )
    src = ap.add_mutually_exclusive_group()
    src.add_argument("--local", metavar="PATH",
                     help="Lê de arquivo local em vez de URL")
    src.add_argument("--full", action="store_true",
                     help=f"Usa o log COMPLETO do GitHub ({URL_FULL})")
    ap.add_argument("--short", action="store_true",
                    help="Exibe só o resumo final (sem seções detalhadas)")
    args = ap.parse_args()

    if args.local:
        print(f"[triage_round] Lendo local: {args.local}", file=sys.stderr)
        text = read_local(args.local)
    elif args.full:
        print(f"[triage_round] Baixando log completo...", file=sys.stderr)
        text = fetch_url(URL_FULL)
    else:
        print(f"[triage_round] Baixando log filtrado...", file=sys.stderr)
        text = fetch_url(URL_FILTERED)

    d = parse_log(text)
    report(d, short=args.short)


if __name__ == "__main__":
    main()
