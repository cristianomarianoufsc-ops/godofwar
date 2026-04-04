#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B54D8
// Address: 0x1b54d8 - 0x1b55e0
void sub_001B54D8_0x1b54d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B54D8_0x1b54d8");
#endif

    ctx->pc = 0x1b54d8u;

    // 0x1b54d8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b54d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b54dc: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b54dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b54e0: 0x8c44cb90  lw          $a0, -0x3470($v0)
    ctx->pc = 0x1b54e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953872)));
    // 0x1b54e4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b54e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b54e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b54e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b54ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b54ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b54f0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b54f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1b54f4: 0x10800033  beqz        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1B54F4u;
    {
        const bool branch_taken_0x1b54f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B54F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B54F4u;
            // 0x1b54f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b54f4) {
            ctx->pc = 0x1B55C4u;
            goto label_1b55c4;
        }
    }
    ctx->pc = 0x1B54FCu;
    // 0x1b54fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b54fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b5500: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1b5500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b5504: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B5504u;
    {
        const bool branch_taken_0x1b5504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5504) {
            ctx->pc = 0x1B5508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5504u;
            // 0x1b5508: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B550Cu;
            goto label_1b550c;
        }
    }
    ctx->pc = 0x1B550Cu;
label_1b550c:
    // 0x1b550c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b550cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5510: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1b5510u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1b5514: 0x8c920004  lw          $s2, 0x4($a0)
    ctx->pc = 0x1b5514u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b5518: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b5518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b551c: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x1b551cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b5520: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b5520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1b5524: 0x1010  mfhi        $v0
    ctx->pc = 0x1b5524u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b5528: 0x1a400026  blez        $s2, . + 4 + (0x26 << 2)
    ctx->pc = 0x1B5528u;
    {
        const bool branch_taken_0x1b5528 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1B552Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5528u;
            // 0x1b552c: 0x2c530001  sltiu       $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5528) {
            ctx->pc = 0x1B55C4u;
            goto label_1b55c4;
        }
    }
    ctx->pc = 0x1B5530u;
label_1b5530:
    // 0x1b5530: 0xc06d34a  jal         func_1B4D28
    ctx->pc = 0x1B5530u;
    SET_GPR_U32(ctx, 31, 0x1B5538u);
    ctx->pc = 0x1B5534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5530u;
            // 0x1b5534: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4D28u;
    if (runtime->hasFunction(0x1B4D28u)) {
        auto targetFn = runtime->lookupFunction(0x1B4D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5538u; }
        if (ctx->pc != 0x1B5538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4D28_0x1b4d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5538u; }
        if (ctx->pc != 0x1B5538u) { return; }
    }
    ctx->pc = 0x1B5538u;
    // 0x1b5538: 0x5260001f  beql        $s3, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B5538u;
    {
        const bool branch_taken_0x1b5538 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5538) {
            ctx->pc = 0x1B553Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5538u;
            // 0x1b553c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B55B8u;
            goto label_1b55b8;
        }
    }
    ctx->pc = 0x1B5540u;
    // 0x1b5540: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b5540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5544: 0x2513823  subu        $a3, $s2, $s1
    ctx->pc = 0x1b5544u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1b5548: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x1b5548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1b554c: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B554Cu;
    {
        const bool branch_taken_0x1b554c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b554c) {
            ctx->pc = 0x1B5550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B554Cu;
            // 0x1b5550: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B55B8u;
            goto label_1b55b8;
        }
    }
    ctx->pc = 0x1B5554u;
    // 0x1b5554: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x1b5554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1b5558:
    // 0x1b5558: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b5558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b555c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1b555cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b5560: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1b5560u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b5564: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1b5564u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b5568: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1b5568u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b556c: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1b556cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b5570: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1b5570u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b5574: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1b5574u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b5578: 0x3c0146c8  lui         $at, 0x46C8
    ctx->pc = 0x1b5578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18120 << 16));
    // 0x1b557c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b557cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5580: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x1b5580u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1b5584: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1b5584u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5588: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b5588u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b558c: 0x0  nop
    ctx->pc = 0x1b558cu;
    // NOP
    // 0x1b5590: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5590u;
    {
        const bool branch_taken_0x1b5590 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B5594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5590u;
            // 0x1b5594: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5590) {
            ctx->pc = 0x1B55A8u;
            goto label_1b55a8;
        }
    }
    ctx->pc = 0x1B5598u;
    // 0x1b5598: 0xc06d4be  jal         func_1B52F8
    ctx->pc = 0x1B5598u;
    SET_GPR_U32(ctx, 31, 0x1B55A0u);
    ctx->pc = 0x1B52F8u;
    if (runtime->hasFunction(0x1B52F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B52F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B55A0u; }
        if (ctx->pc != 0x1B55A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B52F8_0x1b52f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B55A0u; }
        if (ctx->pc != 0x1B55A0u) { return; }
    }
    ctx->pc = 0x1B55A0u;
    // 0x1b55a0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B55A0u;
    {
        const bool branch_taken_0x1b55a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B55A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B55A0u;
            // 0x1b55a4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b55a0) {
            ctx->pc = 0x1B55C8u;
            goto label_1b55c8;
        }
    }
    ctx->pc = 0x1B55A8u;
label_1b55a8:
    // 0x1b55a8: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x1b55a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1b55ac: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1B55ACu;
    {
        const bool branch_taken_0x1b55ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B55B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B55ACu;
            // 0x1b55b0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b55ac) {
            ctx->pc = 0x1B5558u;
            runtime->cooperativeGuestYield();
            goto label_1b5558;
        }
    }
    ctx->pc = 0x1B55B4u;
    // 0x1b55b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b55b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b55b8:
    // 0x1b55b8: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1b55b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1b55bc: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1B55BCu;
    {
        const bool branch_taken_0x1b55bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B55C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B55BCu;
            // 0x1b55c0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b55bc) {
            ctx->pc = 0x1B5530u;
            runtime->cooperativeGuestYield();
            goto label_1b5530;
        }
    }
    ctx->pc = 0x1B55C4u;
label_1b55c4:
    // 0x1b55c4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b55c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b55c8:
    // 0x1b55c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b55c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b55cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b55ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b55d0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b55d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b55d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b55d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b55d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B55D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B55DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B55D8u;
            // 0x1b55dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B550Cu: goto label_1b550c;
            case 0x1B5530u: goto label_1b5530;
            case 0x1B5558u: goto label_1b5558;
            case 0x1B55A8u: goto label_1b55a8;
            case 0x1B55B8u: goto label_1b55b8;
            case 0x1B55C4u: goto label_1b55c4;
            case 0x1B55C8u: goto label_1b55c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B55E0u;
}
