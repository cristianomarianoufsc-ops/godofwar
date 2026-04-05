#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CFC58
// Address: 0x1cfc58 - 0x1cfd88
void sub_001CFC58_0x1cfc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFC58_0x1cfc58");
#endif

    ctx->pc = 0x1cfc58u;

    // 0x1cfc58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cfc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cfc5c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1cfc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1cfc60: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1cfc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1cfc64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cfc64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfc68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cfc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cfc6c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cfc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1cfc70: 0x8e510024  lw          $s1, 0x24($s2)
    ctx->pc = 0x1cfc70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1cfc74: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1cfc74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cfc78: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1cfc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1cfc7c: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x1cfc7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1cfc80: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFC80u;
    {
        const bool branch_taken_0x1cfc80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFC80u;
            // 0x1cfc84: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc80) {
            ctx->pc = 0x1CFCA4u;
            goto label_1cfca4;
        }
    }
    ctx->pc = 0x1CFC88u;
    // 0x1cfc88: 0x8ce200f4  lw          $v0, 0xF4($a3)
    ctx->pc = 0x1cfc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 244)));
    // 0x1cfc8c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1cfc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1cfc90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cfc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1cfc94: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFC94u;
    {
        const bool branch_taken_0x1cfc94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFC94u;
            // 0x1cfc98: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc94) {
            ctx->pc = 0x1CFCB8u;
            goto label_1cfcb8;
        }
    }
    ctx->pc = 0x1CFC9Cu;
    // 0x1cfc9c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1CFC9Cu;
    {
        const bool branch_taken_0x1cfc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFC9Cu;
            // 0x1cfca0: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc9c) {
            ctx->pc = 0x1CFCF0u;
            goto label_1cfcf0;
        }
    }
    ctx->pc = 0x1CFCA4u;
label_1cfca4:
    // 0x1cfca4: 0x8ce200f4  lw          $v0, 0xF4($a3)
    ctx->pc = 0x1cfca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 244)));
    // 0x1cfca8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1cfca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1cfcac: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CFCACu;
    {
        const bool branch_taken_0x1cfcac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cfcac) {
            ctx->pc = 0x1CFCB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFCACu;
            // 0x1cfcb0: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CFCF0u;
            goto label_1cfcf0;
        }
    }
    ctx->pc = 0x1CFCB4u;
    // 0x1cfcb4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cfcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cfcb8:
    // 0x1cfcb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cfcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfcbc: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x1cfcbcu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1cfcc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cfcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfcc4: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x1cfcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    // 0x1cfcc8: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x1cfcc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1cfccc: 0x85180a  movz        $v1, $a0, $a1
    ctx->pc = 0x1cfcccu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1cfcd0: 0x8ce200f4  lw          $v0, 0xF4($a3)
    ctx->pc = 0x1cfcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 244)));
    // 0x1cfcd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cfcd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfcd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cfcd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfcdc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1cfcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1cfce0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cfce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1cfce4: 0xc074944  jal         func_1D2510
    ctx->pc = 0x1CFCE4u;
    SET_GPR_U32(ctx, 31, 0x1CFCECu);
    ctx->pc = 0x1CFCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFCE4u;
            // 0x1cfce8: 0xace200f4  sw          $v0, 0xF4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2510u;
    if (runtime->hasFunction(0x1D2510u)) {
        auto targetFn = runtime->lookupFunction(0x1D2510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFCECu; }
        if (ctx->pc != 0x1CFCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2510_0x1d2510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFCECu; }
        if (ctx->pc != 0x1CFCECu) { return; }
    }
    ctx->pc = 0x1CFCECu;
    // 0x1cfcec: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1cfcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1cfcf0:
    // 0x1cfcf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfcf4: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x1cfcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1cfcf8: 0xc07b390  jal         func_1ECE40
    ctx->pc = 0x1CFCF8u;
    SET_GPR_U32(ctx, 31, 0x1CFD00u);
    ctx->pc = 0x1CFCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFCF8u;
            // 0x1cfcfc: 0xae0202dc  sw          $v0, 0x2DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE40u;
    if (runtime->hasFunction(0x1ECE40u)) {
        auto targetFn = runtime->lookupFunction(0x1ECE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD00u; }
        if (ctx->pc != 0x1CFD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ECE40_0x1ece40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD00u; }
        if (ctx->pc != 0x1CFD00u) { return; }
    }
    ctx->pc = 0x1CFD00u;
    // 0x1cfd00: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1cfd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1cfd04: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1cfd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1cfd08: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFD08u;
    {
        const bool branch_taken_0x1cfd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFD08u;
            // 0x1cfd0c: 0x3c040100  lui         $a0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfd08) {
            ctx->pc = 0x1CFD2Cu;
            goto label_1cfd2c;
        }
    }
    ctx->pc = 0x1CFD10u;
    // 0x1cfd10: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1cfd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1cfd14: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1cfd14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1cfd18: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1cfd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1cfd1c: 0x3463f800  ori         $v1, $v1, 0xF800
    ctx->pc = 0x1cfd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63488);
    // 0x1cfd20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1cfd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1cfd24: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1cfd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1cfd28: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x1cfd28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
label_1cfd2c:
    // 0x1cfd2c: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1cfd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1cfd30: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x1cfd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1cfd34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cfd34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cfd38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cfd38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfd3c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cfd3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1cfd40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cfd40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cfd44: 0xc602017c  lwc1        $f2, 0x17C($s0)
    ctx->pc = 0x1cfd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cfd48: 0x46000828  max.s       $f0, $f1, $f0
    ctx->pc = 0x1cfd48u;
    ctx->f[0] = std::max(ctx->f[1], ctx->f[0]);
    // 0x1cfd4c: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x1cfd4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfd50: 0x0  nop
    ctx->pc = 0x1cfd50u;
    // NOP
    // 0x1cfd54: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CFD54u;
    {
        const bool branch_taken_0x1cfd54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfd54) {
            ctx->pc = 0x1CFD58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFD54u;
            // 0x1cfd58: 0xe600017c  swc1        $f0, 0x17C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 380), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CFD5Cu;
            goto label_1cfd5c;
        }
    }
    ctx->pc = 0x1CFD5Cu;
label_1cfd5c:
    // 0x1cfd5c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1cfd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1cfd60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfd64: 0xc0799d8  jal         func_1E6760
    ctx->pc = 0x1CFD64u;
    SET_GPR_U32(ctx, 31, 0x1CFD6Cu);
    ctx->pc = 0x1CFD68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFD64u;
            // 0x1cfd68: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6760u;
    if (runtime->hasFunction(0x1E6760u)) {
        auto targetFn = runtime->lookupFunction(0x1E6760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD6Cu; }
        if (ctx->pc != 0x1CFD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6760_0x1e6760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD6Cu; }
        if (ctx->pc != 0x1CFD6Cu) { return; }
    }
    ctx->pc = 0x1CFD6Cu;
    // 0x1cfd6c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1cfd6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cfd70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1cfd70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cfd74: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1cfd74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfd78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cfd78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfd7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFD7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFD7Cu;
            // 0x1cfd80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CFCA4u: goto label_1cfca4;
            case 0x1CFCB8u: goto label_1cfcb8;
            case 0x1CFCF0u: goto label_1cfcf0;
            case 0x1CFD2Cu: goto label_1cfd2c;
            case 0x1CFD5Cu: goto label_1cfd5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CFD84u;
    // 0x1cfd84: 0x0  nop
    ctx->pc = 0x1cfd84u;
    // NOP
}
