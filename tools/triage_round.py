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
      - Threads EE: CreateThread vs StartThread (detecta threads criadas sem start)
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
_RE_MISSING_FUNC  = re.compile(
    r"func_(0x[0-9a-fA-F]+).*not found", re.IGNORECASE)
_RE_THREAD_CREATE = re.compile(
    r"\[CreateThread\] id=(\d+) entry=(0x\w+)"
    r"(?:\s+stack=(0x\w+))?(?:\s+size=(0x\w+))?(?:\s+gp=(0x\w+))?(?:\s+prio=(\d+))?")
_RE_THREAD_START  = re.compile(
    r"\[StartThread\] id=(\d+)")
_RE_POLL_ZERO = re.compile(
    r"\[PollSema:zero\] sid=(\d+) calls=(\d+) pc=(0x\w+) ra=(0x\w+)")
_RE_POLL_OK   = re.compile(
    r"\[PollSema:ok\] sid=(\d+) pc=(0x\w+) ra=(0x\w+)")
_RE_PASSO3B   = re.compile(
    r"\[PASSO 3b\] PollSema forjando KE_OK sid=(\d+) calls=(\d+)"
    r" delta_ms=(\d+) pc=(0x\w+) ra=(0x\w+)")
_RE_BUGAB          = re.compile(
    r"\[WaitEventFlag:mode_compat\].*unknown_bits=(0x\w+)")
_RE_POLL327_INICIO = re.compile(r"\[poll_327a40\] INICIO poll loop addr=(0x\w+)")
_RE_POLL327_SPIN   = re.compile(r"\[poll_327a40\] spinning count=(\d+) addr=(0x\w+) val=(0x\w+)")
_RE_POLL327_SAIU   = re.compile(r"\[poll_327a40\] SAIU poll_ok count=(\d+) addr=(0x\w+) val=(0x\w+)")
_RE_BUGP_ENTRY     = re.compile(r"\[BugP_entry\] FUN_002947c8 START a0=(0x\w+) sp=(0x\w+)")
_RE_BUGP_EXIT      = re.compile(r"\[BugP_exit\] FUN_002947c8 LOOP QUEBROU pc=(0x\w+)")
_RE_PASSO3D        = re.compile(
    r"\[PASSO 3d\] RPC busy=0x2a1734:(-?\d+)->0.*SIFclient=0x2a28d0\[0\]:(-?\d+)->0"
    r".*sid=(\d+) calls=(\d+)")
_RE_VBLANK_RPCBUSY = re.compile(
    r"\[stub:0x182f28\].*rpcBusy2a1734=(-?\d+).*sifClient2a28d0=(-?\d+)")


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
        "threads_created": [],   # [{id, entry, prio}]
        "threads_started": [],   # [id]
        "poll_zero":       [],   # [{sid, calls, pc, ra}] — primeira ocorrência por sid
        "poll_ok":         [],   # [{sid, pc, ra}] — primeira vez que sid teve sucesso
        "passo3b":         [],   # [{sid, calls, delta_ms, pc, ra}] — primeira disparo por sid
        "bugab_count":     0,
        "bugab_bits":      [],   # bits únicos mascarados
        "poll327_inicio":  False,
        "poll327_spin_max": 0,
        "poll327_saiu":    False,
        "poll327_saiu_count": 0,
        "bugp_entry_count": 0,
        "bugp_entry_a0":   None,
        "bugp_exit":       False,
        "passo3d":         [],   # [{busy_was, client_was, sid, calls}]
        "vblank_rpcbusy":  [],   # [(rpcBusy, sifClient)] amostras do VBlank
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
        if m := _RE_THREAD_CREATE.search(line):
            d["threads_created"].append({
                "id": int(m.group(1)),
                "entry": m.group(2),
                "prio": int(m.group(6)) if m.group(6) else None,
            })
        if m := _RE_THREAD_START.search(line):
            d["threads_started"].append(int(m.group(1)))
        if m := _RE_POLL_ZERO.search(line):
            entry = {"sid": int(m.group(1)), "calls": int(m.group(2)),
                     "pc": m.group(3), "ra": m.group(4)}
            if not any(e["sid"] == entry["sid"] for e in d["poll_zero"]):
                d["poll_zero"].append(entry)
        if m := _RE_POLL_OK.search(line):
            entry = {"sid": int(m.group(1)), "pc": m.group(2), "ra": m.group(3)}
            if not any(e["sid"] == entry["sid"] for e in d["poll_ok"]):
                d["poll_ok"].append(entry)
        if m := _RE_PASSO3B.search(line):
            entry = {"sid": int(m.group(1)), "calls": int(m.group(2)),
                     "delta_ms": int(m.group(3)), "pc": m.group(4), "ra": m.group(5)}
            if not any(e["sid"] == entry["sid"] for e in d["passo3b"]):
                d["passo3b"].append(entry)
        if m := _RE_BUGAB.search(line):
            d["bugab_count"] += 1
            bits = m.group(1)
            if bits not in d["bugab_bits"]:
                d["bugab_bits"].append(bits)
        if _RE_POLL327_INICIO.search(line):
            d["poll327_inicio"] = True
        if m := _RE_POLL327_SPIN.search(line):
            d["poll327_spin_max"] = max(d["poll327_spin_max"], int(m.group(1)))
        if m := _RE_POLL327_SAIU.search(line):
            d["poll327_saiu"] = True
            d["poll327_saiu_count"] = int(m.group(1))
        if m := _RE_BUGP_ENTRY.search(line):
            d["bugp_entry_count"] += 1
            if d["bugp_entry_a0"] is None:
                d["bugp_entry_a0"] = m.group(1)
        if _RE_BUGP_EXIT.search(line):
            d["bugp_exit"] = True
        if m := _RE_PASSO3D.search(line):
            d["passo3d"].append({
                "busy_was":   int(m.group(1)),
                "client_was": int(m.group(2)),
                "sid":        int(m.group(3)),
                "calls":      int(m.group(4)),
            })
        if m := _RE_VBLANK_RPCBUSY.search(line):
            if len(d["vblank_rpcbusy"]) < 8:
                d["vblank_rpcbusy"].append((int(m.group(1)), int(m.group(2))))
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
        print("── THREADS EE (CreateThread / StartThread) ───────────────────────────")
        if d["threads_created"]:
            for t in d["threads_created"]:
                started = t["id"] in d["threads_started"]
                status  = "✅ StartThread chamado" if started else "🔴 StartThread NUNCA chamado"
                prio_str = f"  prio={t['prio']}" if t["prio"] is not None else ""
                print(f"  id={t['id']:>3}  entry={t['entry']}{prio_str}  →  {status}")
        else:
            print("  Nenhum CreateThread registrado.")

        print()
        print("── BUG AB / WaitEventFlag:mode_compat ────────────────────────────────")
        if d["bugab_count"] > 0:
            bits_str = ", ".join(d["bugab_bits"][:6])
            if len(d["bugab_bits"]) > 6:
                bits_str += f" ... (+{len(d['bugab_bits'])-6} outros)"
            print(f"  WaitEventFlag mascarado       : ✅ {d['bugab_count']}x")
            print(f"  Bits únicos ignorados         : {bits_str}")
        else:
            print("  WaitEventFlag mascarado       : — Bug AB não disparou neste round")

        print()
        print("── THREAD TID=2 / BUG P / POLL 0x327A40 ─────────────────────────────")
        if d["bugp_entry_count"] > 0:
            print(f"  [BugP_entry] FUN_002947c8 executou  : ✅ {d['bugp_entry_count']}x  "
                  f"(a0={d['bugp_entry_a0']})")
        else:
            print("  [BugP_entry] FUN_002947c8 executou  : 🔴 NÃO — thread tid=2 não iniciou")
        if d["poll327_inicio"]:
            if d["poll327_saiu"]:
                print(f"  [poll_327a40] flag 0x327a40         : ✅ SETADO — "
                      f"saiu após {d['poll327_saiu_count']} iterações")
            elif d["poll327_spin_max"] > 0:
                print(f"  [poll_327a40] flag 0x327a40         : 🔴 NUNCA SETADO — "
                      f"spinning até count={d['poll327_spin_max']} (Bug P não completou init)")
            else:
                print("  [poll_327a40] flag 0x327a40         : ⏳ poll iniciado, sem spin log ainda")
        else:
            print("  [poll_327a40] flag 0x327a40         : — poll não atingido")
        if d["bugp_exit"]:
            print("  [BugP_exit]  loop quebrou           : ⚠️  inesperado — loop infinito saiu")

        print()
        print("── BUG R / PASSO 3d (loop RPC busy 0x2a1734 + FUN_297670) ───────────")
        if d["passo3d"]:
            p = d["passo3d"][0]
            total = len(d["passo3d"])
            status_busy   = "✅ zerado" if p["busy_was"] != 0 else "— já era 0"
            status_client = "✅ zerado" if p["client_was"] != 0 else "— já era 0"
            print(f"  PASSO 3d disparou            : ✅ {total}x "
                  f"(1º: sid={p['sid']} calls={p['calls']})")
            print(f"  0x2a1734 busy_was={p['busy_was']}         : {status_busy}")
            print(f"  0x2a28d0 client_was={p['client_was']}       : {status_client}")
            if d["vblank_rpcbusy"]:
                last_b, last_c = d["vblank_rpcbusy"][-1]
                print(f"  VBlank confirma (última amostra): rpcBusy={last_b}  sifClient={last_c}")
                if last_b == 0 and last_c == 0:
                    print("  → 0x2a1734=0 + 0x2a28d0=0 confirmados no VBlank ✅")
                else:
                    print("  ⚠️  Algum valor não zerou — re-escrito pelo jogo após o forge?")
        else:
            print("  PASSO 3d disparou            : 🔴 NÃO — Bug R provavelmente ainda bloqueando")
            if d["vblank_rpcbusy"]:
                last_b, last_c = d["vblank_rpcbusy"][-1]
                print(f"  VBlank (última amostra): rpcBusy={last_b}  sifClient={last_c}")

        print()
        print("── POLLSEMA (busy-poll / poll-por-VBlank) ────────────────────────────")
        if d["poll_zero"]:
            for pz in d["poll_zero"]:
                sid = pz["sid"]
                p3b = next((p for p in d["passo3b"] if p["sid"] == sid), None)
                pk  = next((p for p in d["poll_ok"]  if p["sid"] == sid), None)
                if p3b:
                    calls = int(p3b["calls"])
                    padrao = "poll-por-VBlank" if calls <= 1 else "busy-loop"
                    status = (f"✅ PASSO 3b ({padrao}) desbloqueou "
                              f"(calls={calls} delta_ms={p3b['delta_ms']}ms)")
                elif pk:
                    status = f"✅ ok — sinalizado por outro caminho"
                else:
                    calls_zero = int(pz.get("calls", 0))
                    padrao = "poll-por-VBlank" if calls_zero <= 1 else "busy-loop"
                    status = f"🔴 {padrao.upper()} ATIVO — nunca desbloqueado"
                print(f"  sid={sid:>3}  pc={pz['pc']}  ra={pz['ra']}  →  {status}")
        else:
            print("  Nenhum PollSema:zero registrado.")

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

    # Threads criadas mas nunca iniciadas
    threads_pendentes = [t for t in d["threads_created"]
                         if t["id"] not in d["threads_started"]]

    # Determinar estado do round
    if d["sigsegv"]:
        estado = "🔴 CRASH — SIGSEGV. Novo bug para investigar."
    elif d["crash"]:
        estado = "🔴 CRASH (sinal fatal). Novo bug para investigar."
    elif not d["semas_created"]:
        estado = "🔴 Log vazio ou round não completou nem o boot."
    elif d["bugp_entry_count"] > 0 and d["poll327_inicio"] and not d["poll327_saiu"]:
        spin = d["poll327_spin_max"]
        estado = (f"🔴 Bug P: FUN_002947c8 iniciou mas *(0x327a40) nunca foi setado "
                  f"(poll spinning até {spin} — próximo bug dentro de FUN_002947c8).")
    elif d["bugp_entry_count"] > 0 and d["poll327_saiu"]:
        estado = (f"🟢 Bug P PASSOU: thread tid=2 completou init (poll_327a40 saiu em "
                  f"{d['poll327_saiu_count']} iters). Verificar próximo bloqueador.")
    elif d["bugp_entry_count"] > 0 and not d["poll327_inicio"]:
        estado = (f"🟡 FUN_002947c8 iniciou mas poll_327a40 não atingido ainda. "
                  f"Verificar se entry_296c48 foi chamada.")
    elif threads_pendentes:
        ids_str = ", ".join(str(t["id"]) for t in threads_pendentes)
        entries_str = ", ".join(t["entry"] for t in threads_pendentes)
        estado = (f"🔴 Thread(s) criada(s) mas StartThread NUNCA chamado: "
                  f"id(s)={ids_str}  entry(s)={entries_str}. "
                  f"Bug atual — investigar quem deveria chamar StartThread.")
    elif d["poll_zero"] and not d["passo3b"] and not all(
            any(pk["sid"] == pz["sid"] for pk in d["poll_ok"])
            for pz in d["poll_zero"]):
        stuck = [pz for pz in d["poll_zero"]
                 if not any(p["sid"] == pz["sid"]
                            for p in d["passo3b"] + d["poll_ok"])]
        sids_str = ", ".join(str(s["sid"]) for s in stuck)
        estado = (f"🔴 PollSema busy-loop em sid(s)={sids_str} — PASSO 3b não disparou. "
                  f"Verificar se bindNs > 0 (ao menos 1 bind SIF ocorreu).")
    elif d["passo3d"] and not d["bugp_entry_count"] and not threads_pendentes:
        p3d = d["passo3d"][0]
        rpc_ok = any(b == 0 and c == 0 for b, c in d["vblank_rpcbusy"])
        if rpc_ok:
            estado = (f"🟡 Bug R: PASSO 3d disparou (sid={p3d['sid']} calls={p3d['calls']}) "
                      f"e 0x2a1734+0x2a28d0 confirmados zerados no VBlank. "
                      f"Jogo ainda não avançou para tid=2 — verificar próximo bloqueador.")
        else:
            estado = (f"🟡 Bug R: PASSO 3d disparou mas VBlank ainda mostra busy/client != 0. "
                      f"Jogo re-escreveu 0x2a1734/0x2a28d0 após o forge — novo mecanismo a investigar.")
    elif d["passo3b"] and not d["passo3d"]:
        sids_str = ", ".join(str(p["sid"]) for p in d["passo3b"])
        estado = (f"🟡 PASSO 3b desbloqueou PollSema sid(s)={sids_str} mas PASSO 3d não disparou. "
                  f"Bug R ainda bloqueando (0x2a1734 nunca zerado) — verificar se fix chegou ao build.")
    elif d["passo3b"]:
        sids_str = ", ".join(str(p["sid"]) for p in d["passo3b"])
        estado = (f"🟡 PASSO 3b desbloqueou PollSema sid(s)={sids_str}. "
                  f"Jogo avançou além do busy-poll — verificar próximo bloqueador.")
    elif last_wake and last_block and last_wake["sid"] == last_block["sid"]:
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
    elif d["bugp_entry_count"] > 0 and d["poll327_inicio"] and not d["poll327_saiu"]:
        print("  → Bug P trava antes de setar *(0x327a40). Analisar FUN_002947c8:")
        print("    Verificar quais sub-funções ela chama antes de setar o flag.")
        print("    Provável: sub-função truncada ou syscall não implementada dentro dela.")
    elif d["bugp_entry_count"] > 0 and d["poll327_saiu"]:
        print("  → Bug P RESOLVIDO. Verificar próximo bloqueador nas últimas 10 linhas.")
    elif d["bugp_entry_count"] == 0 and not threads_pendentes:
        print("  → FUN_002947c8 não executou. Verificar se WaitEventFlag:mode_compat")
        print("    apareceu (Bug AB) e se StartThread(tid=2) foi chamado.")
    elif d["passo3b"]:
        for p in d["passo3b"]:
            print(f"  → PASSO 3b desbloqueou sid={p['sid']} (ra={p['ra']}). "
                  f"Verificar último bloqueador no log após este ponto.")
        print("  → Analisar últimas 10 linhas e próximo CreateSema/WaitSema/PollSema.")
    elif threads_pendentes:
        for t in threads_pendentes:
            print(f"  → BUG ATUAL: StartThread nunca chamado para tid={t['id']} "
                  f"(entry={t['entry']}).")
        print("  → Identificar quem deveria chamar StartThread após o bind loop IOP.")
        print("  → Buscar chamadas a StartThread no ELF: "
              "python3 tools/mips_inspect.py --callers StartThread")
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
