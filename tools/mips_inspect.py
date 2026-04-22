#!/usr/bin/env python3
"""mips_inspect.py - Inspetor de codigo MIPS no ELF do God of War (PS2).

Le o ELF SCUS_973.99 e desmonta as instrucoes MIPS (little-endian, R5900-ish)
em qualquer faixa de enderecos virtuais. Usado para investigar:
  - Buracos (gaps) entre funcoes recompiladas
  - O que uma funcao especifica faz no ELF original
  - Onde o jogo realmente salta quando o dispatcher trava

Uso:
  python3 tools/mips_inspect.py 0x10047c                # 64 instrucoes a partir do endereco
  python3 tools/mips_inspect.py 0x10047c 0x1004b8       # faixa especifica
  python3 tools/mips_inspect.py --gap 0x10047c          # auto-detecta o gap que contem o endereco
  python3 tools/mips_inspect.py --list-gaps             # lista os 30 maiores gaps do recompilador

Requisitos:
  sudo apt install python3-capstone
"""

import os
import sys
import re
import glob
import struct
import argparse

try:
    from capstone import Cs, CS_ARCH_MIPS, CS_MODE_MIPS32, CS_MODE_LITTLE_ENDIAN
except ImportError:
    print("ERRO: pacote 'capstone' nao instalado.", file=sys.stderr)
    print("Instale com: sudo apt install python3-capstone", file=sys.stderr)
    sys.exit(1)

ELF_PATH = "GOD_PC_PORT_FINAL/data/SCUS_973.99"
RECOMPILED_DIR = "GOD_PC_PORT_FINAL/src/recompiled"


def parse_elf(elf_path):
    """Le o ELF MIPS little-endian e retorna lista de segmentos PT_LOAD."""
    with open(elf_path, "rb") as f:
        data = f.read()

    if data[:4] != b"\x7fELF":
        raise ValueError(f"{elf_path} nao e um arquivo ELF valido")

    is_64 = data[4] == 2
    is_le = data[5] == 1
    if is_64 or not is_le:
        raise ValueError("Esperado ELF 32-bit little-endian (formato do PS2)")

    e_phoff     = struct.unpack("<I", data[28:32])[0]
    e_phentsize = struct.unpack("<H", data[42:44])[0]
    e_phnum     = struct.unpack("<H", data[44:46])[0]

    segments = []
    for i in range(e_phnum):
        off = e_phoff + i * e_phentsize
        p_type = struct.unpack("<I", data[off:off+4])[0]
        if p_type != 1:  # PT_LOAD
            continue
        p_offset = struct.unpack("<I", data[off+4:off+8])[0]
        p_vaddr  = struct.unpack("<I", data[off+8:off+12])[0]
        p_filesz = struct.unpack("<I", data[off+16:off+20])[0]
        p_memsz  = struct.unpack("<I", data[off+20:off+24])[0]

        segments.append({
            "vaddr": p_vaddr,
            "filesz": p_filesz,
            "memsz": p_memsz,
            "data": data[p_offset:p_offset + p_filesz],
        })

    if not segments:
        raise ValueError("Nenhum segmento PT_LOAD encontrado")

    return segments


def vaddr_to_bytes(segments, vaddr, length):
    """Retorna `length` bytes a partir do endereco virtual `vaddr`, ou None."""
    for seg in segments:
        if seg["vaddr"] <= vaddr < seg["vaddr"] + seg["filesz"]:
            offset = vaddr - seg["vaddr"]
            available = seg["filesz"] - offset
            return seg["data"][offset:offset + min(length, available)]
    return None


def list_recompiled_addrs():
    """Le a pasta de funcoes recompiladas e retorna lista ordenada de enderecos iniciais."""
    addrs = set()
    pat = re.compile(r"_0x([0-9a-fA-F]+)\.cpp$")
    for path in glob.glob(os.path.join(RECOMPILED_DIR, "*.cpp")):
        m = pat.search(os.path.basename(path))
        if m:
            addrs.add(int(m.group(1), 16))
    return sorted(addrs)


def find_enclosing_gap(addr, all_addrs):
    """Dado um endereco, retorna (gap_start, gap_end) do buraco que o contem."""
    prev = None
    for a in all_addrs:
        if a > addr:
            return prev, a
        prev = a
    return prev, None


def disassemble(code_bytes, base_addr):
    """Desmonta MIPS little-endian. Retorna lista de tuplas (addr, hex, mnemonic, op_str)."""
    md = Cs(CS_ARCH_MIPS, CS_MODE_MIPS32 | CS_MODE_LITTLE_ENDIAN)
    md.skipdata = True
    out = []
    for ins in md.disasm(code_bytes, base_addr):
        out.append((ins.address, ins.bytes.hex(), ins.mnemonic, ins.op_str))
    return out


def print_disasm(disasm, label=""):
    if label:
        print(f"\n=== {label} ===")
    if not disasm:
        print("  (nada para desmontar)")
        return
    for addr, hexb, mnem, op in disasm:
        print(f"  0x{addr:08x}: {hexb:<8}  {mnem:<10} {op}")


def cmd_inspect(args, segments):
    start = int(args.start, 0)
    if args.end:
        end = int(args.end, 0)
        length = end - start
    else:
        length = 64 * 4  # 64 instrucoes
        end = start + length

    code = vaddr_to_bytes(segments, start, length)
    if code is None:
        print(f"ERRO: endereco 0x{start:x} fora dos segmentos do ELF", file=sys.stderr)
        sys.exit(2)

    print(f"ELF       : {ELF_PATH}")
    print(f"Faixa     : 0x{start:08x} - 0x{end:08x} ({length} bytes, ~{length//4} instrucoes)")
    print(f"Bytes     : {len(code)} lidos")
    zeros = code.count(b"\x00")
    pct = (100 * zeros // len(code)) if code else 0
    print(f"Zerados   : {zeros}/{len(code)} ({pct}%)")

    disasm = disassemble(code, start)
    print_disasm(disasm, label=f"Disassembly de 0x{start:08x}")


def cmd_gap(args, segments):
    addr = int(args.addr, 0)
    all_addrs = list_recompiled_addrs()
    if not all_addrs:
        print("ERRO: nenhuma funcao recompilada encontrada em " + RECOMPILED_DIR, file=sys.stderr)
        sys.exit(2)

    gap_start, gap_end = find_enclosing_gap(addr, all_addrs)
    if gap_start is None or gap_end is None:
        print(f"ERRO: 0x{addr:x} nao esta entre duas funcoes recompiladas", file=sys.stderr)
        sys.exit(2)

    size = gap_end - gap_start
    print(f"Endereco 0x{addr:08x} esta no gap entre funcoes recompiladas:")
    print(f"  Gap         : 0x{gap_start:08x} -> 0x{gap_end:08x} ({size} bytes)")
    print(f"  Funcao ant. : sub_*_0x{gap_start:x}")
    print(f"  Proxima fn  : sub_*_0x{gap_end:x}")

    code = vaddr_to_bytes(segments, gap_start, size)
    if code is None:
        print("ERRO: gap fora dos segmentos do ELF", file=sys.stderr)
        sys.exit(2)

    zeros = code.count(b"\x00")
    pct = (100 * zeros // len(code)) if code else 0
    print(f"  Zerados     : {zeros}/{len(code)} ({pct}%)")

    if pct >= 90:
        print(f"\n  >>> DIAGNOSTICO: gap parece ser PADDING (>=90% zeros).")
        print(f"  >>> Seguro pular pra 0x{gap_end:x}.")
    elif pct <= 10:
        print(f"\n  >>> DIAGNOSTICO: gap parece ser CODIGO REAL nao recompilado.")
        print(f"  >>> Pular para 0x{gap_end:x} pode mascarar bug; investigar implementacao.")
    else:
        print(f"\n  >>> DIAGNOSTICO: gap misto. Veja o disassembly abaixo.")

    disasm = disassemble(code, gap_start)
    print_disasm(disasm, label=f"Conteudo do gap 0x{gap_start:x}-0x{gap_end:x}")


def cmd_list_gaps(args, segments):
    all_addrs = list_recompiled_addrs()
    if not all_addrs:
        print("ERRO: nenhuma funcao recompilada encontrada", file=sys.stderr)
        sys.exit(2)

    gaps = []
    for i in range(len(all_addrs) - 1):
        a, b = all_addrs[i], all_addrs[i+1]
        size = b - a
        if size > 4:
            gaps.append((a, b, size))

    gaps.sort(key=lambda x: -x[2])

    print(f"Funcoes recompiladas : {len(all_addrs)}")
    print(f"Gaps (>4 bytes)      : {len(gaps)}")
    print(f"\nTop 30 maiores gaps (ordenados por tamanho):")
    print(f"  {'inicio':<12} {'fim':<12} {'tam':>6}  {'%zero':>5}  primeiros bytes")
    print(f"  {'-'*12} {'-'*12} {'-'*6}  {'-'*5}  {'-'*16}")

    for a, b, size in gaps[:30]:
        code = vaddr_to_bytes(segments, a, min(16, size))
        if code is None:
            print(f"  0x{a:08x}   0x{b:08x}   {size:>4} B  ?????  (fora do ELF)")
            continue
        full = vaddr_to_bytes(segments, a, size) or b""
        zeros = full.count(b"\x00")
        pct = (100 * zeros // len(full)) if full else 0
        hex_preview = code.hex()
        print(f"  0x{a:08x}   0x{b:08x}   {size:>4} B  {pct:>4}%  {hex_preview}")


def main():
    parser = argparse.ArgumentParser(
        description="Inspetor de codigo MIPS no ELF do God of War (PS2)."
    )
    sub = parser.add_subparsers(dest="cmd")

    p_ins = sub.add_parser("inspect", help="Desmonta MIPS em uma faixa de enderecos")
    p_ins.add_argument("start", help="Endereco inicial (ex: 0x10047c)")
    p_ins.add_argument("end", nargs="?", help="Endereco final (opcional, default = start+256)")

    p_gap = sub.add_parser("gap", help="Auto-detecta o gap que contem o endereco")
    p_gap.add_argument("addr", help="Endereco a investigar")

    sub.add_parser("list-gaps", help="Lista os 30 maiores gaps do recompilador")

    raw = sys.argv[1:]
    if raw and raw[0].startswith("0x"):
        raw = ["inspect"] + raw
    elif raw and raw[0] == "--gap" and len(raw) >= 2:
        raw = ["gap", raw[1]]
    elif raw and raw[0] == "--list-gaps":
        raw = ["list-gaps"]

    args = parser.parse_args(raw)

    if not args.cmd:
        parser.print_help()
        sys.exit(0)

    if not os.path.exists(ELF_PATH):
        print(f"ERRO: ELF nao encontrado em {ELF_PATH}", file=sys.stderr)
        print("(rode este script da raiz do projeto)", file=sys.stderr)
        sys.exit(2)

    segments = parse_elf(ELF_PATH)

    if args.cmd == "inspect":
        cmd_inspect(args, segments)
    elif args.cmd == "gap":
        cmd_gap(args, segments)
    elif args.cmd == "list-gaps":
        cmd_list_gaps(args, segments)


if __name__ == "__main__":
    main()
