#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E2EC8
// Address: 0x1e2ec8 - 0x1e3af8
void sub_001E2EC8_0x1e2ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2EC8_0x1e2ec8");
#endif

    ctx->pc = 0x1e2ec8u;

    // 0x1e2ec8: 0x27bdfb00  addiu       $sp, $sp, -0x500
    ctx->pc = 0x1e2ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966016));
    // 0x1e2ecc: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x1e2eccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1e2ed0: 0x7fb104e0  sq          $s1, 0x4E0($sp)
    ctx->pc = 0x1e2ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 17));
    // 0x1e2ed4: 0x7fb70480  sq          $s7, 0x480($sp)
    ctx->pc = 0x1e2ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 23));
    // 0x1e2ed8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e2ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2edc: 0x7fa60380  sq          $a2, 0x380($sp)
    ctx->pc = 0x1e2edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 6));
    // 0x1e2ee0: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1e2ee0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2ee4: 0x7fb004f0  sq          $s0, 0x4F0($sp)
    ctx->pc = 0x1e2ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 16));
    // 0x1e2ee8: 0x7fb204d0  sq          $s2, 0x4D0($sp)
    ctx->pc = 0x1e2ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 18));
    // 0x1e2eec: 0x7fb304c0  sq          $s3, 0x4C0($sp)
    ctx->pc = 0x1e2eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 19));
    // 0x1e2ef0: 0x7fb404b0  sq          $s4, 0x4B0($sp)
    ctx->pc = 0x1e2ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 20));
    // 0x1e2ef4: 0x7fb504a0  sq          $s5, 0x4A0($sp)
    ctx->pc = 0x1e2ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 21));
    // 0x1e2ef8: 0x7fb60490  sq          $s6, 0x490($sp)
    ctx->pc = 0x1e2ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 22));
    // 0x1e2efc: 0x7fbe0470  sq          $fp, 0x470($sp)
    ctx->pc = 0x1e2efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 30));
    // 0x1e2f00: 0xffbf0460  sd          $ra, 0x460($sp)
    ctx->pc = 0x1e2f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 31));
    // 0x1e2f04: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x1e2f04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1e2f08: 0x4be2206c  vsub.xyzw   $vf1, $vf4, $vf2
    ctx->pc = 0x1e2f08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2f0c: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1e2f0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2f10: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1e2f10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2f14: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1e2f14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2f18: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x1e2f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1e2f1c: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1e2f1cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e2f20: 0x3c01404c  lui         $at, 0x404C
    ctx->pc = 0x1e2f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16460 << 16));
    // 0x1e2f24: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e2f24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e2f28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e2f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2f2c: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1e2f2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1e2f30: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1e2f30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e2f34: 0x46010044  c1          0x10044
    ctx->pc = 0x1e2f34u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1e2f38: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1e2f38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2f3c: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x1e2f3cu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x1e2f40: 0xfba20390  sqc2        $vf2, 0x390($sp)
    ctx->pc = 0x1e2f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e2f44: 0xfba101f0  sqc2        $vf1, 0x1F0($sp)
    ctx->pc = 0x1e2f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2f48: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1e2f48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2f4c: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1e2f4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e2f50: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1e2f50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2f54: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1e2f54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2f58: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1e2f58u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e2f5c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e2f5cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e2f60: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1e2f60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2f64: 0x4a0002ff  vnop
    ctx->pc = 0x1e2f64u;
    // NOP operation, no action needed for VU0
    // 0x1e2f68: 0x4a0002ff  vnop
    ctx->pc = 0x1e2f68u;
    // NOP operation, no action needed for VU0
    // 0x1e2f6c: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1e2f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1e2f70: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x1e2f70u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e2f74: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e2f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2f78: 0xfba10200  sqc2        $vf1, 0x200($sp)
    ctx->pc = 0x1e2f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2f7c: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1e2f7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2f80: 0xfba10210  sqc2        $vf1, 0x210($sp)
    ctx->pc = 0x1e2f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2f84: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1e2f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1e2f88: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1e2f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1e2f8c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1e2f8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e2f90: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e2f90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2f94: 0x4be12168  vadd.xyzw   $vf5, $vf4, $vf1
    ctx->pc = 0x1e2f94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e2f98: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x1e2f98u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1e2f9c: 0xda220120  lqc2        $vf2, 0x120($s1)
    ctx->pc = 0x1e2f9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1e2fa0: 0x4be218da  vmulz.xyzw  $vf3, $vf3, $vf2z
    ctx->pc = 0x1e2fa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e2fa4: 0xfba30220  sqc2        $vf3, 0x220($sp)
    ctx->pc = 0x1e2fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e2fa8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1e2fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1e2fac: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1e2facu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e2fb0: 0x4be418d8  vmulx.xyzw  $vf3, $vf3, $vf4x
    ctx->pc = 0x1e2fb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e2fb4: 0xfba30290  sqc2        $vf3, 0x290($sp)
    ctx->pc = 0x1e2fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e2fb8: 0x4b020084  vsubx.x     $vf2, $vf0, $vf2x
    ctx->pc = 0x1e2fb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2fbc: 0xda210050  lqc2        $vf1, 0x50($s1)
    ctx->pc = 0x1e2fbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1e2fc0: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e2fc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2fc4: 0xfba10230  sqc2        $vf1, 0x230($sp)
    ctx->pc = 0x1e2fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2fc8: 0x4be40858  vmulx.xyzw  $vf1, $vf1, $vf4x
    ctx->pc = 0x1e2fc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2fcc: 0xfba10240  sqc2        $vf1, 0x240($sp)
    ctx->pc = 0x1e2fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2fd0: 0x4be40918  vmulx.xyzw  $vf4, $vf1, $vf4x
    ctx->pc = 0x1e2fd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e2fd4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1e2fd4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2fd8: 0xc6200140  lwc1        $f0, 0x140($s1)
    ctx->pc = 0x1e2fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2fdc: 0xdbc20010  lqc2        $vf2, 0x10($fp)
    ctx->pc = 0x1e2fdcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e2fe0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e2fe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e2fe4: 0xfba20250  sqc2        $vf2, 0x250($sp)
    ctx->pc = 0x1e2fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e2fe8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e2fe8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e2fec: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e2fecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e2ff0: 0x4be11198  vmulx.xyzw  $vf6, $vf2, $vf1x
    ctx->pc = 0x1e2ff0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1e2ff4: 0xfba603a0  sqc2        $vf6, 0x3A0($sp)
    ctx->pc = 0x1e2ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1e2ff8: 0x4be3306c  vsub.xyzw   $vf1, $vf6, $vf3
    ctx->pc = 0x1e2ff8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2ffc: 0xfba103b0  sqc2        $vf1, 0x3B0($sp)
    ctx->pc = 0x1e2ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3000: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1e3000u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e3004: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e3004u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e3008: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1e3008u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e300c: 0xfba20260  sqc2        $vf2, 0x260($sp)
    ctx->pc = 0x1e300cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e3010: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e3010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e3014: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1e3014u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e3018: 0x4be110d8  vmulx.xyzw  $vf3, $vf2, $vf1x
    ctx->pc = 0x1e3018u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e301c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e301cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3020: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e3020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e3024: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e3024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e3028:
    // 0x1e3028: 0x0  nop
    ctx->pc = 0x1e3028u;
    // NOP
    // 0x1e302c: 0x0  nop
    ctx->pc = 0x1e302cu;
    // NOP
    // 0x1e3030: 0x0  nop
    ctx->pc = 0x1e3030u;
    // NOP
    // 0x1e3034: 0x0  nop
    ctx->pc = 0x1e3034u;
    // NOP
    // 0x1e3038: 0x0  nop
    ctx->pc = 0x1e3038u;
    // NOP
    // 0x1e303c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1E303Cu;
    {
        const bool branch_taken_0x1e303c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E3040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E303Cu;
            // 0x1e3040: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e303c) {
            ctx->pc = 0x1E3028u;
            runtime->cooperativeGuestYield();
            goto label_1e3028;
        }
    }
    ctx->pc = 0x1E3044u;
    // 0x1e3044: 0xdba203b0  lqc2        $vf2, 0x3B0($sp)
    ctx->pc = 0x1e3044u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x1e3048: 0x4be22868  vadd.xyzw   $vf1, $vf5, $vf2
    ctx->pc = 0x1e3048u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e304c: 0x4be408a8  vadd.xyzw   $vf2, $vf1, $vf4
    ctx->pc = 0x1e304cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3050: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1e3050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e3054: 0x4be4086c  vsub.xyzw   $vf1, $vf1, $vf4
    ctx->pc = 0x1e3054u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3058: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e3058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e305c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e305cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3060: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e3060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e3064: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e3064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e3068:
    // 0x1e3068: 0x0  nop
    ctx->pc = 0x1e3068u;
    // NOP
    // 0x1e306c: 0x0  nop
    ctx->pc = 0x1e306cu;
    // NOP
    // 0x1e3070: 0x0  nop
    ctx->pc = 0x1e3070u;
    // NOP
    // 0x1e3074: 0x0  nop
    ctx->pc = 0x1e3074u;
    // NOP
    // 0x1e3078: 0x0  nop
    ctx->pc = 0x1e3078u;
    // NOP
    // 0x1e307c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1E307Cu;
    {
        const bool branch_taken_0x1e307c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E3080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E307Cu;
            // 0x1e3080: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e307c) {
            ctx->pc = 0x1E3068u;
            runtime->cooperativeGuestYield();
            goto label_1e3068;
        }
    }
    ctx->pc = 0x1E3084u;
    // 0x1e3084: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e3084u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3088: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1e3088u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e308c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1e308cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3090: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e3090u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3094: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1e3094u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3098: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1e3098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e309c: 0x3c030430  lui         $v1, 0x430
    ctx->pc = 0x1e309cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1072 << 16));
    // 0x1e30a0: 0x3c020903  lui         $v0, 0x903
    ctx->pc = 0x1e30a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2307 << 16));
    // 0x1e30a4: 0x34420042  ori         $v0, $v0, 0x42
    ctx->pc = 0x1e30a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)66);
    // 0x1e30a8: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1e30a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1e30ac: 0x8e240258  lw          $a0, 0x258($s1)
    ctx->pc = 0x1e30acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
    // 0x1e30b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e30b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e30b4: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x1e30b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e30b8: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x1e30b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e30bc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1e30bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e30c0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1e30c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e30c4: 0x3c03ff94  lui         $v1, 0xFF94
    ctx->pc = 0x1e30c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65428 << 16));
    // 0x1e30c8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1e30c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1e30cc: 0x3463e00c  ori         $v1, $v1, 0xE00C
    ctx->pc = 0x1e30ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57356);
    // 0x1e30d0: 0x24c2f170  addiu       $v0, $a2, -0xE90
    ctx->pc = 0x1e30d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963568));
    // 0x1e30d4: 0xacc3f170  sw          $v1, -0xE90($a2)
    ctx->pc = 0x1e30d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963568), GPR_U32(ctx, 3));
    // 0x1e30d8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1e30d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1e30dc: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x1e30dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x1e30e0: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x1e30e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x1e30e4: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1e30e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1e30e8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1e30e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1e30ec: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1e30ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1e30f0: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1e30f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1e30f4: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1e30f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1e30f8: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1e30f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1e30fc: 0x0  nop
    ctx->pc = 0x1e30fcu;
    // NOP
label_1e3100:
    // 0x1e3100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3104: 0xc08f42a  jal         func_23D0A8
    ctx->pc = 0x1E3104u;
    SET_GPR_U32(ctx, 31, 0x1E310Cu);
    ctx->pc = 0x1E3108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3104u;
            // 0x1e3108: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23D0A8u;
    if (runtime->hasFunction(0x23D0A8u)) {
        auto targetFn = runtime->lookupFunction(0x23D0A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E310Cu; }
        if (ctx->pc != 0x1E310Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23d0a8_0x23d0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E310Cu; }
        if (ctx->pc != 0x1E310Cu) { return; }
    }
    ctx->pc = 0x1E310Cu;
    // 0x1e310c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e310cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e3110: 0x1642fffb  bne         $s2, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E3110u;
    {
        const bool branch_taken_0x1e3110 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E3114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3110u;
            // 0x1e3114: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3110) {
            ctx->pc = 0x1E3100u;
            runtime->cooperativeGuestYield();
            goto label_1e3100;
        }
    }
    ctx->pc = 0x1E3118u;
    // 0x1e3118: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x1e3118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e311c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1e311cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3120: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e3120u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3124: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x1e3124u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3128: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1e3128u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e312c: 0x0  nop
    ctx->pc = 0x1e312cu;
    // NOP
label_1e3130:
    // 0x1e3130: 0x3c16002a  lui         $s6, 0x2A
    ctx->pc = 0x1e3130u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
    // 0x1e3134: 0x7a450010  lq          $a1, 0x10($s2)
    ctx->pc = 0x1e3134u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1e3138: 0x8ec4bcf8  lw          $a0, -0x4308($s6)
    ctx->pc = 0x1e3138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950136)));
    // 0x1e313c: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E313Cu;
    SET_GPR_U32(ctx, 31, 0x1E3144u);
    ctx->pc = 0x1E3140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E313Cu;
            // 0x1e3140: 0x7a460030  lq          $a2, 0x30($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3144u; }
        if (ctx->pc != 0x1E3144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3144u; }
        if (ctx->pc != 0x1E3144u) { return; }
    }
    ctx->pc = 0x1E3144u;
    // 0x1e3144: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1e3144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1e3148: 0x24647790  addiu       $a0, $v1, 0x7790
    ctx->pc = 0x1e3148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 30608));
    // 0x1e314c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1e314cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e3150: 0x78860030  lq          $a2, 0x30($a0)
    ctx->pc = 0x1e3150u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1e3154: 0x743821  addu        $a3, $v1, $s4
    ctx->pc = 0x1e3154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1e3158: 0x78850010  lq          $a1, 0x10($a0)
    ctx->pc = 0x1e3158u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e315c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x1e315cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e3160: 0x78840020  lq          $a0, 0x20($a0)
    ctx->pc = 0x1e3160u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1e3164: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1e3164u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1e3168: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e3168u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e316c: 0x7e050010  sq          $a1, 0x10($s0)
    ctx->pc = 0x1e316cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 5));
    // 0x1e3170: 0x7e040020  sq          $a0, 0x20($s0)
    ctx->pc = 0x1e3170u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 4));
    // 0x1e3174: 0x7e060030  sq          $a2, 0x30($s0)
    ctx->pc = 0x1e3174u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 6));
    // 0x1e3178: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1e3178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e317c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E317Cu;
    {
        const bool branch_taken_0x1e317c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E317Cu;
            // 0x1e3180: 0x3b51021  addu        $v0, $sp, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e317c) {
            ctx->pc = 0x1E31C8u;
            goto label_1e31c8;
        }
    }
    ctx->pc = 0x1E3184u;
    // 0x1e3184: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1e3184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1e3188: 0x8c44008c  lw          $a0, 0x8C($v0)
    ctx->pc = 0x1e3188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1e318c: 0x8c625e6c  lw          $v0, 0x5E6C($v1)
    ctx->pc = 0x1e318cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24172)));
    // 0x1e3190: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1e3190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1e3194: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3198: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1e3198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1e319c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1E319Cu;
    {
        const bool branch_taken_0x1e319c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e319c) {
            ctx->pc = 0x1E31A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E319Cu;
            // 0x1e31a0: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E31C8u;
            goto label_1e31c8;
        }
    }
    ctx->pc = 0x1E31A4u;
    // 0x1e31a4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1e31a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1e31a8: 0x8c425e70  lw          $v0, 0x5E70($v0)
    ctx->pc = 0x1e31a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24176)));
    // 0x1e31ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1e31acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1e31b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e31b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e31b4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1e31b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1e31b8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E31B8u;
    {
        const bool branch_taken_0x1e31b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e31b8) {
            ctx->pc = 0x1E31BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E31B8u;
            // 0x1e31bc: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E31CCu;
            goto label_1e31cc;
        }
    }
    ctx->pc = 0x1E31C0u;
    // 0x1e31c0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1e31c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1e31c4: 0x0  nop
    ctx->pc = 0x1e31c4u;
    // NOP
label_1e31c8:
    // 0x1e31c8: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1e31c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1e31cc:
    // 0x1e31cc: 0x26b50040  addiu       $s5, $s5, 0x40
    ctx->pc = 0x1e31ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1e31d0: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1e31d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1e31d4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1e31d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1e31d8: 0x661ffd5  bgez        $s3, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1E31D8u;
    {
        const bool branch_taken_0x1e31d8 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1E31DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E31D8u;
            // 0x1e31dc: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e31d8) {
            ctx->pc = 0x1E3130u;
            runtime->cooperativeGuestYield();
            goto label_1e3130;
        }
    }
    ctx->pc = 0x1E31E0u;
    // 0x1e31e0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1e31e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e31e4: 0x106001e2  beqz        $v1, . + 4 + (0x1E2 << 2)
    ctx->pc = 0x1E31E4u;
    {
        const bool branch_taken_0x1e31e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E31E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E31E4u;
            // 0x1e31e8: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e31e4) {
            ctx->pc = 0x1E3970u;
            goto label_1e3970;
        }
    }
    ctx->pc = 0x1E31ECu;
    // 0x1e31ec: 0x104001e2  beqz        $v0, . + 4 + (0x1E2 << 2)
    ctx->pc = 0x1E31ECu;
    {
        const bool branch_taken_0x1e31ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E31F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E31ECu;
            // 0x1e31f0: 0x7ba20070  lq          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e31ec) {
            ctx->pc = 0x1E3978u;
            goto label_1e3978;
        }
    }
    ctx->pc = 0x1E31F4u;
    // 0x1e31f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e31f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e31f8: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1e31f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x1e31fc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1e31fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1e3200: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e3200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e3204: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1e3204u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e3208: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e320c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e320cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3210: 0x0  nop
    ctx->pc = 0x1e3210u;
    // NOP
    // 0x1e3214: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1E3214u;
    {
        const bool branch_taken_0x1e3214 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3214u;
            // 0x1e3218: 0x7ba200b0  lq          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3214) {
            ctx->pc = 0x1E3234u;
            goto label_1e3234;
        }
    }
    ctx->pc = 0x1E321Cu;
    // 0x1e321c: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1e321cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e3220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3224: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e3224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3228: 0x0  nop
    ctx->pc = 0x1e3228u;
    // NOP
    // 0x1e322c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E322Cu;
    {
        const bool branch_taken_0x1e322c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e322c) {
            ctx->pc = 0x1E3230u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E322Cu;
            // 0x1e3230: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E3234u;
            goto label_1e3234;
        }
    }
    ctx->pc = 0x1E3234u;
label_1e3234:
    // 0x1e3234: 0x10600222  beqz        $v1, . + 4 + (0x222 << 2)
    ctx->pc = 0x1E3234u;
    {
        const bool branch_taken_0x1e3234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3234u;
            // 0x1e3238: 0xdba30060  lqc2        $vf3, 0x60($sp) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3234) {
            ctx->pc = 0x1E3AC0u;
            goto label_1e3ac0;
        }
    }
    ctx->pc = 0x1E323Cu;
    // 0x1e323c: 0xdba100a0  lqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1e323cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e3240: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1e3240u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3244: 0xfba10270  sqc2        $vf1, 0x270($sp)
    ctx->pc = 0x1e3244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3248: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e3248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e324c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e324cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e3250: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e3250u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3254: 0x4be118a8  vadd.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x1e3254u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3258: 0xfba203c0  sqc2        $vf2, 0x3C0($sp)
    ctx->pc = 0x1e3258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e325c: 0x7ae20000  lq          $v0, 0x0($s7)
    ctx->pc = 0x1e325cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1e3260: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1e3260u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e3264: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e3264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e3268: 0x7ba30380  lq          $v1, 0x380($sp)
    ctx->pc = 0x1e3268u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x1e326c: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1e326cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e3270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3274: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e3274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3278: 0x0  nop
    ctx->pc = 0x1e3278u;
    // NOP
    // 0x1e327c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E327Cu;
    {
        const bool branch_taken_0x1e327c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E327Cu;
            // 0x1e3280: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e327c) {
            ctx->pc = 0x1E3288u;
            goto label_1e3288;
        }
    }
    ctx->pc = 0x1E3284u;
    // 0x1e3284: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e3284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3288:
    // 0x1e3288: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E3288u;
    {
        const bool branch_taken_0x1e3288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3288) {
            ctx->pc = 0x1E328Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3288u;
            // 0x1e328c: 0xdae30000  lqc2        $vf3, 0x0($s7) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E32D0u;
            goto label_1e32d0;
        }
    }
    ctx->pc = 0x1E3290u;
    // 0x1e3290: 0x8e240140  lw          $a0, 0x140($s1)
    ctx->pc = 0x1e3290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x1e3294: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1e3294u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1e3298: 0xdba203c0  lqc2        $vf2, 0x3C0($sp)
    ctx->pc = 0x1e3298u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x1e329c: 0x4a811044  vsubx.y     $vf1, $vf2, $vf1x
    ctx->pc = 0x1e329cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e32a0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1e32a0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e32a4: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1e32a4u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e32a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e32a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e32ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e32acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e32b0: 0x0  nop
    ctx->pc = 0x1e32b0u;
    // NOP
    // 0x1e32b4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E32B4u;
    {
        const bool branch_taken_0x1e32b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E32B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E32B4u;
            // 0x1e32b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e32b4) {
            ctx->pc = 0x1E32C0u;
            goto label_1e32c0;
        }
    }
    ctx->pc = 0x1E32BCu;
    // 0x1e32bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e32bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e32c0:
    // 0x1e32c0: 0x14400200  bnez        $v0, . + 4 + (0x200 << 2)
    ctx->pc = 0x1E32C0u;
    {
        const bool branch_taken_0x1e32c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E32C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E32C0u;
            // 0x1e32c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e32c0) {
            ctx->pc = 0x1E3AC4u;
            goto label_1e3ac4;
        }
    }
    ctx->pc = 0x1E32C8u;
    // 0x1e32c8: 0xdae30000  lqc2        $vf3, 0x0($s7)
    ctx->pc = 0x1e32c8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1e32cc: 0x0  nop
    ctx->pc = 0x1e32ccu;
    // NOP
label_1e32d0:
    // 0x1e32d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e32d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e32d4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e32d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e32d8: 0xdba10390  lqc2        $vf1, 0x390($sp)
    ctx->pc = 0x1e32d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x1e32dc: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1e32dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e32e0: 0x8ec4bcf8  lw          $a0, -0x4308($s6)
    ctx->pc = 0x1e32e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950136)));
    // 0x1e32e4: 0xdba203a0  lqc2        $vf2, 0x3A0($sp)
    ctx->pc = 0x1e32e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x1e32e8: 0x4be218a8  vadd.xyzw   $vf2, $vf3, $vf2
    ctx->pc = 0x1e32e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e32ec: 0xdba303c0  lqc2        $vf3, 0x3C0($sp)
    ctx->pc = 0x1e32ecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x1e32f0: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1e32f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e32f4: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x1e32f4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e32f8: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E32F8u;
    SET_GPR_U32(ctx, 31, 0x1E3300u);
    ctx->pc = 0x1E32FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E32F8u;
            // 0x1e32fc: 0x48261800  qmfc2.ni    $a2, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3300u; }
        if (ctx->pc != 0x1E3300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3300u; }
        if (ctx->pc != 0x1E3300u) { return; }
    }
    ctx->pc = 0x1E3300u;
    // 0x1e3300: 0x144001f0  bnez        $v0, . + 4 + (0x1F0 << 2)
    ctx->pc = 0x1E3300u;
    {
        const bool branch_taken_0x1e3300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3300u;
            // 0x1e3304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3300) {
            ctx->pc = 0x1E3AC4u;
            goto label_1e3ac4;
        }
    }
    ctx->pc = 0x1E3308u;
    // 0x1e3308: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1e3308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1e330c: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x1e330cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1e3310: 0x8c635e6c  lw          $v1, 0x5E6C($v1)
    ctx->pc = 0x1e3310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24172)));
    // 0x1e3314: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e3314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e3318: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e3318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e331c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1e331cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1e3320: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1e3320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1e3324: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1e3324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e3328: 0x5060006a  beql        $v1, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x1E3328u;
    {
        const bool branch_taken_0x1e3328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3328) {
            ctx->pc = 0x1E332Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3328u;
            // 0x1e332c: 0xda210120  lqc2        $vf1, 0x120($s1) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E34D4u;
            goto label_1e34d4;
        }
    }
    ctx->pc = 0x1E3330u;
    // 0x1e3330: 0xda220120  lqc2        $vf2, 0x120($s1)
    ctx->pc = 0x1e3330u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1e3334: 0xda210050  lqc2        $vf1, 0x50($s1)
    ctx->pc = 0x1e3334u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1e3338: 0x4b020084  vsubx.x     $vf2, $vf0, $vf2x
    ctx->pc = 0x1e3338u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e333c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e333cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3340: 0xfba10280  sqc2        $vf1, 0x280($sp)
    ctx->pc = 0x1e3340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3344: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e3344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e3348: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x1e3348u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e334c: 0xfba503d0  sqc2        $vf5, 0x3D0($sp)
    ctx->pc = 0x1e334cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e3350: 0xdba603c0  lqc2        $vf6, 0x3C0($sp)
    ctx->pc = 0x1e3350u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x1e3354: 0xdba103b0  lqc2        $vf1, 0x3B0($sp)
    ctx->pc = 0x1e3354u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x1e3358: 0x4be130ec  vsub.xyzw   $vf3, $vf6, $vf1
    ctx->pc = 0x1e3358u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e335c: 0xc6200140  lwc1        $f0, 0x140($s1)
    ctx->pc = 0x1e335cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3360: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1e3360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1e3364: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e3364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e3368: 0xdbc10010  lqc2        $vf1, 0x10($fp)
    ctx->pc = 0x1e3368u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e336c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e336cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e3370: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e3370u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e3374: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1e3374u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e3378: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e3378u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e337c: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1e337cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e3380: 0xdba10290  lqc2        $vf1, 0x290($sp)
    ctx->pc = 0x1e3380u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1e3384: 0xdba20390  lqc2        $vf2, 0x390($sp)
    ctx->pc = 0x1e3384u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x1e3388: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1e3388u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e338c: 0xfba102a0  sqc2        $vf1, 0x2A0($sp)
    ctx->pc = 0x1e338cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3390: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e3390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e3394: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e3394u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e3398: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e3398u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e339c: 0x8ec4bcf8  lw          $a0, -0x4308($s6)
    ctx->pc = 0x1e339cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950136)));
    // 0x1e33a0: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x1e33a0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e33a4: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1e33a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e33a8: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E33A8u;
    SET_GPR_U32(ctx, 31, 0x1E33B0u);
    ctx->pc = 0x1E33ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E33A8u;
            // 0x1e33ac: 0x48261800  qmfc2.ni    $a2, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E33B0u; }
        if (ctx->pc != 0x1E33B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E33B0u; }
        if (ctx->pc != 0x1E33B0u) { return; }
    }
    ctx->pc = 0x1E33B0u;
    // 0x1e33b0: 0x104001c3  beqz        $v0, . + 4 + (0x1C3 << 2)
    ctx->pc = 0x1E33B0u;
    {
        const bool branch_taken_0x1e33b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E33B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E33B0u;
            // 0x1e33b4: 0x8fa2008c  lw          $v0, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e33b0) {
            ctx->pc = 0x1E3AC0u;
            goto label_1e3ac0;
        }
    }
    ctx->pc = 0x1E33B8u;
    // 0x1e33b8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1e33b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1e33bc: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x1e33bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e33c0: 0xae220234  sw          $v0, 0x234($s1)
    ctx->pc = 0x1e33c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 564), GPR_U32(ctx, 2));
    // 0x1e33c4: 0x7e230210  sq          $v1, 0x210($s1)
    ctx->pc = 0x1e33c4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 528), GPR_VEC(ctx, 3));
    // 0x1e33c8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E33C8u;
    {
        const bool branch_taken_0x1e33c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E33CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E33C8u;
            // 0x1e33cc: 0xae240240  sw          $a0, 0x240($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 576), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e33c8) {
            ctx->pc = 0x1E33E0u;
            goto label_1e33e0;
        }
    }
    ctx->pc = 0x1E33D0u;
    // 0x1e33d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e33d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e33d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e33d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e33d8: 0xc090aa2  jal         func_242A88
    ctx->pc = 0x1E33D8u;
    SET_GPR_U32(ctx, 31, 0x1E33E0u);
    ctx->pc = 0x1E33DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E33D8u;
            // 0x1e33dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A88u;
    if (runtime->hasFunction(0x242A88u)) {
        auto targetFn = runtime->lookupFunction(0x242A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E33E0u; }
        if (ctx->pc != 0x1E33E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a88_0x242a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E33E0u; }
        if (ctx->pc != 0x1E33E0u) { return; }
    }
    ctx->pc = 0x1E33E0u;
label_1e33e0:
    // 0x1e33e0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1e33e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1e33e4: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x1e33e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1e33e8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1e33e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e33ec: 0x244777a0  addiu       $a3, $v0, 0x77A0
    ctx->pc = 0x1e33ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 30624));
    // 0x1e33f0: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1e33f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e33f4: 0xfba102b0  sqc2        $vf1, 0x2B0($sp)
    ctx->pc = 0x1e33f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e33f8: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1e33f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e33fc: 0xfba102b0  sqc2        $vf1, 0x2B0($sp)
    ctx->pc = 0x1e33fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3400: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1e3400u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e3404: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1e3404u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3408: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1e3408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1e340c: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1e340cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3410: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1e3410u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e3414: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e3414u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e3418: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1e3418u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e341c: 0x4a0002ff  vnop
    ctx->pc = 0x1e341cu;
    // NOP operation, no action needed for VU0
    // 0x1e3420: 0x4a0002ff  vnop
    ctx->pc = 0x1e3420u;
    // NOP operation, no action needed for VU0
    // 0x1e3424: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x1e3424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x1e3428: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1e3428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e342c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1E342Cu;
    {
        const bool branch_taken_0x1e342c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E342Cu;
            // 0x1e3430: 0xfba102b0  sqc2        $vf1, 0x2B0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 688), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e342c) {
            ctx->pc = 0x1E34A0u;
            goto label_1e34a0;
        }
    }
    ctx->pc = 0x1E3434u;
    // 0x1e3434: 0xda220120  lqc2        $vf2, 0x120($s1)
    ctx->pc = 0x1e3434u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1e3438: 0x4be2085a  vmulz.xyzw  $vf1, $vf1, $vf2z
    ctx->pc = 0x1e3438u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e343c: 0xfba102c0  sqc2        $vf1, 0x2C0($sp)
    ctx->pc = 0x1e343cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3440: 0xdba503d0  lqc2        $vf5, 0x3D0($sp)
    ctx->pc = 0x1e3440u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x1e3444: 0x4be50858  vmulx.xyzw  $vf1, $vf1, $vf5x
    ctx->pc = 0x1e3444u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3448: 0xd8e3fff0  lqc2        $vf3, -0x10($a3)
    ctx->pc = 0x1e3448u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 4294967280)));
    // 0x1e344c: 0x4be30868  vadd.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1e344cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3450: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1e3450u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3454: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e3454u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3458: 0xda230130  lqc2        $vf3, 0x130($s1)
    ctx->pc = 0x1e3458u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x1e345c: 0x4b010042  vaddz.x     $vf1, $vf0, $vf1z
    ctx->pc = 0x1e345cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3460: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1e3460u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3464: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e3464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3468: 0x4a831085  vsuby.y     $vf2, $vf2, $vf3y
    ctx->pc = 0x1e3468u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e346c: 0xdba603c0  lqc2        $vf6, 0x3C0($sp)
    ctx->pc = 0x1e346cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x1e3470: 0x4a823085  vsuby.y     $vf2, $vf6, $vf2y
    ctx->pc = 0x1e3470u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3474: 0x4b020041  vaddy.x     $vf1, $vf0, $vf2y
    ctx->pc = 0x1e3474u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3478: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1e3478u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e347c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1e347cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3480: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1e3480u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1e3484: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e3484u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3488: 0x71041389  pcpyld      $v0, $t0, $a0
    ctx->pc = 0x1e3488u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 4)));
    // 0x1e348c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1e348cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1e3490: 0x7ee20000  sq          $v0, 0x0($s7)
    ctx->pc = 0x1e3490u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 2));
    // 0x1e3494: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1e3494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x1e3498: 0x7fa202d0  sq          $v0, 0x2D0($sp)
    ctx->pc = 0x1e3498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 2));
    // 0x1e349c: 0x0  nop
    ctx->pc = 0x1e349cu;
    // NOP
label_1e34a0:
    // 0x1e34a0: 0x7ba402b0  lq          $a0, 0x2B0($sp)
    ctx->pc = 0x1e34a0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1e34a4: 0x24e3fff0  addiu       $v1, $a3, -0x10
    ctx->pc = 0x1e34a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x1e34a8: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x1e34a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1e34ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e34acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e34b0: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x1e34b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1e34b4: 0x7e240220  sq          $a0, 0x220($s1)
    ctx->pc = 0x1e34b4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 544), GPR_VEC(ctx, 4));
    // 0x1e34b8: 0xae250238  sw          $a1, 0x238($s1)
    ctx->pc = 0x1e34b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 5));
    // 0x1e34bc: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x1e34bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1e34c0: 0x94630034  lhu         $v1, 0x34($v1)
    ctx->pc = 0x1e34c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1e34c4: 0xae260244  sw          $a2, 0x244($s1)
    ctx->pc = 0x1e34c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 580), GPR_U32(ctx, 6));
    // 0x1e34c8: 0xae230250  sw          $v1, 0x250($s1)
    ctx->pc = 0x1e34c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 3));
    // 0x1e34cc: 0x1000017d  b           . + 4 + (0x17D << 2)
    ctx->pc = 0x1E34CCu;
    {
        const bool branch_taken_0x1e34cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E34D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E34CCu;
            // 0x1e34d0: 0xae24024c  sw          $a0, 0x24C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e34cc) {
            ctx->pc = 0x1E3AC4u;
            goto label_1e3ac4;
        }
    }
    ctx->pc = 0x1E34D4u;
label_1e34d4:
    // 0x1e34d4: 0xda220050  lqc2        $vf2, 0x50($s1)
    ctx->pc = 0x1e34d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1e34d8: 0x4b010044  vsubx.x     $vf1, $vf0, $vf1x
    ctx->pc = 0x1e34d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e34dc: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1e34dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e34e0: 0xfba202e0  sqc2        $vf2, 0x2E0($sp)
    ctx->pc = 0x1e34e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e34e4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e34e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e34e8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1e34e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e34ec: 0x4be110d8  vmulx.xyzw  $vf3, $vf2, $vf1x
    ctx->pc = 0x1e34ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e34f0: 0xdba503c0  lqc2        $vf5, 0x3C0($sp)
    ctx->pc = 0x1e34f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x1e34f4: 0xdba603b0  lqc2        $vf6, 0x3B0($sp)
    ctx->pc = 0x1e34f4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x1e34f8: 0x4be6296c  vsub.xyzw   $vf5, $vf5, $vf6
    ctx->pc = 0x1e34f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e34fc: 0xfba303e0  sqc2        $vf3, 0x3E0($sp)
    ctx->pc = 0x1e34fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e3500: 0xfba503f0  sqc2        $vf5, 0x3F0($sp)
    ctx->pc = 0x1e3500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e3504: 0x27b20290  addiu       $s2, $sp, 0x290
    ctx->pc = 0x1e3504u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x1e3508: 0xdba10290  lqc2        $vf1, 0x290($sp)
    ctx->pc = 0x1e3508u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1e350c: 0xdba20390  lqc2        $vf2, 0x390($sp)
    ctx->pc = 0x1e350cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x1e3510: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1e3510u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3514: 0xfba102f0  sqc2        $vf1, 0x2F0($sp)
    ctx->pc = 0x1e3514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3518: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e3518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e351c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e351cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e3520: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e3520u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3524: 0x4be12868  vadd.xyzw   $vf1, $vf5, $vf1
    ctx->pc = 0x1e3524u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3528: 0x4be308e8  vadd.xyzw   $vf3, $vf1, $vf3
    ctx->pc = 0x1e3528u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e352c: 0xfba30400  sqc2        $vf3, 0x400($sp)
    ctx->pc = 0x1e352cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e3530: 0xdba503e0  lqc2        $vf5, 0x3E0($sp)
    ctx->pc = 0x1e3530u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x1e3534: 0x4be22898  vmulx.xyzw  $vf2, $vf5, $vf2x
    ctx->pc = 0x1e3534u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3538: 0x4be219ac  vsub.xyzw   $vf6, $vf3, $vf2
    ctx->pc = 0x1e3538u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1e353c: 0xfba60410  sqc2        $vf6, 0x410($sp)
    ctx->pc = 0x1e353cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1e3540: 0xc08f42a  jal         func_23D0A8
    ctx->pc = 0x1E3540u;
    SET_GPR_U32(ctx, 31, 0x1E3548u);
    ctx->pc = 0x1E3544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3540u;
            // 0x1e3544: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23D0A8u;
    if (runtime->hasFunction(0x23D0A8u)) {
        auto targetFn = runtime->lookupFunction(0x23D0A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3548u; }
        if (ctx->pc != 0x1E3548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23d0a8_0x23d0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3548u; }
        if (ctx->pc != 0x1E3548u) { return; }
    }
    ctx->pc = 0x1E3548u;
    // 0x1e3548: 0xc08f42a  jal         func_23D0A8
    ctx->pc = 0x1E3548u;
    SET_GPR_U32(ctx, 31, 0x1E3550u);
    ctx->pc = 0x1E354Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3548u;
            // 0x1e354c: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23D0A8u;
    if (runtime->hasFunction(0x23D0A8u)) {
        auto targetFn = runtime->lookupFunction(0x23D0A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3550u; }
        if (ctx->pc != 0x1E3550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23d0a8_0x23d0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3550u; }
        if (ctx->pc != 0x1E3550u) { return; }
    }
    ctx->pc = 0x1E3550u;
    // 0x1e3550: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1E3550u;
    {
        const bool branch_taken_0x1e3550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3550u;
            // 0x1e3554: 0x8ec4bcf8  lw          $a0, -0x4308($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3550) {
            ctx->pc = 0x1E3618u;
            goto label_1e3618;
        }
    }
    ctx->pc = 0x1E3558u;
label_1e3558:
    // 0x1e3558: 0xc6200140  lwc1        $f0, 0x140($s1)
    ctx->pc = 0x1e3558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e355c:
    // 0x1e355c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1e355cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1e3560: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e3560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e3564: 0xdbc10010  lqc2        $vf1, 0x10($fp)
    ctx->pc = 0x1e3564u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e3568: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e3568u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e356c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e356cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e3570: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1e3570u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e3574: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e3574u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3578: 0xdba203f0  lqc2        $vf2, 0x3F0($sp)
    ctx->pc = 0x1e3578u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x1e357c: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e357cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3580: 0xfba20420  sqc2        $vf2, 0x420($sp)
    ctx->pc = 0x1e3580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e3584: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1e3584u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e3588: 0xdba30390  lqc2        $vf3, 0x390($sp)
    ctx->pc = 0x1e3588u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x1e358c: 0x4be1186c  vsub.xyzw   $vf1, $vf3, $vf1
    ctx->pc = 0x1e358cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3590: 0xfba10300  sqc2        $vf1, 0x300($sp)
    ctx->pc = 0x1e3590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3594: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e3594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e3598: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e3598u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e359c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e359cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e35a0: 0xdba50420  lqc2        $vf5, 0x420($sp)
    ctx->pc = 0x1e35a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x1e35a4: 0x4be12868  vadd.xyzw   $vf1, $vf5, $vf1
    ctx->pc = 0x1e35a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e35a8: 0xdba603e0  lqc2        $vf6, 0x3E0($sp)
    ctx->pc = 0x1e35a8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x1e35ac: 0x4be60868  vadd.xyzw   $vf1, $vf1, $vf6
    ctx->pc = 0x1e35acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e35b0: 0x4be23098  vmulx.xyzw  $vf2, $vf6, $vf2x
    ctx->pc = 0x1e35b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e35b4: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1e35b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e35b8: 0xfba30430  sqc2        $vf3, 0x430($sp)
    ctx->pc = 0x1e35b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e35bc: 0x8ec4bcf8  lw          $a0, -0x4308($s6)
    ctx->pc = 0x1e35bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950136)));
    // 0x1e35c0: 0x7ba50420  lq          $a1, 0x420($sp)
    ctx->pc = 0x1e35c0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x1e35c4: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E35C4u;
    SET_GPR_U32(ctx, 31, 0x1E35CCu);
    ctx->pc = 0x1E35C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E35C4u;
            // 0x1e35c8: 0x48260800  qmfc2.ni    $a2, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E35CCu; }
        if (ctx->pc != 0x1E35CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E35CCu; }
        if (ctx->pc != 0x1E35CCu) { return; }
    }
    ctx->pc = 0x1E35CCu;
    // 0x1e35cc: 0x1040013c  beqz        $v0, . + 4 + (0x13C << 2)
    ctx->pc = 0x1E35CCu;
    {
        const bool branch_taken_0x1e35cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E35D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E35CCu;
            // 0x1e35d0: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e35cc) {
            ctx->pc = 0x1E3AC0u;
            goto label_1e3ac0;
        }
    }
    ctx->pc = 0x1E35D4u;
    // 0x1e35d4: 0x8e64bcf8  lw          $a0, -0x4308($s3)
    ctx->pc = 0x1e35d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950136)));
    // 0x1e35d8: 0x24507790  addiu       $s0, $v0, 0x7790
    ctx->pc = 0x1e35d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x1e35dc: 0x7ba50420  lq          $a1, 0x420($sp)
    ctx->pc = 0x1e35dcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x1e35e0: 0x7a080000  lq          $t0, 0x0($s0)
    ctx->pc = 0x1e35e0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e35e4: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x1e35e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e35e8: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x1e35e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1e35ec: 0x7a070030  lq          $a3, 0x30($s0)
    ctx->pc = 0x1e35ecu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1e35f0: 0x7ba60430  lq          $a2, 0x430($sp)
    ctx->pc = 0x1e35f0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x1e35f4: 0x7fa80100  sq          $t0, 0x100($sp)
    ctx->pc = 0x1e35f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 8));
    // 0x1e35f8: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x1e35f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x1e35fc: 0x7fa30120  sq          $v1, 0x120($sp)
    ctx->pc = 0x1e35fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
    // 0x1e3600: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E3600u;
    SET_GPR_U32(ctx, 31, 0x1E3608u);
    ctx->pc = 0x1E3604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3600u;
            // 0x1e3604: 0x7fa70130  sq          $a3, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3608u; }
        if (ctx->pc != 0x1E3608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3608u; }
        if (ctx->pc != 0x1E3608u) { return; }
    }
    ctx->pc = 0x1E3608u;
    // 0x1e3608: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E3608u;
    {
        const bool branch_taken_0x1e3608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E360Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3608u;
            // 0x1e360c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3608) {
            ctx->pc = 0x1E366Cu;
            goto label_1e366c;
        }
    }
    ctx->pc = 0x1E3610u;
    // 0x1e3610: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x1E3610u;
    {
        const bool branch_taken_0x1e3610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3610u;
            // 0x1e3614: 0x7bb004f0  lq          $s0, 0x4F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3610) {
            ctx->pc = 0x1E3AC8u;
            goto label_1e3ac8;
        }
    }
    ctx->pc = 0x1E3618u;
label_1e3618:
    // 0x1e3618: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x1e3618u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e361c: 0x7ba60400  lq          $a2, 0x400($sp)
    ctx->pc = 0x1e361cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x1e3620: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E3620u;
    SET_GPR_U32(ctx, 31, 0x1E3628u);
    ctx->pc = 0x1E3624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3620u;
            // 0x1e3624: 0x7ba503f0  lq          $a1, 0x3F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3628u; }
        if (ctx->pc != 0x1E3628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3628u; }
        if (ctx->pc != 0x1E3628u) { return; }
    }
    ctx->pc = 0x1E3628u;
    // 0x1e3628: 0x1040ffcb  beqz        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1E3628u;
    {
        const bool branch_taken_0x1e3628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E362Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3628u;
            // 0x1e362c: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3628) {
            ctx->pc = 0x1E3558u;
            runtime->cooperativeGuestYield();
            goto label_1e3558;
        }
    }
    ctx->pc = 0x1E3630u;
    // 0x1e3630: 0x8ec4bcf8  lw          $a0, -0x4308($s6)
    ctx->pc = 0x1e3630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950136)));
    // 0x1e3634: 0x24507790  addiu       $s0, $v0, 0x7790
    ctx->pc = 0x1e3634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x1e3638: 0x7ba60410  lq          $a2, 0x410($sp)
    ctx->pc = 0x1e3638u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x1e363c: 0x7a080000  lq          $t0, 0x0($s0)
    ctx->pc = 0x1e363cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e3640: 0x7a070010  lq          $a3, 0x10($s0)
    ctx->pc = 0x1e3640u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e3644: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x1e3644u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1e3648: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x1e3648u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1e364c: 0x7ba503f0  lq          $a1, 0x3F0($sp)
    ctx->pc = 0x1e364cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x1e3650: 0x7fa80100  sq          $t0, 0x100($sp)
    ctx->pc = 0x1e3650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 8));
    // 0x1e3654: 0x7fa70110  sq          $a3, 0x110($sp)
    ctx->pc = 0x1e3654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 7));
    // 0x1e3658: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1e3658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x1e365c: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E365Cu;
    SET_GPR_U32(ctx, 31, 0x1E3664u);
    ctx->pc = 0x1E3660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E365Cu;
            // 0x1e3660: 0x7fa30130  sq          $v1, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3664u; }
        if (ctx->pc != 0x1E3664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3664u; }
        if (ctx->pc != 0x1E3664u) { return; }
    }
    ctx->pc = 0x1E3664u;
    // 0x1e3664: 0x5040ffbd  beql        $v0, $zero, . + 4 + (-0x43 << 2)
    ctx->pc = 0x1E3664u;
    {
        const bool branch_taken_0x1e3664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3664) {
            ctx->pc = 0x1E3668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3664u;
            // 0x1e3668: 0xc6200140  lwc1        $f0, 0x140($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E355Cu;
            runtime->cooperativeGuestYield();
            goto label_1e355c;
        }
    }
    ctx->pc = 0x1E366Cu;
label_1e366c:
    // 0x1e366c: 0x7a050030  lq          $a1, 0x30($s0)
    ctx->pc = 0x1e366cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1e3670: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1e3670u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e3674: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x1e3674u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e3678: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x1e3678u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1e367c: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x1e367cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x1e3680: 0x7fa30150  sq          $v1, 0x150($sp)
    ctx->pc = 0x1e3680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 3));
    // 0x1e3684: 0x7fa40160  sq          $a0, 0x160($sp)
    ctx->pc = 0x1e3684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 4));
    // 0x1e3688: 0x7fa50170  sq          $a1, 0x170($sp)
    ctx->pc = 0x1e3688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 5));
    // 0x1e368c: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x1e368cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1e3690: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1e3690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1e3694: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x1e3694u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e3698: 0xae220234  sw          $v0, 0x234($s1)
    ctx->pc = 0x1e3698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 564), GPR_U32(ctx, 2));
    // 0x1e369c: 0x7e230210  sq          $v1, 0x210($s1)
    ctx->pc = 0x1e369cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 528), GPR_VEC(ctx, 3));
    // 0x1e36a0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E36A0u;
    {
        const bool branch_taken_0x1e36a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E36A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E36A0u;
            // 0x1e36a4: 0xae240240  sw          $a0, 0x240($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 576), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e36a0) {
            ctx->pc = 0x1E36B8u;
            goto label_1e36b8;
        }
    }
    ctx->pc = 0x1E36A8u;
    // 0x1e36a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e36a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e36ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e36acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e36b0: 0xc090aa2  jal         func_242A88
    ctx->pc = 0x1E36B0u;
    SET_GPR_U32(ctx, 31, 0x1E36B8u);
    ctx->pc = 0x1E36B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E36B0u;
            // 0x1e36b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A88u;
    if (runtime->hasFunction(0x242A88u)) {
        auto targetFn = runtime->lookupFunction(0x242A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E36B8u; }
        if (ctx->pc != 0x1E36B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a88_0x242a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E36B8u; }
        if (ctx->pc != 0x1E36B8u) { return; }
    }
    ctx->pc = 0x1E36B8u;
label_1e36b8:
    // 0x1e36b8: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1e36b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1e36bc: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x1e36bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x1e36c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E36C0u;
    {
        const bool branch_taken_0x1e36c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E36C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E36C0u;
            // 0x1e36c4: 0xdba10150  lqc2        $vf1, 0x150($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e36c0) {
            ctx->pc = 0x1E36D0u;
            goto label_1e36d0;
        }
    }
    ctx->pc = 0x1E36C8u;
    // 0x1e36c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1E36C8u;
    {
        const bool branch_taken_0x1e36c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E36CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E36C8u;
            // 0x1e36cc: 0xda230220  lqc2        $vf3, 0x220($s1) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e36c8) {
            ctx->pc = 0x1E3700u;
            goto label_1e3700;
        }
    }
    ctx->pc = 0x1E36D0u;
label_1e36d0:
    // 0x1e36d0: 0xdba20110  lqc2        $vf2, 0x110($sp)
    ctx->pc = 0x1e36d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1e36d4: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e36d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e36d8: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1e36d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e36dc: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1e36dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e36e0: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1e36e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e36e4: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1e36e4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e36e8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e36e8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e36ec: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1e36ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e36f0: 0x4a0002ff  vnop
    ctx->pc = 0x1e36f0u;
    // NOP operation, no action needed for VU0
    // 0x1e36f4: 0x4a0002ff  vnop
    ctx->pc = 0x1e36f4u;
    // NOP operation, no action needed for VU0
    // 0x1e36f8: 0xfba20180  sqc2        $vf2, 0x180($sp)
    ctx->pc = 0x1e36f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e36fc: 0x4be3133c  vmove.xyzw  $vf3, $vf2
    ctx->pc = 0x1e36fcu;
    ctx->vu0_vf[3] = ctx->vu0_vf[2];
label_1e3700:
    // 0x1e3700: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e3700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e3704: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e3704u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e3708: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1e3708u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e370c: 0x4be1233c  vmove.xyzw  $vf1, $vf4
    ctx->pc = 0x1e370cu;
    ctx->vu0_vf[1] = ctx->vu0_vf[4];
    // 0x1e3710: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1e3710u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3714: 0x4bc11afe  vopmula.xyz $ACC, $vf3, $vf1
    ctx->pc = 0x1e3714u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]);
    // 0x1e3718: 0x4bc3086e  vopmsub.xyz $vf1, $vf1, $vf3
    ctx->pc = 0x1e3718u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e371c: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1e371cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3720: 0x4bc11afe  vopmula.xyz $ACC, $vf3, $vf1
    ctx->pc = 0x1e3720u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]);
    // 0x1e3724: 0x4bc3086e  vopmsub.xyz $vf1, $vf1, $vf3
    ctx->pc = 0x1e3724u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e3728: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1e3728u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e372c: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1e372cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e3730: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1e3730u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3734: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1e3734u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3738: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1e3738u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e373c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e373cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e3740: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1e3740u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3744: 0x4a0002ff  vnop
    ctx->pc = 0x1e3744u;
    // NOP operation, no action needed for VU0
    // 0x1e3748: 0x4a0002ff  vnop
    ctx->pc = 0x1e3748u;
    // NOP operation, no action needed for VU0
    // 0x1e374c: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x1e374cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3750: 0xfba10310  sqc2        $vf1, 0x310($sp)
    ctx->pc = 0x1e3750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3754: 0x4be1206c  vsub.xyzw   $vf1, $vf4, $vf1
    ctx->pc = 0x1e3754u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3758: 0xdba203c0  lqc2        $vf2, 0x3C0($sp)
    ctx->pc = 0x1e3758u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x1e375c: 0xdba503b0  lqc2        $vf5, 0x3B0($sp)
    ctx->pc = 0x1e375cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x1e3760: 0x4be510ec  vsub.xyzw   $vf3, $vf2, $vf5
    ctx->pc = 0x1e3760u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e3764: 0xc6200140  lwc1        $f0, 0x140($s1)
    ctx->pc = 0x1e3764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3768: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e3768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e376c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e376cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e3770: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e3770u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e3774: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e3774u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e3778: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1e3778u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e377c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e377cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3780: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1e3780u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e3784: 0xdba10290  lqc2        $vf1, 0x290($sp)
    ctx->pc = 0x1e3784u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1e3788: 0x4be1212c  vsub.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x1e3788u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e378c: 0xfba40320  sqc2        $vf4, 0x320($sp)
    ctx->pc = 0x1e378cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e3790: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e3790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e3794: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1e3794u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e3798: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x1e3798u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e379c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1e379cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1e37a0: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x1e37a0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e37a4: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x1e37a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x1e37a8: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x1e37a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1e37ac: 0x4be40868  vadd.xyzw   $vf1, $vf1, $vf4
    ctx->pc = 0x1e37acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e37b0: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E37B0u;
    SET_GPR_U32(ctx, 31, 0x1E37B8u);
    ctx->pc = 0x1E37B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E37B0u;
            // 0x1e37b4: 0x48260800  qmfc2.ni    $a2, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E37B8u; }
        if (ctx->pc != 0x1E37B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E37B8u; }
        if (ctx->pc != 0x1E37B8u) { return; }
    }
    ctx->pc = 0x1E37B8u;
    // 0x1e37b8: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x1E37B8u;
    {
        const bool branch_taken_0x1e37b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E37BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E37B8u;
            // 0x1e37bc: 0xdba20380  lqc2        $vf2, 0x380($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37b8) {
            ctx->pc = 0x1E3AC0u;
            goto label_1e3ac0;
        }
    }
    ctx->pc = 0x1E37C0u;
    // 0x1e37c0: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x1e37c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1e37c4: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e37c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e37c8: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1e37c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e37cc: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1e37ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e37d0: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1e37d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e37d4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1e37d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1e37d8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1e37d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1e37dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e37dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e37e0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1e37e0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e37e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e37e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e37e8: 0x46000004  c1          0x4
    ctx->pc = 0x1e37e8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1e37ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e37ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e37f0: 0x0  nop
    ctx->pc = 0x1e37f0u;
    // NOP
    // 0x1e37f4: 0x45000052  bc1f        . + 4 + (0x52 << 2)
    ctx->pc = 0x1E37F4u;
    {
        const bool branch_taken_0x1e37f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E37F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E37F4u;
            // 0x1e37f8: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37f4) {
            ctx->pc = 0x1E3940u;
            goto label_1e3940;
        }
    }
    ctx->pc = 0x1E37FCu;
    // 0x1e37fc: 0xdba50100  lqc2        $vf5, 0x100($sp)
    ctx->pc = 0x1e37fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1e3800: 0x24427790  addiu       $v0, $v0, 0x7790
    ctx->pc = 0x1e3800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x1e3804: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1e3804u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3808: 0x4be2286c  vsub.xyzw   $vf1, $vf5, $vf2
    ctx->pc = 0x1e3808u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e380c: 0xdba40140  lqc2        $vf4, 0x140($sp)
    ctx->pc = 0x1e380cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e3810: 0x4be220ac  vsub.xyzw   $vf2, $vf4, $vf2
    ctx->pc = 0x1e3810u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3814: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1e3814u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x1e3818: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1e3818u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e381c: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1e381cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3820: 0xfba10330  sqc2        $vf1, 0x330($sp)
    ctx->pc = 0x1e3820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3824: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1e3824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1e3828: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e3828u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e382c: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1e382cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3830: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x1e3830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x1e3834: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1e3834u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e3838: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x1e3838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1e383c: 0xfba10330  sqc2        $vf1, 0x330($sp)
    ctx->pc = 0x1e383cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3840: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1e3840u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3844: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1e3844u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3848: 0xae220238  sw          $v0, 0x238($s1)
    ctx->pc = 0x1e3848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 2));
    // 0x1e384c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1e384cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e3850: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e3850u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e3854: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1e3854u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3858: 0x4a0002ff  vnop
    ctx->pc = 0x1e3858u;
    // NOP operation, no action needed for VU0
    // 0x1e385c: 0x4a0002ff  vnop
    ctx->pc = 0x1e385cu;
    // NOP operation, no action needed for VU0
    // 0x1e3860: 0xda230120  lqc2        $vf3, 0x120($s1)
    ctx->pc = 0x1e3860u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1e3864: 0xae230244  sw          $v1, 0x244($s1)
    ctx->pc = 0x1e3864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 580), GPR_U32(ctx, 3));
    // 0x1e3868: 0x4be308da  vmulz.xyzw  $vf3, $vf1, $vf3z
    ctx->pc = 0x1e3868u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e386c: 0xfba101a0  sqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x1e386cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3870: 0xfa210220  sqc2        $vf1, 0x220($s1)
    ctx->pc = 0x1e3870u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 544), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3874: 0xfba30340  sqc2        $vf3, 0x340($sp)
    ctx->pc = 0x1e3874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e3878: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e3878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e387c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1e387cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e3880: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1e3880u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e3884: 0x4be5212c  vsub.xyzw   $vf4, $vf4, $vf5
    ctx->pc = 0x1e3884u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e3888: 0xfba40350  sqc2        $vf4, 0x350($sp)
    ctx->pc = 0x1e3888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e388c: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x1e388cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e3890: 0x4be42968  vadd.xyzw   $vf5, $vf5, $vf4
    ctx->pc = 0x1e3890u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e3894: 0x4be32968  vadd.xyzw   $vf5, $vf5, $vf3
    ctx->pc = 0x1e3894u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e3898: 0xfae50000  sqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1e3898u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e389c: 0xdba103c0  lqc2        $vf1, 0x3C0($sp)
    ctx->pc = 0x1e389cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x1e38a0: 0x4be5092c  vsub.xyzw   $vf4, $vf1, $vf5
    ctx->pc = 0x1e38a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e38a4: 0xda220220  lqc2        $vf2, 0x220($s1)
    ctx->pc = 0x1e38a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x1e38a8: 0xda210050  lqc2        $vf1, 0x50($s1)
    ctx->pc = 0x1e38a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1e38ac: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x1e38acu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]);
    // 0x1e38b0: 0x4bc208ae  vopmsub.xyz $vf2, $vf1, $vf2
    ctx->pc = 0x1e38b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e38b4: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1e38b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e38b8: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1e38b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e38bc: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1e38bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e38c0: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1e38c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e38c4: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1e38c4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e38c8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e38c8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e38cc: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1e38ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e38d0: 0x4a0002ff  vnop
    ctx->pc = 0x1e38d0u;
    // NOP operation, no action needed for VU0
    // 0x1e38d4: 0x4a0002ff  vnop
    ctx->pc = 0x1e38d4u;
    // NOP operation, no action needed for VU0
    // 0x1e38d8: 0x4be4112a  vmul.xyzw   $vf4, $vf2, $vf4
    ctx->pc = 0x1e38d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e38dc: 0xfba201b0  sqc2        $vf2, 0x1B0($sp)
    ctx->pc = 0x1e38dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e38e0: 0xfba20360  sqc2        $vf2, 0x360($sp)
    ctx->pc = 0x1e38e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e38e4: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x1e38e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e38e8: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x1e38e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e38ec: 0xc6210140  lwc1        $f1, 0x140($s1)
    ctx->pc = 0x1e38ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e38f0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1e38f0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e38f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e38f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e38f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e38f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e38fc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1e38fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1e3900: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1e3900u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1e3904: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1e3904u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3908: 0x4be22968  vadd.xyzw   $vf5, $vf5, $vf2
    ctx->pc = 0x1e3908u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e390c: 0xfae50000  sqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1e390cu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e3910: 0xda2400e0  lqc2        $vf4, 0xE0($s1)
    ctx->pc = 0x1e3910u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x1e3914: 0xda230220  lqc2        $vf3, 0x220($s1)
    ctx->pc = 0x1e3914u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x1e3918: 0x4be320aa  vmul.xyzw   $vf2, $vf4, $vf3
    ctx->pc = 0x1e3918u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e391c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1e391cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3920: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1e3920u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3924: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1e3924u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3928: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1e3928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e392c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1e392cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e3930: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1e3930u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e3934: 0x4be3212c  vsub.xyzw   $vf4, $vf4, $vf3
    ctx->pc = 0x1e3934u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e3938: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E3938u;
    {
        const bool branch_taken_0x1e3938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E393Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3938u;
            // 0x1e393c: 0xfa2400e0  sqc2        $vf4, 0xE0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3938) {
            ctx->pc = 0x1E3958u;
            goto label_1e3958;
        }
    }
    ctx->pc = 0x1E3940u;
label_1e3940:
    // 0x1e3940: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x1e3940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x1e3944: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x1e3944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1e3948: 0x7a230070  lq          $v1, 0x70($s1)
    ctx->pc = 0x1e3948u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1e394c: 0xae220238  sw          $v0, 0x238($s1)
    ctx->pc = 0x1e394cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 2));
    // 0x1e3950: 0xae240244  sw          $a0, 0x244($s1)
    ctx->pc = 0x1e3950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 580), GPR_U32(ctx, 4));
    // 0x1e3954: 0x7e230220  sq          $v1, 0x220($s1)
    ctx->pc = 0x1e3954u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 544), GPR_VEC(ctx, 3));
label_1e3958:
    // 0x1e3958: 0x97a40134  lhu         $a0, 0x134($sp)
    ctx->pc = 0x1e3958u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x1e395c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e395cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3960: 0x8fa30124  lw          $v1, 0x124($sp)
    ctx->pc = 0x1e3960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x1e3964: 0xae240250  sw          $a0, 0x250($s1)
    ctx->pc = 0x1e3964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 4));
    // 0x1e3968: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1E3968u;
    {
        const bool branch_taken_0x1e3968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E396Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3968u;
            // 0x1e396c: 0xae23024c  sw          $v1, 0x24C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3968) {
            ctx->pc = 0x1E3AC4u;
            goto label_1e3ac4;
        }
    }
    ctx->pc = 0x1E3970u;
label_1e3970:
    // 0x1e3970: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1E3970u;
    {
        const bool branch_taken_0x1e3970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3970u;
            // 0x1e3974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3970) {
            ctx->pc = 0x1E3AC4u;
            goto label_1e3ac4;
        }
    }
    ctx->pc = 0x1E3978u;
label_1e3978:
    // 0x1e3978: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E3978u;
    {
        const bool branch_taken_0x1e3978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E397Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3978u;
            // 0x1e397c: 0x7af00000  lq          $s0, 0x0($s7) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3978) {
            ctx->pc = 0x1E39C0u;
            goto label_1e39c0;
        }
    }
    ctx->pc = 0x1E3980u;
    // 0x1e3980: 0x70101fc9  prot3w      $v1, $s0
    ctx->pc = 0x1e3980u;
    SET_GPR_VEC(ctx, 3, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e3984: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e3984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3988: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1e3988u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e398c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e398cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3990: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e3990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3994: 0x70022f89  pexew       $a1, $v0
    ctx->pc = 0x1e3994u;
    SET_GPR_VEC(ctx, 5, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1e3998: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1e3998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e399c: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x1e399cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x1e39a0: 0x7ba40060  lq          $a0, 0x60($sp)
    ctx->pc = 0x1e39a0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e39a4: 0x7fa40450  sq          $a0, 0x450($sp)
    ctx->pc = 0x1e39a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 4));
    // 0x1e39a8: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x1e39a8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x1e39ac: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1e39acu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1e39b0: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x1e39b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
    // 0x1e39b4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1E39B4u;
    {
        const bool branch_taken_0x1e39b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E39B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E39B4u;
            // 0x1e39b8: 0x7fa201c0  sq          $v0, 0x1C0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e39b4) {
            ctx->pc = 0x1E3A04u;
            goto label_1e3a04;
        }
    }
    ctx->pc = 0x1E39BCu;
    // 0x1e39bc: 0x0  nop
    ctx->pc = 0x1e39bcu;
    // NOP
label_1e39c0:
    // 0x1e39c0: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1e39c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1e39c4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E39C4u;
    {
        const bool branch_taken_0x1e39c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e39c4) {
            ctx->pc = 0x1E39C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E39C4u;
            // 0x1e39c8: 0xdae20000  lqc2        $vf2, 0x0($s7) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E3A08u;
            goto label_1e3a08;
        }
    }
    ctx->pc = 0x1E39CCu;
    // 0x1e39cc: 0x70101fc9  prot3w      $v1, $s0
    ctx->pc = 0x1e39ccu;
    SET_GPR_VEC(ctx, 3, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e39d0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e39d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e39d4: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1e39d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e39d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e39d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e39dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e39dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e39e0: 0x70022f89  pexew       $a1, $v0
    ctx->pc = 0x1e39e0u;
    SET_GPR_VEC(ctx, 5, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1e39e4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1e39e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e39e8: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x1e39e8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x1e39ec: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x1e39ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e39f0: 0x7fa40450  sq          $a0, 0x450($sp)
    ctx->pc = 0x1e39f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 4));
    // 0x1e39f4: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x1e39f4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x1e39f8: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1e39f8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1e39fc: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x1e39fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
    // 0x1e3a00: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x1e3a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_1e3a04:
    // 0x1e3a04: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x1e3a04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1e3a08:
    // 0x1e3a08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e3a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e3a0c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1e3a0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e3a10: 0xdba30390  lqc2        $vf3, 0x390($sp)
    ctx->pc = 0x1e3a10u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x1e3a14: 0x4a8118c0  vaddx.y     $vf3, $vf3, $vf1x
    ctx->pc = 0x1e3a14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e3a18: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x1e3a18u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x1e3a1c: 0x8ec4bcf8  lw          $a0, -0x4308($s6)
    ctx->pc = 0x1e3a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950136)));
    // 0x1e3a20: 0xdba503a0  lqc2        $vf5, 0x3A0($sp)
    ctx->pc = 0x1e3a20u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x1e3a24: 0xdba60450  lqc2        $vf6, 0x450($sp)
    ctx->pc = 0x1e3a24u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x1e3a28: 0x4be51168  vadd.xyzw   $vf5, $vf2, $vf5
    ctx->pc = 0x1e3a28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e3a2c: 0x4be131a8  vadd.xyzw   $vf6, $vf6, $vf1
    ctx->pc = 0x1e3a2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1e3a30: 0x48252800  qmfc2.ni    $a1, $vf5
    ctx->pc = 0x1e3a30u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e3a34: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E3A34u;
    SET_GPR_U32(ctx, 31, 0x1E3A3Cu);
    ctx->pc = 0x1E3A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3A34u;
            // 0x1e3a38: 0x48263000  qmfc2.ni    $a2, $vf6 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3A3Cu; }
        if (ctx->pc != 0x1E3A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3A3Cu; }
        if (ctx->pc != 0x1E3A3Cu) { return; }
    }
    ctx->pc = 0x1E3A3Cu;
    // 0x1e3a3c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1E3A3Cu;
    {
        const bool branch_taken_0x1e3a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3A3Cu;
            // 0x1e3a40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3a3c) {
            ctx->pc = 0x1E3AC4u;
            goto label_1e3ac4;
        }
    }
    ctx->pc = 0x1E3A44u;
    // 0x1e3a44: 0x8ec4bcf8  lw          $a0, -0x4308($s6)
    ctx->pc = 0x1e3a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950136)));
    // 0x1e3a48: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x1e3a48u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x1e3a4c: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E3A4Cu;
    SET_GPR_U32(ctx, 31, 0x1E3A54u);
    ctx->pc = 0x1E3A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3A4Cu;
            // 0x1e3a50: 0x7ba60440  lq          $a2, 0x440($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3A54u; }
        if (ctx->pc != 0x1E3A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3A54u; }
        if (ctx->pc != 0x1E3A54u) { return; }
    }
    ctx->pc = 0x1E3A54u;
    // 0x1e3a54: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E3A54u;
    {
        const bool branch_taken_0x1e3a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3A54u;
            // 0x1e3a58: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3a54) {
            ctx->pc = 0x1E3AC0u;
            goto label_1e3ac0;
        }
    }
    ctx->pc = 0x1E3A5Cu;
    // 0x1e3a5c: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x1e3a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1e3a60: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e3a60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e3a64: 0x244277a0  addiu       $v0, $v0, 0x77A0
    ctx->pc = 0x1e3a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30624));
    // 0x1e3a68: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1e3a68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3a6c: 0xfba20370  sqc2        $vf2, 0x370($sp)
    ctx->pc = 0x1e3a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e3a70: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x1e3a70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3a74: 0xfba20370  sqc2        $vf2, 0x370($sp)
    ctx->pc = 0x1e3a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e3a78: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1e3a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1e3a7c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1e3a7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e3a80: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1e3a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e3a84: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1e3a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1e3a88: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1e3a88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3a8c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1e3a8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3a90: 0xae220238  sw          $v0, 0x238($s1)
    ctx->pc = 0x1e3a90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 2));
    // 0x1e3a94: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1e3a94u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e3a98: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e3a98u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e3a9c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1e3a9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3aa0: 0x4a0002ff  vnop
    ctx->pc = 0x1e3aa0u;
    // NOP operation, no action needed for VU0
    // 0x1e3aa4: 0x4a0002ff  vnop
    ctx->pc = 0x1e3aa4u;
    // NOP operation, no action needed for VU0
    // 0x1e3aa8: 0xae230244  sw          $v1, 0x244($s1)
    ctx->pc = 0x1e3aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 580), GPR_U32(ctx, 3));
    // 0x1e3aac: 0xfa220220  sqc2        $vf2, 0x220($s1)
    ctx->pc = 0x1e3aacu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 544), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e3ab0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1e3ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e3ab4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3AB4u;
    {
        const bool branch_taken_0x1e3ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3AB4u;
            // 0x1e3ab8: 0xfba201e0  sqc2        $vf2, 0x1E0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ab4) {
            ctx->pc = 0x1E3AC4u;
            goto label_1e3ac4;
        }
    }
    ctx->pc = 0x1E3ABCu;
    // 0x1e3abc: 0x0  nop
    ctx->pc = 0x1e3abcu;
    // NOP
label_1e3ac0:
    // 0x1e3ac0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e3ac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3ac4:
    // 0x1e3ac4: 0x7bb004f0  lq          $s0, 0x4F0($sp)
    ctx->pc = 0x1e3ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_1e3ac8:
    // 0x1e3ac8: 0x7bb104e0  lq          $s1, 0x4E0($sp)
    ctx->pc = 0x1e3ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
    // 0x1e3acc: 0x7bb204d0  lq          $s2, 0x4D0($sp)
    ctx->pc = 0x1e3accu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x1e3ad0: 0x7bb304c0  lq          $s3, 0x4C0($sp)
    ctx->pc = 0x1e3ad0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x1e3ad4: 0x7bb404b0  lq          $s4, 0x4B0($sp)
    ctx->pc = 0x1e3ad4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x1e3ad8: 0x7bb504a0  lq          $s5, 0x4A0($sp)
    ctx->pc = 0x1e3ad8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x1e3adc: 0x7bb60490  lq          $s6, 0x490($sp)
    ctx->pc = 0x1e3adcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x1e3ae0: 0x7bb70480  lq          $s7, 0x480($sp)
    ctx->pc = 0x1e3ae0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x1e3ae4: 0x7bbe0470  lq          $fp, 0x470($sp)
    ctx->pc = 0x1e3ae4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x1e3ae8: 0xdfbf0460  ld          $ra, 0x460($sp)
    ctx->pc = 0x1e3ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x1e3aec: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3AECu;
            // 0x1e3af0: 0x27bd0500  addiu       $sp, $sp, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E3028u: goto label_1e3028;
            case 0x1E3068u: goto label_1e3068;
            case 0x1E3100u: goto label_1e3100;
            case 0x1E3130u: goto label_1e3130;
            case 0x1E31C8u: goto label_1e31c8;
            case 0x1E31CCu: goto label_1e31cc;
            case 0x1E3234u: goto label_1e3234;
            case 0x1E3288u: goto label_1e3288;
            case 0x1E32C0u: goto label_1e32c0;
            case 0x1E32D0u: goto label_1e32d0;
            case 0x1E33E0u: goto label_1e33e0;
            case 0x1E34A0u: goto label_1e34a0;
            case 0x1E34D4u: goto label_1e34d4;
            case 0x1E3558u: goto label_1e3558;
            case 0x1E355Cu: goto label_1e355c;
            case 0x1E3618u: goto label_1e3618;
            case 0x1E366Cu: goto label_1e366c;
            case 0x1E36B8u: goto label_1e36b8;
            case 0x1E36D0u: goto label_1e36d0;
            case 0x1E3700u: goto label_1e3700;
            case 0x1E3940u: goto label_1e3940;
            case 0x1E3958u: goto label_1e3958;
            case 0x1E3970u: goto label_1e3970;
            case 0x1E3978u: goto label_1e3978;
            case 0x1E39C0u: goto label_1e39c0;
            case 0x1E3A04u: goto label_1e3a04;
            case 0x1E3A08u: goto label_1e3a08;
            case 0x1E3AC0u: goto label_1e3ac0;
            case 0x1E3AC4u: goto label_1e3ac4;
            case 0x1E3AC8u: goto label_1e3ac8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E3AF4u;
    // 0x1e3af4: 0x0  nop
    ctx->pc = 0x1e3af4u;
    // NOP
}
