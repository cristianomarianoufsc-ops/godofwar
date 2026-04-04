#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FF6B0
// Address: 0x1ff6b0 - 0x1ff7c0
void sub_001FF6B0_0x1ff6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF6B0_0x1ff6b0");
#endif

    ctx->pc = 0x1ff6b0u;

    // 0x1ff6b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1ff6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1ff6b4: 0x4be0016c  vsub.xyzw   $vf5, $vf0, $vf0
    ctx->pc = 0x1ff6b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1ff6b8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1ff6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1ff6bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ff6bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff6c0: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x1ff6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
    // 0x1ff6c4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1ff6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1ff6c8: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x1ff6c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1ff6cc: 0x4be2286c  vsub.xyzw   $vf1, $vf5, $vf2
    ctx->pc = 0x1ff6ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ff6d0: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x1ff6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1ff6d4: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x1ff6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x1ff6d8: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x1ff6d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x1ff6dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ff6dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff6e0: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1ff6e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ff6e4: 0x78670020  lq          $a3, 0x20($v1)
    ctx->pc = 0x1ff6e4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ff6e8: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1ff6e8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ff6ec: 0x78680030  lq          $t0, 0x30($v1)
    ctx->pc = 0x1ff6ecu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1ff6f0: 0x46006003  div.s       $f0, $f12, $f0
    ctx->pc = 0x1ff6f0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[0] = ctx->f[12] / ctx->f[0];
    // 0x1ff6f4: 0x7a020050  lq          $v0, 0x50($s0)
    ctx->pc = 0x1ff6f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1ff6f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ff6f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff6fc: 0x78630010  lq          $v1, 0x10($v1)
    ctx->pc = 0x1ff6fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1ff700: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1ff700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1ff704: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x1ff704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x1ff708: 0x7fa80030  sq          $t0, 0x30($sp)
    ctx->pc = 0x1ff708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
    // 0x1ff70c: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x1ff70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
    // 0x1ff710: 0xc48c0040  lwc1        $f12, 0x40($a0)
    ctx->pc = 0x1ff710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ff714: 0x700724a9  por         $a0, $zero, $a3
    ctx->pc = 0x1ff714u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x1ff718: 0xfba50070  sqc2        $vf5, 0x70($sp)
    ctx->pc = 0x1ff718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1ff71c: 0xc07954c  jal         func_1E5530
    ctx->pc = 0x1FF71Cu;
    SET_GPR_U32(ctx, 31, 0x1FF724u);
    ctx->pc = 0x1FF720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF71Cu;
            // 0x1ff720: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5530u;
    if (runtime->hasFunction(0x1E5530u)) {
        auto targetFn = runtime->lookupFunction(0x1E5530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF724u; }
        if (ctx->pc != 0x1FF724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5530_0x1e5530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF724u; }
        if (ctx->pc != 0x1FF724u) { return; }
    }
    ctx->pc = 0x1FF724u;
    // 0x1ff724: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1ff724u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ff728: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x1ff728u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ff72c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1ff72cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ff730: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1ff730u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ff734: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1ff734u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1ff738: 0x4a0003bf  vwaitq
    ctx->pc = 0x1ff738u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1ff73c: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x1ff73cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ff740: 0x4a0002ff  vnop
    ctx->pc = 0x1ff740u;
    // NOP operation, no action needed for VU0
    // 0x1ff744: 0x4a0002ff  vnop
    ctx->pc = 0x1ff744u;
    // NOP operation, no action needed for VU0
    // 0x1ff748: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1ff748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ff74c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1ff74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ff750: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ff750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ff754: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1ff754u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ff758: 0xdba50070  lqc2        $vf5, 0x70($sp)
    ctx->pc = 0x1ff758u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ff75c: 0x4a812940  vaddx.y     $vf5, $vf5, $vf1x
    ctx->pc = 0x1ff75cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1ff760: 0x4bc42afe  vopmula.xyz $ACC, $vf5, $vf4
    ctx->pc = 0x1ff760u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]);
    // 0x1ff764: 0x4bc520ae  vopmsub.xyz $vf2, $vf4, $vf5
    ctx->pc = 0x1ff764u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ff768: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x1ff768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1ff76c: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1ff76cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ff770: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1ff770u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ff774: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1ff774u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ff778: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1ff778u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ff77c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1ff77cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ff780: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1ff780u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1ff784: 0x4a0003bf  vwaitq
    ctx->pc = 0x1ff784u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1ff788: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1ff788u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ff78c: 0x4a0002ff  vnop
    ctx->pc = 0x1ff78cu;
    // NOP operation, no action needed for VU0
    // 0x1ff790: 0x4a0002ff  vnop
    ctx->pc = 0x1ff790u;
    // NOP operation, no action needed for VU0
    // 0x1ff794: 0xfa050060  sqc2        $vf5, 0x60($s0)
    ctx->pc = 0x1ff794u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1ff798: 0x7e020080  sq          $v0, 0x80($s0)
    ctx->pc = 0x1ff798u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 2));
    // 0x1ff79c: 0xfa020050  sqc2        $vf2, 0x50($s0)
    ctx->pc = 0x1ff79cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ff7a0: 0xfa040070  sqc2        $vf4, 0x70($s0)
    ctx->pc = 0x1ff7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ff7a4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1ff7a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ff7a8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1ff7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ff7ac: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1ff7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ff7b0: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1ff7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ff7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF7B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF7B4u;
            // 0x1ff7b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF7BCu;
    // 0x1ff7bc: 0x0  nop
    ctx->pc = 0x1ff7bcu;
    // NOP
}
