#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170EA8
// Address: 0x170ea8 - 0x171008
void sub_00170EA8_0x170ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170EA8_0x170ea8");
#endif

    ctx->pc = 0x170ea8u;

    // 0x170ea8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x170ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x170eac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x170eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x170eb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x170eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x170eb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x170eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170eb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170ebc: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x170ebcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x170ec0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x170ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x170ec4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x170EC4u;
    {
        const bool branch_taken_0x170ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170EC4u;
            // 0x170ec8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ec4) {
            ctx->pc = 0x170EF0u;
            goto label_170ef0;
        }
    }
    ctx->pc = 0x170ECCu;
    // 0x170ecc: 0x8c42ec64  lw          $v0, -0x139C($v0)
    ctx->pc = 0x170eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962276)));
    // 0x170ed0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x170ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x170ed4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170ed8: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x170ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x170edc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x170EDCu;
    {
        const bool branch_taken_0x170edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170EDCu;
            // 0x170ee0: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170edc) {
            ctx->pc = 0x170EF0u;
            goto label_170ef0;
        }
    }
    ctx->pc = 0x170EE4u;
    // 0x170ee4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x170ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170ee8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x170EE8u;
    {
        const bool branch_taken_0x170ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170EE8u;
            // 0x170eec: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ee8) {
            ctx->pc = 0x170EF4u;
            goto label_170ef4;
        }
    }
    ctx->pc = 0x170EF0u;
label_170ef0:
    // 0x170ef0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x170ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170ef4:
    // 0x170ef4: 0x1080003c  beqz        $a0, . + 4 + (0x3C << 2)
    ctx->pc = 0x170EF4u;
    {
        const bool branch_taken_0x170ef4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x170EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170EF4u;
            // 0x170ef8: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ef4) {
            ctx->pc = 0x170FE8u;
            goto label_170fe8;
        }
    }
    ctx->pc = 0x170EFCu;
    // 0x170efc: 0xc481003c  lwc1        $f1, 0x3C($a0)
    ctx->pc = 0x170efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170f00: 0xc620c658  lwc1        $f0, -0x39A8($s1)
    ctx->pc = 0x170f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170f04: 0x960200c2  lhu         $v0, 0xC2($s0)
    ctx->pc = 0x170f04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x170f08: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x170f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x170f0c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x170F0Cu;
    {
        const bool branch_taken_0x170f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170F0Cu;
            // 0x170f10: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170f0c) {
            ctx->pc = 0x170F6Cu;
            goto label_170f6c;
        }
    }
    ctx->pc = 0x170F14u;
    // 0x170f14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x170f14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170f18: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x170f18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170f1c: 0x0  nop
    ctx->pc = 0x170f1cu;
    // NOP
    // 0x170f20: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x170F20u;
    {
        const bool branch_taken_0x170f20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x170F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170F20u;
            // 0x170f24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170f20) {
            ctx->pc = 0x170FECu;
            goto label_170fec;
        }
    }
    ctx->pc = 0x170F28u;
    // 0x170f28: 0xc040678  jal         func_1019E0
    ctx->pc = 0x170F28u;
    SET_GPR_U32(ctx, 31, 0x170F30u);
    ctx->pc = 0x1019E0u;
    if (runtime->hasFunction(0x1019E0u)) {
        auto targetFn = runtime->lookupFunction(0x1019E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170F30u; }
        if (ctx->pc != 0x170F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001019E0_0x1019e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170F30u; }
        if (ctx->pc != 0x170F30u) { return; }
    }
    ctx->pc = 0x170F30u;
    // 0x170f30: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x170f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x170f34: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x170f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x170f38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x170f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x170f3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x170f3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x170f40: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x170f40u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x170f44: 0x3c0146ff  lui         $at, 0x46FF
    ctx->pc = 0x170f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18175 << 16));
    // 0x170f48: 0x3421fe00  ori         $at, $at, 0xFE00
    ctx->pc = 0x170f48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65024);
    // 0x170f4c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x170f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x170f50: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x170f50u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x170f54: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x170f54u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x170f58: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x170f58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x170f5c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x170f5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x170f60: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x170f60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x170f64: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x170F64u;
    {
        const bool branch_taken_0x170f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170F64u;
            // 0x170f68: 0xae0200a8  sw          $v0, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170f64) {
            ctx->pc = 0x170FA4u;
            goto label_170fa4;
        }
    }
    ctx->pc = 0x170F6Cu;
label_170f6c:
    // 0x170f6c: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x170f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x170f70: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x170F70u;
    {
        const bool branch_taken_0x170f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x170f70) {
            ctx->pc = 0x170F74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x170F70u;
            // 0x170f74: 0x960400c2  lhu         $a0, 0xC2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x170FA8u;
            goto label_170fa8;
        }
    }
    ctx->pc = 0x170F78u;
    // 0x170f78: 0xc041d10  jal         func_107440
    ctx->pc = 0x170F78u;
    SET_GPR_U32(ctx, 31, 0x170F80u);
    ctx->pc = 0x107440u;
    if (runtime->hasFunction(0x107440u)) {
        auto targetFn = runtime->lookupFunction(0x107440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170F80u; }
        if (ctx->pc != 0x170F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_107440_0x107480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170F80u; }
        if (ctx->pc != 0x170F80u) { return; }
    }
    ctx->pc = 0x170F80u;
    // 0x170f80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x170f80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170f84: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x170F84u;
    {
        const bool branch_taken_0x170f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170F84u;
            // 0x170f88: 0xc622c658  lwc1        $f2, -0x39A8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x170f84) {
            ctx->pc = 0x170FA4u;
            goto label_170fa4;
        }
    }
    ctx->pc = 0x170F8Cu;
    // 0x170f8c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x170f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x170f90: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x170f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x170f94: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x170f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170f98: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x170f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170f9c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x170f9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x170fa0: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x170fa0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_170fa4:
    // 0x170fa4: 0x960400c2  lhu         $a0, 0xC2($s0)
    ctx->pc = 0x170fa4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
label_170fa8:
    // 0x170fa8: 0x30824000  andi        $v0, $a0, 0x4000
    ctx->pc = 0x170fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x170fac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x170FACu;
    {
        const bool branch_taken_0x170fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170FACu;
            // 0x170fb0: 0x30828000  andi        $v0, $a0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170fac) {
            ctx->pc = 0x170FCCu;
            goto label_170fcc;
        }
    }
    ctx->pc = 0x170FB4u;
    // 0x170fb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x170fb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170fb8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x170fb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170fbc: 0x0  nop
    ctx->pc = 0x170fbcu;
    // NOP
    // 0x170fc0: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x170FC0u;
    {
        const bool branch_taken_0x170fc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x170FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170FC0u;
            // 0x170fc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170fc0) {
            ctx->pc = 0x170FECu;
            goto label_170fec;
        }
    }
    ctx->pc = 0x170FC8u;
    // 0x170fc8: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x170fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
label_170fcc:
    // 0x170fcc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x170FCCu;
    {
        const bool branch_taken_0x170fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170FCCu;
            // 0x170fd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170fcc) {
            ctx->pc = 0x170FECu;
            goto label_170fec;
        }
    }
    ctx->pc = 0x170FD4u;
    // 0x170fd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x170fd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170fd8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x170fd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170fdc: 0x0  nop
    ctx->pc = 0x170fdcu;
    // NOP
    // 0x170fe0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x170FE0u;
    {
        const bool branch_taken_0x170fe0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x170FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170FE0u;
            // 0x170fe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170fe0) {
            ctx->pc = 0x170FECu;
            goto label_170fec;
        }
    }
    ctx->pc = 0x170FE8u;
label_170fe8:
    // 0x170fe8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x170fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170fec:
    // 0x170fec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x170fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170ff0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x170ff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170ff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170ff8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x170ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x170ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x170FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170FFCu;
            // 0x171000: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170EF0u: goto label_170ef0;
            case 0x170EF4u: goto label_170ef4;
            case 0x170F6Cu: goto label_170f6c;
            case 0x170FA4u: goto label_170fa4;
            case 0x170FA8u: goto label_170fa8;
            case 0x170FCCu: goto label_170fcc;
            case 0x170FE8u: goto label_170fe8;
            case 0x170FECu: goto label_170fec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171004u;
    // 0x171004: 0x0  nop
    ctx->pc = 0x171004u;
    // NOP
}
