#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0BC8
// Address: 0x1a0bc8 - 0x1a0d88
void sub_001A0BC8_0x1a0bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0BC8_0x1a0bc8");
#endif

    ctx->pc = 0x1a0bc8u;

    // 0x1a0bc8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a0bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a0bcc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0bccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a0bd0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a0bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a0bd4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a0bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a0bd8: 0xd8620050  lqc2        $vf2, 0x50($v1)
    ctx->pc = 0x1a0bd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1a0bdc: 0xd8410050  lqc2        $vf1, 0x50($v0)
    ctx->pc = 0x1a0bdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1a0be0: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1a0be0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a0be4: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x1a0be4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a0be8: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1a0be8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a0bec: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1a0becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1a0bf0: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1a0bf0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a0bf4: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1a0bf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a0bf8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1a0bf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a0bfc: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1a0bfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a0c00: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1a0c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1a0c04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a0c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a0c08: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1a0c08u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a0c0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a0c0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0c10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a0c10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a0c14: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a0c14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a0c18: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0C18u;
            // 0x1a0c1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0CF8u: goto label_1a0cf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0C20u;
    // 0x1a0c20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a0c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a0c24: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a0c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a0c28: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a0c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a0c2c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a0c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a0c30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a0c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c34: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a0c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a0c38: 0xd8430050  lqc2        $vf3, 0x50($v0)
    ctx->pc = 0x1a0c38u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1a0c3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a0c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0c40: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1a0c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1a0c44: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x1a0c44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1a0c48: 0x4be118ec  vsub.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1a0c48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1a0c4c: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1a0c4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a0c50: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1a0c50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a0c54: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x1a0c54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a0c58: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1a0c58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a0c5c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1a0c5cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1a0c60: 0x4a0003bf  vwaitq
    ctx->pc = 0x1a0c60u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1a0c64: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1a0c64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1a0c68: 0x4a0002ff  vnop
    ctx->pc = 0x1a0c68u;
    // NOP operation, no action needed for VU0
    // 0x1a0c6c: 0x4a0002ff  vnop
    ctx->pc = 0x1a0c6cu;
    // NOP operation, no action needed for VU0
    // 0x1a0c70: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1a0c70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a0c74: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1a0c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1a0c78: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1a0c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a0c7c: 0x4be410ac  vsub.xyzw   $vf2, $vf2, $vf4
    ctx->pc = 0x1a0c7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a0c80: 0x4be218aa  vmul.xyzw   $vf2, $vf3, $vf2
    ctx->pc = 0x1a0c80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a0c84: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1a0c84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a0c88: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1a0c88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a0c8c: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1a0c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1a0c90: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1a0c90u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a0c94: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a0c94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a0c98: 0xc060f88  jal         func_183E20
    ctx->pc = 0x1A0C98u;
    SET_GPR_U32(ctx, 31, 0x1A0CA0u);
    ctx->pc = 0x183E20u;
    if (runtime->hasFunction(0x183E20u)) {
        auto targetFn = runtime->lookupFunction(0x183E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0CA0u; }
        if (ctx->pc != 0x1A0CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183e20_0x183ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0CA0u; }
        if (ctx->pc != 0x1A0CA0u) { return; }
    }
    ctx->pc = 0x1A0CA0u;
    // 0x1a0ca0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a0ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a0ca4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1a0ca4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x1a0ca8: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1a0ca8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0cac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a0cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a0cb0: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1a0cb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a0cb4: 0x4be118ea  vmul.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1a0cb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1a0cb8: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1a0cb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a0cbc: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1a0cbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a0cc0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a0cc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a0cc4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1a0cc4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a0cc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a0cc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0ccc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a0cccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0cd0: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1a0cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x1a0cd4: 0x34212ee4  ori         $at, $at, 0x2EE4
    ctx->pc = 0x1a0cd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12004);
    // 0x1a0cd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a0cd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0cdc: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0CDCu;
    {
        const bool branch_taken_0x1a0cdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a0cdc) {
            ctx->pc = 0x1A0CE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0CDCu;
            // 0x1a0ce0: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A0CF8u;
            goto label_1a0cf8;
        }
    }
    ctx->pc = 0x1A0CE4u;
    // 0x1a0ce4: 0x3c01c265  lui         $at, 0xC265
    ctx->pc = 0x1a0ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49765 << 16));
    // 0x1a0ce8: 0x34212ee4  ori         $at, $at, 0x2EE4
    ctx->pc = 0x1a0ce8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12004);
    // 0x1a0cec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a0cecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0cf0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a0cf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a0cf4: 0x0  nop
    ctx->pc = 0x1a0cf4u;
    // NOP
label_1a0cf8:
    // 0x1a0cf8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a0cf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a0cfc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a0cfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a0d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0d04: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a0d04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d08: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0D08u;
            // 0x1a0d0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0CF8u: goto label_1a0cf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0D10u;
    // 0x1a0d10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a0d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a0d14: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a0d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a0d18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a0d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a0d1c: 0xd8620050  lqc2        $vf2, 0x50($v1)
    ctx->pc = 0x1a0d1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1a0d20: 0xd8410050  lqc2        $vf1, 0x50($v0)
    ctx->pc = 0x1a0d20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1a0d24: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1a0d24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a0d28: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1a0d28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a0d2c: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1a0d2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a0d30: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1a0d30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a0d34: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1a0d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1a0d38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a0d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a0d3c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1a0d3cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a0d40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a0d40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0d44: 0x46000004  c1          0x4
    ctx->pc = 0x1a0d44u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1a0d48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a0d48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a0d4c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a0d4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a0d50: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0CF8u: goto label_1a0cf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0D58u;
    // 0x1a0d58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a0d5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0d60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a0d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a0d64: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a0d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a0d68: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1a0d68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1a0d6c: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1a0d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1a0d70: 0x40f809  jalr        $v0
    ctx->pc = 0x1A0D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A0D78u);
        ctx->pc = 0x1A0D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0D70u;
            // 0x1a0d74: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A0D78u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0CF8u: goto label_1a0cf8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D78u; }
            if (ctx->pc != 0x1A0D78u) { return; }
        }
        }
    }
    ctx->pc = 0x1A0D78u;
    // 0x1a0d78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0d7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a0d7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d80: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0D80u;
            // 0x1a0d84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0CF8u: goto label_1a0cf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0D88u;
}
