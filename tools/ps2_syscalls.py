#!/usr/bin/env python3
"""
Ferramenta #7 - Decodificador de syscalls do BIOS PS2.

O BIOS do PS2 expõe ~127 syscalls em vetores de 4 bytes começando em 0x80000.
Quando o stub `[lookup:bios-stub]` do runtime captura uma chamada para um
endereço < 0x100000, ele imprime `syscallId=N`. Esta ferramenta traduz N para
o nome humano e a categoria do syscall (thread, DMA, GS, IOP, etc.) e gera
um relatório priorizado a partir do log do jogo.

Uso:
  python3 tools/ps2_syscalls.py 1
      Mostra syscall #1 (SetGsCrt) com descrição.

  python3 tools/ps2_syscalls.py --addr 0x80004
      Decodifica um endereço (resolve para syscallId).

  python3 tools/ps2_syscalls.py --report
      Le ./ps2_missing.log e o stderr/stdout salvos do jogo, e imprime
      uma lista priorizada (mais frequente -> menos frequente) de syscalls
      que o jogo realmente chamou. Use isso pra decidir o que implementar
      de verdade primeiro.

  python3 tools/ps2_syscalls.py --report --log build/run.log
      Idem, mas lê de um arquivo de log específico.

  python3 tools/ps2_syscalls.py --list
      Lista TODOS os syscalls conhecidos (referência rápida).
"""

import argparse
import re
import sys
from collections import Counter
from pathlib import Path

# Tabela canônica de syscalls do BIOS PS2 (EE).
# Fontes: ps2dev wiki, ps2sdk (kernel.h), pcsx2 sources.
# Formato: id -> (nome, categoria, breve descrição/notas)
PS2_SYSCALLS = {
    0x01: ("ResetEE",            "system",  "Reseta subsistemas do EE"),
    0x02: ("SetGsCrt",           "gs",      "Configura modo de vídeo (NTSC/PAL/interlace)"),
    0x04: ("Exit",                "system",  "Encerra o programa (volta pro browser)"),
    0x05: ("RFU005",              "reserved", "Reservado"),
    0x06: ("LoadExecPS2",         "loader",  "Carrega outro ELF e transfere execução"),
    0x07: ("ExecPS2",             "loader",  "Salta pra ELF carregado"),
    0x08: ("RFU008",              "reserved", "Reservado"),
    0x09: ("RFU009",              "reserved", "Reservado"),
    0x0A: ("AddSbusIntcHandler",  "intc",    "Registra handler de interrupção SBUS"),
    0x0B: ("RemoveSbusIntcHandler","intc",   "Remove handler de SBUS"),
    0x0C: ("Interrupt2Iop",       "iop",     "Dispara interrupção pro IOP"),
    0x0D: ("SetVTLBRefillHandler","tlb",     "Handler de refill do VTLB"),
    0x0E: ("SetVCommonHandler",   "system",  "Handler comum de exceções"),
    0x0F: ("SetVInterruptHandler","intc",    "Handler de interrupção genérico"),
    0x10: ("AddIntcHandler",      "intc",    "Registra handler de INTC (canal específico)"),
    0x11: ("RemoveIntcHandler",   "intc",    "Remove handler INTC"),
    0x12: ("AddDmacHandler",      "dma",     "Registra handler de DMAC"),
    0x13: ("RemoveDmacHandler",   "dma",     "Remove handler DMAC"),
    0x14: ("_EnableIntc",         "intc",    "Habilita canal INTC"),
    0x15: ("_DisableIntc",        "intc",    "Desabilita canal INTC"),
    0x16: ("_EnableDmac",         "dma",     "Habilita canal DMAC"),
    0x17: ("_DisableDmac",        "dma",     "Desabilita canal DMAC"),
    0x18: ("SetAlarm",            "timer",   "Cria alarme periódico"),
    0x19: ("ReleaseAlarm",        "timer",   "Cancela alarme"),
    0x1A: ("_iEnableIntc",        "intc",    "Habilita INTC (versão de interrupção)"),
    0x1B: ("_iDisableIntc",       "intc",    "Desabilita INTC (de dentro de ISR)"),
    0x1C: ("_iEnableDmac",        "dma",     "Habilita DMAC (de dentro de ISR)"),
    0x1D: ("_iDisableDmac",       "dma",     "Desabilita DMAC (de dentro de ISR)"),
    0x1E: ("iSetAlarm",           "timer",   "SetAlarm de dentro de ISR"),
    0x1F: ("iReleaseAlarm",       "timer",   "ReleaseAlarm de dentro de ISR"),
    0x20: ("CreateThread",        "thread",  "Cria thread de usuário"),
    0x21: ("DeleteThread",        "thread",  "Destrói thread"),
    0x22: ("StartThread",         "thread",  "Coloca thread em READY"),
    0x23: ("ExitThread",          "thread",  "Encerra a thread atual"),
    0x24: ("ExitDeleteThread",    "thread",  "Encerra e destrói a thread atual"),
    0x25: ("TerminateThread",     "thread",  "Mata outra thread"),
    0x26: ("iTerminateThread",    "thread",  "TerminateThread (ISR)"),
    0x29: ("ChangeThreadPriority","thread",  "Muda prioridade de thread"),
    0x2A: ("iChangeThreadPriority","thread", "ChangeThreadPriority (ISR)"),
    0x2B: ("RotateThreadReadyQueue","thread", "Rotaciona fila READY"),
    0x2C: ("_iRotateThreadReadyQueue","thread","RotateThreadReadyQueue (ISR)"),
    0x2D: ("ReleaseWaitThread",   "thread",  "Acorda thread em WAIT"),
    0x2E: ("iReleaseWaitThread",  "thread",  "ReleaseWaitThread (ISR)"),
    0x2F: ("GetThreadId",         "thread",  "Retorna ID da thread atual"),
    0x30: ("ReferThreadStatus",   "thread",  "Consulta status de thread"),
    0x31: ("iReferThreadStatus",  "thread",  "ReferThreadStatus (ISR)"),
    0x32: ("SleepThread",         "thread",  "Põe thread em SLEEP"),
    0x33: ("WakeupThread",        "thread",  "Acorda thread SLEEP"),
    0x34: ("_iWakeupThread",      "thread",  "WakeupThread (ISR)"),
    0x35: ("CancelWakeupThread",  "thread",  "Decrementa contador de wakeup"),
    0x36: ("iCancelWakeupThread", "thread",  "CancelWakeupThread (ISR)"),
    0x37: ("SuspendThread",       "thread",  "Suspende thread"),
    0x38: ("iSuspendThread",      "thread",  "SuspendThread (ISR)"),
    0x39: ("ResumeThread",        "thread",  "Retoma thread suspensa"),
    0x3A: ("iResumeThread",       "thread",  "ResumeThread (ISR)"),
    0x3B: ("JoinThread",          "thread",  "Espera outra thread terminar"),
    0x3C: ("RFU060_SetupThread",  "thread",  "Configura main thread (init)"),
    0x3D: ("RFU061_SetupHeap",    "heap",    "Configura heap"),
    0x3E: ("EndOfHeap",           "heap",    "Retorna fim do heap"),
    0x40: ("CreateSema",          "sema",    "Cria semáforo"),
    0x41: ("DeleteSema",          "sema",    "Destrói semáforo"),
    0x42: ("SignalSema",          "sema",    "V() — incrementa semáforo"),
    0x43: ("iSignalSema",         "sema",    "SignalSema (ISR)"),
    0x44: ("WaitSema",            "sema",    "P() — espera semáforo"),
    0x45: ("PollSema",            "sema",    "Tenta P() sem bloquear"),
    0x46: ("iPollSema",           "sema",    "PollSema (ISR)"),
    0x47: ("ReferSemaStatus",     "sema",    "Consulta status de semáforo"),
    0x48: ("iReferSemaStatus",    "sema",    "ReferSemaStatus (ISR)"),
    0x49: ("iDeleteSema",         "sema",    "DeleteSema (ISR)"),
    0x4A: ("SetOsdConfigParam",   "system",  "Salva config OSD"),
    0x4B: ("GetOsdConfigParam",   "system",  "Lê config OSD (idioma, hora, etc.)"),
    0x4C: ("GetGsHParam",         "gs",      "Parâmetros GS horizontais"),
    0x4D: ("GetGsVParam",         "gs",      "Parâmetros GS verticais"),
    0x4E: ("SetGsHParam",         "gs",      "Define GS horizontais"),
    0x4F: ("SetGsVParam",         "gs",      "Define GS verticais"),
    0x64: ("FlushCache",          "cache",   "Flush de cache (D/I)"),
    0x66: ("CpuConfig",           "cpu",     "Configura cache/COP1"),
    0x67: ("iGetCop0",            "cpu",     "Lê registrador COP0"),
    0x68: ("iFlushCache",         "cache",   "FlushCache (ISR)"),
    0x6A: ("iCpuConfig",          "cpu",     "CpuConfig (ISR)"),
    0x6B: ("SifStopDma",          "sif",     "Para DMA SIF"),
    0x70: ("GsGetIMR",            "gs",      "Lê GS_IMR"),
    0x71: ("GsPutIMR",            "gs",      "Escreve GS_IMR"),
    0x72: ("SetPgifHandler",      "intc",    "Handler PGIF"),
    0x73: ("SetVSyncFlag",        "gs",      "Marca flag em vsync"),
    0x74: ("SetSyscall",          "system",  "Sobrescreve um vetor de syscall"),
    0x76: ("SifDmaStat",          "sif",     "Status de DMA SIF"),
    0x77: ("SifSetDma",           "sif",     "Inicia DMA SIF"),
    0x78: ("SifSetDChain",        "sif",     "DMA chain SIF"),
    0x79: ("SifSetReg",           "sif",     "Escreve registrador SIF"),
    0x7A: ("SifGetReg",           "sif",     "Le registrador SIF"),
    0x7B: ("ExecOSD",             "loader",  "Executa OSD (browser)"),
    0x7C: ("Deci2Call",           "deci2",   "Comunicação debug"),
    0x7D: ("PSMode",              "system",  "Modo PS1/PS2"),
    0x7E: ("MachineType",         "system",  "Tipo de console (slim/fat)"),
    0x7F: ("GetMemorySize",       "system",  "Tamanho da RAM"),
}

# Heurísticas de "criticidade" pra priorização: syscalls que se NÃO
# implementadas geralmente travam o boot. Quanto mais alto, mais urgente.
CRITICALITY = {
    "thread": 5,   # sem threads, jogo trava esperando WaitSema
    "sema":   5,   # idem
    "intc":   4,   # interrupções de vsync, DMA done
    "dma":    4,   # transferências GS/VIF
    "gs":     3,   # vídeo direto
    "sif":    3,   # IOP comm (load arquivos, som)
    "iop":    3,
    "tlb":    3,
    "system": 2,
    "loader": 2,
    "timer":  2,
    "cache":  1,   # FlushCache pode ser no-op
    "cpu":    1,
    "heap":   1,
    "deci2":  0,
    "reserved": 0,
}

DEFAULT_LOGS = [
    Path("ps2_missing.log"),
    Path("build/run.log"),
    Path("/tmp/ps2_run.log"),
]

# Regex pra capturar tanto syscallId direto quanto endereço bruto
RE_SYSCALL_ID = re.compile(r"\bsyscallId=(\d+)\b")
RE_BIOS_STUB = re.compile(r"\baddr=0x([0-9a-fA-F]+)\b.*\bsyscallId=(\d+)")
RE_MISSING_SYSCALL = re.compile(r"syscall\s*[#:]?\s*(\d+)", re.IGNORECASE)


def addr_to_syscall_id(addr: int) -> int | None:
    if 0x80000 <= addr < 0x80400:
        return (addr - 0x80000) // 4
    return None


def decode_syscall(syscall_id: int) -> tuple[str, str, str]:
    if syscall_id in PS2_SYSCALLS:
        return PS2_SYSCALLS[syscall_id]
    return (f"unknown_{syscall_id:02x}", "unknown",
            "Syscall não documentado (talvez homebrew/jogo customizou via SetSyscall)")


def fmt_syscall(syscall_id: int, count: int | None = None) -> str:
    name, cat, desc = decode_syscall(syscall_id)
    addr = 0x80000 + syscall_id * 4
    crit = CRITICALITY.get(cat, 0)
    crit_bar = "!" * crit + "." * (5 - crit)
    head = f"  [{crit_bar}] #{syscall_id:3d} (0x{addr:05x})  {name:<28s} [{cat}]"
    if count is not None:
        head = f"{head}  x{count}"
    return f"{head}\n         {desc}"


def cmd_decode_id(args) -> int:
    sid = args.id
    print(fmt_syscall(sid))
    return 0


def cmd_decode_addr(args) -> int:
    addr = int(args.addr, 0)
    sid = addr_to_syscall_id(addr)
    if sid is None:
        print(f"Endereço 0x{addr:x} fora da faixa de syscalls (0x80000-0x803FC).")
        return 2
    print(f"Endereço 0x{addr:x} -> syscall #{sid}")
    print(fmt_syscall(sid))
    return 0


def cmd_list(args) -> int:
    print(f"Tabela de syscalls do BIOS PS2 ({len(PS2_SYSCALLS)} documentados):\n")
    for sid in sorted(PS2_SYSCALLS):
        print(fmt_syscall(sid))
    return 0


def cmd_report(args) -> int:
    log_paths = [Path(p) for p in args.log] if args.log else DEFAULT_LOGS
    log_paths = [p for p in log_paths if p.is_file()]
    if not log_paths:
        print("Nenhum log encontrado. Tentei:")
        for p in (args.log or DEFAULT_LOGS):
            print(f"  - {p}")
        print("\nDica: rode o jogo redirecionando stderr+stdout pra um arquivo:")
        print("  bash build.sh 2>&1 | tee build/run.log")
        print("E depois: python3 tools/ps2_syscalls.py --report --log build/run.log")
        return 2

    counter: Counter[int] = Counter()
    for lp in log_paths:
        text = lp.read_text(errors="ignore")
        for m in RE_BIOS_STUB.finditer(text):
            sid = int(m.group(2))
            counter[sid] += 1
        if not counter:
            for m in RE_SYSCALL_ID.finditer(text):
                counter[int(m.group(1))] += 1
        if not counter:
            for m in RE_MISSING_SYSCALL.finditer(text):
                counter[int(m.group(1))] += 1

    if not counter:
        print(f"Nenhum syscall capturado nos logs:")
        for p in log_paths:
            print(f"  - {p}")
        print("\nVerifique se o stub [lookup:bios-stub] está logando, ou rode com")
        print("  PS2_TRACE=1 e capture stderr.")
        return 0

    total = sum(counter.values())
    print(f"=== Relatório de syscalls do BIOS PS2 capturados ===")
    print(f"Logs lidos: {', '.join(str(p) for p in log_paths)}")
    print(f"Total de chamadas: {total}  |  Syscalls distintos: {len(counter)}\n")
    print("Ordenado por: criticidade DESC, depois frequência DESC.")
    print("Legenda: [!!!!.] = criticidade (5 níveis). Implementar de cima pra baixo.\n")

    def sort_key(item):
        sid, cnt = item
        _, cat, _ = decode_syscall(sid)
        return (-CRITICALITY.get(cat, 0), -cnt, sid)

    for sid, cnt in sorted(counter.items(), key=sort_key):
        print(fmt_syscall(sid, cnt))

    print(f"\nTop 5 mais chamados (frequência pura):")
    for sid, cnt in counter.most_common(5):
        name, cat, _ = decode_syscall(sid)
        print(f"  #{sid:3d} {name:<28s} [{cat}]  x{cnt}")
    return 0


def main() -> int:
    p = argparse.ArgumentParser(
        description="Decodificador de syscalls do BIOS PS2.",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog=__doc__,
    )
    p.add_argument("--addr", type=str, help="Decodifica um endereço (0x80000-0x803FC)")
    p.add_argument("--report", action="store_true", help="Gera relatório priorizado a partir dos logs")
    p.add_argument("--list", action="store_true", help="Lista todos os syscalls conhecidos")
    p.add_argument("--log", action="append", help="(com --report) caminho de log; pode repetir")
    p.add_argument("syscall_id", nargs="?", help="ID do syscall a decodificar (ex: 1 ou 0x20)")

    args = p.parse_args()

    if args.addr is not None:
        return cmd_decode_addr(args)
    if args.report:
        return cmd_report(args)
    if args.list:
        return cmd_list(args)
    if args.syscall_id is not None:
        return cmd_decode_id(argparse.Namespace(id=int(args.syscall_id, 0)))

    p.print_help()
    return 1


if __name__ == "__main__":
    sys.exit(main())
