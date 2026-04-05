#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1625c0
// Address: 0x1625c0 - 0x162840
void entry_1625c0_0x162840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1625c0_0x162840");
#endif

    ctx->pc = 0x1625c0u;

    // 0x1625c0: 0x48a54000  qmtc2.ni    $a1, $vf8
    ctx->pc = 0x1625c0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1625c4: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1625c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1625c8: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x1625c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1625cc: 0x4be0016c  vsub.xyzw   $vf5, $vf0, $vf0
    ctx->pc = 0x1625ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1625d0: 0x48a73000  qmtc2.ni    $a3, $vf6
    ctx->pc = 0x1625d0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1625d4: 0xfba50060  sqc2        $vf5, 0x60($sp)
    ctx->pc = 0x1625d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1625d8: 0x4be811ec  vsub.xyzw   $vf7, $vf2, $vf8
    ctx->pc = 0x1625d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1625dc: 0x4be738ea  vmul.xyzw   $vf3, $vf7, $vf7
    ctx->pc = 0x1625dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1625e0: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1625e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1625e4: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1625e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1625e8: 0x4a22109b  vmulw.w     $vf2, $vf2, $vf2w
    ctx->pc = 0x1625e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1625ec: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1625ecu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1625f0: 0x4b020083  vaddw.x     $vf2, $vf0, $vf2w
    ctx->pc = 0x1625f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1625f4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1625f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1625f8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1625f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1625fc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1625fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x162600: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x162600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x162604: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x162604u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x162608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16260c: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x16260cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x162610: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x162610u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162614: 0x0  nop
    ctx->pc = 0x162614u;
    // NOP
    // 0x162618: 0x45010087  bc1t        . + 4 + (0x87 << 2)
    ctx->pc = 0x162618u;
    {
        const bool branch_taken_0x162618 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16261Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162618u;
            // 0x16261c: 0x48222800  qmfc2.ni    $v0, $vf5 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162618) {
            ctx->pc = 0x162838u;
            goto label_162838;
        }
    }
    ctx->pc = 0x162620u;
    // 0x162620: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x162620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x162624: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x162624u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x162628: 0x46000084  c1          0x84
    ctx->pc = 0x162628u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x16262c: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x16262cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x162630: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x162630u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x162634: 0x4be13b3c  vmove.xyzw  $vf1, $vf7
    ctx->pc = 0x162634u;
    ctx->vu0_vf[1] = ctx->vu0_vf[7];
    // 0x162638: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x162638u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x16263c: 0x4a0003bf  vwaitq
    ctx->pc = 0x16263cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x162640: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x162640u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162644: 0x4a0002ff  vnop
    ctx->pc = 0x162644u;
    // NOP operation, no action needed for VU0
    // 0x162648: 0x4a0002ff  vnop
    ctx->pc = 0x162648u;
    // NOP operation, no action needed for VU0
    // 0x16264c: 0x4be30b3c  vmove.xyzw  $vf3, $vf1
    ctx->pc = 0x16264cu;
    ctx->vu0_vf[3] = ctx->vu0_vf[1];
    // 0x162650: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x162650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x162654: 0x4bc61afe  vopmula.xyz $ACC, $vf3, $vf6
    ctx->pc = 0x162654u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[6]);
    // 0x162658: 0x4bc3306e  vopmsub.xyz $vf1, $vf6, $vf3
    ctx->pc = 0x162658u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x16265c: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x16265cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162660: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x162660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x162664: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x162664u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162668: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x162668u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16266c: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x16266cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x162670: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x162670u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x162674: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x162674u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162678: 0x46000044  c1          0x44
    ctx->pc = 0x162678u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x16267c: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x16267cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162680: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x162680u;
    {
        const bool branch_taken_0x162680 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162680) {
            ctx->pc = 0x162700u;
            goto label_162700;
        }
    }
    ctx->pc = 0x162688u;
    // 0x162688: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x162688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16268c: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x16268cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x162690: 0x4be12b3c  vmove.xyzw  $vf1, $vf5
    ctx->pc = 0x162690u;
    ctx->vu0_vf[1] = ctx->vu0_vf[5];
    // 0x162694: 0x4b040840  vaddx.x     $vf1, $vf1, $vf4x
    ctx->pc = 0x162694u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162698: 0x4bc11afe  vopmula.xyz $ACC, $vf3, $vf1
    ctx->pc = 0x162698u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]);
    // 0x16269c: 0x4bc3086e  vopmsub.xyz $vf1, $vf1, $vf3
    ctx->pc = 0x16269cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1626a0: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1626a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1626a4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1626a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1626a8: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1626a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1626ac: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1626acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1626b0: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1626b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1626b4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1626b4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1626b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1626b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1626bc: 0x46000044  c1          0x44
    ctx->pc = 0x1626bcu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1626c0: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x1626c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1626c4: 0x0  nop
    ctx->pc = 0x1626c4u;
    // NOP
    // 0x1626c8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1626C8u;
    {
        const bool branch_taken_0x1626c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1626CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1626C8u;
            // 0x1626cc: 0x4be12b3c  vmove.xyzw  $vf1, $vf5 (Delay Slot)
        ctx->vu0_vf[1] = ctx->vu0_vf[5];
        ctx->in_delay_slot = false;
        if (branch_taken_0x1626c8) {
            ctx->pc = 0x162700u;
            goto label_162700;
        }
    }
    ctx->pc = 0x1626D0u;
    // 0x1626d0: 0x4a440840  vaddx.z     $vf1, $vf1, $vf4x
    ctx->pc = 0x1626d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1626d4: 0x4bc11afe  vopmula.xyz $ACC, $vf3, $vf1
    ctx->pc = 0x1626d4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]);
    // 0x1626d8: 0x4bc3086e  vopmsub.xyz $vf1, $vf1, $vf3
    ctx->pc = 0x1626d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1626dc: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1626dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1626e0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1626e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1626e4: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1626e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1626e8: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1626e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1626ec: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1626ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1626f0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1626f0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1626f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1626f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1626f8: 0x46000044  c1          0x44
    ctx->pc = 0x1626f8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1626fc: 0x0  nop
    ctx->pc = 0x1626fcu;
    // NOP
label_162700:
    // 0x162700: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x162700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x162704: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x162704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162708: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x162708u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x16270c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16270cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x162710: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x162710u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x162714: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x162714u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162718: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x162718u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16271c: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x16271cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x162720: 0x4bc21afe  vopmula.xyz $ACC, $vf3, $vf2
    ctx->pc = 0x162720u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]);
    // 0x162724: 0x4bc310ae  vopmsub.xyz $vf2, $vf2, $vf3
    ctx->pc = 0x162724u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x162728: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x162728u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16272c: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x16272cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x162730: 0x4b0600c7  vsubw.x     $vf3, $vf0, $vf6w
    ctx->pc = 0x162730u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x162734: 0x4be6412a  vmul.xyzw   $vf4, $vf8, $vf6
    ctx->pc = 0x162734u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x162738: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x162738u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16273c: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x16273cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162740: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x162740u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x162744: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x162744u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x162748: 0x4b0118c4  vsubx.x     $vf3, $vf3, $vf1x
    ctx->pc = 0x162748u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16274c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x16274cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x162750: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x162750u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x162754: 0x4be41098  vmulx.xyzw  $vf2, $vf2, $vf4x
    ctx->pc = 0x162754u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x162758: 0x4be238e8  vadd.xyzw   $vf3, $vf7, $vf2
    ctx->pc = 0x162758u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16275c: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x16275cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x162760: 0x4be2396c  vsub.xyzw   $vf5, $vf7, $vf2
    ctx->pc = 0x162760u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162764: 0xfba50040  sqc2        $vf5, 0x40($sp)
    ctx->pc = 0x162764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x162768: 0x4be618aa  vmul.xyzw   $vf2, $vf3, $vf6
    ctx->pc = 0x162768u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16276c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x16276cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162770: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x162770u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162774: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x162774u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x162778: 0x4be628aa  vmul.xyzw   $vf2, $vf5, $vf6
    ctx->pc = 0x162778u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16277c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16277cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162780: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x162780u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162784: 0x3c01ba83  lui         $at, 0xBA83
    ctx->pc = 0x162784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47747 << 16));
    // 0x162788: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x162788u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x16278c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x16278cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x162790: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x162790u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162794: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x162794u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x162798: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x162798u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16279c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16279cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1627a0: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x1627A0u;
    {
        const bool branch_taken_0x1627a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1627A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1627A0u;
            // 0x1627a4: 0x7ba20060  lq          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1627a0) {
            ctx->pc = 0x162838u;
            goto label_162838;
        }
    }
    ctx->pc = 0x1627A8u;
    // 0x1627a8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1627a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1627ac: 0x45010022  bc1t        . + 4 + (0x22 << 2)
    ctx->pc = 0x1627ACu;
    {
        const bool branch_taken_0x1627ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1627ac) {
            ctx->pc = 0x162838u;
            goto label_162838;
        }
    }
    ctx->pc = 0x1627B4u;
    // 0x1627b4: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x1627b4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[0];
    // 0x1627b8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1627b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1627bc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1627bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1627c0: 0x4be41918  vmulx.xyzw  $vf4, $vf3, $vf4x
    ctx->pc = 0x1627c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1627c4: 0x4be44128  vadd.xyzw   $vf4, $vf8, $vf4
    ctx->pc = 0x1627c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1627c8: 0x46011803  div.s       $f0, $f3, $f1
    ctx->pc = 0x1627c8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[1];
    // 0x1627cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1627ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1627d0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1627d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1627d4: 0x4be12858  vmulx.xyzw  $vf1, $vf5, $vf1x
    ctx->pc = 0x1627d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1627d8: 0x4be14068  vadd.xyzw   $vf1, $vf8, $vf1
    ctx->pc = 0x1627d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1627dc: 0x4be120e8  vadd.xyzw   $vf3, $vf4, $vf1
    ctx->pc = 0x1627dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1627e0: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1627e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1627e4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1627e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1627e8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1627e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1627ec: 0x4be218d8  vmulx.xyzw  $vf3, $vf3, $vf2x
    ctx->pc = 0x1627ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1627f0: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x1627f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1627f4: 0x4be4086c  vsub.xyzw   $vf1, $vf1, $vf4
    ctx->pc = 0x1627f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1627f8: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1627f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1627fc: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1627fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x162800: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x162800u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x162804: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x162804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x162808: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x162808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16280c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x16280cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x162810: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x162810u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162814: 0x46000004  c1          0x4
    ctx->pc = 0x162814u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x162818: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x162818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16281c: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x16281cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x162820: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x162820u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x162824: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x162824u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x162828: 0x4a2110c0  vaddx.w     $vf3, $vf2, $vf1x
    ctx->pc = 0x162828u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16282c: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x16282cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x162830: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x162830u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x162834: 0x0  nop
    ctx->pc = 0x162834u;
    // NOP
label_162838:
    // 0x162838: 0x3e00008  jr          $ra
    ctx->pc = 0x162838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16283Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162838u;
            // 0x16283c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162700u: goto label_162700;
            case 0x162838u: goto label_162838;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162840u;
}
