#!/usr/bin/env python3
"""gap_discover.py - Descobre funcoes ausentes nos gaps do recompilador.

O PS2Recomp gera C++ apenas para funcoes presentes na tabela de simbolos do
ELF (e opcionalmente num mapa Ghidra). Quando o ELF tem poucos simbolos -
caso do SCUS_973.99 - milhares de funcoes reais ficam de fora e viram "gaps"
entre as funcoes recompiladas.

Este script varre cada gap procurando por prologues de funcao MIPS/R5900
(addiu/daddiu $sp,$sp,-X) e detecta os pontos de entrada candidatos. A saida
e um CSV no formato exato que o `loadGhidraFunctionMap` do PS2Recomp espera:
    name,start,end,size

Depois de gerar o CSV, basta apontar o recompilador para ele via
`ghidra_output = "..."` no config TOML do recompilador, rebuildar o projeto
e os 4895 gaps viram .cpp recompilados.

Uso:
    python3 tools/gap_discover.py              # gera tools/discovered_functions.csv
    python3 tools/gap_discover.py -o saida.csv # caminho de saida customizado
    python3 tools/gap_discover.py --report     # so imprime resumo, nao escreve CSV
    python3 tools/gap_discover.py --min-size 8 # gap minimo (em bytes) para varrer
"""

import os
import sys
import re
import glob
import struct
import argparse

ELF_PATH = "GOD_PC_PORT_FINAL/data/SCUS_973.99"
RECOMPILED_DIR = "GOD_PC_PORT_FINAL/src/recompiled"
DEFAULT_OUTPUT = "tools/discovered_functions.csv"


def parse_elf(elf_path):
    with open(elf_path, "rb") as f:
        data = f.read()
    if data[:4] != b"\x7fELF":
        raise ValueError(f"{elf_path} nao e um ELF valido")
    if data[4] != 1 or data[5] != 1:
        raise ValueError("Esperado ELF 32-bit little-endian")
    e_phoff = struct.unpack("<I", data[28:32])[0]
    e_phentsize = struct.unpack("<H", data[42:44])[0]
    e_phnum = struct.unpack("<H", data[44:46])[0]
    segments = []
    for i in range(e_phnum):
        off = e_phoff + i * e_phentsize
        p_type = struct.unpack("<I", data[off:off+4])[0]
        if p_type != 1:
            continue
        p_offset = struct.unpack("<I", data[off+4:off+8])[0]
        p_vaddr = struct.unpack("<I", data[off+8:off+12])[0]
        p_filesz = struct.unpack("<I", data[off+16:off+20])[0]
        segments.append({
            "vaddr": p_vaddr,
            "filesz": p_filesz,
            "data": data[p_offset:p_offset + p_filesz],
        })
    if not segments:
        raise ValueError("Nenhum segmento PT_LOAD encontrado")
    return segments


def vaddr_to_bytes(segments, vaddr, length):
    for seg in segments:
        if seg["vaddr"] <= vaddr < seg["vaddr"] + seg["filesz"]:
            offset = vaddr - seg["vaddr"]
            available = seg["filesz"] - offset
            return seg["data"][offset:offset + min(length, available)]
    return None


def list_recompiled_ranges():
    """Le os .cpp recompilados e retorna lista ordenada de (start, end).

    O fim real vem do comentario `// Address: 0xX - 0xY` que o PS2Recomp
    insere em todo .cpp gerado. Com isso identificamos os gaps de verdade
    (espaco entre o FIM de uma funcao e o INICIO da proxima), nao apenas a
    distancia ingenua entre starts consecutivos.
    """
    addr_re = re.compile(r"^//\s*Address:\s*0x([0-9a-fA-F]+)\s*-\s*0x([0-9a-fA-F]+)",
                         re.MULTILINE)
    fname_re = re.compile(r"_0x([0-9a-fA-F]+)\.cpp$")
    ranges = {}  # start -> max_end (caso varios .cpp apontem pro mesmo start)
    for path in glob.glob(os.path.join(RECOMPILED_DIR, "*.cpp")):
        fm = fname_re.search(os.path.basename(path))
        if not fm:
            continue
        # le so as primeiras ~600 chars (header costuma estar no inicio)
        try:
            with open(path, "r") as f:
                head = f.read(600)
        except OSError:
            continue
        m = addr_re.search(head)
        if not m:
            continue
        start = int(m.group(1), 16)
        end = int(m.group(2), 16)
        if end <= start:
            continue
        prev = ranges.get(start)
        if prev is None or end > prev:
            ranges[start] = end
    return sorted(ranges.items())


def is_prologue_word(word):
    """True se word for `addiu $sp,$sp,-X` ou `daddiu $sp,$sp,-X` (X>0).

    addiu  : 001001 11101 11101 imm16   = 0x27BD0000 | imm  (opcode 0x09)
    daddiu : 011001 11101 11101 imm16   = 0x67BD0000 | imm  (opcode 0x19, R5900)
    Decremento de stack => imm tem bit 15 setado (negativo em sign-extend).
    Tambem exigimos alinhamento de 16 bytes (PS2 usa stack 16-aligned).
    """
    if (word & 0xFFFF0000) not in (0x27BD0000, 0x67BD0000):
        return False
    imm = word & 0xFFFF
    if imm < 0x8000:        # nao e negativo => nao e prologue
        return False
    signed = imm - 0x10000  # converte para int negativo
    if signed % 16 != 0:    # PS2 alinha stack em 16
        return False
    return True


JR_RA_WORD = 0x03E00008  # jr $ra


def scan_gap_for_functions(segments, gap_start, gap_end):
    """Varre o gap e retorna lista de (start, end) para cada funcao detectada.

    Estrategia: identifica todos os prologues no gap; cada prologue inicia
    uma funcao e o final dela e o endereco do proximo prologue (ou o fim
    do gap). Refina o end procurando o `jr $ra` mais distante dentro
    desse intervalo (caso contrario captaria padding entre funcoes).
    """
    size = gap_end - gap_start
    code = vaddr_to_bytes(segments, gap_start, size)
    if code is None or len(code) < 4:
        return []

    # 1) acha todos os offsets de prologue
    prologue_offsets = []
    for off in range(0, len(code) - 3, 4):
        word = struct.unpack_from("<I", code, off)[0]
        if is_prologue_word(word):
            prologue_offsets.append(off)
    if not prologue_offsets:
        return []

    # 2) define tentative end de cada funcao = inicio da proxima
    #    (ou fim do gap pra ultima)
    tentative = []
    for i, off in enumerate(prologue_offsets):
        end_off = prologue_offsets[i+1] if i+1 < len(prologue_offsets) else len(code)
        tentative.append((off, end_off))

    # 3) refina o end: corta no ultimo `jr $ra` (+ delay slot) antes do proximo
    #    prologue. Isso evita capturar padding entre funcoes.
    funcs = []
    for off, end_off in tentative:
        last_jr_off = None
        for w_off in range(off + 4, min(end_off, len(code)) - 3, 4):
            w = struct.unpack_from("<I", code, w_off)[0]
            if w == JR_RA_WORD:
                last_jr_off = w_off
        if last_jr_off is not None:
            # funcao termina apos o jr + delay slot
            real_end_off = last_jr_off + 8
        else:
            # sem jr $ra detectado -> usa o tentative end
            real_end_off = end_off
        if real_end_off <= off:
            continue
        funcs.append((gap_start + off, gap_start + real_end_off))

    return funcs


def discover_all(segments, recompiled_ranges, min_gap_size):
    """Itera sobre os gaps reais (entre fim e proximo inicio) e descobre funcoes.

    `recompiled_ranges` e lista ordenada de (start, end) das funcoes ja
    recompiladas. Gap real = espaco entre `end_i` e `start_{i+1}`.
    """
    discovered = []
    gaps_scanned = 0
    gaps_with_hits = 0
    real_gap_count = 0
    real_gap_bytes = 0
    for i in range(len(recompiled_ranges) - 1):
        _, prev_end = recompiled_ranges[i]
        next_start, _ = recompiled_ranges[i+1]
        if next_start <= prev_end:
            continue  # sem gap real (ou funcoes sobrepostas)
        size = next_start - prev_end
        real_gap_count += 1
        real_gap_bytes += size
        if size < min_gap_size:
            continue
        gaps_scanned += 1
        funcs = scan_gap_for_functions(segments, prev_end, next_start)
        if funcs:
            gaps_with_hits += 1
            discovered.extend(funcs)
    return discovered, gaps_scanned, gaps_with_hits, real_gap_count, real_gap_bytes


def write_csv(out_path, discovered, recompiled_addrs):
    """Escreve CSV no formato esperado por loadGhidraFunctionMap.

    Formato: header (1a linha ignorada pelo parser) + linhas
        name,start,end,size
    com numeros em hex prefixado.
    Tambem inclui as funcoes ja conhecidas (recompiladas) para que o mapa
    Ghidra seja completo - o loader do PS2Recomp lida com duplicatas.
    """
    os.makedirs(os.path.dirname(out_path) or ".", exist_ok=True)
    with open(out_path, "w") as f:
        f.write("name,start,end,size\n")
        # discovered (sintetizadas)
        for start, end in discovered:
            name = f"discovered_0x{start:x}"
            f.write(f"{name},0x{start:x},0x{end:x},{end-start}\n")


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("-o", "--output", default=DEFAULT_OUTPUT,
                    help=f"caminho do CSV de saida (default: {DEFAULT_OUTPUT})")
    ap.add_argument("--min-size", type=int, default=8,
                    help="gap minimo em bytes para varrer (default: 8)")
    ap.add_argument("--report", action="store_true",
                    help="apenas imprime resumo, nao escreve CSV")
    ap.add_argument("--top", type=int, default=15,
                    help="quantas funcoes descobertas mostrar no resumo (default: 15)")
    args = ap.parse_args()

    if not os.path.exists(ELF_PATH):
        print(f"ERRO: ELF nao encontrado em {ELF_PATH}", file=sys.stderr)
        sys.exit(2)
    if not os.path.isdir(RECOMPILED_DIR):
        print(f"ERRO: pasta de recompilados nao encontrada em {RECOMPILED_DIR}",
              file=sys.stderr)
        sys.exit(2)

    print(f"ELF                  : {ELF_PATH}")
    segments = parse_elf(ELF_PATH)
    recompiled = list_recompiled_ranges()
    print(f"Funcoes recompiladas : {len(recompiled)} (com fim conhecido)")

    discovered, gaps_scanned, gaps_with_hits, real_gap_count, real_gap_bytes = \
        discover_all(segments, recompiled, args.min_size)

    print(f"Gaps reais (qualquer): {real_gap_count} ({real_gap_bytes} bytes)")
    print()
    print(f"Gaps >= {args.min_size} bytes (varridos): {gaps_scanned}")
    print(f"Gaps com >=1 hit     : {gaps_with_hits}")
    print(f"Funcoes descobertas  : {len(discovered)}")
    if discovered:
        sizes = [e - s for s, e in discovered]
        sizes.sort()
        print(f"  Tamanho min        : {sizes[0]} bytes")
        print(f"  Tamanho mediano    : {sizes[len(sizes)//2]} bytes")
        print(f"  Tamanho max        : {sizes[-1]} bytes")
        print(f"  Total bytes cobr.  : {sum(sizes)} bytes")

    print()
    print(f"Top {args.top} funcoes descobertas (por tamanho):")
    print(f"  {'start':<12} {'end':<12} {'size':>8}")
    print(f"  {'-'*12} {'-'*12} {'-'*8}")
    for s, e in sorted(discovered, key=lambda x: -(x[1]-x[0]))[:args.top]:
        print(f"  0x{s:08x}   0x{e:08x}   {e-s:>6} B")

    if args.report:
        print("\n(--report: nao escrevi CSV)")
        return

    write_csv(args.output, discovered, recompiled)
    print()
    print(f"CSV gravado em       : {args.output}")
    print()
    print("Proximo passo:")
    print("  1) No config TOML do recompilador, defina:")
    print(f'       ghidra_output = "{args.output}"')
    print("  2) Rode o recompilador novamente para regenerar os .cpp.")
    print("  3) bash rebuild_runtime.sh")


if __name__ == "__main__":
    main()
