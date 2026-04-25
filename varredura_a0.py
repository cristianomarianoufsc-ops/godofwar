#!/usr/bin/env python3
"""
varredura_a0.py — Analisa o ELF do God of War (SCUS_973.99) para:

1. Encontrar candidatos validos para PS2_FORCE_A0:
   Enderecos 'addr' onde [addr+0x18] aponta para codigo valido no ELF
   (range 0x100000 - 0x35d080), ou seja, struct boot_arg com handler nao-nulo.

2. Investigar o endereco 0x00080004:
   Verificar se algum segmento ELF carrega codigo nessa faixa baixa de RAM,
   e mostrar o contexto dos objetos que apontam para ele.

3. Disassemblar (via capstone) a regiao de sub_00100408 em torno do JALR 0x100474
   para confirmar a cadeia de ponteiros que leva a 0x00080004.

Uso:
    python3 varredura_a0.py [caminho_elf]

Saida:
    - Candidatos de $a0 ordenados por chance de sucesso
    - Investigacao do 0x00080004
    - Disassembly do loop de objetos em sub_00100408
"""

import struct
import sys
import os

ELF_PATH = sys.argv[1] if len(sys.argv) > 1 else "GOD_PC_PORT_FINAL/data/SCUS_973.99"
CODE_START = 0x100000
CODE_END   = 0x35d080
RAM_SIZE   = 32 * 1024 * 1024  # 32 MB

RESET = "\033[0m"
BOLD  = "\033[1m"
RED   = "\033[31m"
GRN   = "\033[32m"
YEL   = "\033[33m"
CYN   = "\033[36m"

def u32(data, off):
    if off + 4 > len(data):
        return 0
    return struct.unpack_from("<I", data, off)[0]

def load_elf(path):
    """Carrega o ELF e retorna buffer de RAM virtual de 32 MB."""
    ram = bytearray(RAM_SIZE)

    with open(path, "rb") as f:
        data = f.read()

    # Verifica magic ELF
    if data[:4] != b'\x7fELF':
        print(f"[ERRO] Nao e um ELF valido: {path}")
        sys.exit(1)

    # Lê o ELF header (32-bit LE, MIPS)
    e_phoff   = struct.unpack_from("<I", data, 0x1C)[0]
    e_phentsize = struct.unpack_from("<H", data, 0x2A)[0]
    e_phnum   = struct.unpack_from("<H", data, 0x2C)[0]
    e_entry   = struct.unpack_from("<I", data, 0x18)[0]

    segments = []
    for i in range(e_phnum):
        off = e_phoff + i * e_phentsize
        p_type   = struct.unpack_from("<I", data, off + 0x00)[0]
        p_offset = struct.unpack_from("<I", data, off + 0x04)[0]
        p_vaddr  = struct.unpack_from("<I", data, off + 0x08)[0]
        p_filesz = struct.unpack_from("<I", data, off + 0x10)[0]
        p_memsz  = struct.unpack_from("<I", data, off + 0x14)[0]

        if p_type == 1 and p_filesz > 0:  # PT_LOAD
            end = p_vaddr + p_filesz
            if p_vaddr < RAM_SIZE and end <= RAM_SIZE:
                ram[p_vaddr:p_vaddr + p_filesz] = data[p_offset:p_offset + p_filesz]
                segments.append((p_vaddr, p_vaddr + p_memsz, p_filesz))
                print(f"  [ELF seg] vaddr=0x{p_vaddr:08x} filesz=0x{p_filesz:08x} memsz=0x{p_memsz:08x}")
            else:
                print(f"  [ELF seg SKIP] vaddr=0x{p_vaddr:08x} fora da RAM ({p_filesz} bytes)")

    return ram, e_entry, segments

def is_code(addr):
    return CODE_START <= addr < CODE_END

def scan_candidates(ram):
    """
    Varre toda a RAM carregada procurando 'addr' onde:
      - [addr+0x18] aponta para codigo valido (candidato boot_arg handler)
      - addr esta no range de codigo ou BSS
    """
    candidates = []
    step = 4  # alinhamento de word

    for addr in range(CODE_START, CODE_END, step):
        # Le [addr+0x18]
        val18 = u32(ram, addr + 0x18)
        if not is_code(val18):
            continue

        # Criterio extra: [addr+0x20] qualquer valor interessante
        val00 = u32(ram, addr + 0x00)
        val20 = u32(ram, addr + 0x20)
        val24 = u32(ram, addr + 0x24)

        score = 0
        # Handler valido (principal criterio)
        score += 10
        # [addr+0x20] e [addr+0x24] nao-nulos = struct mais preenchida
        if val20 != 0:
            score += 2
        if val24 != 0:
            score += 2
        # [addr+0x00] nao-nulo mas dentro do range
        if val00 != 0:
            score += 1

        candidates.append((score, addr, val00, val18, val20, val24))

    candidates.sort(key=lambda x: -x[0])
    return candidates

def investigate_0x80004(ram):
    """
    Verifica se existem dados em torno de 0x00080004 na RAM carregada,
    e procura referencias a esse endereco no segmento de codigo.
    """
    target = 0x00080004
    print(f"\n{BOLD}=== Investigando 0x{target:08x} ==={RESET}")

    # Verifica memoria ao redor
    base = target & ~0xF
    print(f"\n  Memoria ao redor de 0x{target:08x}:")
    for off in range(0, 0x40, 4):
        addr = base + off
        if addr >= RAM_SIZE:
            break
        v = u32(ram, addr)
        marker = " <-- TARGET" if addr == target else ""
        print(f"    [0x{addr:08x}] = 0x{v:08x}{marker}")

    # Procura referencias a 0x80004 no codigo ELF (como valor imediato de LUI/ADDIU)
    print(f"\n  Procurando refs a 0x{target:08x} no codigo (0x{CODE_START:x}-0x{CODE_END:x})...")
    refs = []
    for addr in range(CODE_START, CODE_END, 4):
        word = u32(ram, addr)
        # LUI rd, 0x8  (carrega parte alta = 0x80000)
        if (word >> 16) == 0x3c00 | ((target >> 16) & 0x1f):
            refs.append((addr, word, "possible_LUI"))
        # Valor exato como constante de 32 bits (raro em MIPS mas possivel em dados)
        if word == target:
            refs.append((addr, word, "exact_match_in_code"))

    # Procura em toda a RAM carregada como dado (ponteiro armazenado)
    print(f"\n  Procurando 0x{target:08x} como ponteiro armazenado em dados...")
    data_refs = []
    for addr in range(CODE_START, CODE_END, 4):
        if u32(ram, addr) == target:
            data_refs.append(addr)

    if data_refs:
        print(f"  {YEL}Encontrado como dado em:{RESET}")
        for r in data_refs[:20]:
            ctx_before = u32(ram, r - 4) if r >= 4 else 0
            ctx_after  = u32(ram, r + 4)
            print(f"    [0x{r:08x}] = 0x{target:08x}  (antes: 0x{ctx_before:08x}, depois: 0x{ctx_after:08x})")
    else:
        print(f"  {RED}Nao encontrado como ponteiro em nenhum lugar do ELF carregado.{RESET}")
        print(f"  {YEL}=> 0x00080004 e populado em RUNTIME pelo boot PS2 (nao esta no ELF).{RESET}")

def disasm_0x100408_jalr_chain(ram):
    """Disassembla a regiao critica de sub_00100408 em torno do JALR."""
    try:
        import capstone
    except ImportError:
        print(f"\n{YEL}capstone nao disponivel, pulando disassembly.{RESET}")
        return

    print(f"\n{BOLD}=== Disassembly sub_00100408 — cadeia do JALR ==={RESET}")
    # Range: 0x100438 ate 0x1004b8 (o loop de objetos)
    start = 0x100438
    end   = 0x1004c0
    code_bytes = bytes(ram[start:end])

    md = capstone.Cs(capstone.CS_ARCH_MIPS, capstone.CS_MODE_MIPS32 | capstone.CS_MODE_LITTLE_ENDIAN)
    md.detail = True

    for insn in md.disasm(code_bytes, start):
        marker = ""
        if insn.address == 0x100474:
            marker = f"  {RED}<= JALR PROBLEMATICO{RESET}"
        elif insn.address in (0x100464, 0x10046c, 0x100470):
            marker = f"  {YEL}<= cadeia que carrega o target{RESET}"
        print(f"  0x{insn.address:08x}:  {insn.mnemonic:<10} {insn.op_str}{marker}")

def explain_loop():
    """Explica o que o loop em sub_00100408 esta fazendo."""
    print(f"""
{BOLD}=== Como sub_00100408 usa o ponteiro de funcao ==={RESET}

  O loop em sub_00100408 (0x100438 - 0x100498) itera por uma lista de objetos.
  Para cada objeto (s0):

    lw  $v0, 0x5C($s0)       # v0 = ponteiro para "vtable/desc" do objeto
    lh  $a0, 0x8($v0)        # a0 = short em desc+0x08 (provavelmente tipo/ID)
    lw  $v0, 0xC($v0)        # v0 = funcao em desc+0x0C  <== ESTE vai para 0x00080004
    jalr $v0                  # chama a funcao do objeto
    addu $a0, $s0, $a0        # (delay slot) a0 = obj + offset_tipo

  O valor 0x00080004 em desc+0x0C sugere:
  - A "desc" dos objetos foi criada pelo boot PS2 em tempo de execucao
  - Esse handler (0x00080004) e uma funcao de sistema carregada pelo IOP ou
    pelo kernel PS2 na RAM baixa (abaixo de 0x100000)
  - Como pulamos o crt0 / boot completo, essa regiao nunca foi populada

  {YEL}Possiveis interpretacoes de 0x00080004:{RESET}
  A) Handler de callback de sistema (registrado pelo __libc_init / kernel EE)
  B) Funcao de modulo IOP na RAM do IOP (0x1C000000+ no PS2 real)
  C) Vetor de excecao/interrupt do EE (unlikely — esses ficam em 0x80000000+)

  {GRN}O que fazer:{RESET}
  - Se a funcao e apenas um "callback de progresso" ou "tick" basico,
    um stub que nao faz nada (nop) pode ser suficiente — o loop ja
    continua mesmo com o nop (Guard Bug D no codigo).
  - A questao e: esse nop esta impedindo a inicializacao de algo critico?
    Observe que global@0x32E854 permanece 0 mesmo apos 40+ iteracoes.
""")

def main():
    print(f"{BOLD}varredura_a0.py — God of War PS2 Boot Args Scanner{RESET}")
    print(f"ELF: {ELF_PATH}\n")

    if not os.path.exists(ELF_PATH):
        print(f"{RED}[ERRO] ELF nao encontrado: {ELF_PATH}{RESET}")
        sys.exit(1)

    print("Carregando ELF em RAM virtual...")
    ram, entry, segments = load_elf(ELF_PATH)
    print(f"Entry point: 0x{entry:08x}")

    # 1. Candidatos para $a0
    print(f"\n{BOLD}=== Candidatos para PS2_FORCE_A0 ==={RESET}")
    print(f"Critério: [addr+0x18] aponta para código valido (0x{CODE_START:x}-0x{CODE_END:x})")
    print("Varrendo... (pode levar alguns segundos)")
    candidates = scan_candidates(ram)

    if not candidates:
        print(f"{RED}Nenhum candidato encontrado.{RESET}")
    else:
        print(f"\n{GRN}Top 30 candidatos (por score):{RESET}")
        print(f"{'Rank':<5} {'Addr (PS2_FORCE_A0)':<22} {'[+0x00]':<12} {'[+0x18] handler':<16} {'[+0x20]':<12} {'[+0x24]':<12} Score")
        print("-" * 95)
        for i, (score, addr, v00, v18, v20, v24) in enumerate(candidates[:30]):
            handler_ok = f"{GRN}0x{v18:08x}{RESET}" if is_code(v18) else f"{RED}0x{v18:08x}{RESET}"
            print(f"  {i+1:<4} 0x{addr:08x} (={addr})  0x{v00:08x}   {handler_ok}   0x{v20:08x}   0x{v24:08x}   {score}")

        print(f"\n{YEL}Para testar o candidato #1:{RESET}")
        best = candidates[0][1]
        print(f"  PS2_FORCE_A0=0x{best:08x} PS2_TRACE=1 bash jogar.sh 2>&1 | tee log_a0_candidate1.txt")

        # Verifica se 0x2cf070 esta na lista
        gp_val = 0x2cf070
        gp_in_list = [(i, c) for i, c in enumerate(candidates) if c[1] == gp_val]
        if gp_in_list:
            idx, c = gp_in_list[0]
            print(f"\n  {CYN}Nota: PS2_FORCE_A0=0x2cf070 (ja testado) esta na posicao #{idx+1} com score={c[0]}{RESET}")
            print(f"  [0x2cf070+0x18] = 0x{c[3]:08x} {'(codigo valido!)' if is_code(c[3]) else '(ZERO ou invalido)'}")
        else:
            print(f"\n  {YEL}Nota: 0x2cf070 NAO tem [+0x18] valido (handler=0) — confirma o log.{RESET}")
            print(f"  [0x2cf070+0x18] = 0x{u32(ram, 0x2cf070+0x18):08x}")

    # 2. Investiga 0x00080004
    investigate_0x80004(ram)

    # 3. Explicacao do loop
    explain_loop()

    # 4. Disassembly
    disasm_0x100408_jalr_chain(ram)

    # 5. Resumo e proximo passo
    print(f"\n{BOLD}=== RESUMO E RECOMENDACAO ==={RESET}")
    print(f"""
  Estado atual (com PS2_FORCE_A0=0x2cf070):
  - Game loop (func_238860) esta rodando — PROGRESSO ENORME
  - JALR para 0x00080004 vira nop (Guard Bug D) — loop continua mas sem efeito
  - global@0x32E854 permanece 0 — handler de evento nao e chamado

  {BOLD}Proximos passos recomendados (em ordem de prioridade):{RESET}

  {GRN}[A] CURTO PRAZO — Stub para 0x00080004:{RESET}
      Registrar 0x00080004 no dispatcher com um stub que:
      - Logue o que seria chamado ($a0, $a1, $pc, ra)
      - Retorne normalmente (nao crash)
      Isso vai revelar o que o jogo espera que essa funcao faca.

  {GRN}[B] MEDIO PRAZO — Candidato correto de $a0:{RESET}
      Testar os candidatos acima onde [addr+0x18] e codigo valido.
      Com handler != 0, main chamara func_131288 antes do game loop,
      potencialmente inicializando global@0x32E854 e jalr_target.

  {GRN}[C] LONGO PRAZO — Entender quem deveria chamar main:{RESET}
      Rastrear sub_0029AA88 e seus callees para achar o jal 0x1003c0
      com o $a0 correto — essa e a solucao "correta" que evitaria
      qualquer hack de FORCE_A0.
""")

if __name__ == "__main__":
    main()
