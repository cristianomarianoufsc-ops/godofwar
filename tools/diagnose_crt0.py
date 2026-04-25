#!/usr/bin/env python3
"""Diagnostico cirurgico do crt0 (entry_0x100008).

Compara o conteudo atual de src/recompiled/entry_0x100008.cpp (e arquivos
adjacentes ate 0x100db8) contra o que DEVERIA estar la, decodificando o
ELF real. Reporta em linguagem clara o que esta faltando.

Uso: uv run python tools/diagnose_crt0.py
     (ou: python3 tools/diagnose_crt0.py)
"""
import os
import re
import struct
import sys

ELF = "GOD_PC_PORT_FINAL/data/SCUS_973.99"
TEXT_VADDR = 0x100000
TEXT_FOFF = 0x1000
CRT0_START = 0x100008
CRT0_END = 0x100db8
RECOMP_DIR = "src/recompiled"

# Marcos criticos do crt0 que TEM que aparecer no .cpp recompilado
# (codificados como instrucao MIPS hex, descricao em pt-BR, severidade)
CRITICAL_MARKERS = [
    (0x10012c, 0x7c400000, "BSS clear loop (sq $zero, 0($v0))",        "CRITICO"),
    (0x100140, 0x1420fffa, "BSS clear loop branch (bne $at, $zero)",   "CRITICO"),
    (0x100170, 0x0080e02d, "Setup do $gp (daddu $gp, $a0, $zero)",     "CRITICO"),
    (0x100178, 0x0000000c, "Syscall 60 (kernel init - SetupThread?)",  "ALTO"),
    (0x10017c, 0x0040e82d, "Setup do $sp (daddu $sp, $v0, $zero)",     "CRITICO"),
    (0x100194, 0x0000000c, "Syscall 61 (kernel init)",                 "ALTO"),
    (0x100198, 0x0c0a6528, "jal 0x002994a0 (provavelmente __libc_init)", "ALTO"),
    (0x1001a0, 0x0c0a4fa8, "jal 0x00293ea0 (provavelmente init libs)",   "ALTO"),
    (0x1001a8, 0x0c04e32c, "jal 0x00138cb0 (provavelmente main())",      "CRITICO"),
]

PATCH_HACK_MARKER = "Patch: Jump to next entry point"


def read_elf_word(data, vaddr):
    """Le 4 bytes do ELF no virtual address dado."""
    foff = vaddr - TEXT_VADDR + TEXT_FOFF
    return struct.unpack_from("<I", data, foff)[0]


def parse_recomp_header(path):
    """Extrai o range declarado no header do .cpp ('// Address: 0xS - 0xE').
    Le o arquivo INTEIRO para que checagens (ex: Patch hack) funcionem."""
    try:
        with open(path) as f:
            content = f.read()
    except OSError:
        return None
    m = re.search(r"// Address:\s*0x([0-9a-fA-F]+)\s*-\s*0x([0-9a-fA-F]+)", content)
    if not m:
        return None
    return int(m.group(1), 16), int(m.group(2), 16), content


_CPP_CACHE = None  # lista de (start, end, name, content) parseados uma vez


def _build_cpp_cache():
    """Le todos os .cpp em src/recompiled/ uma vez, cacheia (start, end, name, content)."""
    global _CPP_CACHE
    if _CPP_CACHE is not None:
        return _CPP_CACHE
    _CPP_CACHE = []
    if not os.path.isdir(RECOMP_DIR):
        return _CPP_CACHE
    for name in sorted(os.listdir(RECOMP_DIR)):
        if not name.endswith(".cpp"):
            continue
        info = parse_recomp_header(os.path.join(RECOMP_DIR, name))
        if info is None:
            continue
        s, e, content = info
        _CPP_CACHE.append((s, e, name, content))
    return _CPP_CACHE


def find_cpp_for_addr(addr):
    """Encontra qual .cpp em src/recompiled/ contem 'addr' no range declarado."""
    for s, e, name, content in _build_cpp_cache():
        if s <= addr < e:
            return name, s, e, content
    return None


def addr_appears_in_cpp(addr, content):
    """Procura no .cpp linhas que mencionem este endereco como ctx->pc."""
    needles = [f"0x{addr:x}u", f"0x{addr:X}u", f"{addr:#x}", f"// 0x{addr:x}:"]
    return any(n.lower() in content.lower() for n in needles)


def main():
    if not os.path.isfile(ELF):
        print(f"[FATAL] ELF nao encontrado: {ELF}", file=sys.stderr)
        sys.exit(2)

    with open(ELF, "rb") as f:
        elf_data = f.read()

    print("=" * 70)
    print("DIAGNOSTICO DO crt0 (entry @ 0x100008)")
    print("=" * 70)
    print()

    # 1) Verifica o arquivo principal entry_0x100008.cpp
    main_path = os.path.join(RECOMP_DIR, "entry_0x100008.cpp")
    if not os.path.isfile(main_path):
        print(f"[FATAL] Arquivo nao existe: {main_path}")
        sys.exit(2)
    info = parse_recomp_header(main_path)
    if info is None:
        print(f"[FATAL] Cabecalho '// Address: ...' nao encontrado em {main_path}")
        sys.exit(2)
    s, e, content = info
    declared_size = e - s
    expected_size = CRT0_END - CRT0_START
    print(f"[1/3] Header de entry_0x100008.cpp")
    print(f"      Declarado: 0x{s:08x} - 0x{e:08x}  (tamanho {declared_size} bytes)")
    print(f"      Esperado:  0x{CRT0_START:08x} - 0x{CRT0_END:08x}  (tamanho {expected_size} bytes)")
    if e < CRT0_END:
        falta = CRT0_END - e
        print(f"      [PROBLEMA] Range curto em {falta} bytes (~{falta // 4} instrucoes faltando)")
    else:
        print(f"      [OK] Range cobre o crt0 inteiro")

    has_hack = PATCH_HACK_MARKER in content
    print(f"      'Patch hack' presente? {'SIM (BUG)' if has_hack else 'NAO'}")
    print()

    # 2) Para cada marco critico, verifica se a instrucao esperada esta no
    #    .cpp que cobre aquele endereco.
    print("[2/3] Verificacao das instrucoes criticas do crt0")
    print()
    print(f"  {'Endereco':>12}  {'Severidade':>10}  {'Status':>10}  Descricao")
    print(f"  {'-' * 12:>12}  {'-' * 10:>10}  {'-' * 10:>10}  {'-' * 50}")

    missing_critico = 0
    missing_alto = 0
    for addr, expected_word, desc, sev in CRITICAL_MARKERS:
        actual_word = read_elf_word(elf_data, addr)
        if actual_word != expected_word:
            status = "ELF-DIFF"  # ELF nao tem o que esperamos (sanity check)
            note = f" (ELF tem 0x{actual_word:08x}, esperava 0x{expected_word:08x})"
        else:
            found = find_cpp_for_addr(addr)
            if found is None:
                status = "AUSENTE"
                note = " (nenhum .cpp cobre este endereco)"
                if sev == "CRITICO":
                    missing_critico += 1
                elif sev == "ALTO":
                    missing_alto += 1
            else:
                fname, fs, fe, fcontent = found
                if addr_appears_in_cpp(addr, fcontent):
                    status = "OK"
                    note = f" (em {fname})"
                else:
                    status = "FALTA"
                    note = f" (esperado em {fname}, mas nao traduzido)"
                    if sev == "CRITICO":
                        missing_critico += 1
                    elif sev == "ALTO":
                        missing_alto += 1
        print(f"  0x{addr:08x}  {sev:>10}  {status:>10}  {desc}{note}")

    print()

    # 3) Veredito
    print("[3/3] Veredito")
    print()
    if missing_critico == 0 and missing_alto == 0 and not has_hack and e >= CRT0_END:
        print("  [OK] crt0 parece completo.")
        print("       Se o jogo ainda crasha com gp=0x0, o problema NAO esta")
        print("       em entry_0x100008.cpp. Investigar o tradutor do ps2_recomp")
        print("       (talvez 'daddu \\$gp, ...' nao esta gerando codigo valido).")
        sys.exit(0)
    else:
        print(f"  [FALHA] {missing_critico} instrucao(oes) CRITICA(S) ausente(s),"
              f" {missing_alto} ALTA(S) ausente(s).")
        if has_hack:
            print("  [FALHA] 'Patch hack' presente - faz o crt0 saltar tudo que esta faltando.")
        print()
        print("  ACAO NECESSARIA:")
        print("    1) bash tools/regen_truncated.sh --all")
        print("    2) bash recompilar.sh")
        print("    3) Rodar este script de novo: uv run python tools/diagnose_crt0.py")
        print()
        print("  Se apos a regeneracao o problema persistir, abra um issue/escreva")
        print("  para o agente:")
        print("    'crt0 declarado 0x100008-0x10008c apos regen --all; ps2_recomp")
        print("    nao esta expandindo o range mesmo com truncation_overrides.csv'")
        sys.exit(1)


if __name__ == "__main__":
    main()
