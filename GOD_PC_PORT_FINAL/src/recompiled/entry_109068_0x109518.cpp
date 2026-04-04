#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_109068
// Address: 0x109068 - 0x109518
void entry_109068_0x109518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_109068_0x109518");
#endif

    ctx->pc = 0x109068u;

    // 0x109068: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x109068u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x10906c: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x10906cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x109070: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x109070u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x109074: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x109074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x109078: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x109078u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x10907c: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x10907cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x109080: 0xfba300a0  sqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x109080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x109084: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x109084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109088: 0x7fa800e0  sq          $t0, 0xE0($sp)
    ctx->pc = 0x109088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 8));
    // 0x10908c: 0x48a61800  qmtc2.ni    $a2, $vf3
    ctx->pc = 0x10908cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x109090: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x109090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x109094: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x109094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109098: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x109098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x10909c: 0xe7b70168  swc1        $f23, 0x168($sp)
    ctx->pc = 0x10909cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x1090a0: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x1090a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1090a4: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x1090a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x1090a8: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x1090a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1090ac: 0xdba700a0  lqc2        $vf7, 0xA0($sp)
    ctx->pc = 0x1090acu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1090b0: 0x4be2192c  vsub.xyzw   $vf4, $vf3, $vf2
    ctx->pc = 0x1090b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1090b4: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x1090b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1090b8: 0xdba500b0  lqc2        $vf5, 0xB0($sp)
    ctx->pc = 0x1090b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1090bc: 0x48a72000  qmtc2.ni    $a3, $vf4
    ctx->pc = 0x1090bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1090c0: 0x4be120ac  vsub.xyzw   $vf2, $vf4, $vf1
    ctx->pc = 0x1090c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1090c4: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1090c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1090c8: 0x4be118ec  vsub.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1090c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1090cc: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x1090ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1090d0: 0x4be7392a  vmul.xyzw   $vf4, $vf7, $vf7
    ctx->pc = 0x1090d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1090d4: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x1090d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1090d8: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x1090d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1090dc: 0x4be529aa  vmul.xyzw   $vf6, $vf5, $vf5
    ctx->pc = 0x1090dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1090e0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1090e0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1090e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1090e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1090e8: 0x46000504  c1          0x504
    ctx->pc = 0x1090e8u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x1090ec: 0x4b063041  vaddy.x     $vf1, $vf6, $vf6y
    ctx->pc = 0x1090ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1090f0: 0x4b060842  vaddz.x     $vf1, $vf1, $vf6z
    ctx->pc = 0x1090f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1090f4: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x1090f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1090f8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1090f8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1090fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1090fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x109100: 0x46000544  c1          0x544
    ctx->pc = 0x109100u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x109104: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x109104u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109108: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x109108u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10910c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x10910cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109110: 0x4be338aa  vmul.xyzw   $vf2, $vf7, $vf3
    ctx->pc = 0x109110u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x109114: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x109114u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x109118: 0x460005c4  c1          0x5C4
    ctx->pc = 0x109118u;
    ctx->f[23] = FPU_SQRT_S(ctx->f[0]);
    // 0x10911c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x10911cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109120: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x109120u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109124: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x109124u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109128: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x109128u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10912c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x10912cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x109130: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x109130u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109134: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x109134u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109138: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x109138u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10913c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x10913cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x109140: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x109140u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x109144: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x109144u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x109148: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x109148u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10914c: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x10914cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x109150: 0x4be3386c  vsub.xyzw   $vf1, $vf7, $vf3
    ctx->pc = 0x109150u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109154: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x109154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109158: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x109158u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10915c: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x10915cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109160: 0x4be23b3c  vmove.xyzw  $vf2, $vf7
    ctx->pc = 0x109160u;
    ctx->vu0_vf[2] = ctx->vu0_vf[7];
    // 0x109164: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x109164u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x109168: 0x4a0003bf  vwaitq
    ctx->pc = 0x109168u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x10916c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x10916cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x109170: 0x4a0002ff  vnop
    ctx->pc = 0x109170u;
    // NOP operation, no action needed for VU0
    // 0x109174: 0x4a0002ff  vnop
    ctx->pc = 0x109174u;
    // NOP operation, no action needed for VU0
    // 0x109178: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x109178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10917c: 0x4b063041  vaddy.x     $vf1, $vf6, $vf6y
    ctx->pc = 0x10917cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109180: 0x4b060842  vaddz.x     $vf1, $vf1, $vf6z
    ctx->pc = 0x109180u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109184: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x109184u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x109188: 0x4a0003bf  vwaitq
    ctx->pc = 0x109188u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x10918c: 0x4bc0295c  vmulq.xyz   $vf5, $vf5, $Q
    ctx->pc = 0x10918cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x109190: 0x4a0002ff  vnop
    ctx->pc = 0x109190u;
    // NOP operation, no action needed for VU0
    // 0x109194: 0x4a0002ff  vnop
    ctx->pc = 0x109194u;
    // NOP operation, no action needed for VU0
    // 0x109198: 0x4be510aa  vmul.xyzw   $vf2, $vf2, $vf5
    ctx->pc = 0x109198u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10919c: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x10919cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1091a0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1091a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1091a4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1091a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1091a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1091a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1091ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1091acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1091b0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1091b0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1091b4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1091b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1091b8: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1091b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1091bc: 0x0  nop
    ctx->pc = 0x1091bcu;
    // NOP
    // 0x1091c0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1091C0u;
    {
        const bool branch_taken_0x1091c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1091C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1091C0u;
            // 0x1091c4: 0xdba100a0  lqc2        $vf1, 0xA0($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1091c0) {
            ctx->pc = 0x1091D8u;
            goto label_1091d8;
        }
    }
    ctx->pc = 0x1091C8u;
    // 0x1091c8: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1091c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1091cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1091CCu;
    {
        const bool branch_taken_0x1091cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1091D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1091CCu;
            // 0x1091d0: 0xdba200b0  lqc2        $vf2, 0xB0($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1091cc) {
            ctx->pc = 0x109218u;
            goto label_109218;
        }
    }
    ctx->pc = 0x1091D4u;
    // 0x1091d4: 0x0  nop
    ctx->pc = 0x1091d4u;
    // NOP
label_1091d8:
    // 0x1091d8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1091d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1091dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1091dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1091e0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1091e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1091e4: 0x0  nop
    ctx->pc = 0x1091e4u;
    // NOP
    // 0x1091e8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1091E8u;
    {
        const bool branch_taken_0x1091e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1091ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1091E8u;
            // 0x1091ec: 0xdba200b0  lqc2        $vf2, 0xB0($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1091e8) {
            ctx->pc = 0x109204u;
            goto label_109204;
        }
    }
    ctx->pc = 0x1091F0u;
    // 0x1091f0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1091f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1091f4: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1091f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1091f8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1091f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1091fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1091FCu;
    {
        const bool branch_taken_0x1091fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1091fc) {
            ctx->pc = 0x109218u;
            goto label_109218;
        }
    }
    ctx->pc = 0x109204u;
label_109204:
    // 0x109204: 0xc060f88  jal         func_183E20
    ctx->pc = 0x109204u;
    SET_GPR_U32(ctx, 31, 0x10920Cu);
    ctx->pc = 0x183E20u;
    if (runtime->hasFunction(0x183E20u)) {
        auto targetFn = runtime->lookupFunction(0x183E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10920Cu; }
        if (ctx->pc != 0x10920Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183e20_0x183ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10920Cu; }
        if (ctx->pc != 0x10920Cu) { return; }
    }
    ctx->pc = 0x10920Cu;
    // 0x10920c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x10920cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x109210: 0xdba100a0  lqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x109210u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x109214: 0xdba200b0  lqc2        $vf2, 0xB0($sp)
    ctx->pc = 0x109214u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_109218:
    // 0x109218: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x109218u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x10921c: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x10921cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x109220: 0x4be30b3c  vmove.xyzw  $vf3, $vf1
    ctx->pc = 0x109220u;
    ctx->vu0_vf[3] = ctx->vu0_vf[1];
    // 0x109224: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x109224u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x109228: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x109228u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10922c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x10922cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109230: 0x4617bdc2  mul.s       $f23, $f23, $f23
    ctx->pc = 0x109230u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
    // 0x109234: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x109234u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109238: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x109238u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x10923c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10923cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x109240: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x109240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x109244: 0x4614a040  add.s       $f1, $f20, $f20
    ctx->pc = 0x109244u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x109248: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x109248u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x10924c: 0x4a0003bf  vwaitq
    ctx->pc = 0x10924cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x109250: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x109250u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x109254: 0x4a0002ff  vnop
    ctx->pc = 0x109254u;
    // NOP operation, no action needed for VU0
    // 0x109258: 0x4a0002ff  vnop
    ctx->pc = 0x109258u;
    // NOP operation, no action needed for VU0
    // 0x10925c: 0x4615a882  mul.s       $f2, $f21, $f21
    ctx->pc = 0x10925cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x109260: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x109260u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x109264: 0x4600b801  sub.s       $f0, $f23, $f0
    ctx->pc = 0x109264u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
    // 0x109268: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x109268u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x10926c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x10926cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x109270: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x109270u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x109274: 0x460c1834  c.lt.s      $f3, $f12
    ctx->pc = 0x109274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x109278: 0x0  nop
    ctx->pc = 0x109278u;
    // NOP
    // 0x10927c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x10927Cu;
    {
        const bool branch_taken_0x10927c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x109280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10927Cu;
            // 0x109280: 0xfba10020  sqc2        $vf1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10927c) {
            ctx->pc = 0x109290u;
            goto label_109290;
        }
    }
    ctx->pc = 0x109284u;
    // 0x109284: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x109284u;
    {
        const bool branch_taken_0x109284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109284u;
            // 0x109288: 0x46001b06  mov.s       $f12, $f3 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109284) {
            ctx->pc = 0x1092A8u;
            goto label_1092a8;
        }
    }
    ctx->pc = 0x10928Cu;
    // 0x10928c: 0x0  nop
    ctx->pc = 0x10928cu;
    // NOP
label_109290:
    // 0x109290: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x109290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x109294: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x109294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x109298: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x109298u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10929c: 0x0  nop
    ctx->pc = 0x10929cu;
    // NOP
    // 0x1092a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1092A0u;
    {
        const bool branch_taken_0x1092a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1092a0) {
            ctx->pc = 0x1092A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1092A0u;
            // 0x1092a4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1092A8u;
            goto label_1092a8;
        }
    }
    ctx->pc = 0x1092A8u;
label_1092a8:
    // 0x1092a8: 0xc060f88  jal         func_183E20
    ctx->pc = 0x1092A8u;
    SET_GPR_U32(ctx, 31, 0x1092B0u);
    ctx->pc = 0x1092ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1092A8u;
            // 0x1092ac: 0xfba300f0  sqc2        $vf3, 0xF0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183E20u;
    if (runtime->hasFunction(0x183E20u)) {
        auto targetFn = runtime->lookupFunction(0x183E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1092B0u; }
        if (ctx->pc != 0x1092B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183e20_0x183ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1092B0u; }
        if (ctx->pc != 0x1092B0u) { return; }
    }
    ctx->pc = 0x1092B0u;
    // 0x1092b0: 0xdba300f0  lqc2        $vf3, 0xF0($sp)
    ctx->pc = 0x1092b0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1092b4: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x1092b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x1092b8: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x1092b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1092bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1092bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1092c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1092c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1092c4: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x1092c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1092c8: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x1092C8u;
    SET_GPR_U32(ctx, 31, 0x1092D0u);
    ctx->pc = 0x1092CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1092C8u;
            // 0x1092cc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1092D0u; }
        if (ctx->pc != 0x1092D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1092D0u; }
        if (ctx->pc != 0x1092D0u) { return; }
    }
    ctx->pc = 0x1092D0u;
    // 0x1092d0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1092d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1092d4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1092d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1092d8: 0xdba10070  lqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1092d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1092dc: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1092dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1092e0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1092e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1092e4: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x1092e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1092e8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1092e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1092ec: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1092ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1092f0: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x1092f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1092f4: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x1092f4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1092f8: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1092f8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1092fc: 0xc0422e0  jal         func_108B80
    ctx->pc = 0x1092FCu;
    SET_GPR_U32(ctx, 31, 0x109304u);
    ctx->pc = 0x109300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1092FCu;
            // 0x109300: 0xfba10050  sqc2        $vf1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108B80u;
    if (runtime->hasFunction(0x108B80u)) {
        auto targetFn = runtime->lookupFunction(0x108B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109304u; }
        if (ctx->pc != 0x109304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_108b80_0x108cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109304u; }
        if (ctx->pc != 0x109304u) { return; }
    }
    ctx->pc = 0x109304u;
    // 0x109304: 0xdba200a0  lqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x109304u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x109308: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x109308u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x10930c: 0x4be31068  vadd.xyzw   $vf1, $vf2, $vf3
    ctx->pc = 0x10930cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109310: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x109310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109314: 0x7ba50090  lq          $a1, 0x90($sp)
    ctx->pc = 0x109314u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x109318: 0xc04235a  jal         func_108D68
    ctx->pc = 0x109318u;
    SET_GPR_U32(ctx, 31, 0x109320u);
    ctx->pc = 0x10931Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109318u;
            // 0x10931c: 0x48240800  qmfc2.ni    $a0, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108D68u;
    if (runtime->hasFunction(0x108D68u)) {
        auto targetFn = runtime->lookupFunction(0x108D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109320u; }
        if (ctx->pc != 0x109320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108D68_0x108d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109320u; }
        if (ctx->pc != 0x109320u) { return; }
    }
    ctx->pc = 0x109320u;
    // 0x109320: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x109320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x109324: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x109324u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x109328: 0xc0422e0  jal         func_108B80
    ctx->pc = 0x109328u;
    SET_GPR_U32(ctx, 31, 0x109330u);
    ctx->pc = 0x10932Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109328u;
            // 0x10932c: 0x70022ca9  por         $a1, $zero, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108B80u;
    if (runtime->hasFunction(0x108B80u)) {
        auto targetFn = runtime->lookupFunction(0x108B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109330u; }
        if (ctx->pc != 0x109330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_108b80_0x108cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109330u; }
        if (ctx->pc != 0x109330u) { return; }
    }
    ctx->pc = 0x109330u;
    // 0x109330: 0x48a23800  qmtc2.ni    $v0, $vf7
    ctx->pc = 0x109330u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x109334: 0x7ba50090  lq          $a1, 0x90($sp)
    ctx->pc = 0x109334u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x109338: 0x48243800  qmfc2.ni    $a0, $vf7
    ctx->pc = 0x109338u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x10933c: 0xc0423f0  jal         func_108FC0
    ctx->pc = 0x10933Cu;
    SET_GPR_U32(ctx, 31, 0x109344u);
    ctx->pc = 0x109340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10933Cu;
            // 0x109340: 0xfba70100  sqc2        $vf7, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[7]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108FC0u;
    if (runtime->hasFunction(0x108FC0u)) {
        auto targetFn = runtime->lookupFunction(0x108FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109344u; }
        if (ctx->pc != 0x109344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_108fc0_0x109068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109344u; }
        if (ctx->pc != 0x109344u) { return; }
    }
    ctx->pc = 0x109344u;
    // 0x109344: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x109344u;
    {
        const bool branch_taken_0x109344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109344u;
            // 0x109348: 0xdba70100  lqc2        $vf7, 0x100($sp) (Delay Slot)
        ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109344) {
            ctx->pc = 0x109360u;
            goto label_109360;
        }
    }
    ctx->pc = 0x10934Cu;
    // 0x10934c: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x10934cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x109350: 0xc0422e0  jal         func_108B80
    ctx->pc = 0x109350u;
    SET_GPR_U32(ctx, 31, 0x109358u);
    ctx->pc = 0x109354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109350u;
            // 0x109354: 0x7ba500d0  lq          $a1, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108B80u;
    if (runtime->hasFunction(0x108B80u)) {
        auto targetFn = runtime->lookupFunction(0x108B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109358u; }
        if (ctx->pc != 0x109358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_108b80_0x108cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109358u; }
        if (ctx->pc != 0x109358u) { return; }
    }
    ctx->pc = 0x109358u;
    // 0x109358: 0x48a23800  qmtc2.ni    $v0, $vf7
    ctx->pc = 0x109358u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x10935c: 0x0  nop
    ctx->pc = 0x10935cu;
    // NOP
label_109360:
    // 0x109360: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x109360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x109364: 0x24060000  addiu       $a2, $zero, 0x0
    ctx->pc = 0x109364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x109368: 0x70861b89  pcpyld      $v1, $a0, $a2
    ctx->pc = 0x109368u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x10936c: 0x7ba50090  lq          $a1, 0x90($sp)
    ctx->pc = 0x10936cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x109370: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x109370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x109374: 0x24060000  addiu       $a2, $zero, 0x0
    ctx->pc = 0x109374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x109378: 0x70861389  pcpyld      $v0, $a0, $a2
    ctx->pc = 0x109378u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x10937c: 0xfba70100  sqc2        $vf7, 0x100($sp)
    ctx->pc = 0x10937cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x109380: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x109380u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x109384: 0x7ba400e0  lq          $a0, 0xE0($sp)
    ctx->pc = 0x109384u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x109388: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x109388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10938c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x10938cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x109390: 0xc0423f0  jal         func_108FC0
    ctx->pc = 0x109390u;
    SET_GPR_U32(ctx, 31, 0x109398u);
    ctx->pc = 0x109394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109390u;
            // 0x109394: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108FC0u;
    if (runtime->hasFunction(0x108FC0u)) {
        auto targetFn = runtime->lookupFunction(0x108FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109398u; }
        if (ctx->pc != 0x109398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_108fc0_0x109068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109398u; }
        if (ctx->pc != 0x109398u) { return; }
    }
    ctx->pc = 0x109398u;
    // 0x109398: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x109398u;
    {
        const bool branch_taken_0x109398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10939Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109398u;
            // 0x10939c: 0xdba70100  lqc2        $vf7, 0x100($sp) (Delay Slot)
        ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109398) {
            ctx->pc = 0x1093B8u;
            goto label_1093b8;
        }
    }
    ctx->pc = 0x1093A0u;
    // 0x1093a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1093a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1093a4: 0x4600b832  c.eq.s      $f23, $f0
    ctx->pc = 0x1093a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1093a8: 0x0  nop
    ctx->pc = 0x1093a8u;
    // NOP
    // 0x1093ac: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1093ACu;
    {
        const bool branch_taken_0x1093ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1093ac) {
            ctx->pc = 0x1093B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1093ACu;
            // 0x1093b0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1093B8u;
            goto label_1093b8;
        }
    }
    ctx->pc = 0x1093B4u;
    // 0x1093b4: 0x0  nop
    ctx->pc = 0x1093b4u;
    // NOP
label_1093b8:
    // 0x1093b8: 0x12000039  beqz        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1093B8u;
    {
        const bool branch_taken_0x1093b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1093BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1093B8u;
            // 0x1093bc: 0xdba30090  lqc2        $vf3, 0x90($sp) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1093b8) {
            ctx->pc = 0x1094A0u;
            goto label_1094a0;
        }
    }
    ctx->pc = 0x1093C0u;
    // 0x1093c0: 0x4be338aa  vmul.xyzw   $vf2, $vf7, $vf3
    ctx->pc = 0x1093c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1093c4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1093c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1093c8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1093c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1093cc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1093ccu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1093d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1093d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1093d4: 0x46170003  div.s       $f0, $f0, $f23
    ctx->pc = 0x1093d4u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[23];
    // 0x1093d8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1093d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1093dc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1093dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1093e0: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x1093e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1093e4: 0x4be1392c  vsub.xyzw   $vf4, $vf7, $vf1
    ctx->pc = 0x1093e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1093e8: 0xdba100e0  lqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1093e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1093ec: 0x4be308aa  vmul.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x1093ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1093f0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1093f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1093f4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1093f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1093f8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1093f8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1093fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1093fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x109400: 0x46170003  div.s       $f0, $f0, $f23
    ctx->pc = 0x109400u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[23];
    // 0x109404: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x109404u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x109408: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x109408u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10940c: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x10940cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x109410: 0xdba100e0  lqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x109410u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x109414: 0x4be308ec  vsub.xyzw   $vf3, $vf1, $vf3
    ctx->pc = 0x109414u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x109418: 0x4be320aa  vmul.xyzw   $vf2, $vf4, $vf3
    ctx->pc = 0x109418u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10941c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x10941cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109420: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x109420u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109424: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x109424u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109428: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x109428u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10942c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x10942cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x109430: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x109430u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109434: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x109434u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109438: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x109438u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10943c: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x10943cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x109440: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x109440u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x109444: 0x46020084  c1          0x20084
    ctx->pc = 0x109444u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x109448: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x109448u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10944c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x10944cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109450: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x109450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x109454: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x109454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x109458: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x109458u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10945c: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x10945cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x109460: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x109460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x109464: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x109464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x109468: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x109468u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10946c: 0x46000004  c1          0x4
    ctx->pc = 0x10946cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x109470: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x109470u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x109474: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x109474u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x109478: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x109478u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x10947c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x10947cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x109480: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x109480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x109484: 0x0  nop
    ctx->pc = 0x109484u;
    // NOP
    // 0x109488: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x109488u;
    {
        const bool branch_taken_0x109488 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10948Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109488u;
            // 0x10948c: 0x7ba20050  lq          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109488) {
            ctx->pc = 0x1094A4u;
            goto label_1094a4;
        }
    }
    ctx->pc = 0x109490u;
    // 0x109490: 0x48242000  qmfc2.ni    $a0, $vf4
    ctx->pc = 0x109490u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x109494: 0xc04235a  jal         func_108D68
    ctx->pc = 0x109494u;
    SET_GPR_U32(ctx, 31, 0x10949Cu);
    ctx->pc = 0x109498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109494u;
            // 0x109498: 0x48251800  qmfc2.ni    $a1, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108D68u;
    if (runtime->hasFunction(0x108D68u)) {
        auto targetFn = runtime->lookupFunction(0x108D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10949Cu; }
        if (ctx->pc != 0x10949Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108D68_0x108d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10949Cu; }
        if (ctx->pc != 0x10949Cu) { return; }
    }
    ctx->pc = 0x10949Cu;
    // 0x10949c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x10949cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_1094a0:
    // 0x1094a0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1094a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1094a4:
    // 0x1094a4: 0xdba20080  lqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1094a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1094a8: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x1094a8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x1094ac: 0xdba100d0  lqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x1094acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1094b0: 0x4be208db  vmulw.xyzw  $vf3, $vf1, $vf2w
    ctx->pc = 0x1094b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1094b4: 0x4be1105b  vmulw.xyzw  $vf1, $vf2, $vf1w
    ctx->pc = 0x1094b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1094b8: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1094b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1094bc: 0xdba400d0  lqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1094bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1094c0: 0x4bc412fe  vopmula.xyz $ACC, $vf2, $vf4
    ctx->pc = 0x1094c0u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]);
    // 0x1094c4: 0x4bc2206e  vopmsub.xyz $vf1, $vf4, $vf2
    ctx->pc = 0x1094c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1094c8: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1094c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1094cc: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1094ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1094d0: 0x4a24111b  vmulw.w     $vf4, $vf2, $vf4w
    ctx->pc = 0x1094d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1094d4: 0xdba100d0  lqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x1094d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1094d8: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1094d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1094dc: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1094dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1094e0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1094e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1094e4: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x1094e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1094e8: 0x4a212104  vsubx.w     $vf4, $vf4, $vf1x
    ctx->pc = 0x1094e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1094ec: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x1094ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1094f0: 0x4a23233c  vmove.w     $vf3, $vf4
    ctx->pc = 0x1094f0u;
    ctx->vu0_vf[3] = ctx->vu0_vf[4];
    // 0x1094f4: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x1094f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1094f8: 0xfa430000  sqc2        $vf3, 0x0($s2)
    ctx->pc = 0x1094f8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1094fc: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x1094fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x109500: 0xc7b70168  lwc1        $f23, 0x168($sp)
    ctx->pc = 0x109500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x109504: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x109504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x109508: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x109508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x10950c: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x10950cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x109510: 0x3e00008  jr          $ra
    ctx->pc = 0x109510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109510u;
            // 0x109514: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1091D8u: goto label_1091d8;
            case 0x109204u: goto label_109204;
            case 0x109218u: goto label_109218;
            case 0x109290u: goto label_109290;
            case 0x1092A8u: goto label_1092a8;
            case 0x109360u: goto label_109360;
            case 0x1093B8u: goto label_1093b8;
            case 0x1094A0u: goto label_1094a0;
            case 0x1094A4u: goto label_1094a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x109518u;
}
