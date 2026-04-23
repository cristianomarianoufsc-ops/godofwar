#!/usr/bin/env python3
"""Extended scan: tracks register address values across lui+addiu/ori chains
and looks for stores whose computed effective address == 0x32E854.

Handles these access idioms:
  1. lui rN, hi;        sw rt, lo(rN)
  2. lui rN, hi;        ori rN, rN, lo;       sw rt, 0(rN)
  3. lui rN, hi;        addiu rN, rN, lo;     sw rt, 0(rN)
  4. lui rN, hi;        addiu rM, rN, lo;     sw rt, 0(rM)
  5. lui rN, hi;        daddiu/daddu variants
"""
import struct

ELF = "GOD_PC_PORT_FINAL/data/SCUS_973.99"
TARGET = 0x32E854

REG_NAMES = ["$zero","$at","$v0","$v1","$a0","$a1","$a2","$a3",
    "$t0","$t1","$t2","$t3","$t4","$t5","$t6","$t7",
    "$s0","$s1","$s2","$s3","$s4","$s5","$s6","$s7",
    "$t8","$t9","$k0","$k1","$gp","$sp","$fp","$ra"]

LOADSTORE = {
    0x20:("lb",0),0x21:("lh",0),0x23:("lw",0),0x24:("lbu",0),0x25:("lhu",0),
    0x27:("lwu",0),0x37:("ld",0),0x1F:("lq",0),0x31:("lwc1",0),
    0x28:("sb",1),0x29:("sh",1),0x2B:("sw",1),0x3F:("sd",1),0x1E:("sq",1),0x39:("swc1",1),
}

def decode(word):
    op = (word >> 26) & 0x3F
    rs = (word >> 21) & 0x1F
    rt = (word >> 16) & 0x1F
    imm = word & 0xFFFF
    sdisp = imm - 0x10000 if imm & 0x8000 else imm
    funct = word & 0x3F
    rd = (word >> 11) & 0x1F
    return op, rs, rt, rd, imm, sdisp, funct

with open(ELF,"rb") as f: data = f.read()
e_shoff = struct.unpack_from("<I", data, 0x20)[0]
e_shentsz = struct.unpack_from("<H", data, 0x2e)[0]
e_shnum = struct.unpack_from("<H", data, 0x30)[0]
e_shstrndx = struct.unpack_from("<H", data, 0x32)[0]
sh_str = e_shoff + e_shstrndx*e_shentsz
str_off = struct.unpack_from("<I", data, sh_str+0x10)[0]
str_size = struct.unpack_from("<I", data, sh_str+0x14)[0]
strtab = data[str_off:str_off+str_size]
def name(off):
    end = strtab.find(b"\x00", off)
    return strtab[off:end].decode()

# Per-section scan
def scan_section(buf, base_addr, label, hits):
    # reg_value[r] = (value & 0xFFFFFFFF, source_pc) or None
    reg = [None]*32
    reg[0] = (0, 0)  # $zero always 0
    for j in range(0, len(buf)-3, 4):
        word = struct.unpack_from("<I", buf, j)[0]
        if word == 0:
            continue
        pc = base_addr + j
        op, rs, rt, rd, imm, sdisp, funct = decode(word)

        if op == 0x0F and rs == 0:
            # lui rt, imm
            reg[rt] = ((imm << 16) & 0xFFFFFFFF, pc)
            continue

        if op == 0x09 or op == 0x19:  # addiu (32) or daddiu (64) - same encoding form
            # rt = rs + sdisp
            if reg[rs] is not None:
                base_val, _ = reg[rs]
                reg[rt] = (((base_val + sdisp) & 0xFFFFFFFF), pc)
            else:
                reg[rt] = None
            continue

        if op == 0x0D:  # ori rt, rs, imm (zero-extended)
            if reg[rs] is not None:
                base_val, _ = reg[rs]
                reg[rt] = (((base_val | imm) & 0xFFFFFFFF), pc)
            else:
                reg[rt] = None
            continue

        if op == 0x00:  # SPECIAL — daddu/addu/or
            # daddu rd, rs, rt (funct=0x2D); addu rd, rs, rt (funct=0x21);
            # or rd, rs, rt (funct=0x25)
            if funct in (0x2D, 0x21, 0x25):
                if reg[rs] is not None and reg[rt] is not None:
                    a = reg[rs][0]; b = reg[rt][0]
                    if funct == 0x25:
                        reg[rd] = (((a | b) & 0xFFFFFFFF), pc)
                    else:
                        reg[rd] = (((a + b) & 0xFFFFFFFF), pc)
                else:
                    reg[rd] = None
                continue
            # other SPECIAL ops with rd dest — invalidate
            if rd != 0:
                reg[rd] = None
            continue

        if op in LOADSTORE:
            mnem, is_store = LOADSTORE[op]
            base_val_pc = reg[rs]
            if base_val_pc is not None:
                eff = (base_val_pc[0] + sdisp) & 0xFFFFFFFF
                if eff == TARGET:
                    hits.append((is_store, label, pc, mnem, REG_NAMES[rt], sdisp, REG_NAMES[rs], base_val_pc[0]))
            # Loads write to rt — invalidate tracked value
            if not is_store and rt != 0:
                reg[rt] = None
            continue

        # Any other instruction that writes rt or rd — invalidate conservatively
        # Most arithmetic immediates use rt as dest
        if op in (0x08, 0x0A, 0x0B, 0x0C, 0x0E):  # addi, slti, sltiu, andi, xori
            if rt != 0:
                reg[rt] = None

hits = []
for i in range(e_shnum):
    base = e_shoff + i*e_shentsz
    sh = struct.unpack_from("<10I", data, base)
    n = name(sh[0])
    sh_addr, sh_off, sh_size = sh[3], sh[4], sh[5]
    if sh_size == 0: continue
    if not (n == ".text" or n.startswith(".DVP.overlay")):
        continue
    buf = data[sh_off:sh_off+sh_size]
    scan_section(buf, sh_addr, n, hits)

writers = [h for h in hits if h[0]]
readers = [h for h in hits if not h[0]]
print(f"=== WRITERS to 0x{TARGET:X}: {len(writers)} ===")
for _, label, pc, m, rt, disp, rs, basev in writers:
    print(f"  [{label}]  pc=0x{pc:X}  {m} {rt}, {disp:#x}({rs})  base_val=0x{basev:X}")

print(f"\n=== READERS of 0x{TARGET:X}: {len(readers)} ===")
for _, label, pc, m, rt, disp, rs, basev in readers[:30]:
    print(f"  [{label}]  pc=0x{pc:X}  {m} {rt}, {disp:#x}({rs})  base_val=0x{basev:X}")
