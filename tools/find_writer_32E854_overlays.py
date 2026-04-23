#!/usr/bin/env python3
"""Scan ALL ELF sections (incl. .DVP overlays) for writes to 0x32E854.

Overlays have addr=0 in the section header (loaded dynamically), so we scan
their raw bytes too. The lui+disp sequence is position-independent.
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
    return op, rs, rt, imm, sdisp

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

def scan(buf, base_addr, label):
    last_lui = {}
    found_w, found_r = [], []
    for j in range(0, len(buf)-3, 4):
        word = struct.unpack_from("<I", buf, j)[0]
        pc = base_addr + j
        op, rs, rt, imm, sdisp = decode(word)
        if op == 0x0F and rs == 0:
            last_lui[rt] = ((imm<<16)&0xFFFFFFFF, pc)
            continue
        if op in LOADSTORE and rs in last_lui:
            upper, lui_pc = last_lui[rs]
            eff = (upper + sdisp) & 0xFFFFFFFF
            if eff == TARGET:
                mnem, is_st = LOADSTORE[op]
                rec = (label, pc, lui_pc, mnem, REG_NAMES[rt], sdisp, REG_NAMES[rs])
                (found_w if is_st else found_r).append(rec)
    return found_w, found_r

all_w, all_r = [], []
for i in range(e_shnum):
    base = e_shoff + i*e_shentsz
    sh = struct.unpack_from("<10I", data, base)
    n = name(sh[0])
    sh_type, sh_addr, sh_off, sh_size = sh[1], sh[3], sh[4], sh[5]
    # Scan executable sections AND overlays
    if sh_size == 0: continue
    is_text = (n == ".text")
    is_overlay = n.startswith(".DVP.overlay")
    if not (is_text or is_overlay):
        continue
    buf = data[sh_off:sh_off+sh_size]
    base_addr = sh_addr if sh_addr else 0
    w, r = scan(buf, base_addr, n)
    if w or r:
        print(f"[{n}]  vaddr=0x{sh_addr:x} size=0x{sh_size:x}  writers={len(w)} readers={len(r)}")
    all_w.extend(w); all_r.extend(r)

print(f"\n=== TOTAL WRITERS: {len(all_w)} ===")
for label, pc, lui_pc, m, rt, disp, rs in all_w:
    print(f"  [{label}]  pc=0x{pc:X}  (lui at 0x{lui_pc:X})  {m} {rt}, {disp:#x}({rs})")

print(f"\n=== TOTAL READERS: {len(all_r)} ===")
for label, pc, lui_pc, m, rt, disp, rs in all_r[:30]:
    print(f"  [{label}]  pc=0x{pc:X}  (lui at 0x{lui_pc:X})  {m} {rt}, {disp:#x}({rs})")
