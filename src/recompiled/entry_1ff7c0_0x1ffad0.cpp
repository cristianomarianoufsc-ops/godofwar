#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1ff7c0
// Address: 0x1ff7c0 - 0x1ffad0
void entry_1ff7c0_0x1ffad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1ff7c0_0x1ffad0");
#endif

    ctx->pc = 0x1ff7c0u;

    // 0x1ff7c0: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x1ff7c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1ff7c4: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1ff7c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1ff7c8: 0x4be30b3c  vmove.xyzw  $vf3, $vf1
    ctx->pc = 0x1ff7c8u;
    ctx->vu0_vf[3] = ctx->vu0_vf[1];
    // 0x1ff7cc: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x1ff7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x1ff7d0: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x1ff7d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ff7d4: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x1ff7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ff7d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ff7d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff7dc: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x1ff7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x1ff7e0: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x1ff7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x1ff7e4: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x1ff7e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1ff7e8: 0xfba300d0  sqc2        $vf3, 0xD0($sp)
    ctx->pc = 0x1ff7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ff7ec: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x1ff7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x1ff7f0: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x1ff7f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x1ff7f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ff7f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff7f8: 0x4be0016c  vsub.xyzw   $vf5, $vf0, $vf0
    ctx->pc = 0x1ff7f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1ff7fc: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x1ff7fcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x1ff800: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1ff800u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ff804: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x1ff804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff808: 0x7a230010  lq          $v1, 0x10($s1)
    ctx->pc = 0x1ff808u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ff80c: 0x7a240020  lq          $a0, 0x20($s1)
    ctx->pc = 0x1ff80cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1ff810: 0x7a250030  lq          $a1, 0x30($s1)
    ctx->pc = 0x1ff810u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1ff814: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1ff814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1ff818: 0x460c0502  mul.s       $f20, $f0, $f12
    ctx->pc = 0x1ff818u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1ff81c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x1ff81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x1ff820: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x1ff820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x1ff824: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x1ff824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x1ff828: 0x4be328ec  vsub.xyzw   $vf3, $vf5, $vf3
    ctx->pc = 0x1ff828u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ff82c: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1ff82cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ff830: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1ff830u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ff834: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1ff834u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ff838: 0x4be41b3c  vmove.xyzw  $vf4, $vf3
    ctx->pc = 0x1ff838u;
    ctx->vu0_vf[4] = ctx->vu0_vf[3];
    // 0x1ff83c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1ff83cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1ff840: 0x4a0003bf  vwaitq
    ctx->pc = 0x1ff840u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1ff844: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x1ff844u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ff848: 0x4a0002ff  vnop
    ctx->pc = 0x1ff848u;
    // NOP operation, no action needed for VU0
    // 0x1ff84c: 0x4a0002ff  vnop
    ctx->pc = 0x1ff84cu;
    // NOP operation, no action needed for VU0
    // 0x1ff850: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1ff850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ff854: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1ff854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ff858: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ff858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ff85c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1ff85cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ff860: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x1ff860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ff864: 0x4be12b3c  vmove.xyzw  $vf1, $vf5
    ctx->pc = 0x1ff864u;
    ctx->vu0_vf[1] = ctx->vu0_vf[5];
    // 0x1ff868: 0xdba20110  lqc2        $vf2, 0x110($sp)
    ctx->pc = 0x1ff868u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ff86c: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1ff86cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ff870: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x1ff870u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]);
    // 0x1ff874: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1ff874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ff878: 0x4bc1206e  vopmsub.xyz $vf1, $vf4, $vf1
    ctx->pc = 0x1ff878u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ff87c: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1ff87cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ff880: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1ff880u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ff884: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1ff884u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ff888: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1ff888u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ff88c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1ff88cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1ff890: 0x4a0003bf  vwaitq
    ctx->pc = 0x1ff890u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1ff894: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1ff894u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ff898: 0x4a0002ff  vnop
    ctx->pc = 0x1ff898u;
    // NOP operation, no action needed for VU0
    // 0x1ff89c: 0x4a0002ff  vnop
    ctx->pc = 0x1ff89cu;
    // NOP operation, no action needed for VU0
    // 0x1ff8a0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1ff8a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ff8a4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1ff8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ff8a8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1ff8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ff8ac: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1ff8acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ff8b0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1ff8b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ff8b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ff8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1ff8b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ff8b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ff8bc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1ff8bcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ff8c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ff8c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff8c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ff8c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ff8c8: 0x0  nop
    ctx->pc = 0x1ff8c8u;
    // NOP
    // 0x1ff8cc: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1FF8CCu;
    {
        const bool branch_taken_0x1ff8cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FF8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF8CCu;
            // 0x1ff8d0: 0x4be12b3c  vmove.xyzw  $vf1, $vf5 (Delay Slot)
        ctx->vu0_vf[1] = ctx->vu0_vf[5];
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff8cc) {
            ctx->pc = 0x1FF918u;
            goto label_1ff918;
        }
    }
    ctx->pc = 0x1FF8D4u;
    // 0x1ff8d4: 0xdba20110  lqc2        $vf2, 0x110($sp)
    ctx->pc = 0x1ff8d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ff8d8: 0x4b020840  vaddx.x     $vf1, $vf1, $vf2x
    ctx->pc = 0x1ff8d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ff8dc: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x1ff8dcu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]);
    // 0x1ff8e0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1ff8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ff8e4: 0x4bc1206e  vopmsub.xyz $vf1, $vf4, $vf1
    ctx->pc = 0x1ff8e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ff8e8: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1ff8e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ff8ec: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1ff8ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ff8f0: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1ff8f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ff8f4: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1ff8f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ff8f8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1ff8f8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1ff8fc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1ff8fcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1ff900: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1ff900u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ff904: 0x4a0002ff  vnop
    ctx->pc = 0x1ff904u;
    // NOP operation, no action needed for VU0
    // 0x1ff908: 0x4a0002ff  vnop
    ctx->pc = 0x1ff908u;
    // NOP operation, no action needed for VU0
    // 0x1ff90c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1ff90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ff910: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1ff910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ff914: 0x0  nop
    ctx->pc = 0x1ff914u;
    // NOP
label_1ff918:
    // 0x1ff918: 0xdba50020  lqc2        $vf5, 0x20($sp)
    ctx->pc = 0x1ff918u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff91c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1ff91cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff920: 0x4bc42afe  vopmula.xyz $ACC, $vf5, $vf4
    ctx->pc = 0x1ff920u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]);
    // 0x1ff924: 0x4bc5206e  vopmsub.xyz $vf1, $vf4, $vf5
    ctx->pc = 0x1ff924u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ff928: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1ff928u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ff92c: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1ff92cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ff930: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1ff930u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ff934: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1ff934u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ff938: 0x48252000  qmfc2.ni    $a1, $vf4
    ctx->pc = 0x1ff938u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ff93c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1ff93cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1ff940: 0x4a0003bf  vwaitq
    ctx->pc = 0x1ff940u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1ff944: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1ff944u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ff948: 0x4a0002ff  vnop
    ctx->pc = 0x1ff948u;
    // NOP operation, no action needed for VU0
    // 0x1ff94c: 0x4a0002ff  vnop
    ctx->pc = 0x1ff94cu;
    // NOP operation, no action needed for VU0
    // 0x1ff950: 0x48272800  qmfc2.ni    $a3, $vf5
    ctx->pc = 0x1ff950u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1ff954: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1ff954u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ff958: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1ff958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1ff95c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1ff95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ff960: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x1FF960u;
    SET_GPR_U32(ctx, 31, 0x1FF968u);
    ctx->pc = 0x1FF964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF960u;
            // 0x1ff964: 0xfba10010  sqc2        $vf1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F60u;
    if (runtime->hasFunction(0x183F60u)) {
        auto targetFn = runtime->lookupFunction(0x183F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF968u; }
        if (ctx->pc != 0x1FF968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183f60_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF968u; }
        if (ctx->pc != 0x1FF968u) { return; }
    }
    ctx->pc = 0x1FF968u;
    // 0x1ff968: 0x7a250000  lq          $a1, 0x0($s1)
    ctx->pc = 0x1ff968u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ff96c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1ff96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1ff970: 0x7a260010  lq          $a2, 0x10($s1)
    ctx->pc = 0x1ff970u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ff974: 0x7a270020  lq          $a3, 0x20($s1)
    ctx->pc = 0x1ff974u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1ff978: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x1FF978u;
    SET_GPR_U32(ctx, 31, 0x1FF980u);
    ctx->pc = 0x1FF97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF978u;
            // 0x1ff97c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F60u;
    if (runtime->hasFunction(0x183F60u)) {
        auto targetFn = runtime->lookupFunction(0x183F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF980u; }
        if (ctx->pc != 0x1FF980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183f60_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF980u; }
        if (ctx->pc != 0x1FF980u) { return; }
    }
    ctx->pc = 0x1FF980u;
    // 0x1ff980: 0x7ba400f0  lq          $a0, 0xF0($sp)
    ctx->pc = 0x1ff980u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1ff984: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x1ff984u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x1ff988: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1ff988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ff98c: 0xc061084  jal         func_184210
    ctx->pc = 0x1FF98Cu;
    SET_GPR_U32(ctx, 31, 0x1FF994u);
    ctx->pc = 0x1FF990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF98Cu;
            // 0x1ff990: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184210u;
    if (runtime->hasFunction(0x184210u)) {
        auto targetFn = runtime->lookupFunction(0x184210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF994u; }
        if (ctx->pc != 0x1FF994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184210_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF994u; }
        if (ctx->pc != 0x1FF994u) { return; }
    }
    ctx->pc = 0x1FF994u;
    // 0x1ff994: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1ff994u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ff998: 0x4be3186a  vmul.xyzw   $vf1, $vf3, $vf3
    ctx->pc = 0x1ff998u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ff99c: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1ff99cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ff9a0: 0x4a210842  vaddz.w     $vf1, $vf1, $vf1z
    ctx->pc = 0x1ff9a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ff9a4: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1ff9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ff9a8: 0x4b011083  vaddw.x     $vf2, $vf2, $vf1w
    ctx->pc = 0x1ff9a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ff9ac: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1ff9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ff9b0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1ff9b0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1ff9b4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1ff9b4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1ff9b8: 0x4be0185c  vmulq.xyzw  $vf1, $vf3, $Q
    ctx->pc = 0x1ff9b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ff9bc: 0x4a0002ff  vnop
    ctx->pc = 0x1ff9bcu;
    // NOP operation, no action needed for VU0
    // 0x1ff9c0: 0x4a0002ff  vnop
    ctx->pc = 0x1ff9c0u;
    // NOP operation, no action needed for VU0
    // 0x1ff9c4: 0x4be20b3c  vmove.xyzw  $vf2, $vf1
    ctx->pc = 0x1ff9c4u;
    ctx->vu0_vf[2] = ctx->vu0_vf[1];
    // 0x1ff9c8: 0xfba20100  sqc2        $vf2, 0x100($sp)
    ctx->pc = 0x1ff9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ff9cc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ff9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ff9d0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1ff9d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ff9d4: 0x4be11058  vmulx.xyzw  $vf1, $vf2, $vf1x
    ctx->pc = 0x1ff9d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ff9d8: 0x4be1111a  vmulz.xyzw  $vf4, $vf2, $vf1z
    ctx->pc = 0x1ff9d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ff9dc: 0x4be11159  vmuly.xyzw  $vf5, $vf2, $vf1y
    ctx->pc = 0x1ff9dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1ff9e0: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1ff9e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ff9e4: 0x4a842842  vaddz.y     $vf1, $vf5, $vf4z
    ctx->pc = 0x1ff9e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ff9e8: 0xdba30110  lqc2        $vf3, 0x110($sp)
    ctx->pc = 0x1ff9e8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ff9ec: 0x4b011845  vsuby.x     $vf1, $vf3, $vf1y
    ctx->pc = 0x1ff9ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ff9f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ff9f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff9f4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1ff9f4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ff9f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ff9f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff9fc: 0x4b0428c3  vaddw.x     $vf3, $vf5, $vf4w
    ctx->pc = 0x1ff9fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ffa00: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x1ffa00u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ffa04: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ffa04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa08: 0x4b052047  vsubw.x     $vf1, $vf4, $vf5w
    ctx->pc = 0x1ffa08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ffa0c: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1ffa0cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1ffa10: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1ffa10u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ffa14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ffa14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa18: 0x70c22b89  pcpyld      $a1, $a2, $v0
    ctx->pc = 0x1ffa18u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x1ffa1c: 0x4b042847  vsubw.x     $vf1, $vf5, $vf4w
    ctx->pc = 0x1ffa1cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ffa20: 0x70a32cc8  ppacw       $a1, $a1, $v1
    ctx->pc = 0x1ffa20u;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x1ffa24: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1ffa24u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ffa28: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ffa28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa2c: 0x7fa500a0  sq          $a1, 0xA0($sp)
    ctx->pc = 0x1ffa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 5));
    // 0x1ffa30: 0x4b041042  vaddz.x     $vf1, $vf2, $vf4z
    ctx->pc = 0x1ffa30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ffa34: 0xdba30110  lqc2        $vf3, 0x110($sp)
    ctx->pc = 0x1ffa34u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ffa38: 0x4b011844  vsubx.x     $vf1, $vf3, $vf1x
    ctx->pc = 0x1ffa38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ffa3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ffa3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa40: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1ffa40u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ffa44: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ffa44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa48: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1ffa48u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1ffa4c: 0x4a822043  vaddw.y     $vf1, $vf4, $vf2w
    ctx->pc = 0x1ffa4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ffa50: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1ffa50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ffa54: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1ffa54u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ffa58: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ffa58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa5c: 0x70e22389  pcpyld      $a0, $a3, $v0
    ctx->pc = 0x1ffa5cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x1ffa60: 0x4a822047  vsubw.y     $vf1, $vf4, $vf2w
    ctx->pc = 0x1ffa60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ffa64: 0x708324c8  ppacw       $a0, $a0, $v1
    ctx->pc = 0x1ffa64u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x1ffa68: 0x4b052103  vaddw.x     $vf4, $vf4, $vf5w
    ctx->pc = 0x1ffa68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ffa6c: 0x48222000  qmfc2.ni    $v0, $vf4
    ctx->pc = 0x1ffa6cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ffa70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ffa70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa74: 0x4b051081  vaddy.x     $vf2, $vf2, $vf5y
    ctx->pc = 0x1ffa74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ffa78: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1ffa78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ffa7c: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1ffa7cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ffa80: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1ffa80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa84: 0x7fa400b0  sq          $a0, 0xB0($sp)
    ctx->pc = 0x1ffa84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 4));
    // 0x1ffa88: 0x4b021884  vsubx.x     $vf2, $vf3, $vf2x
    ctx->pc = 0x1ffa88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ffa8c: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1ffa8cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1ffa90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ffa90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa94: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x1ffa94u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ffa98: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1ffa98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa9c: 0x7e250000  sq          $a1, 0x0($s1)
    ctx->pc = 0x1ffa9cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 5));
    // 0x1ffaa0: 0x71021389  pcpyld      $v0, $t0, $v0
    ctx->pc = 0x1ffaa0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x1ffaa4: 0x7e240010  sq          $a0, 0x10($s1)
    ctx->pc = 0x1ffaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 4));
    // 0x1ffaa8: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1ffaa8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1ffaac: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x1ffaacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1ffab0: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x1ffab0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    // 0x1ffab4: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x1ffab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1ffab8: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x1ffab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1ffabc: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x1ffabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ffac0: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1ffac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x1ffac4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFAC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFAC4u;
            // 0x1ffac8: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FF918u: goto label_1ff918;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FFACCu;
    // 0x1ffacc: 0x0  nop
    ctx->pc = 0x1ffaccu;
    // NOP
}
