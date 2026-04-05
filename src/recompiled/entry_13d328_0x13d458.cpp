#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13d328
// Address: 0x13d328 - 0x13d458
void entry_13d328_0x13d458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13d328_0x13d458");
#endif

    ctx->pc = 0x13d328u;

    // 0x13d328: 0x48a42800  qmtc2.ni    $a0, $vf5
    ctx->pc = 0x13d328u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x13d32c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13d32cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d330: 0x48a63000  qmtc2.ni    $a2, $vf6
    ctx->pc = 0x13d330u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x13d334: 0x4be628ac  vsub.xyzw   $vf2, $vf5, $vf6
    ctx->pc = 0x13d334u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d338: 0x48a51800  qmtc2.ni    $a1, $vf3
    ctx->pc = 0x13d338u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x13d33c: 0x4be4133c  vmove.xyzw  $vf4, $vf2
    ctx->pc = 0x13d33cu;
    ctx->vu0_vf[4] = ctx->vu0_vf[2];
    // 0x13d340: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x13d340u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d344: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x13d344u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d348: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x13d348u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d34c: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x13d34cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x13d350: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x13d350u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13d354: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x13d354u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x13d358: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13d358u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d35c: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x13d35cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x13d360: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x13d360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d364: 0x0  nop
    ctx->pc = 0x13d364u;
    // NOP
    // 0x13d368: 0x45010039  bc1t        . + 4 + (0x39 << 2)
    ctx->pc = 0x13D368u;
    {
        const bool branch_taken_0x13d368 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D368u;
            // 0x13d36c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d368) {
            ctx->pc = 0x13D450u;
            goto label_13d450;
        }
    }
    ctx->pc = 0x13D370u;
    // 0x13d370: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x13d370u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d374: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x13d374u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d378: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x13d378u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d37c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x13d37cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13d380: 0x4be418aa  vmul.xyzw   $vf2, $vf3, $vf4
    ctx->pc = 0x13d380u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d384: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x13d384u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13d388: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x13d388u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d38c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x13d38cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d390: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x13d390u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x13d394: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x13d394u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13d398: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x13d398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13d39c: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x13d39cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x13d3a0: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x13d3a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x13d3a4: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x13d3a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d3a8: 0x0  nop
    ctx->pc = 0x13d3a8u;
    // NOP
    // 0x13d3ac: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x13D3ACu;
    {
        const bool branch_taken_0x13d3ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D3ACu;
            // 0x13d3b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d3ac) {
            ctx->pc = 0x13D450u;
            goto label_13d450;
        }
    }
    ctx->pc = 0x13D3B4u;
    // 0x13d3b4: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x13d3b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x13d3b8: 0x46010044  c1          0x10044
    ctx->pc = 0x13d3b8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x13d3bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13d3bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x13d3c0: 0x46030043  div.s       $f1, $f0, $f3
    ctx->pc = 0x13d3c0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[3];
    // 0x13d3c4: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x13d3c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d3c8: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x13D3C8u;
    {
        const bool branch_taken_0x13d3c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d3c8) {
            ctx->pc = 0x13D450u;
            goto label_13d450;
        }
    }
    ctx->pc = 0x13D3D0u;
    // 0x13d3d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13d3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13d3d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13d3d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d3d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13d3d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d3dc: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x13D3DCu;
    {
        const bool branch_taken_0x13d3dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d3dc) {
            ctx->pc = 0x13D450u;
            goto label_13d450;
        }
    }
    ctx->pc = 0x13D3E4u;
    // 0x13d3e4: 0x10e00018  beqz        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x13D3E4u;
    {
        const bool branch_taken_0x13d3e4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D3E4u;
            // 0x13d3e8: 0x3c03002c  lui         $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d3e4) {
            ctx->pc = 0x13D448u;
            goto label_13d448;
        }
    }
    ctx->pc = 0x13D3ECu;
    // 0x13d3ec: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x13d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x13d3f0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x13d3f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13d3f4: 0x24427790  addiu       $v0, $v0, 0x7790
    ctx->pc = 0x13d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x13d3f8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x13d3f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x13d3fc: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x13d3fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d400: 0x4be12868  vadd.xyzw   $vf1, $vf5, $vf1
    ctx->pc = 0x13d400u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d404: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13d404u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13d408: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x13d408u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x13d40c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13d40cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13d410: 0x4be6086c  vsub.xyzw   $vf1, $vf1, $vf6
    ctx->pc = 0x13d410u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d414: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x13d414u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13d418: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x13d418u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d41c: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x13d41cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d420: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x13d420u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x13d424: 0x4a0003bf  vwaitq
    ctx->pc = 0x13d424u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13d428: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x13d428u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d42c: 0x4a0002ff  vnop
    ctx->pc = 0x13d42cu;
    // NOP operation, no action needed for VU0
    // 0x13d430: 0x4a0002ff  vnop
    ctx->pc = 0x13d430u;
    // NOP operation, no action needed for VU0
    // 0x13d434: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x13d434u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13d438: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x13d438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13d43c: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x13d43cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d440: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x13d440u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13d444: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x13d444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
label_13d448:
    // 0x13d448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d44c: 0xe46177b0  swc1        $f1, 0x77B0($v1)
    ctx->pc = 0x13d44cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 30640), bits); }
label_13d450:
    // 0x13d450: 0x3e00008  jr          $ra
    ctx->pc = 0x13D450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D450u;
            // 0x13d454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D448u: goto label_13d448;
            case 0x13D450u: goto label_13d450;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13D458u;
}
