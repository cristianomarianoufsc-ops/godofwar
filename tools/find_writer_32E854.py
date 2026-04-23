#!/usr/bin/env python3
"""Find any code that writes (or reads) the global at 0x32E854 in the PS2 ELF.

Manual MIPS opcode decoder (no capstone) so EE Core custom instructions
don't break the scan.

Walks every 4-byte aligned word of every PT_LOAD segment, tracks the most
recent `lui rN, imm16` per register, and when it sees a load/store using
that register as base, computes the effective address (upper<<16 + signed
disp). If it matches TARGET, prints the instruction and the lui that set it
up.
"""
import struct, sys

ELF = "GOD_PC_PORT_FINAL/data/SCUS_973.99"
TARGET = 0x32E854

REG_NAMES = [
    "$zero","$at","$v0","$v1","$a0","$a1","$a2","$a3",
    "$t0","$t1","$t2","$t3","$t4","$t5","$t6","$t7",
    "$s0","$s1","$s2","$s3","$s4","$s5","$s6","$s7",
    "$t8","$t9","$k0","$k1","$gp","$sp","$fp","$ra",
]

# (opcode, mnemonic, is_store)
LOADSTORE = {
    0x20: ("lb",  False), 0x21: ("lh", False), 0x23: ("lw", False),
    0x24: ("lbu", False), 0x25: ("lhu",False), 0x27: ("lwu",False),
    0x37: ("ld",  False),
    0x28: ("sb",  True),  0x29: ("sh", True),  0x2B: ("sw", True),
    0x3F: ("sd",  True),
    0x1F: ("lq",  False), 0x1E: ("sq", True),  # PS2 EE 128-bit
    0x31: ("lwc1",False), 0x39: ("swc1",True),
}

def decode(word):
    op = (word >> 26) & 0x3F
    rs = (word >> 21) & 0x1F
    rt = (word >> 16) & 0x1F
    imm = word & 0xFFFF
    sdisp = imm - 0x10000 if imm & 0x8000 else imm
    return op, rs, rt, imm, sdisp

with open(ELF, "rb") as f:
    data = f.read()

assert data[:4] == b"\x7fELF"
e_phoff   = struct.unpack_from("<I", data, 0x1c)[0]
e_phentsz = struct.unpack_from("<H", data, 0x2a)[0]
e_phnum   = struct.unpack_from("<H", data, 0x2c)[0]

writers, readers = [], []

for i in range(e_phnum):
    base = e_phoff + i*e_phentsz
    p_type, p_off, p_vaddr, _, p_filesz, p_memsz, _, _ = struct.unpack_from("<8I", data, base)
    if p_type != 1 or p_filesz == 0:
        continue
    print(f"PT_LOAD vaddr=0x{p_vaddr:x} filesz=0x{p_filesz:x} memsz=0x{p_memsz:x}")
    seg = data[p_off:p_off+p_filesz]
    last_lui = {}  # rt_index -> (upper_value_shifted, lui_pc)
    for j in range(0, len(seg) - 3, 4):
        word = struct.unpack_from("<I", seg, j)[0]
        pc = p_vaddr + j
        op, rs, rt, imm, sdisp = decode(word)
        if op == 0x0F and rs == 0:
            # lui rt, imm
            last_lui[rt] = ((imm << 16) & 0xFFFFFFFF, pc)
            continue
        if op in LOADSTORE and rs in last_lui:
            upper, lui_pc = last_lui[rs]
            eff = (upper + sdisp) & 0xFFFFFFFF
            if eff == TARGET:
                mnem, is_store = LOADSTORE[op]
                rec = (pc, lui_pc, mnem, REG_NAMES[rt], sdisp, REG_NAMES[rs])
                (writers if is_store else readers).append(rec)
        # Conservative: if this instruction defines rt that aliased lui, invalidate
        # (only for ops that *write* to rt_index; we keep it loose for now)

print(f"\n=== WRITERS to 0x{TARGET:X}: {len(writers)} ===")
for pc, lui_pc, m, rt, disp, rs in writers:
    print(f"  pc=0x{pc:X}  (lui at 0x{lui_pc:X})  {m} {rt}, {disp:#x}({rs})")

print(f"\n=== READERS of 0x{TARGET:X}: {len(readers)} ===")
for pc, lui_pc, m, rt, disp, rs in readers:
    print(f"  pc=0x{pc:X}  (lui at 0x{lui_pc:X})  {m} {rt}, {disp:#x}({rs})")
