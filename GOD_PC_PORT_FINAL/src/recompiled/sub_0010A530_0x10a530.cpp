#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010A530
// Address: 0x10a530 - 0x10a6e0
void sub_0010A530_0x10a530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A530_0x10a530");
#endif

    ctx->pc = 0x10a530u;

    // 0x10a530: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x10a530u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x10a534: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x10a534u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x10a538: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10a538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10a53c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x10a53cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10a540: 0x73b83  sra         $a3, $a3, 14
    ctx->pc = 0x10a540u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 14));
    // 0x10a544: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x10a544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10a548: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x10a548u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x10a54c: 0x63383  sra         $a2, $a2, 14
    ctx->pc = 0x10a54cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 14));
    // 0x10a550: 0x3c0139c9  lui         $at, 0x39C9
    ctx->pc = 0x10a550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14793 << 16));
    // 0x10a554: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x10a554u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x10a558: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x10a558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x10a55c: 0x31b83  sra         $v1, $v1, 14
    ctx->pc = 0x10a55cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 14));
    // 0x10a560: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x10a560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10a564: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x10a564u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10a568: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x10a568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10a56c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x10a56cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a570: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x10a570u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x10a574: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10a574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x10a578: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x10a578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x10a57c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10a57cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10a580: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x10a580u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x10a584: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x10a584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x10a588: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x10a588u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x10a58c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x10a58cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x10a590: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x10a590u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10a594: 0x44071800  mfc1        $a3, $f3
    ctx->pc = 0x10a594u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x10a598: 0x70471b89  pcpyld      $v1, $v0, $a3
    ctx->pc = 0x10a598u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x10a59c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x10a59cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x10a5a0: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x10a5a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x10a5a4: 0x71071389  pcpyld      $v0, $t0, $a3
    ctx->pc = 0x10a5a4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x10a5a8: 0x704344c8  ppacw       $t0, $v0, $v1
    ctx->pc = 0x10a5a8u;
    SET_GPR_VEC(ctx, 8, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x10a5ac: 0x48a81800  qmtc2.ni    $t0, $vf3
    ctx->pc = 0x10a5acu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x10a5b0: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x10a5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x10a5b4: 0x4be3186a  vmul.xyzw   $vf1, $vf3, $vf3
    ctx->pc = 0x10a5b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a5b8: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x10a5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x10a5bc: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x10a5bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10a5c0: 0x4a210842  vaddz.w     $vf1, $vf1, $vf1z
    ctx->pc = 0x10a5c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a5c4: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x10a5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10a5c8: 0x4b011083  vaddw.x     $vf2, $vf2, $vf1w
    ctx->pc = 0x10a5c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10a5cc: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x10a5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a5d0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x10a5d0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x10a5d4: 0x4a0003bf  vwaitq
    ctx->pc = 0x10a5d4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x10a5d8: 0x4be0191c  vmulq.xyzw  $vf4, $vf3, $Q
    ctx->pc = 0x10a5d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10a5dc: 0x4a0002ff  vnop
    ctx->pc = 0x10a5dcu;
    // NOP operation, no action needed for VU0
    // 0x10a5e0: 0x4a0002ff  vnop
    ctx->pc = 0x10a5e0u;
    // NOP operation, no action needed for VU0
    // 0x10a5e4: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x10a5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10a5e8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x10a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x10a5ec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x10a5ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x10a5f0: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x10a5f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a5f4: 0x4be120da  vmulz.xyzw  $vf3, $vf4, $vf1z
    ctx->pc = 0x10a5f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x10a5f8: 0x4be12199  vmuly.xyzw  $vf6, $vf4, $vf1y
    ctx->pc = 0x10a5f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x10a5fc: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x10a5fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10a600: 0x4a833082  vaddz.y     $vf2, $vf6, $vf3z
    ctx->pc = 0x10a600u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10a604: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10a604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x10a608: 0x48a23800  qmtc2.ni    $v0, $vf7
    ctx->pc = 0x10a608u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x10a60c: 0x4b023885  vsuby.x     $vf2, $vf7, $vf2y
    ctx->pc = 0x10a60cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10a610: 0x4b061847  vsubw.x     $vf1, $vf3, $vf6w
    ctx->pc = 0x10a610u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a614: 0x4b033143  vaddw.x     $vf5, $vf6, $vf3w
    ctx->pc = 0x10a614u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a618: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x10a618u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a61c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10a61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a620: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x10a620u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10a624: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10a624u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a628: 0x48262800  qmfc2.ni    $a2, $vf5
    ctx->pc = 0x10a628u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a62c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x10a62cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a630: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x10a630u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x10a634: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10a634u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a638: 0x4b033047  vsubw.x     $vf1, $vf6, $vf3w
    ctx->pc = 0x10a638u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a63c: 0x71041389  pcpyld      $v0, $t0, $a0
    ctx->pc = 0x10a63cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 4)));
    // 0x10a640: 0x4b032082  vaddz.x     $vf2, $vf4, $vf3z
    ctx->pc = 0x10a640u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10a644: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x10a644u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x10a648: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x10a648u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a64c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x10a64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a650: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x10a650u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x10a654: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x10a654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x10a658: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x10a658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x10a65c: 0x4b023884  vsubx.x     $vf2, $vf7, $vf2x
    ctx->pc = 0x10a65cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10a660: 0x4a841843  vaddw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x10a660u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a664: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x10a664u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10a668: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x10a668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a66c: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x10a66cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a670: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x10a670u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a674: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x10a674u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a678: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x10a678u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x10a67c: 0x71031389  pcpyld      $v0, $t0, $v1
    ctx->pc = 0x10a67cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
    // 0x10a680: 0x4a841847  vsubw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x10a680u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a684: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x10a684u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x10a688: 0x4b0618c3  vaddw.x     $vf3, $vf3, $vf6w
    ctx->pc = 0x10a688u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x10a68c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x10a68cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x10a690: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x10a690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a694: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x10a694u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x10a698: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x10a698u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a69c: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x10a69cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a6a0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x10a6a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6a4: 0x4b062101  vaddy.x     $vf4, $vf4, $vf6y
    ctx->pc = 0x10a6a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10a6a8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x10a6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x10a6ac: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x10a6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x10a6b0: 0x4b0439c4  vsubx.x     $vf7, $vf7, $vf4x
    ctx->pc = 0x10a6b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x10a6b4: 0x48263800  qmfc2.ni    $a2, $vf7
    ctx->pc = 0x10a6b4u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x10a6b8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x10a6b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6bc: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x10a6bcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x10a6c0: 0x71021389  pcpyld      $v0, $t0, $v0
    ctx->pc = 0x10a6c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x10a6c4: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x10a6c4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x10a6c8: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x10a6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x10a6cc: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x10a6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x10a6d0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x10a6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x10a6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x10A6D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A6D4u;
            // 0x10a6d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A6DCu;
    // 0x10a6dc: 0x0  nop
    ctx->pc = 0x10a6dcu;
    // NOP
}
