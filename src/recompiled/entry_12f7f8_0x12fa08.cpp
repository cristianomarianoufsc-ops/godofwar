#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_12f7f8
// Address: 0x12f7f8 - 0x12fa08
void entry_12f7f8_0x12fa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_12f7f8_0x12fa08");
#endif

    ctx->pc = 0x12f7f8u;

    // 0x12f7f8: 0x48a43000  qmtc2.ni    $a0, $vf6
    ctx->pc = 0x12f7f8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f7fc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12f7fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12f800: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x12f800u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x12f804: 0x48a63800  qmtc2.ni    $a2, $vf7
    ctx->pc = 0x12f804u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x12f808: 0x4be6106c  vsub.xyzw   $vf1, $vf2, $vf6
    ctx->pc = 0x12f808u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f80c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x12f80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12f810: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x12f810u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x12f814: 0x4be710ec  vsub.xyzw   $vf3, $vf2, $vf7
    ctx->pc = 0x12f814u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12f818: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x12f818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12f81c: 0x4be7312c  vsub.xyzw   $vf4, $vf6, $vf7
    ctx->pc = 0x12f81cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x12f820: 0x4be50b3c  vmove.xyzw  $vf5, $vf1
    ctx->pc = 0x12f820u;
    ctx->vu0_vf[5] = ctx->vu0_vf[1];
    // 0x12f824: 0x4be528aa  vmul.xyzw   $vf2, $vf5, $vf5
    ctx->pc = 0x12f824u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12f828: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x12f828u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f82c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x12f82cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f830: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x12f830u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12f834: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x12f834u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12f838: 0x44834000  mtc1        $v1, $f8
    ctx->pc = 0x12f838u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x12f83c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x12f83cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f840: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x12f840u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f844: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x12f844u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12f848: 0x4be418aa  vmul.xyzw   $vf2, $vf3, $vf4
    ctx->pc = 0x12f848u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12f84c: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x12f84cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x12f850: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x12f850u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f854: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12f854u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f858: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x12f858u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f85c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x12f85cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12f860: 0x46004036  c.le.s      $f8, $f0
    ctx->pc = 0x12f860u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f864: 0x44834800  mtc1        $v1, $f9
    ctx->pc = 0x12f864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x12f868: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x12F868u;
    {
        const bool branch_taken_0x12f868 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12f868) {
            ctx->pc = 0x12F8A8u;
            goto label_12f8a8;
        }
    }
    ctx->pc = 0x12F870u;
    // 0x12f870: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x12f870u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f874: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x12F874u;
    {
        const bool branch_taken_0x12f874 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12f874) {
            ctx->pc = 0x12F8A8u;
            goto label_12f8a8;
        }
    }
    ctx->pc = 0x12F87Cu;
    // 0x12f87c: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x12f87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x12f880: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x12f880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x12f884: 0xf9460000  sqc2        $vf6, 0x0($t2)
    ctx->pc = 0x12f884u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12f888: 0xf9670000  sqc2        $vf7, 0x0($t3)
    ctx->pc = 0x12f888u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x12f88c: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x12f88cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12f890: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x12f890u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f894: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x12f894u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f898: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x12f898u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12f89c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12f89cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f8a0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x12F8A0u;
    {
        const bool branch_taken_0x12f8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f8a0) {
            ctx->pc = 0x12F9F8u;
            goto label_12f9f8;
        }
    }
    ctx->pc = 0x12F8A8u;
label_12f8a8:
    // 0x12f8a8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x12f8a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12f8ac: 0x46034036  c.le.s      $f8, $f3
    ctx->pc = 0x12f8acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f8b0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x12F8B0u;
    {
        const bool branch_taken_0x12f8b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12f8b0) {
            ctx->pc = 0x12F8D0u;
            goto label_12f8d0;
        }
    }
    ctx->pc = 0x12F8B8u;
    // 0x12f8b8: 0x46064883  div.s       $f2, $f9, $f6
    ctx->pc = 0x12f8b8u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[9] * 0.0f); } else ctx->f[2] = ctx->f[9] / ctx->f[6];
    // 0x12f8bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12f8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12f8c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12f8c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f8c4: 0x46031028  max.s       $f0, $f2, $f3
    ctx->pc = 0x12f8c4u;
    ctx->f[0] = std::max(ctx->f[2], ctx->f[3]);
    // 0x12f8c8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x12F8C8u;
    {
        const bool branch_taken_0x12f8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F8C8u;
            // 0x12f8cc: 0x460100a9  min.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = std::min(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8c8) {
            ctx->pc = 0x12F9A8u;
            goto label_12f9a8;
        }
    }
    ctx->pc = 0x12F8D0u;
label_12f8d0:
    // 0x12f8d0: 0x4be4286a  vmul.xyzw   $vf1, $vf5, $vf4
    ctx->pc = 0x12f8d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f8d4: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x12f8d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12f8d8: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x12f8d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12f8dc: 0x46033036  c.le.s      $f6, $f3
    ctx->pc = 0x12f8dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f8e0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x12f8e0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12f8e4: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x12f8e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x12f8e8: 0x4503001e  bc1tl       . + 4 + (0x1E << 2)
    ctx->pc = 0x12F8E8u;
    {
        const bool branch_taken_0x12f8e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12f8e8) {
            ctx->pc = 0x12F8ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12F8E8u;
            // 0x12f8ec: 0x46003807  neg.s       $f0, $f7 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[7]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F964u;
            goto label_12f964;
        }
    }
    ctx->pc = 0x12F8F0u;
    // 0x12f8f0: 0x4be328aa  vmul.xyzw   $vf2, $vf5, $vf3
    ctx->pc = 0x12f8f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12f8f4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x12f8f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f8f8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x12f8f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f8fc: 0x46064042  mul.s       $f1, $f8, $f6
    ctx->pc = 0x12f8fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x12f900: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x12f900u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12f904: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x12f904u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x12f908: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x12f908u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x12f90c: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x12f90cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12f910: 0x46032832  c.eq.s      $f5, $f3
    ctx->pc = 0x12f910u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f914: 0x0  nop
    ctx->pc = 0x12f914u;
    // NOP
    // 0x12f918: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x12F918u;
    {
        const bool branch_taken_0x12f918 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12f918) {
            ctx->pc = 0x12F91Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12F918u;
            // 0x12f91c: 0x46032002  mul.s       $f0, $f4, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F948u;
            goto label_12f948;
        }
    }
    ctx->pc = 0x12F920u;
    // 0x12f920: 0x46092002  mul.s       $f0, $f4, $f9
    ctx->pc = 0x12f920u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x12f924: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12f924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12f928: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12f928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12f92c: 0x46063842  mul.s       $f1, $f7, $f6
    ctx->pc = 0x12f92cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x12f930: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x12f930u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x12f934: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x12f934u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x12f938: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x12f938u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x12f93c: 0x460200e9  min.s       $f3, $f0, $f2
    ctx->pc = 0x12f93cu;
    ctx->f[3] = std::min(ctx->f[0], ctx->f[2]);
    // 0x12f940: 0x46032002  mul.s       $f0, $f4, $f3
    ctx->pc = 0x12f940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x12f944: 0x0  nop
    ctx->pc = 0x12f944u;
    // NOP
label_12f948:
    // 0x12f948: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x12f948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x12f94c: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x12f94cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x12f950: 0x46060083  div.s       $f2, $f0, $f6
    ctx->pc = 0x12f950u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[6];
    // 0x12f954: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x12f954u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f958: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x12F958u;
    {
        const bool branch_taken_0x12f958 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12f958) {
            ctx->pc = 0x12F980u;
            goto label_12f980;
        }
    }
    ctx->pc = 0x12F960u;
    // 0x12f960: 0x46003807  neg.s       $f0, $f7
    ctx->pc = 0x12f960u;
    ctx->f[0] = FPU_NEG_S(ctx->f[7]);
label_12f964:
    // 0x12f964: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12f964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12f968: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12f968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f96c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x12f96cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12f970: 0x46080003  div.s       $f0, $f0, $f8
    ctx->pc = 0x12f970u;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[8];
    // 0x12f974: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x12f974u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x12f978: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12F978u;
    {
        const bool branch_taken_0x12f978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F978u;
            // 0x12f97c: 0x460100e9  min.s       $f3, $f0, $f1 (Delay Slot)
        ctx->f[3] = std::min(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f978) {
            ctx->pc = 0x12F9A8u;
            goto label_12f9a8;
        }
    }
    ctx->pc = 0x12F980u;
label_12f980:
    // 0x12f980: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12f980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12f984: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12f984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f988: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x12f988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f98c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x12F98Cu;
    {
        const bool branch_taken_0x12f98c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12f98c) {
            ctx->pc = 0x12F9A8u;
            goto label_12f9a8;
        }
    }
    ctx->pc = 0x12F994u;
    // 0x12f994: 0x46072001  sub.s       $f0, $f4, $f7
    ctx->pc = 0x12f994u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x12f998: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x12f998u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x12f99c: 0x46080003  div.s       $f0, $f0, $f8
    ctx->pc = 0x12f99cu;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[8];
    // 0x12f9a0: 0x46050028  max.s       $f0, $f0, $f5
    ctx->pc = 0x12f9a0u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[5]);
    // 0x12f9a4: 0x460200e9  min.s       $f3, $f0, $f2
    ctx->pc = 0x12f9a4u;
    ctx->f[3] = std::min(ctx->f[0], ctx->f[2]);
label_12f9a8:
    // 0x12f9a8: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x12f9a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12f9ac: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x12f9acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f9b0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x12f9b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f9b4: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x12f9b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f9b8: 0x4be131a8  vadd.xyzw   $vf6, $vf6, $vf1
    ctx->pc = 0x12f9b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12f9bc: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x12f9bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12f9c0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x12f9c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f9c4: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x12f9c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f9c8: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x12f9c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f9cc: 0x4be139e8  vadd.xyzw   $vf7, $vf7, $vf1
    ctx->pc = 0x12f9ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x12f9d0: 0x4be7306c  vsub.xyzw   $vf1, $vf6, $vf7
    ctx->pc = 0x12f9d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f9d4: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x12f9d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f9d8: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x12f9d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12f9dc: 0xe5030000  swc1        $f3, 0x0($t0)
    ctx->pc = 0x12f9dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x12f9e0: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x12f9e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12f9e4: 0xe5220000  swc1        $f2, 0x0($t1)
    ctx->pc = 0x12f9e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x12f9e8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x12f9e8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12f9ec: 0xf9460000  sqc2        $vf6, 0x0($t2)
    ctx->pc = 0x12f9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12f9f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12f9f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f9f4: 0xf9670000  sqc2        $vf7, 0x0($t3)
    ctx->pc = 0x12f9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), _mm_castps_si128(ctx->vu0_vf[7]));
label_12f9f8:
    // 0x12f9f8: 0x46000004  c1          0x4
    ctx->pc = 0x12f9f8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x12f9fc: 0x3e00008  jr          $ra
    ctx->pc = 0x12F9FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F9FCu;
            // 0x12fa00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F8A8u: goto label_12f8a8;
            case 0x12F8D0u: goto label_12f8d0;
            case 0x12F948u: goto label_12f948;
            case 0x12F964u: goto label_12f964;
            case 0x12F980u: goto label_12f980;
            case 0x12F9A8u: goto label_12f9a8;
            case 0x12F9F8u: goto label_12f9f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FA04u;
    // 0x12fa04: 0x0  nop
    ctx->pc = 0x12fa04u;
    // NOP
}
