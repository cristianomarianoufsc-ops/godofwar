#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_108fc0
// Address: 0x108fc0 - 0x109068
void entry_108fc0_0x109068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_108fc0_0x109068");
#endif

    ctx->pc = 0x108fc0u;

    // 0x108fc0: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x108fc0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x108fc4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108fc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x108fc8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x108fc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x108fcc: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x108fccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x108fd0: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x108fd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x108fd4: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x108fd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x108fd8: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x108fd8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x108fdc: 0x4a0003bf  vwaitq
    ctx->pc = 0x108fdcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x108fe0: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x108fe0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x108fe4: 0x4a0002ff  vnop
    ctx->pc = 0x108fe4u;
    // NOP operation, no action needed for VU0
    // 0x108fe8: 0x4a0002ff  vnop
    ctx->pc = 0x108fe8u;
    // NOP operation, no action needed for VU0
    // 0x108fec: 0x4be420ea  vmul.xyzw   $vf3, $vf4, $vf4
    ctx->pc = 0x108fecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x108ff0: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x108ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x108ff4: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x108ff4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x108ff8: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x108ff8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x108ffc: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x108ffcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x109000: 0x4a0003bf  vwaitq
    ctx->pc = 0x109000u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x109004: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x109004u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x109008: 0x4a0002ff  vnop
    ctx->pc = 0x109008u;
    // NOP operation, no action needed for VU0
    // 0x10900c: 0x4a0002ff  vnop
    ctx->pc = 0x10900cu;
    // NOP operation, no action needed for VU0
    // 0x109010: 0x4be410aa  vmul.xyzw   $vf2, $vf2, $vf4
    ctx->pc = 0x109010u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x109014: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x109014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x109018: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x109018u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10901c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x10901cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109020: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x109020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x109024: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x109024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x109028: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x109028u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10902c: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x10902cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x109030: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x109030u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x109034: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x109034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x109038: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x109038u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10903c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x10903cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x109040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109044: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x109044u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x109048: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x109048u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x10904c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x10904cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x109050: 0x0  nop
    ctx->pc = 0x109050u;
    // NOP
    // 0x109054: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x109054u;
    {
        const bool branch_taken_0x109054 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x109054) {
            ctx->pc = 0x109058u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x109054u;
            // 0x109058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x109060u;
            goto label_109060;
        }
    }
    ctx->pc = 0x10905Cu;
    // 0x10905c: 0x0  nop
    ctx->pc = 0x10905cu;
    // NOP
label_109060:
    // 0x109060: 0x3e00008  jr          $ra
    ctx->pc = 0x109060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109060u;
            // 0x109064: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x109060u: goto label_109060;
            default: break;
        }
        return;
    }
    ctx->pc = 0x109068u;
}
