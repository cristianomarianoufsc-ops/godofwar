#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C4780
// Address: 0x1c4780 - 0x1c48c0
void sub_001C4780_0x1c4780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4780_0x1c4780");
#endif

    ctx->pc = 0x1c4780u;

    // 0x1c4780: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1c4780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1c4784: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1c4784u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4788: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1c4788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1c478c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1c478cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1c4790: 0x8d230174  lw          $v1, 0x174($t1)
    ctx->pc = 0x1c4790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 372)));
    // 0x1c4794: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c4794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c4798: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1C4798u;
    {
        const bool branch_taken_0x1c4798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4798) {
            ctx->pc = 0x1C479Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4798u;
            // 0x1c479c: 0x79280050  lq          $t0, 0x50($t1) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 9), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C47C4u;
            goto label_1c47c4;
        }
    }
    ctx->pc = 0x1C47A0u;
    // 0x1c47a0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1c47a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1c47a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c47a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c47a8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C47A8u;
    {
        const bool branch_taken_0x1c47a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c47a8) {
            ctx->pc = 0x1C47ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C47A8u;
            // 0x1c47ac: 0x79280050  lq          $t0, 0x50($t1) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 9), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C47C4u;
            goto label_1c47c4;
        }
    }
    ctx->pc = 0x1C47B0u;
    // 0x1c47b0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1c47b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1c47b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c47b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c47b8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C47B8u;
    {
        const bool branch_taken_0x1c47b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C47BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C47B8u;
            // 0x1c47bc: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c47b8) {
            ctx->pc = 0x1C47F8u;
            goto label_1c47f8;
        }
    }
    ctx->pc = 0x1C47C0u;
    // 0x1c47c0: 0x79280050  lq          $t0, 0x50($t1)
    ctx->pc = 0x1c47c0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 9), 80)));
label_1c47c4:
    // 0x1c47c4: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x1c47c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c47c8: 0x79270060  lq          $a3, 0x60($t1)
    ctx->pc = 0x1c47c8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 9), 96)));
    // 0x1c47cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c47ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c47d0: 0x79230070  lq          $v1, 0x70($t1)
    ctx->pc = 0x1c47d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 112)));
    // 0x1c47d4: 0x79220080  lq          $v0, 0x80($t1)
    ctx->pc = 0x1c47d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 128)));
    // 0x1c47d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c47d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c47dc: 0x7fa80000  sq          $t0, 0x0($sp)
    ctx->pc = 0x1c47dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 8));
    // 0x1c47e0: 0x7fa70010  sq          $a3, 0x10($sp)
    ctx->pc = 0x1c47e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 7));
    // 0x1c47e4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1c47e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x1c47e8: 0xc077fda  jal         func_1DFF68
    ctx->pc = 0x1C47E8u;
    SET_GPR_U32(ctx, 31, 0x1C47F0u);
    ctx->pc = 0x1C47ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C47E8u;
            // 0x1c47ec: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFF68u;
    if (runtime->hasFunction(0x1DFF68u)) {
        auto targetFn = runtime->lookupFunction(0x1DFF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C47F0u; }
        if (ctx->pc != 0x1C47F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFF68_0x1dff68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C47F0u; }
        if (ctx->pc != 0x1C47F0u) { return; }
    }
    ctx->pc = 0x1C47F0u;
    // 0x1c47f0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1C47F0u;
    {
        const bool branch_taken_0x1c47f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C47F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C47F0u;
            // 0x1c47f4: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c47f0) {
            ctx->pc = 0x1C48B8u;
            goto label_1c48b8;
        }
    }
    ctx->pc = 0x1C47F8u;
label_1c47f8:
    // 0x1c47f8: 0x24422850  addiu       $v0, $v0, 0x2850
    ctx->pc = 0x1c47f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10320));
    // 0x1c47fc: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1c47fcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c4800: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1c4800u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c4804: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c4804u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c4808: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c4808u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c480c: 0xd9220050  lqc2        $vf2, 0x50($t1)
    ctx->pc = 0x1c480cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x1c4810: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1c4810u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c4814: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c4814u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c4818: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1c4818u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c481c: 0x4a0002ff  vnop
    ctx->pc = 0x1c481cu;
    // NOP operation, no action needed for VU0
    // 0x1c4820: 0x4a0002ff  vnop
    ctx->pc = 0x1c4820u;
    // NOP operation, no action needed for VU0
    // 0x1c4824: 0x4bc312fe  vopmula.xyz $ACC, $vf2, $vf3
    ctx->pc = 0x1c4824u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]);
    // 0x1c4828: 0xfba30080  sqc2        $vf3, 0x80($sp)
    ctx->pc = 0x1c4828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c482c: 0x4bc218ae  vopmsub.xyz $vf2, $vf3, $vf2
    ctx->pc = 0x1c482cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1c4830: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1c4830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c4834: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1c4834u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c4838: 0x4be2112a  vmul.xyzw   $vf4, $vf2, $vf2
    ctx->pc = 0x1c4838u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c483c: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x1c483cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c4840: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x1c4840u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c4844: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1c4844u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c4848: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c4848u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c484c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1c484cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c4850: 0x4a0002ff  vnop
    ctx->pc = 0x1c4850u;
    // NOP operation, no action needed for VU0
    // 0x1c4854: 0x4a0002ff  vnop
    ctx->pc = 0x1c4854u;
    // NOP operation, no action needed for VU0
    // 0x1c4858: 0x4bc21afe  vopmula.xyz $ACC, $vf3, $vf2
    ctx->pc = 0x1c4858u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]);
    // 0x1c485c: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1c485cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c4860: 0x4bc310ee  vopmsub.xyz $vf3, $vf2, $vf3
    ctx->pc = 0x1c4860u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1c4864: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x1c4864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c4868: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x1c4868u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c486c: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1c486cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c4870: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c4870u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c4874: 0x79230080  lq          $v1, 0x80($t1)
    ctx->pc = 0x1c4874u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 128)));
    // 0x1c4878: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c4878u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c487c: 0x79220120  lq          $v0, 0x120($t1)
    ctx->pc = 0x1c487cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 288)));
    // 0x1c4880: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1c4880u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c4884: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c4884u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c4888: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1c4888u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c488c: 0x4a0002ff  vnop
    ctx->pc = 0x1c488cu;
    // NOP operation, no action needed for VU0
    // 0x1c4890: 0x4a0002ff  vnop
    ctx->pc = 0x1c4890u;
    // NOP operation, no action needed for VU0
    // 0x1c4894: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1c4894u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c4898: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c4898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c489c: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x1c489cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c48a0: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x1c48a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x1c48a4: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x1c48a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c48a8: 0xfba300a0  sqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x1c48a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c48ac: 0xc077fda  jal         func_1DFF68
    ctx->pc = 0x1C48ACu;
    SET_GPR_U32(ctx, 31, 0x1C48B4u);
    ctx->pc = 0x1C48B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C48ACu;
            // 0x1c48b0: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFF68u;
    if (runtime->hasFunction(0x1DFF68u)) {
        auto targetFn = runtime->lookupFunction(0x1DFF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C48B4u; }
        if (ctx->pc != 0x1C48B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFF68_0x1dff68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C48B4u; }
        if (ctx->pc != 0x1C48B4u) { return; }
    }
    ctx->pc = 0x1C48B4u;
    // 0x1c48b4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1c48b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1c48b8:
    // 0x1c48b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C48B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C48BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C48B8u;
            // 0x1c48bc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C47C4u: goto label_1c47c4;
            case 0x1C47F8u: goto label_1c47f8;
            case 0x1C48B8u: goto label_1c48b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C48C0u;
}
