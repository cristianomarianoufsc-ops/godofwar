#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E2368
// Address: 0x1e2368 - 0x1e26e0
void sub_001E2368_0x1e2368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2368_0x1e2368");
#endif

    ctx->pc = 0x1e2368u;

    // 0x1e2368: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1e2368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1e236c: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x1e236cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1e2370: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x1e2370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x1e2374: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1e2374u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2378: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x1e2378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x1e237c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e237cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2380: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x1e2380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
    // 0x1e2384: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e2384u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2388: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x1e2388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x1e238c: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x1e238cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2390: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x1e2390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x1e2394: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x1e2394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x1e2398: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x1e2398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
    // 0x1e239c: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x1e239cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
    // 0x1e23a0: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x1e23a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
    // 0x1e23a4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1e23a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1e23a8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1e23a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e23ac: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e23acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e23b0: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1e23b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e23b4: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1e23b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e23b8: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1e23b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e23bc: 0x26370050  addiu       $s7, $s1, 0x50
    ctx->pc = 0x1e23bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1e23c0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1e23c0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e23c4: 0x3c01404c  lui         $at, 0x404C
    ctx->pc = 0x1e23c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16460 << 16));
    // 0x1e23c8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e23c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e23cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e23ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e23d0: 0xdae20020  lqc2        $vf2, 0x20($s7)
    ctx->pc = 0x1e23d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x1e23d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e23d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e23d8: 0x46000004  c1          0x4
    ctx->pc = 0x1e23d8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1e23dc: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1e23dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1e23e0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1e23e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e23e4: 0x46010068  max.s       $f1, $f0, $f1
    ctx->pc = 0x1e23e4u;
    ctx->f[1] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1e23e8: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1e23e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e23ec: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x1e23ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e23f0: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1e23f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e23f4: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1e23f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e23f8: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1e23f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e23fc: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1e23fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2400: 0xda230120  lqc2        $vf3, 0x120($s1)
    ctx->pc = 0x1e2400u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1e2404: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1e2404u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e2408: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e2408u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e240c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1e240cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2410: 0x4a0002ff  vnop
    ctx->pc = 0x1e2410u;
    // NOP operation, no action needed for VU0
    // 0x1e2414: 0x4a0002ff  vnop
    ctx->pc = 0x1e2414u;
    // NOP operation, no action needed for VU0
    // 0x1e2418: 0x4be3105a  vmulz.xyzw  $vf1, $vf2, $vf3z
    ctx->pc = 0x1e2418u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e241c: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1e241cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e2420: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1e2420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2424: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e2424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e2428: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e2428u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e242c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e242cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2430: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1e2430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2434: 0x4b0300c4  vsubx.x     $vf3, $vf0, $vf3x
    ctx->pc = 0x1e2434u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e2438: 0xda210050  lqc2        $vf1, 0x50($s1)
    ctx->pc = 0x1e2438u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1e243c: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1e243cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2440: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1e2440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2444: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e2444u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2448: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1e2448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e244c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e244cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2450: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1e2450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2454: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e2454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e2458: 0x7a220130  lq          $v0, 0x130($s1)
    ctx->pc = 0x1e2458u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x1e245c: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1e245cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e2460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2464: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x1e2464u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x1e2468: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e2468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e246c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e246cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e2470:
    // 0x1e2470: 0x0  nop
    ctx->pc = 0x1e2470u;
    // NOP
    // 0x1e2474: 0x0  nop
    ctx->pc = 0x1e2474u;
    // NOP
    // 0x1e2478: 0x0  nop
    ctx->pc = 0x1e2478u;
    // NOP
    // 0x1e247c: 0x0  nop
    ctx->pc = 0x1e247cu;
    // NOP
    // 0x1e2480: 0x0  nop
    ctx->pc = 0x1e2480u;
    // NOP
    // 0x1e2484: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1E2484u;
    {
        const bool branch_taken_0x1e2484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E2488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2484u;
            // 0x1e2488: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2484) {
            ctx->pc = 0x1E2470u;
            runtime->cooperativeGuestYield();
            goto label_1e2470;
        }
    }
    ctx->pc = 0x1E248Cu;
    // 0x1e248c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e248cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2490: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1e2490u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e2494: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x1e2494u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e2498: 0x4a8118c0  vaddx.y     $vf3, $vf3, $vf1x
    ctx->pc = 0x1e2498u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e249c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e249cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e24a0: 0xfba30080  sqc2        $vf3, 0x80($sp)
    ctx->pc = 0x1e24a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e24a4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1e24a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1e24a8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1e24a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1e24ac: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1e24acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e24b0: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x1e24b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e24b4: 0x4be328ec  vsub.xyzw   $vf3, $vf5, $vf3
    ctx->pc = 0x1e24b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e24b8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e24b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e24bc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e24bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e24c0: 0xdba10090  lqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1e24c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e24c4: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e24c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e24c8: 0x4be118a8  vadd.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x1e24c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e24cc: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1e24ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e24d0: 0x4be410a8  vadd.xyzw   $vf2, $vf2, $vf4
    ctx->pc = 0x1e24d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e24d4: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1e24d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e24d8: 0x4be1186c  vsub.xyzw   $vf1, $vf3, $vf1
    ctx->pc = 0x1e24d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e24dc: 0x4be40868  vadd.xyzw   $vf1, $vf1, $vf4
    ctx->pc = 0x1e24dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e24e0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e24e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e24e4: 0x3c020101  lui         $v0, 0x101
    ctx->pc = 0x1e24e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)257 << 16));
    // 0x1e24e8: 0x3c040430  lui         $a0, 0x430
    ctx->pc = 0x1e24e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1072 << 16));
    // 0x1e24ec: 0x34420042  ori         $v0, $v0, 0x42
    ctx->pc = 0x1e24ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)66);
    // 0x1e24f0: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x1e24f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x1e24f4: 0x8e230258  lw          $v1, 0x258($s1)
    ctx->pc = 0x1e24f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
    // 0x1e24f8: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x1e24f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1e24fc: 0x8e250254  lw          $a1, 0x254($s1)
    ctx->pc = 0x1e24fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x1e2500: 0x34c61ff3  ori         $a2, $a2, 0x1FF3
    ctx->pc = 0x1e2500u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8179);
    // 0x1e2504: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e2504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e2508: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1e2508u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e250c: 0x434825  or          $t1, $v0, $v1
    ctx->pc = 0x1e250cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e2510: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1e2510u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x1e2514: 0xc53027  nor         $a2, $a2, $a1
    ctx->pc = 0x1e2514u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 5)));
    // 0x1e2518: 0x3c16002a  lui         $s6, 0x2A
    ctx->pc = 0x1e2518u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
    // 0x1e251c: 0x24e2f170  addiu       $v0, $a3, -0xE90
    ctx->pc = 0x1e251cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963568));
    // 0x1e2520: 0x8ec4bcf8  lw          $a0, -0x4308($s6)
    ctx->pc = 0x1e2520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950136)));
    // 0x1e2524: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x1e2524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e2528: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e2528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e252c: 0xace6f170  sw          $a2, -0xE90($a3)
    ctx->pc = 0x1e252cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294963568), GPR_U32(ctx, 6));
    // 0x1e2530: 0x48252800  qmfc2.ni    $a1, $vf5
    ctx->pc = 0x1e2530u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e2534: 0xac490004  sw          $t1, 0x4($v0)
    ctx->pc = 0x1e2534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 9));
    // 0x1e2538: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1e2538u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e253c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1e253cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1e2540: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e2540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2544: 0xac480014  sw          $t0, 0x14($v0)
    ctx->pc = 0x1e2544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 8));
    // 0x1e2548: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1e2548u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1e254c: 0xfba500a0  sqc2        $vf5, 0xA0($sp)
    ctx->pc = 0x1e254cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e2550: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x1e2550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x1e2554: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e2554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e2558: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1e2558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1e255c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1e255cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1e2560: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1e2560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1e2564: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1e2564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1e2568: 0xc047ada  jal         func_11EB68
    ctx->pc = 0x1E2568u;
    SET_GPR_U32(ctx, 31, 0x1E2570u);
    ctx->pc = 0x1E256Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2568u;
            // 0x1e256c: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EB68u;
    if (runtime->hasFunction(0x11EB68u)) {
        auto targetFn = runtime->lookupFunction(0x11EB68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2570u; }
        if (ctx->pc != 0x1E2570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EB68_0x11eb68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2570u; }
        if (ctx->pc != 0x1E2570u) { return; }
    }
    ctx->pc = 0x1E2570u;
    // 0x1e2570: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1e2570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e2574: 0x0  nop
    ctx->pc = 0x1e2574u;
    // NOP
label_1e2578:
    // 0x1e2578: 0x8ec4bcf8  lw          $a0, -0x4308($s6)
    ctx->pc = 0x1e2578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950136)));
    // 0x1e257c: 0x7a650000  lq          $a1, 0x0($s3)
    ctx->pc = 0x1e257cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e2580: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E2580u;
    SET_GPR_U32(ctx, 31, 0x1E2588u);
    ctx->pc = 0x1E2584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2580u;
            // 0x1e2584: 0x7a060000  lq          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2588u; }
        if (ctx->pc != 0x1E2588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2588u; }
        if (ctx->pc != 0x1E2588u) { return; }
    }
    ctx->pc = 0x1E2588u;
    // 0x1e2588: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1E2588u;
    {
        const bool branch_taken_0x1e2588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E258Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2588u;
            // 0x1e258c: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2588) {
            ctx->pc = 0x1E2628u;
            goto label_1e2628;
        }
    }
    ctx->pc = 0x1E2590u;
    // 0x1e2590: 0xdae20010  lqc2        $vf2, 0x10($s7)
    ctx->pc = 0x1e2590u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x1e2594: 0x244377a0  addiu       $v1, $v0, 0x77A0
    ctx->pc = 0x1e2594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30624));
    // 0x1e2598: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e2598u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e259c: 0x4be2086a  vmul.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e259cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e25a0: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1e25a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e25a4: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1e25a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e25a8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1e25a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1e25ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e25acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e25b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e25b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e25b4: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1e25b4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e25b8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1e25b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e25bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e25bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e25c0: 0x0  nop
    ctx->pc = 0x1e25c0u;
    // NOP
    // 0x1e25c4: 0x4502001e  bc1fl       . + 4 + (0x1E << 2)
    ctx->pc = 0x1E25C4u;
    {
        const bool branch_taken_0x1e25c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e25c4) {
            ctx->pc = 0x1E25C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E25C4u;
            // 0x1e25c8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2640u;
            goto label_1e2640;
        }
    }
    ctx->pc = 0x1E25CCu;
    // 0x1e25cc: 0xd861fff0  lqc2        $vf1, -0x10($v1)
    ctx->pc = 0x1e25ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x1e25d0: 0x48b51000  qmtc2.ni    $s5, $vf2
    ctx->pc = 0x1e25d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 21));
    // 0x1e25d4: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1e25d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e25d8: 0xdba200a0  lqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x1e25d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e25dc: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1e25dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e25e0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1e25e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e25e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e25e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e25e8: 0xe7c10000  swc1        $f1, 0x0($fp)
    ctx->pc = 0x1e25e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x1e25ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e25ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e25f0: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1e25f0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e25f4: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x1e25f4u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e25f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e25f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e25fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e25fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2600: 0x0  nop
    ctx->pc = 0x1e2600u;
    // NOP
    // 0x1e2604: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2604u;
    {
        const bool branch_taken_0x1e2604 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E2608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2604u;
            // 0x1e2608: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2604) {
            ctx->pc = 0x1E2610u;
            goto label_1e2610;
        }
    }
    ctx->pc = 0x1E260Cu;
    // 0x1e260c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e260cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2610:
    // 0x1e2610: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E2610u;
    {
        const bool branch_taken_0x1e2610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2610) {
            ctx->pc = 0x1E2614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2610u;
            // 0x1e2614: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2634u;
            goto label_1e2634;
        }
    }
    ctx->pc = 0x1E2618u;
    // 0x1e2618: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e2618u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e261c: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x1e261cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2620: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2620u;
    {
        const bool branch_taken_0x1e2620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2620u;
            // 0x1e2624: 0xfba200a0  sqc2        $vf2, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2620) {
            ctx->pc = 0x1E2630u;
            goto label_1e2630;
        }
    }
    ctx->pc = 0x1E2628u;
label_1e2628:
    // 0x1e2628: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E2628u;
    {
        const bool branch_taken_0x1e2628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E262Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2628u;
            // 0x1e262c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2628) {
            ctx->pc = 0x1E2640u;
            goto label_1e2640;
        }
    }
    ctx->pc = 0x1E2630u;
label_1e2630:
    // 0x1e2630: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e2630u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e2634:
    // 0x1e2634: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x1e2634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e2638: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1E2638u;
    {
        const bool branch_taken_0x1e2638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E263Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2638u;
            // 0x1e263c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2638) {
            ctx->pc = 0x1E2578u;
            runtime->cooperativeGuestYield();
            goto label_1e2578;
        }
    }
    ctx->pc = 0x1E2640u;
label_1e2640:
    // 0x1e2640: 0x12800016  beqz        $s4, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E2640u;
    {
        const bool branch_taken_0x1e2640 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2640u;
            // 0x1e2644: 0x7ba300a0  lq          $v1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2640) {
            ctx->pc = 0x1E269Cu;
            goto label_1e269c;
        }
    }
    ctx->pc = 0x1E2648u;
    // 0x1e2648: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1e2648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1e264c: 0x24507790  addiu       $s0, $v0, 0x7790
    ctx->pc = 0x1e264cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x1e2650: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x1e2650u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
    // 0x1e2654: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x1e2654u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e2658: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x1e2658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1e265c: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1e265cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1e2660: 0xae230234  sw          $v1, 0x234($s1)
    ctx->pc = 0x1e2660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 564), GPR_U32(ctx, 3));
    // 0x1e2664: 0x7e220210  sq          $v0, 0x210($s1)
    ctx->pc = 0x1e2664u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 528), GPR_VEC(ctx, 2));
    // 0x1e2668: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E2668u;
    {
        const bool branch_taken_0x1e2668 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E266Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2668u;
            // 0x1e266c: 0xae240240  sw          $a0, 0x240($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 576), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2668) {
            ctx->pc = 0x1E2680u;
            goto label_1e2680;
        }
    }
    ctx->pc = 0x1E2670u;
    // 0x1e2670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e2670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e2674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2678: 0xc090aa2  jal         func_242A88
    ctx->pc = 0x1E2678u;
    SET_GPR_U32(ctx, 31, 0x1E2680u);
    ctx->pc = 0x1E267Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2678u;
            // 0x1e267c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A88u;
    if (runtime->hasFunction(0x242A88u)) {
        auto targetFn = runtime->lookupFunction(0x242A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2680u; }
        if (ctx->pc != 0x1E2680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a88_0x242a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2680u; }
        if (ctx->pc != 0x1E2680u) { return; }
    }
    ctx->pc = 0x1E2680u;
label_1e2680:
    // 0x1e2680: 0x96030034  lhu         $v1, 0x34($s0)
    ctx->pc = 0x1e2680u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1e2684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e2684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2688: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1e2688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e268c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e268cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2690: 0xae230250  sw          $v1, 0x250($s1)
    ctx->pc = 0x1e2690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 3));
    // 0x1e2694: 0xc07848e  jal         func_1E1238
    ctx->pc = 0x1E2694u;
    SET_GPR_U32(ctx, 31, 0x1E269Cu);
    ctx->pc = 0x1E2698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2694u;
            // 0x1e2698: 0xae22024c  sw          $v0, 0x24C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1238u;
    if (runtime->hasFunction(0x1E1238u)) {
        auto targetFn = runtime->lookupFunction(0x1E1238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E269Cu; }
        if (ctx->pc != 0x1E269Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1238_0x1e1238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E269Cu; }
        if (ctx->pc != 0x1E269Cu) { return; }
    }
    ctx->pc = 0x1E269Cu;
label_1e269c:
    // 0x1e269c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1e269cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1e26a0: 0xc047b18  jal         func_11EC60
    ctx->pc = 0x1E26A0u;
    SET_GPR_U32(ctx, 31, 0x1E26A8u);
    ctx->pc = 0x1E26A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E26A0u;
            // 0x1e26a4: 0x8c44bcf8  lw          $a0, -0x4308($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EC60u;
    if (runtime->hasFunction(0x11EC60u)) {
        auto targetFn = runtime->lookupFunction(0x11EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E26A8u; }
        if (ctx->pc != 0x1E26A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EC60_0x11ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E26A8u; }
        if (ctx->pc != 0x1E26A8u) { return; }
    }
    ctx->pc = 0x1E26A8u;
    // 0x1e26a8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1e26a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e26ac: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x1e26acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e26b0: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x1e26b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1e26b4: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x1e26b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1e26b8: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x1e26b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1e26bc: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x1e26bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1e26c0: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x1e26c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1e26c4: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x1e26c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e26c8: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x1e26c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1e26cc: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x1e26ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e26d0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1e26d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e26d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E26D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E26D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E26D4u;
            // 0x1e26d8: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E2470u: goto label_1e2470;
            case 0x1E2578u: goto label_1e2578;
            case 0x1E2610u: goto label_1e2610;
            case 0x1E2628u: goto label_1e2628;
            case 0x1E2630u: goto label_1e2630;
            case 0x1E2634u: goto label_1e2634;
            case 0x1E2640u: goto label_1e2640;
            case 0x1E2680u: goto label_1e2680;
            case 0x1E269Cu: goto label_1e269c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E26DCu;
    // 0x1e26dc: 0x0  nop
    ctx->pc = 0x1e26dcu;
    // NOP
}
