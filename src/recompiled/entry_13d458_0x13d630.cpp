#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13d458
// Address: 0x13d458 - 0x13d630
void entry_13d458_0x13d630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13d458_0x13d630");
#endif

    ctx->pc = 0x13d458u;

    // 0x13d458: 0x48a53000  qmtc2.ni    $a1, $vf6
    ctx->pc = 0x13d458u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x13d45c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d45cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d460: 0x48a72800  qmtc2.ni    $a3, $vf5
    ctx->pc = 0x13d460u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x13d464: 0x4bc532fe  vopmula.xyz $ACC, $vf6, $vf5
    ctx->pc = 0x13d464u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[5]);
    // 0x13d468: 0x48a43800  qmtc2.ni    $a0, $vf7
    ctx->pc = 0x13d468u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x13d46c: 0x4bc628ee  vopmsub.xyz $vf3, $vf5, $vf6
    ctx->pc = 0x13d46cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[6]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13d470: 0x48a64000  qmtc2.ni    $a2, $vf8
    ctx->pc = 0x13d470u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x13d474: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x13d474u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13d478: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x13d478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13d47c: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x13d47cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d480: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x13d480u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d484: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x13d484u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d488: 0x3c012edb  lui         $at, 0x2EDB
    ctx->pc = 0x13d488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11995 << 16));
    // 0x13d48c: 0x3421e6ff  ori         $at, $at, 0xE6FF
    ctx->pc = 0x13d48cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59135);
    // 0x13d490: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13d490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13d494: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x13d494u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13d498: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13d498u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d49c: 0x46000084  c1          0x84
    ctx->pc = 0x13d49cu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x13d4a0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x13d4a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d4a4: 0x0  nop
    ctx->pc = 0x13d4a4u;
    // NOP
    // 0x13d4a8: 0x4501005f  bc1t        . + 4 + (0x5F << 2)
    ctx->pc = 0x13D4A8u;
    {
        const bool branch_taken_0x13d4a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D4A8u;
            // 0x13d4ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d4a8) {
            ctx->pc = 0x13D628u;
            goto label_13d628;
        }
    }
    ctx->pc = 0x13D4B0u;
    // 0x13d4b0: 0x4be8392c  vsub.xyzw   $vf4, $vf7, $vf8
    ctx->pc = 0x13d4b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x13d4b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13d4b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13d4b8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x13d4b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x13d4bc: 0x46022003  div.s       $f0, $f4, $f2
    ctx->pc = 0x13d4bcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[0] = ctx->f[4] / ctx->f[2];
    // 0x13d4c0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x13d4c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13d4c4: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x13d4c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x13d4c8: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x13d4c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13d4cc: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x13d4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13d4d0: 0x4be320aa  vmul.xyzw   $vf2, $vf4, $vf3
    ctx->pc = 0x13d4d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d4d4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x13d4d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d4d8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x13d4d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d4dc: 0x4be109fd  vabs.xyzw   $vf1, $vf1
    ctx->pc = 0x13d4dcu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d4e0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x13d4e0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13d4e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13d4e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13d4e8: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x13d4e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d4ec: 0x0  nop
    ctx->pc = 0x13d4ecu;
    // NOP
    // 0x13d4f0: 0x4501004d  bc1t        . + 4 + (0x4D << 2)
    ctx->pc = 0x13D4F0u;
    {
        const bool branch_taken_0x13d4f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D4F0u;
            // 0x13d4f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d4f0) {
            ctx->pc = 0x13D628u;
            goto label_13d628;
        }
    }
    ctx->pc = 0x13D4F8u;
    // 0x13d4f8: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x13d4f8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]);
    // 0x13d4fc: 0x4bc4286e  vopmsub.xyz $vf1, $vf5, $vf4
    ctx->pc = 0x13d4fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13d500: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x13d500u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d504: 0x4be3086a  vmul.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x13d504u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d508: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x13d508u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d50c: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x13d50cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d510: 0x4bc51afe  vopmula.xyz $ACC, $vf3, $vf5
    ctx->pc = 0x13d510u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[5]);
    // 0x13d514: 0x4b020084  vsubx.x     $vf2, $vf0, $vf2x
    ctx->pc = 0x13d514u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d518: 0x4bc328ee  vopmsub.xyz $vf3, $vf5, $vf3
    ctx->pc = 0x13d518u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13d51c: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x13d51cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13d520: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x13d520u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13d524: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13d524u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d528: 0x460200c3  div.s       $f3, $f0, $f2
    ctx->pc = 0x13d528u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[3] = ctx->f[0] / ctx->f[2];
    // 0x13d52c: 0x4be3186a  vmul.xyzw   $vf1, $vf3, $vf3
    ctx->pc = 0x13d52cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d530: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x13d530u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d534: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x13d534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x13d538: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x13d538u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d53c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x13d53cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x13d540: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x13d540u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x13d544: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x13d544u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x13d548: 0x4a0003bf  vwaitq
    ctx->pc = 0x13d548u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13d54c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x13d54cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d550: 0x4a0002ff  vnop
    ctx->pc = 0x13d550u;
    // NOP operation, no action needed for VU0
    // 0x13d554: 0x4a0002ff  vnop
    ctx->pc = 0x13d554u;
    // NOP operation, no action needed for VU0
    // 0x13d558: 0x4be330ea  vmul.xyzw   $vf3, $vf6, $vf3
    ctx->pc = 0x13d558u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13d55c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x13d55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13d560: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13d560u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x13d564: 0x46000004  c1          0x4
    ctx->pc = 0x13d564u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x13d568: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x13d568u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d56c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x13d56cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d570: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x13d570u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13d574: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x13d574u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13d578: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13d578u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13d57c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x13d57cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x13d580: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x13d580u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x13d584: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x13d584u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x13d588: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x13d588u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d58c: 0x0  nop
    ctx->pc = 0x13d58cu;
    // NOP
    // 0x13d590: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x13D590u;
    {
        const bool branch_taken_0x13d590 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D590u;
            // 0x13d594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d590) {
            ctx->pc = 0x13D628u;
            goto label_13d628;
        }
    }
    ctx->pc = 0x13D598u;
    // 0x13d598: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x13d598u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d59c: 0x45010022  bc1t        . + 4 + (0x22 << 2)
    ctx->pc = 0x13D59Cu;
    {
        const bool branch_taken_0x13d59c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d59c) {
            ctx->pc = 0x13D628u;
            goto label_13d628;
        }
    }
    ctx->pc = 0x13D5A4u;
    // 0x13d5a4: 0x1100001e  beqz        $t0, . + 4 + (0x1E << 2)
    ctx->pc = 0x13D5A4u;
    {
        const bool branch_taken_0x13d5a4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D5A4u;
            // 0x13d5a8: 0x3c03002c  lui         $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d5a4) {
            ctx->pc = 0x13D620u;
            goto label_13d620;
        }
    }
    ctx->pc = 0x13D5ACu;
    // 0x13d5ac: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x13d5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x13d5b0: 0x44041800  mfc1        $a0, $f3
    ctx->pc = 0x13d5b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13d5b4: 0x24427790  addiu       $v0, $v0, 0x7790
    ctx->pc = 0x13d5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x13d5b8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x13d5b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x13d5bc: 0x4be13058  vmulx.xyzw  $vf1, $vf6, $vf1x
    ctx->pc = 0x13d5bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d5c0: 0x4be13868  vadd.xyzw   $vf1, $vf7, $vf1
    ctx->pc = 0x13d5c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d5c4: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13d5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13d5c8: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x13d5c8u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x13d5cc: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13d5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13d5d0: 0x4be8086c  vsub.xyzw   $vf1, $vf1, $vf8
    ctx->pc = 0x13d5d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d5d4: 0x4bc50afe  vopmula.xyz $ACC, $vf1, $vf5
    ctx->pc = 0x13d5d4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[5]);
    // 0x13d5d8: 0x4bc1286e  vopmsub.xyz $vf1, $vf5, $vf1
    ctx->pc = 0x13d5d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13d5dc: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x13d5dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d5e0: 0x4bc12afe  vopmula.xyz $ACC, $vf5, $vf1
    ctx->pc = 0x13d5e0u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[1]);
    // 0x13d5e4: 0x4bc5086e  vopmsub.xyz $vf1, $vf1, $vf5
    ctx->pc = 0x13d5e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13d5e8: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x13d5e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d5ec: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x13d5ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13d5f0: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x13d5f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d5f4: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x13d5f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d5f8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x13d5f8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x13d5fc: 0x4a0003bf  vwaitq
    ctx->pc = 0x13d5fcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13d600: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x13d600u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d604: 0x4a0002ff  vnop
    ctx->pc = 0x13d604u;
    // NOP operation, no action needed for VU0
    // 0x13d608: 0x4a0002ff  vnop
    ctx->pc = 0x13d608u;
    // NOP operation, no action needed for VU0
    // 0x13d60c: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x13d60cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13d610: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x13d610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13d614: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x13d614u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d618: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x13d618u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13d61c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x13d61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
label_13d620:
    // 0x13d620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d624: 0xe46377b0  swc1        $f3, 0x77B0($v1)
    ctx->pc = 0x13d624u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 30640), bits); }
label_13d628:
    // 0x13d628: 0x3e00008  jr          $ra
    ctx->pc = 0x13D628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D628u;
            // 0x13d62c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D620u: goto label_13d620;
            case 0x13D628u: goto label_13d628;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13D630u;
}
