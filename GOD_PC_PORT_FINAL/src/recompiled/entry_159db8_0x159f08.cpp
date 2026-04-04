#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_159db8
// Address: 0x159db8 - 0x159f08
void entry_159db8_0x159f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_159db8_0x159f08");
#endif

    ctx->pc = 0x159db8u;

    // 0x159db8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x159db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159dbc: 0xc4ab0008  lwc1        $f11, 0x8($a1)
    ctx->pc = 0x159dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x159dc0: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x159dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159dc4: 0xc4aa000c  lwc1        $f10, 0xC($a1)
    ctx->pc = 0x159dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x159dc8: 0x460b0201  sub.s       $f8, $f0, $f11
    ctx->pc = 0x159dc8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[0], ctx->f[11]);
    // 0x159dcc: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x159dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159dd0: 0xc4a90010  lwc1        $f9, 0x10($a1)
    ctx->pc = 0x159dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x159dd4: 0x460a09c1  sub.s       $f7, $f1, $f10
    ctx->pc = 0x159dd4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[10]);
    // 0x159dd8: 0xc4ac0004  lwc1        $f12, 0x4($a1)
    ctx->pc = 0x159dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x159ddc: 0x46090181  sub.s       $f6, $f0, $f9
    ctx->pc = 0x159ddcu;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x159de0: 0xc4cd0004  lwc1        $f13, 0x4($a2)
    ctx->pc = 0x159de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x159de4: 0x46073842  mul.s       $f1, $f7, $f7
    ctx->pc = 0x159de4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x159de8: 0x46084002  mul.s       $f0, $f8, $f8
    ctx->pc = 0x159de8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x159dec: 0x460c6941  sub.s       $f5, $f13, $f12
    ctx->pc = 0x159decu;
    ctx->f[5] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x159df0: 0x46063082  mul.s       $f2, $f6, $f6
    ctx->pc = 0x159df0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x159df4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x159df4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x159df8: 0x460528c2  mul.s       $f3, $f5, $f5
    ctx->pc = 0x159df8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x159dfc: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x159dfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x159e00: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x159e00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159e04: 0x0  nop
    ctx->pc = 0x159e04u;
    // NOP
    // 0x159e08: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x159E08u;
    {
        const bool branch_taken_0x159e08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x159E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159E08u;
            // 0x159e0c: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159e08) {
            ctx->pc = 0x159E50u;
            goto label_159e50;
        }
    }
    ctx->pc = 0x159E10u;
    // 0x159e10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159e10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159e14: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x159e14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159e18: 0x0  nop
    ctx->pc = 0x159e18u;
    // NOP
    // 0x159e1c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x159E1Cu;
    {
        const bool branch_taken_0x159e1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x159e1c) {
            ctx->pc = 0x159E20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159E1Cu;
            // 0x159e20: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159E24u;
            goto label_159e24;
        }
    }
    ctx->pc = 0x159E24u;
label_159e24:
    // 0x159e24: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x159e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x159e28: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x159e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x159e2c: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x159e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x159e30: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x159e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x159e34: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x159e34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x159e38: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x159e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159e3c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x159e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159e40: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x159e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159e44: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x159e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159e48: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x159E48u;
    {
        const bool branch_taken_0x159e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159E48u;
            // 0x159e4c: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159e48) {
            ctx->pc = 0x159EC4u;
            goto label_159ec4;
        }
    }
    ctx->pc = 0x159E50u;
label_159e50:
    // 0x159e50: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x159e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
    // 0x159e54: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x159e54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x159e58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x159e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159e5c: 0x46010104  c1          0x10104
    ctx->pc = 0x159e5cu;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x159e60: 0xe7ab0008  swc1        $f11, 0x8($sp)
    ctx->pc = 0x159e60u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x159e64: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x159e64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159e68: 0xe7aa000c  swc1        $f10, 0xC($sp)
    ctx->pc = 0x159e68u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x159e6c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x159E6Cu;
    {
        const bool branch_taken_0x159e6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x159E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159E6Cu;
            // 0x159e70: 0xe7a90010  swc1        $f9, 0x10($sp) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x159e6c) {
            ctx->pc = 0x159EACu;
            goto label_159eac;
        }
    }
    ctx->pc = 0x159E74u;
    // 0x159e74: 0x46052000  add.s       $f0, $f4, $f5
    ctx->pc = 0x159e74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x159e78: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x159e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x159e7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x159e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159e80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x159e80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x159e84: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x159e84u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x159e88: 0x46060042  mul.s       $f1, $f0, $f6
    ctx->pc = 0x159e88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x159e8c: 0x46080082  mul.s       $f2, $f0, $f8
    ctx->pc = 0x159e8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x159e90: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x159e90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x159e94: 0x46014840  add.s       $f1, $f9, $f1
    ctx->pc = 0x159e94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[9], ctx->f[1]);
    // 0x159e98: 0x46025880  add.s       $f2, $f11, $f2
    ctx->pc = 0x159e98u;
    ctx->f[2] = FPU_ADD_S(ctx->f[11], ctx->f[2]);
    // 0x159e9c: 0x46005000  add.s       $f0, $f10, $f0
    ctx->pc = 0x159e9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
    // 0x159ea0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x159ea0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x159ea4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x159ea4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x159ea8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x159ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_159eac:
    // 0x159eac: 0x460c2000  add.s       $f0, $f4, $f12
    ctx->pc = 0x159eacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[12]);
    // 0x159eb0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x159eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x159eb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x159eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159eb8: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x159eb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x159ebc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x159ebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x159ec0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x159ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_159ec4:
    // 0x159ec4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x159ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x159ec8: 0xa7a00002  sh          $zero, 0x2($sp)
    ctx->pc = 0x159ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x159ecc: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x159eccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x159ed0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x159ed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ed4: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x159ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x159ed8: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x159ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x159edc: 0x6ba5000f  ldl         $a1, 0xF($sp)
    ctx->pc = 0x159edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x159ee0: 0x6fa50008  ldr         $a1, 0x8($sp)
    ctx->pc = 0x159ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x159ee4: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x159ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159ee8: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x159ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159eec: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x159eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159ef0: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x159ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159ef4: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x159ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159ef8: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x159ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x159efc: 0x3e00008  jr          $ra
    ctx->pc = 0x159EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159EFCu;
            // 0x159f00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159E24u: goto label_159e24;
            case 0x159E50u: goto label_159e50;
            case 0x159EACu: goto label_159eac;
            case 0x159EC4u: goto label_159ec4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x159F04u;
    // 0x159f04: 0x0  nop
    ctx->pc = 0x159f04u;
    // NOP
}
