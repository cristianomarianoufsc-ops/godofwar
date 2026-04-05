#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F37C8
// Address: 0x1f37c8 - 0x1f38b0
void sub_001F37C8_0x1f37c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F37C8_0x1f37c8");
#endif

    ctx->pc = 0x1f37c8u;

    // 0x1f37c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f37c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f37cc: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1f37ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1f37d0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f37d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1f37d4: 0x24843330  addiu       $a0, $a0, 0x3330
    ctx->pc = 0x1f37d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13104));
    // 0x1f37d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f37d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1f37dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f37dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f37e0: 0xc07cec6  jal         func_1F3B18
    ctx->pc = 0x1F37E0u;
    SET_GPR_U32(ctx, 31, 0x1F37E8u);
    ctx->pc = 0x1F37E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F37E0u;
            // 0x1f37e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3B18u;
    if (runtime->hasFunction(0x1F3B18u)) {
        auto targetFn = runtime->lookupFunction(0x1F3B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F37E8u; }
        if (ctx->pc != 0x1F37E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3B18_0x1f3b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F37E8u; }
        if (ctx->pc != 0x1F37E8u) { return; }
    }
    ctx->pc = 0x1F37E8u;
    // 0x1f37e8: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1f37e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1f37ec: 0x0  nop
    ctx->pc = 0x1f37ecu;
    // NOP
label_1f37f0:
    // 0x1f37f0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1f37f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1f37f4: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1f37f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f37f8: 0x24423010  addiu       $v0, $v0, 0x3010
    ctx->pc = 0x1f37f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12304));
    // 0x1f37fc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1f37fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f3800: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f3800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f3804: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F3804u;
    {
        const bool branch_taken_0x1f3804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3804) {
            ctx->pc = 0x1F3808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3804u;
            // 0x1f3808: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F3890u;
            goto label_1f3890;
        }
    }
    ctx->pc = 0x1F380Cu;
    // 0x1f380c: 0xc07cd60  jal         func_1F3580
    ctx->pc = 0x1F380Cu;
    SET_GPR_U32(ctx, 31, 0x1F3814u);
    ctx->pc = 0x1F3810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F380Cu;
            // 0x1f3810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3580u;
    if (runtime->hasFunction(0x1F3580u)) {
        auto targetFn = runtime->lookupFunction(0x1F3580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3814u; }
        if (ctx->pc != 0x1F3814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3580_0x1f3580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3814u; }
        if (ctx->pc != 0x1F3814u) { return; }
    }
    ctx->pc = 0x1F3814u;
    // 0x1f3814: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x1f3814u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1f3818: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1f3818u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f381c: 0x4be408ec  vsub.xyzw   $vf3, $vf1, $vf4
    ctx->pc = 0x1f381cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f3820: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1f3820u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f3824: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1f3824u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f3828: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1f3828u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f382c: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x1f382cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3830: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1f3830u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f3834: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f3834u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3838: 0x46000004  c1          0x4
    ctx->pc = 0x1f3838u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f383c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f383cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3840: 0x0  nop
    ctx->pc = 0x1f3840u;
    // NOP
    // 0x1f3844: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x1F3844u;
    {
        const bool branch_taken_0x1f3844 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f3844) {
            ctx->pc = 0x1F3848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3844u;
            // 0x1f3848: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F3890u;
            goto label_1f3890;
        }
    }
    ctx->pc = 0x1F384Cu;
    // 0x1f384c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1f384cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f3850: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f3850u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f3854: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1f3854u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f3858: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1f3858u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1f385c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1f385cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1f3860: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1f3860u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f3864: 0x4a0002ff  vnop
    ctx->pc = 0x1f3864u;
    // NOP operation, no action needed for VU0
    // 0x1f3868: 0x4a0002ff  vnop
    ctx->pc = 0x1f3868u;
    // NOP operation, no action needed for VU0
    // 0x1f386c: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x1f386cu;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x1f3870: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1f3870u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1f3874: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1f3874u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1f3878: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1f3878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f387c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1f387cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f3880: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1f3880u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f3884: 0x4be12068  vadd.xyzw   $vf1, $vf4, $vf1
    ctx->pc = 0x1f3884u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f3888: 0xfa010030  sqc2        $vf1, 0x30($s0)
    ctx->pc = 0x1f3888u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f388c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f388cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f3890:
    // 0x1f3890: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x1f3890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f3894: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1F3894u;
    {
        const bool branch_taken_0x1f3894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3894u;
            // 0x1f3898: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3894) {
            ctx->pc = 0x1F37F0u;
            runtime->cooperativeGuestYield();
            goto label_1f37f0;
        }
    }
    ctx->pc = 0x1F389Cu;
    // 0x1f389c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1f389cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f38a0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f38a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f38a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f38a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f38a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F38A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F38ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F38A8u;
            // 0x1f38ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F37F0u: goto label_1f37f0;
            case 0x1F3890u: goto label_1f3890;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F38B0u;
}
