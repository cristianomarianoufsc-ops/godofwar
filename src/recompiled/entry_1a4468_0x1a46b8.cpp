#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1a4468
// Address: 0x1a4468 - 0x1a46b8
void entry_1a4468_0x1a46b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1a4468_0x1a46b8");
#endif

    ctx->pc = 0x1a4468u;

    // 0x1a4468: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1a4468u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1a446c: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x1a446cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x1a4470: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x1a4470u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x1a4474: 0x94e00  sll         $t1, $t1, 24
    ctx->pc = 0x1a4474u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x1a4478: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1a4478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1a447c: 0x73e03  sra         $a3, $a3, 24
    ctx->pc = 0x1a447cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 24));
    // 0x1a4480: 0x84603  sra         $t0, $t0, 24
    ctx->pc = 0x1a4480u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 24));
    // 0x1a4484: 0x94e03  sra         $t1, $t1, 24
    ctx->pc = 0x1a4484u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 24));
    // 0x1a4488: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1a4488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1a448c: 0x63603  sra         $a2, $a2, 24
    ctx->pc = 0x1a448cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    // 0x1a4490: 0x44862000  mtc1        $a2, $f4
    ctx->pc = 0x1a4490u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1a4494: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1a4494u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1a4498: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x1a4498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x1a449c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a449cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a44a0: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1a44a0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a44a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a44a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a44a8: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x1a44a8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a44ac: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a44acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a44b0: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x1a44b0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a44b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a44b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a44b8: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x1a44b8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[3];
    // 0x1a44bc: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x1a44bcu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
    // 0x1a44c0: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1a44c0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x1a44c4: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x1a44c4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x1a44c8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1a44c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a44cc: 0x44082000  mfc1        $t0, $f4
    ctx->pc = 0x1a44ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1a44d0: 0x70481b89  pcpyld      $v1, $v0, $t0
    ctx->pc = 0x1a44d0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x1a44d4: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x1a44d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x1a44d8: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x1a44d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1a44dc: 0x71281389  pcpyld      $v0, $t1, $t0
    ctx->pc = 0x1a44dcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1a44e0: 0x70434cc8  ppacw       $t1, $v0, $v1
    ctx->pc = 0x1a44e0u;
    SET_GPR_VEC(ctx, 9, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1a44e4: 0x48a91800  qmtc2.ni    $t1, $vf3
    ctx->pc = 0x1a44e4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x1a44e8: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x1a44e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1a44ec: 0x4be3186a  vmul.xyzw   $vf1, $vf3, $vf3
    ctx->pc = 0x1a44ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a44f0: 0xfba30100  sqc2        $vf3, 0x100($sp)
    ctx->pc = 0x1a44f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1a44f4: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1a44f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a44f8: 0x4a210842  vaddz.w     $vf1, $vf1, $vf1z
    ctx->pc = 0x1a44f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a44fc: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1a44fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a4500: 0x4b011083  vaddw.x     $vf2, $vf2, $vf1w
    ctx->pc = 0x1a4500u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a4504: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1a4504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a4508: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1a4508u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1a450c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1a450cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1a4510: 0x4be0191c  vmulq.xyzw  $vf4, $vf3, $Q
    ctx->pc = 0x1a4510u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1a4514: 0x4a0002ff  vnop
    ctx->pc = 0x1a4514u;
    // NOP operation, no action needed for VU0
    // 0x1a4518: 0x4a0002ff  vnop
    ctx->pc = 0x1a4518u;
    // NOP operation, no action needed for VU0
    // 0x1a451c: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x1a451cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a4520: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a4520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1a4524: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1a4524u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1a4528: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x1a4528u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a452c: 0x4be120da  vmulz.xyzw  $vf3, $vf4, $vf1z
    ctx->pc = 0x1a452cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1a4530: 0x4be12159  vmuly.xyzw  $vf5, $vf4, $vf1y
    ctx->pc = 0x1a4530u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1a4534: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x1a4534u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1a4538: 0x4a832842  vaddz.y     $vf1, $vf5, $vf3z
    ctx->pc = 0x1a4538u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a453c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a453cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a4540: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x1a4540u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1a4544: 0x4b013045  vsuby.x     $vf1, $vf6, $vf1y
    ctx->pc = 0x1a4544u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a4548: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1a4548u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a454c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a454cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4550: 0x4b032883  vaddw.x     $vf2, $vf5, $vf3w
    ctx->pc = 0x1a4550u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a4554: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x1a4554u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a4558: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1a4558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a455c: 0x4b051847  vsubw.x     $vf1, $vf3, $vf5w
    ctx->pc = 0x1a455cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a4560: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1a4560u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1a4564: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a4564u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4568: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1a4568u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a456c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1a456cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4570: 0x71023b89  pcpyld      $a3, $t0, $v0
    ctx->pc = 0x1a4570u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x1a4574: 0x4b032847  vsubw.x     $vf1, $vf5, $vf3w
    ctx->pc = 0x1a4574u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a4578: 0x70e33cc8  ppacw       $a3, $a3, $v1
    ctx->pc = 0x1a4578u;
    SET_GPR_VEC(ctx, 7, PS2_PPACW(GPR_VEC(ctx, 7), GPR_VEC(ctx, 3)));
    // 0x1a457c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1a457cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a4580: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a4580u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4584: 0x7fa70070  sq          $a3, 0x70($sp)
    ctx->pc = 0x1a4584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 7));
    // 0x1a4588: 0x4b032042  vaddz.x     $vf1, $vf4, $vf3z
    ctx->pc = 0x1a4588u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a458c: 0x4b013044  vsubx.x     $vf1, $vf6, $vf1x
    ctx->pc = 0x1a458cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a4590: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1a4590u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a4594: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1a4594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4598: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1a4598u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1a459c: 0x4a841843  vaddw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x1a459cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a45a0: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1a45a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a45a4: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1a45a4u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a45a8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1a45a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a45ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a45acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a45b0: 0x71223389  pcpyld      $a2, $t1, $v0
    ctx->pc = 0x1a45b0u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x1a45b4: 0x4a841847  vsubw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x1a45b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a45b8: 0x70c334c8  ppacw       $a2, $a2, $v1
    ctx->pc = 0x1a45b8u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 3)));
    // 0x1a45bc: 0x4b0518c3  vaddw.x     $vf3, $vf3, $vf5w
    ctx->pc = 0x1a45bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1a45c0: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x1a45c0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1a45c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a45c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a45c8: 0x4b052101  vaddy.x     $vf4, $vf4, $vf5y
    ctx->pc = 0x1a45c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1a45cc: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1a45ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a45d0: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x1a45d0u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a45d4: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x1a45d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a45d8: 0x7fa60080  sq          $a2, 0x80($sp)
    ctx->pc = 0x1a45d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 6));
    // 0x1a45dc: 0x4b043184  vsubx.x     $vf6, $vf6, $vf4x
    ctx->pc = 0x1a45dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1a45e0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1a45e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a45e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a45e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a45e8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1a45e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1a45ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a45ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a45f0: 0x3c01477a  lui         $at, 0x477A
    ctx->pc = 0x1a45f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18298 << 16));
    // 0x1a45f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a45f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a45f8: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1a45f8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1a45fc: 0x48253000  qmfc2.ni    $a1, $vf6
    ctx->pc = 0x1a45fcu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1a4600: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1a4600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4604: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x1a4604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
    // 0x1a4608: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a4608u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a460c: 0x71221389  pcpyld      $v0, $t1, $v0
    ctx->pc = 0x1a460cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x1a4610: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1a4610u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1a4614: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x1a4614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x1a4618: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x1a4618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x1a461c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1a461cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1a4620: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1a4620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1a4624: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a4624u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a4628: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1a4628u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1a462c: 0x48a72000  qmtc2.ni    $a3, $vf4
    ctx->pc = 0x1a462cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1a4630: 0x4be120d8  vmulx.xyzw  $vf3, $vf4, $vf1x
    ctx->pc = 0x1a4630u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1a4634: 0x48a62800  qmtc2.ni    $a2, $vf5
    ctx->pc = 0x1a4634u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1a4638: 0x4be12918  vmulx.xyzw  $vf4, $vf5, $vf1x
    ctx->pc = 0x1a4638u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1a463c: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1a463cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a4640: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x1a4640u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1a4644: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1a4644u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a4648: 0x4be13158  vmulx.xyzw  $vf5, $vf6, $vf1x
    ctx->pc = 0x1a4648u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1a464c: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1a464cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a4650: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1a4650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a4654: 0xfba300b0  sqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x1a4654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1a4658: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1a4658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1a465c: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1a465cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a4660: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1a4660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a4664: 0xfba500d0  sqc2        $vf5, 0xD0($sp)
    ctx->pc = 0x1a4664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a4668: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x1a4668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a466c: 0xfba200e0  sqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x1a466cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a4670: 0x44036800  mfc1        $v1, $f13
    ctx->pc = 0x1a4670u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a4674: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1a4674u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x1a4678: 0x44076000  mfc1        $a3, $f12
    ctx->pc = 0x1a4678u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1a467c: 0x70671389  pcpyld      $v0, $v1, $a3
    ctx->pc = 0x1a467cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x1a4680: 0x44097000  mfc1        $t1, $f14
    ctx->pc = 0x1a4680u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[14], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x1a4684: 0x71091b89  pcpyld      $v1, $t0, $t1
    ctx->pc = 0x1a4684u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x1a4688: 0xf8840010  sqc2        $vf4, 0x10($a0)
    ctx->pc = 0x1a4688u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a468c: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x1a468cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1a4690: 0xf8850020  sqc2        $vf5, 0x20($a0)
    ctx->pc = 0x1a4690u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a4694: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x1a4694u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
    // 0x1a4698: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a4698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a469c: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x1a469cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1a46a0: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x1a46a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
    // 0x1a46a4: 0x7fa30120  sq          $v1, 0x120($sp)
    ctx->pc = 0x1a46a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
    // 0x1a46a8: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x1a46a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x1a46ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1A46ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A46B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A46ACu;
            // 0x1a46b0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A46B4u;
    // 0x1a46b4: 0x0  nop
    ctx->pc = 0x1a46b4u;
    // NOP
}
