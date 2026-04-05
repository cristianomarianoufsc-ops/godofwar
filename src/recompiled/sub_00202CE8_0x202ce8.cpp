#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00202CE8
// Address: 0x202ce8 - 0x202e38
void sub_00202CE8_0x202ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202CE8_0x202ce8");
#endif

    ctx->pc = 0x202ce8u;

    // 0x202ce8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x202ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x202cec: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x202cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x202cf0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x202cf0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x202cf4: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x202cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x202cf8: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x202cf8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x202cfc: 0x4a810100  vaddx.y     $vf4, $vf0, $vf1x
    ctx->pc = 0x202cfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x202d00: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x202d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x202d04: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x202d04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x202d08: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x202d08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x202d0c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x202d0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x202d10: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x202d10u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x202d14: 0x4a0003bf  vwaitq
    ctx->pc = 0x202d14u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x202d18: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x202d18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x202d1c: 0x4a0002ff  vnop
    ctx->pc = 0x202d1cu;
    // NOP operation, no action needed for VU0
    // 0x202d20: 0x4a0002ff  vnop
    ctx->pc = 0x202d20u;
    // NOP operation, no action needed for VU0
    // 0x202d24: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x202d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x202d28: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x202d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x202d2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x202d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x202d30: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x202d30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x202d34: 0x4be0016c  vsub.xyzw   $vf5, $vf0, $vf0
    ctx->pc = 0x202d34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x202d38: 0x4a812940  vaddx.y     $vf5, $vf5, $vf1x
    ctx->pc = 0x202d38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x202d3c: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x202d3cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]);
    // 0x202d40: 0xfba50030  sqc2        $vf5, 0x30($sp)
    ctx->pc = 0x202d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x202d44: 0x4bc428ee  vopmsub.xyz $vf3, $vf5, $vf4
    ctx->pc = 0x202d44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x202d48: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x202d48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x202d4c: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x202d4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x202d50: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x202d50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x202d54: 0x94c30004  lhu         $v1, 0x4($a2)
    ctx->pc = 0x202d54u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x202d58: 0x3c020780  lui         $v0, 0x780
    ctx->pc = 0x202d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1920 << 16));
    // 0x202d5c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x202d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x202d60: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x202d60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x202d64: 0x30627fff  andi        $v0, $v1, 0x7FFF
    ctx->pc = 0x202d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x202d68: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x202d68u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x202d6c: 0x4a0003bf  vwaitq
    ctx->pc = 0x202d6cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x202d70: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x202d70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x202d74: 0x4a0002ff  vnop
    ctx->pc = 0x202d74u;
    // NOP operation, no action needed for VU0
    // 0x202d78: 0x4a0002ff  vnop
    ctx->pc = 0x202d78u;
    // NOP operation, no action needed for VU0
    // 0x202d7c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x202d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x202d80: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x202d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x202d84: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x202d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x202d88: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x202d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x202d8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x202d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x202d90: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x202d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x202d94: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x202d94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x202d98: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x202d98u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x202d9c: 0x8c85003c  lw          $a1, 0x3C($a0)
    ctx->pc = 0x202d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x202da0: 0x24a4003c  addiu       $a0, $a1, 0x3C
    ctx->pc = 0x202da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x202da4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x202da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202da8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x202da8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x202dac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x202dacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x202db0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x202db0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x202db4: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x202db4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x202db8: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x202db8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x202dbc: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x202dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x202dc0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x202dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202dc4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x202dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x202dc8: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x202dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x202dcc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x202dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x202dd0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x202dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x202dd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x202dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202dd8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x202dd8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x202ddc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x202ddcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x202de0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x202de0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x202de4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x202de4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x202de8: 0x4be12958  vmulx.xyzw  $vf5, $vf5, $vf1x
    ctx->pc = 0x202de8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x202dec: 0x4be52128  vadd.xyzw   $vf4, $vf4, $vf5
    ctx->pc = 0x202decu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x202df0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x202df0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x202df4: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x202df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x202df8: 0xc4a1003c  lwc1        $f1, 0x3C($a1)
    ctx->pc = 0x202df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202dfc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x202dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x202e00: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x202e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x202e04: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x202e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x202e08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x202e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x202e0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x202e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202e10: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x202e10u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x202e14: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x202e14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x202e18: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x202e18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x202e1c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x202e1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x202e20: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x202e20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x202e24: 0x4be32068  vadd.xyzw   $vf1, $vf4, $vf3
    ctx->pc = 0x202e24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x202e28: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x202e28u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x202e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x202E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202E2Cu;
            // 0x202e30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202E34u;
    // 0x202e34: 0x0  nop
    ctx->pc = 0x202e34u;
    // NOP
}
