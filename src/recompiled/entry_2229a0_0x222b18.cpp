#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2229a0
// Address: 0x2229a0 - 0x222b18
void entry_2229a0_0x222b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2229a0_0x222b18");
#endif

    ctx->pc = 0x2229a0u;

    // 0x2229a0: 0xd8a30030  lqc2        $vf3, 0x30($a1)
    ctx->pc = 0x2229a0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2229a4: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2229a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2229a8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2229a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2229ac: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2229acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2229b0: 0xd8840010  lqc2        $vf4, 0x10($a0)
    ctx->pc = 0x2229b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2229b4: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x2229b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2229b8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2229b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2229bc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2229bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2229c0: 0x8c44c658  lw          $a0, -0x39A8($v0)
    ctx->pc = 0x2229c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952536)));
    // 0x2229c4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2229c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2229c8: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x2229c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2229cc: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2229ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2229d0: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x2229d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2229d4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2229d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2229d8: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x2229d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2229dc: 0x4be11a28  vadd.xyzw   $vf8, $vf3, $vf1
    ctx->pc = 0x2229dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x2229e0: 0x48234000  qmfc2.ni    $v1, $vf8
    ctx->pc = 0x2229e0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x2229e4: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x2229e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2229e8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x2229e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2229ec: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x2229ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2229f0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2229f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2229f4: 0x3421d70b  ori         $at, $at, 0xD70B
    ctx->pc = 0x2229f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55051);
    // 0x2229f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2229f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2229fc: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x2229fcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x222a00: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x222a00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222a04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x222a04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222a08: 0x0  nop
    ctx->pc = 0x222a08u;
    // NOP
    // 0x222a0c: 0x45020040  bc1fl       . + 4 + (0x40 << 2)
    ctx->pc = 0x222A0Cu;
    {
        const bool branch_taken_0x222a0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x222a0c) {
            ctx->pc = 0x222A10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222A0Cu;
            // 0x222a10: 0x7ca30030  sq          $v1, 0x30($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222B10u;
            goto label_222b10;
        }
    }
    ctx->pc = 0x222A14u;
    // 0x222a14: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x222a14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x222a18: 0x4be4312c  vsub.xyzw   $vf4, $vf6, $vf4
    ctx->pc = 0x222a18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x222a1c: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x222a1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x222a20: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x222a20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x222a24: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x222a24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x222a28: 0x4be5233c  vmove.xyzw  $vf5, $vf4
    ctx->pc = 0x222a28u;
    ctx->vu0_vf[5] = ctx->vu0_vf[4];
    // 0x222a2c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x222a2cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x222a30: 0x4a0003bf  vwaitq
    ctx->pc = 0x222a30u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x222a34: 0x4bc0295c  vmulq.xyz   $vf5, $vf5, $Q
    ctx->pc = 0x222a34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x222a38: 0x4a0002ff  vnop
    ctx->pc = 0x222a38u;
    // NOP operation, no action needed for VU0
    // 0x222a3c: 0x4a0002ff  vnop
    ctx->pc = 0x222a3cu;
    // NOP operation, no action needed for VU0
    // 0x222a40: 0x4be42b3c  vmove.xyzw  $vf4, $vf5
    ctx->pc = 0x222a40u;
    ctx->vu0_vf[4] = ctx->vu0_vf[5];
    // 0x222a44: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x222a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x222a48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x222a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x222a4c: 0x48a23800  qmtc2.ni    $v0, $vf7
    ctx->pc = 0x222a4cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x222a50: 0x4be1333c  vmove.xyzw  $vf1, $vf6
    ctx->pc = 0x222a50u;
    ctx->vu0_vf[1] = ctx->vu0_vf[6];
    // 0x222a54: 0x4a870840  vaddx.y     $vf1, $vf1, $vf7x
    ctx->pc = 0x222a54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x222a58: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x222a58u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]);
    // 0x222a5c: 0x4bc120ae  vopmsub.xyz $vf2, $vf4, $vf1
    ctx->pc = 0x222a5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x222a60: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x222a60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x222a64: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x222a64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x222a68: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x222a68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x222a6c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x222a6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x222a70: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x222a70u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x222a74: 0x4a0003bf  vwaitq
    ctx->pc = 0x222a74u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x222a78: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x222a78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x222a7c: 0x4a0002ff  vnop
    ctx->pc = 0x222a7cu;
    // NOP operation, no action needed for VU0
    // 0x222a80: 0x4a0002ff  vnop
    ctx->pc = 0x222a80u;
    // NOP operation, no action needed for VU0
    // 0x222a84: 0x4be3133c  vmove.xyzw  $vf3, $vf2
    ctx->pc = 0x222a84u;
    ctx->vu0_vf[3] = ctx->vu0_vf[2];
    // 0x222a88: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x222a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x222a8c: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x222a8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x222a90: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x222a90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x222a94: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x222a94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x222a98: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x222a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x222a9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x222a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222aa0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x222aa0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x222aa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x222aa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222aa8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x222aa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222aac: 0x0  nop
    ctx->pc = 0x222aacu;
    // NOP
    // 0x222ab0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x222AB0u;
    {
        const bool branch_taken_0x222ab0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x222AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222AB0u;
            // 0x222ab4: 0x4be1333c  vmove.xyzw  $vf1, $vf6 (Delay Slot)
        ctx->vu0_vf[1] = ctx->vu0_vf[6];
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ab0) {
            ctx->pc = 0x222AF0u;
            goto label_222af0;
        }
    }
    ctx->pc = 0x222AB8u;
    // 0x222ab8: 0x4b070840  vaddx.x     $vf1, $vf1, $vf7x
    ctx->pc = 0x222ab8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x222abc: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x222abcu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]);
    // 0x222ac0: 0x4bc1206e  vopmsub.xyz $vf1, $vf4, $vf1
    ctx->pc = 0x222ac0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x222ac4: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x222ac4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x222ac8: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x222ac8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x222acc: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x222accu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x222ad0: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x222ad0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x222ad4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x222ad4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x222ad8: 0x4a0003bf  vwaitq
    ctx->pc = 0x222ad8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x222adc: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x222adcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x222ae0: 0x4a0002ff  vnop
    ctx->pc = 0x222ae0u;
    // NOP operation, no action needed for VU0
    // 0x222ae4: 0x4a0002ff  vnop
    ctx->pc = 0x222ae4u;
    // NOP operation, no action needed for VU0
    // 0x222ae8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x222ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x222aec: 0x4be30b3c  vmove.xyzw  $vf3, $vf1
    ctx->pc = 0x222aecu;
    ctx->vu0_vf[3] = ctx->vu0_vf[1];
label_222af0:
    // 0x222af0: 0x4bc32afe  vopmula.xyz $ACC, $vf5, $vf3
    ctx->pc = 0x222af0u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]);
    // 0x222af4: 0x4bc5186e  vopmsub.xyz $vf1, $vf3, $vf5
    ctx->pc = 0x222af4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x222af8: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x222af8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x222afc: 0xf8a80030  sqc2        $vf8, 0x30($a1)
    ctx->pc = 0x222afcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x222b00: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x222b00u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x222b04: 0xf8a10010  sqc2        $vf1, 0x10($a1)
    ctx->pc = 0x222b04u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x222b08: 0xf8a50020  sqc2        $vf5, 0x20($a1)
    ctx->pc = 0x222b08u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x222b0c: 0x0  nop
    ctx->pc = 0x222b0cu;
    // NOP
label_222b10:
    // 0x222b10: 0x3e00008  jr          $ra
    ctx->pc = 0x222B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222B10u;
            // 0x222b14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222AF0u: goto label_222af0;
            case 0x222B10u: goto label_222b10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x222B18u;
}
