#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00184F40
// Address: 0x184f40 - 0x185270
void sub_00184F40_0x184f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184F40_0x184f40");
#endif

    ctx->pc = 0x184f40u;

    // 0x184f40: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x184f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x184f44: 0x48a71800  qmtc2.ni    $a3, $vf3
    ctx->pc = 0x184f44u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x184f48: 0x7fb00240  sq          $s0, 0x240($sp)
    ctx->pc = 0x184f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 16));
    // 0x184f4c: 0x7fb10230  sq          $s1, 0x230($sp)
    ctx->pc = 0x184f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 17));
    // 0x184f50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x184f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184f54: 0x7fa50210  sq          $a1, 0x210($sp)
    ctx->pc = 0x184f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 5));
    // 0x184f58: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x184f58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184f5c: 0xffbf0220  sd          $ra, 0x220($sp)
    ctx->pc = 0x184f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 31));
    // 0x184f60: 0x4be8033c  vmove.xyzw  $vf8, $vf0
    ctx->pc = 0x184f60u;
    ctx->vu0_vf[8] = ctx->vu0_vf[0];
    // 0x184f64: 0x4be9433d  vmr32.xyzw  $vf9, $vf8
    ctx->pc = 0x184f64u;
    ctx->vu0_vf[9] = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,1));
    // 0x184f68: 0xfba80000  sqc2        $vf8, 0x0($sp)
    ctx->pc = 0x184f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x184f6c: 0x4be74b3d  vmr32.xyzw  $vf7, $vf9
    ctx->pc = 0x184f6cu;
    ctx->vu0_vf[7] = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,1));
    // 0x184f70: 0xfba90010  sqc2        $vf9, 0x10($sp)
    ctx->pc = 0x184f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x184f74: 0x4bea3b3d  vmr32.xyzw  $vf10, $vf7
    ctx->pc = 0x184f74u;
    ctx->vu0_vf[10] = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,1));
    // 0x184f78: 0xfba70020  sqc2        $vf7, 0x20($sp)
    ctx->pc = 0x184f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x184f7c: 0xfbaa0030  sqc2        $vf10, 0x30($sp)
    ctx->pc = 0x184f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x184f80: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x184f80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x184f84: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x184f84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x184f88: 0x4be2096c  vsub.xyzw   $vf5, $vf1, $vf2
    ctx->pc = 0x184f88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x184f8c: 0xfa0a0000  sqc2        $vf10, 0x0($s0)
    ctx->pc = 0x184f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x184f90: 0xfa070010  sqc2        $vf7, 0x10($s0)
    ctx->pc = 0x184f90u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x184f94: 0xfa090020  sqc2        $vf9, 0x20($s0)
    ctx->pc = 0x184f94u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x184f98: 0xfa080030  sqc2        $vf8, 0x30($s0)
    ctx->pc = 0x184f98u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x184f9c: 0x4be528aa  vmul.xyzw   $vf2, $vf5, $vf5
    ctx->pc = 0x184f9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x184fa0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x184fa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x184fa4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x184fa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x184fa8: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x184fa8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x184fac: 0x4a0003bf  vwaitq
    ctx->pc = 0x184facu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x184fb0: 0x4bc0295c  vmulq.xyz   $vf5, $vf5, $Q
    ctx->pc = 0x184fb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x184fb4: 0x4a0002ff  vnop
    ctx->pc = 0x184fb4u;
    // NOP operation, no action needed for VU0
    // 0x184fb8: 0x4a0002ff  vnop
    ctx->pc = 0x184fb8u;
    // NOP operation, no action needed for VU0
    // 0x184fbc: 0x4bc32afe  vopmula.xyz $ACC, $vf5, $vf3
    ctx->pc = 0x184fbcu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]);
    // 0x184fc0: 0xfba50040  sqc2        $vf5, 0x40($sp)
    ctx->pc = 0x184fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x184fc4: 0x4bc518ee  vopmsub.xyz $vf3, $vf3, $vf5
    ctx->pc = 0x184fc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x184fc8: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x184fc8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x184fcc: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x184fccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x184fd0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x184fd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x184fd4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x184fd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x184fd8: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x184fd8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x184fdc: 0x4a0003bf  vwaitq
    ctx->pc = 0x184fdcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x184fe0: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x184fe0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x184fe4: 0x4a0002ff  vnop
    ctx->pc = 0x184fe4u;
    // NOP operation, no action needed for VU0
    // 0x184fe8: 0x4a0002ff  vnop
    ctx->pc = 0x184fe8u;
    // NOP operation, no action needed for VU0
    // 0x184fec: 0x4bc51afe  vopmula.xyz $ACC, $vf3, $vf5
    ctx->pc = 0x184fecu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[5]);
    // 0x184ff0: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x184ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x184ff4: 0x4bc328ae  vopmsub.xyz $vf2, $vf5, $vf3
    ctx->pc = 0x184ff4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x184ff8: 0xfba301f0  sqc2        $vf3, 0x1F0($sp)
    ctx->pc = 0x184ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x184ffc: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x184ffcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x185000: 0x4be2112a  vmul.xyzw   $vf4, $vf2, $vf2
    ctx->pc = 0x185000u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x185004: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x185004u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x185008: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x185008u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18500c: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x18500cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x185010: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x185010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185014: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x185014u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x185018: 0x4a0003bf  vwaitq
    ctx->pc = 0x185018u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18501c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x18501cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x185020: 0x4a0002ff  vnop
    ctx->pc = 0x185020u;
    // NOP operation, no action needed for VU0
    // 0x185024: 0x4a0002ff  vnop
    ctx->pc = 0x185024u;
    // NOP operation, no action needed for VU0
    // 0x185028: 0x4b050184  vsubx.x     $vf6, $vf0, $vf5x
    ctx->pc = 0x185028u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18502c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x18502cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x185030: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x185030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185034: 0x4b050105  vsuby.x     $vf4, $vf0, $vf5y
    ctx->pc = 0x185034u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x185038: 0x4b030041  vaddy.x     $vf1, $vf0, $vf3y
    ctx->pc = 0x185038u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18503c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x18503cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x185040: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x185040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185044: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x185044u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185048: 0x4b020041  vaddy.x     $vf1, $vf0, $vf2y
    ctx->pc = 0x185048u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18504c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x18504cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x185050: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x185050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185054: 0x4b030042  vaddz.x     $vf1, $vf0, $vf3z
    ctx->pc = 0x185054u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x185058: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x185058u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18505c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18505cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185060: 0x4b020042  vaddz.x     $vf1, $vf0, $vf2z
    ctx->pc = 0x185060u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x185064: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x185064u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x185068: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x185068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18506c: 0x70a72b89  pcpyld      $a1, $a1, $a3
    ctx->pc = 0x18506cu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 7)));
    // 0x185070: 0x4b050046  vsubz.x     $vf1, $vf0, $vf5z
    ctx->pc = 0x185070u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x185074: 0x70863389  pcpyld      $a2, $a0, $a2
    ctx->pc = 0x185074u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x185078: 0x70433b89  pcpyld      $a3, $v0, $v1
    ctx->pc = 0x185078u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x18507c: 0x48233000  qmfc2.ni    $v1, $vf6
    ctx->pc = 0x18507cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x185080: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x185080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185084: 0x48242000  qmfc2.ni    $a0, $vf4
    ctx->pc = 0x185084u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x185088: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x185088u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18508c: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x18508cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x185090: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x185090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185094: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x185094u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x185098: 0x71421389  pcpyld      $v0, $t2, $v0
    ctx->pc = 0x185098u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x18509c: 0x71431b89  pcpyld      $v1, $t2, $v1
    ctx->pc = 0x18509cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 3)));
    // 0x1850a0: 0x704514c8  ppacw       $v0, $v0, $a1
    ctx->pc = 0x1850a0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x1850a4: 0x71442389  pcpyld      $a0, $t2, $a0
    ctx->pc = 0x1850a4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 4)));
    // 0x1850a8: 0x70661cc8  ppacw       $v1, $v1, $a2
    ctx->pc = 0x1850a8u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x1850ac: 0x708724c8  ppacw       $a0, $a0, $a3
    ctx->pc = 0x1850acu;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x1850b0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x1850b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x1850b4: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x1850b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x1850b8: 0x7e040020  sq          $a0, 0x20($s0)
    ctx->pc = 0x1850b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 4));
    // 0x1850bc: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x1850bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1850c0: 0xfba20200  sqc2        $vf2, 0x200($sp)
    ctx->pc = 0x1850c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1850c4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1850c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x1850c8: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x1850c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x1850cc: 0x7fa40090  sq          $a0, 0x90($sp)
    ctx->pc = 0x1850ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 4));
    // 0x1850d0: 0x4be320ec  vsub.xyzw   $vf3, $vf4, $vf3
    ctx->pc = 0x1850d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1850d4: 0xdba10210  lqc2        $vf1, 0x210($sp)
    ctx->pc = 0x1850d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1850d8: 0x4be118ea  vmul.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1850d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1850dc: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1850dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1850e0: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1850e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1850e4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1850e4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1850e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1850e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1850ec: 0x4be2212c  vsub.xyzw   $vf4, $vf4, $vf2
    ctx->pc = 0x1850ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1850f0: 0xdba20210  lqc2        $vf2, 0x210($sp)
    ctx->pc = 0x1850f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1850f4: 0x4be2212a  vmul.xyzw   $vf4, $vf4, $vf2
    ctx->pc = 0x1850f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1850f8: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x1850f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1850fc: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x1850fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x185100: 0x4be2296a  vmul.xyzw   $vf5, $vf5, $vf2
    ctx->pc = 0x185100u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x185104: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x185104u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x185108: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x185108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18510c: 0x4b052841  vaddy.x     $vf1, $vf5, $vf5y
    ctx->pc = 0x18510cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x185110: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x185110u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x185114: 0x4b050842  vaddz.x     $vf1, $vf1, $vf5z
    ctx->pc = 0x185114u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x185118: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x185118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18511c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x18511cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x185120: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x185120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185124: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x185124u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x185128: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x185128u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x18512c: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x18512cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185130: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x185130u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x185134: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x185134u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x185138: 0x45010031  bc1t        . + 4 + (0x31 << 2)
    ctx->pc = 0x185138u;
    {
        const bool branch_taken_0x185138 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18513Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185138u;
            // 0x18513c: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185138) {
            ctx->pc = 0x185200u;
            goto label_185200;
        }
    }
    ctx->pc = 0x185140u;
    // 0x185140: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x185140u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x185144: 0xfbaa00b0  sqc2        $vf10, 0xB0($sp)
    ctx->pc = 0x185144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x185148: 0xfba700c0  sqc2        $vf7, 0xC0($sp)
    ctx->pc = 0x185148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x18514c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x18514cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x185150: 0xfba900d0  sqc2        $vf9, 0xD0($sp)
    ctx->pc = 0x185150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x185154: 0xfba800e0  sqc2        $vf8, 0xE0($sp)
    ctx->pc = 0x185154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x185158: 0xfba800f0  sqc2        $vf8, 0xF0($sp)
    ctx->pc = 0x185158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x18515c: 0xfba90100  sqc2        $vf9, 0x100($sp)
    ctx->pc = 0x18515cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x185160: 0xfba70110  sqc2        $vf7, 0x110($sp)
    ctx->pc = 0x185160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x185164: 0xc06119a  jal         func_184668
    ctx->pc = 0x185164u;
    SET_GPR_U32(ctx, 31, 0x18516Cu);
    ctx->pc = 0x185168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185164u;
            // 0x185168: 0xfbaa0120  sqc2        $vf10, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[10]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184668u;
    if (runtime->hasFunction(0x184668u)) {
        auto targetFn = runtime->lookupFunction(0x184668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18516Cu; }
        if (ctx->pc != 0x18516Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184668_0x184668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18516Cu; }
        if (ctx->pc != 0x18516Cu) { return; }
    }
    ctx->pc = 0x18516Cu;
    // 0x18516c: 0xdba600b0  lqc2        $vf6, 0xB0($sp)
    ctx->pc = 0x18516cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x185170: 0xdba700c0  lqc2        $vf7, 0xC0($sp)
    ctx->pc = 0x185170u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x185174: 0xdba800d0  lqc2        $vf8, 0xD0($sp)
    ctx->pc = 0x185174u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x185178: 0xdba400e0  lqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x185178u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x18517c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x18517cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x185180: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x185180u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x185184: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x185184u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x185188: 0xda050030  lqc2        $vf5, 0x30($s0)
    ctx->pc = 0x185188u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18518c: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x18518cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x185190: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x185190u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x185194: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x185194u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x185198: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x185198u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x18519c: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x18519cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1851a0: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x1851a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1851a4: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x1851a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1851a8: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x1851a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1851ac: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x1851acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1851b0: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x1851b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1851b4: 0xfba20180  sqc2        $vf2, 0x180($sp)
    ctx->pc = 0x1851b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1851b8: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x1851b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1851bc: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x1851bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1851c0: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x1851c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1851c4: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x1851c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1851c8: 0xfba30190  sqc2        $vf3, 0x190($sp)
    ctx->pc = 0x1851c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1851cc: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x1851ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1851d0: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x1851d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1851d4: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x1851d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1851d8: 0xfba401a0  sqc2        $vf4, 0x1A0($sp)
    ctx->pc = 0x1851d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1851dc: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x1851dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1851e0: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1851e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1851e4: 0xfa020010  sqc2        $vf2, 0x10($s0)
    ctx->pc = 0x1851e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1851e8: 0xfa030020  sqc2        $vf3, 0x20($s0)
    ctx->pc = 0x1851e8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1851ec: 0xfa040030  sqc2        $vf4, 0x30($s0)
    ctx->pc = 0x1851ecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1851f0: 0xfba20140  sqc2        $vf2, 0x140($sp)
    ctx->pc = 0x1851f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1851f4: 0xfba30150  sqc2        $vf3, 0x150($sp)
    ctx->pc = 0x1851f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1851f8: 0xfba40160  sqc2        $vf4, 0x160($sp)
    ctx->pc = 0x1851f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1851fc: 0x0  nop
    ctx->pc = 0x1851fcu;
    // NOP
label_185200:
    // 0x185200: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x185200u;
    {
        const bool branch_taken_0x185200 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x185204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185200u;
            // 0x185204: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185200) {
            ctx->pc = 0x185258u;
            goto label_185258;
        }
    }
    ctx->pc = 0x185208u;
    // 0x185208: 0xc0613b4  jal         func_184ED0
    ctx->pc = 0x185208u;
    SET_GPR_U32(ctx, 31, 0x185210u);
    ctx->pc = 0x18520Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185208u;
            // 0x18520c: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184ED0u;
    if (runtime->hasFunction(0x184ED0u)) {
        auto targetFn = runtime->lookupFunction(0x184ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185210u; }
        if (ctx->pc != 0x185210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_184ed0_0x184f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185210u; }
        if (ctx->pc != 0x185210u) { return; }
    }
    ctx->pc = 0x185210u;
    // 0x185210: 0xdba101b0  lqc2        $vf1, 0x1B0($sp)
    ctx->pc = 0x185210u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x185214: 0xdba201c0  lqc2        $vf2, 0x1C0($sp)
    ctx->pc = 0x185214u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x185218: 0xdba301d0  lqc2        $vf3, 0x1D0($sp)
    ctx->pc = 0x185218u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x18521c: 0x7ba201e0  lq          $v0, 0x1E0($sp)
    ctx->pc = 0x18521cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x185220: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x185220u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x185224: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x185224u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    // 0x185228: 0xfa220010  sqc2        $vf2, 0x10($s1)
    ctx->pc = 0x185228u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x18522c: 0xfa230020  sqc2        $vf3, 0x20($s1)
    ctx->pc = 0x18522cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x185230: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x185230u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x185234: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x185234u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x185238: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x185238u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18523c: 0xfa220010  sqc2        $vf2, 0x10($s1)
    ctx->pc = 0x18523cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x185240: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x185240u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x185244: 0xfa230020  sqc2        $vf3, 0x20($s1)
    ctx->pc = 0x185244u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x185248: 0xdba10210  lqc2        $vf1, 0x210($sp)
    ctx->pc = 0x185248u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x18524c: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x18524cu;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x185250: 0xfa210030  sqc2        $vf1, 0x30($s1)
    ctx->pc = 0x185250u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x185254: 0x0  nop
    ctx->pc = 0x185254u;
    // NOP
label_185258:
    // 0x185258: 0x7bb00240  lq          $s0, 0x240($sp)
    ctx->pc = 0x185258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x18525c: 0x7bb10230  lq          $s1, 0x230($sp)
    ctx->pc = 0x18525cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x185260: 0xdfbf0220  ld          $ra, 0x220($sp)
    ctx->pc = 0x185260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x185264: 0x3e00008  jr          $ra
    ctx->pc = 0x185264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185264u;
            // 0x185268: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x185200u: goto label_185200;
            case 0x185258u: goto label_185258;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18526Cu;
    // 0x18526c: 0x0  nop
    ctx->pc = 0x18526cu;
    // NOP
}
