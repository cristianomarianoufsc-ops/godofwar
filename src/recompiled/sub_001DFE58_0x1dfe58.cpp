#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DFE58
// Address: 0x1dfe58 - 0x1dff68
void sub_001DFE58_0x1dfe58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFE58_0x1dfe58");
#endif

    ctx->pc = 0x1dfe58u;

    // 0x1dfe58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dfe58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dfe5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1dfe5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1dfe60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dfe60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dfe64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dfe64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dfe68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dfe6c: 0xc077f80  jal         func_1DFE00
    ctx->pc = 0x1DFE6Cu;
    SET_GPR_U32(ctx, 31, 0x1DFE74u);
    ctx->pc = 0x1DFE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFE6Cu;
            // 0x1dfe70: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFE00u;
    if (runtime->hasFunction(0x1DFE00u)) {
        auto targetFn = runtime->lookupFunction(0x1DFE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFE74u; }
        if (ctx->pc != 0x1DFE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1dfe00_0x1dfe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFE74u; }
        if (ctx->pc != 0x1DFE74u) { return; }
    }
    ctx->pc = 0x1DFE74u;
    // 0x1dfe74: 0xc078350  jal         func_1E0D40
    ctx->pc = 0x1DFE74u;
    SET_GPR_U32(ctx, 31, 0x1DFE7Cu);
    ctx->pc = 0x1DFE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFE74u;
            // 0x1dfe78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0D40u;
    if (runtime->hasFunction(0x1E0D40u)) {
        auto targetFn = runtime->lookupFunction(0x1E0D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFE7Cu; }
        if (ctx->pc != 0x1DFE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0D40_0x1e0d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFE7Cu; }
        if (ctx->pc != 0x1DFE7Cu) { return; }
    }
    ctx->pc = 0x1DFE7Cu;
    // 0x1dfe7c: 0x8e04018c  lw          $a0, 0x18C($s0)
    ctx->pc = 0x1dfe7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x1dfe80: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DFE80u;
    {
        const bool branch_taken_0x1dfe80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfe80) {
            ctx->pc = 0x1DFE84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFE80u;
            // 0x1dfe84: 0xda010130  lqc2        $vf1, 0x130($s0) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 304)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DFE94u;
            goto label_1dfe94;
        }
    }
    ctx->pc = 0x1DFE88u;
    // 0x1dfe88: 0xc078350  jal         func_1E0D40
    ctx->pc = 0x1DFE88u;
    SET_GPR_U32(ctx, 31, 0x1DFE90u);
    ctx->pc = 0x1E0D40u;
    if (runtime->hasFunction(0x1E0D40u)) {
        auto targetFn = runtime->lookupFunction(0x1E0D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFE90u; }
        if (ctx->pc != 0x1DFE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0D40_0x1e0d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFE90u; }
        if (ctx->pc != 0x1DFE90u) { return; }
    }
    ctx->pc = 0x1DFE90u;
    // 0x1dfe90: 0xda010130  lqc2        $vf1, 0x130($s0)
    ctx->pc = 0x1dfe90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 304)));
label_1dfe94:
    // 0x1dfe94: 0xda020060  lqc2        $vf2, 0x60($s0)
    ctx->pc = 0x1dfe94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1dfe98: 0x4be11099  vmuly.xyzw  $vf2, $vf2, $vf1y
    ctx->pc = 0x1dfe98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dfe9c: 0xda210030  lqc2        $vf1, 0x30($s1)
    ctx->pc = 0x1dfe9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1dfea0: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1dfea0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dfea4: 0xfa010110  sqc2        $vf1, 0x110($s0)
    ctx->pc = 0x1dfea4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dfea8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1dfea8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1dfeac: 0xdcc5bdf8  ld          $a1, -0x4208($a2)
    ctx->pc = 0x1dfeacu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 4294950392)));
    // 0x1dfeb0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1dfeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dfeb4: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1dfeb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dfeb8: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x1dfeb8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x1dfebc: 0x84830060  lh          $v1, 0x60($a0)
    ctx->pc = 0x1dfebcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1dfec0: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x1dfec0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x1dfec4: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1dfec4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1dfec8: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x1dfec8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1dfecc: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x1dfeccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x1dfed0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dfed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfed4: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x1dfed4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1dfed8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1dfed8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfedc: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x1dfedcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1dfee0: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x1dfee0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x1dfee4: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x1dfee4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1dfee8: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x1dfee8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x1dfeec: 0xfcc5bdf8  sd          $a1, -0x4208($a2)
    ctx->pc = 0x1dfeecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4294950392), GPR_U64(ctx, 5));
    // 0x1dfef0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1dfef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1dfef4: 0xfc830068  sd          $v1, 0x68($a0)
    ctx->pc = 0x1dfef4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 3));
    // 0x1dfef8: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1dfef8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1dfefc: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1dfefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1dff00: 0x40f809  jalr        $v0
    ctx->pc = 0x1DFF00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DFF08u);
        ctx->pc = 0x1DFF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFF00u;
            // 0x1dff04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DFF08u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DFE94u: goto label_1dfe94;
            case 0x1DFF30u: goto label_1dff30;
            case 0x1DFF54u: goto label_1dff54;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF08u; }
            if (ctx->pc != 0x1DFF08u) { return; }
        }
        }
    }
    ctx->pc = 0x1DFF08u;
    // 0x1dff08: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DFF08u;
    {
        const bool branch_taken_0x1dff08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dff08) {
            ctx->pc = 0x1DFF0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFF08u;
            // 0x1dff0c: 0x8e020174  lw          $v0, 0x174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DFF30u;
            goto label_1dff30;
        }
    }
    ctx->pc = 0x1DFF10u;
    // 0x1dff10: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1dff10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1dff14: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1dff14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1dff18: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1dff18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1dff1c: 0x40f809  jalr        $v0
    ctx->pc = 0x1DFF1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DFF24u);
        ctx->pc = 0x1DFF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFF1Cu;
            // 0x1dff20: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DFF24u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DFE94u: goto label_1dfe94;
            case 0x1DFF30u: goto label_1dff30;
            case 0x1DFF54u: goto label_1dff54;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF24u; }
            if (ctx->pc != 0x1DFF24u) { return; }
        }
        }
    }
    ctx->pc = 0x1DFF24u;
    // 0x1dff24: 0xc080166  jal         func_200598
    ctx->pc = 0x1DFF24u;
    SET_GPR_U32(ctx, 31, 0x1DFF2Cu);
    ctx->pc = 0x1DFF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFF24u;
            // 0x1dff28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200598u;
    if (runtime->hasFunction(0x200598u)) {
        auto targetFn = runtime->lookupFunction(0x200598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF2Cu; }
        if (ctx->pc != 0x1DFF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200598_0x200598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF2Cu; }
        if (ctx->pc != 0x1DFF2Cu) { return; }
    }
    ctx->pc = 0x1DFF2Cu;
    // 0x1dff2c: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1dff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_1dff30:
    // 0x1dff30: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DFF30u;
    {
        const bool branch_taken_0x1dff30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1DFF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFF30u;
            // 0x1dff34: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dff30) {
            ctx->pc = 0x1DFF54u;
            goto label_1dff54;
        }
    }
    ctx->pc = 0x1DFF38u;
    // 0x1dff38: 0xc06ca46  jal         func_1B2918
    ctx->pc = 0x1DFF38u;
    SET_GPR_U32(ctx, 31, 0x1DFF40u);
    ctx->pc = 0x1B2918u;
    if (runtime->hasFunction(0x1B2918u)) {
        auto targetFn = runtime->lookupFunction(0x1B2918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF40u; }
        if (ctx->pc != 0x1DFF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2918_0x1b2918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF40u; }
        if (ctx->pc != 0x1DFF40u) { return; }
    }
    ctx->pc = 0x1DFF40u;
    // 0x1dff40: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1dff40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1dff44: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1dff44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1dff48: 0xc0770ac  jal         func_1DC2B0
    ctx->pc = 0x1DFF48u;
    SET_GPR_U32(ctx, 31, 0x1DFF50u);
    ctx->pc = 0x1DFF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFF48u;
            // 0x1dff4c: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC2B0u;
    if (runtime->hasFunction(0x1DC2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF50u; }
        if (ctx->pc != 0x1DFF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1dc2b0_0x1dc2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF50u; }
        if (ctx->pc != 0x1DFF50u) { return; }
    }
    ctx->pc = 0x1DFF50u;
    // 0x1dff50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1dff50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dff54:
    // 0x1dff54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dff54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dff58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dff58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dff5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFF5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFF5Cu;
            // 0x1dff60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DFE94u: goto label_1dfe94;
            case 0x1DFF30u: goto label_1dff30;
            case 0x1DFF54u: goto label_1dff54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DFF64u;
    // 0x1dff64: 0x0  nop
    ctx->pc = 0x1dff64u;
    // NOP
}
