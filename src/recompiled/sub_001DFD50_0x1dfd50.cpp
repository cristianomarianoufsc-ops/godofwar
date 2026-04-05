#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DFD50
// Address: 0x1dfd50 - 0x1dfe00
void sub_001DFD50_0x1dfd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFD50_0x1dfd50");
#endif

    ctx->pc = 0x1dfd50u;

    // 0x1dfd50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dfd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dfd54: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x1dfd54u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1dfd58: 0x46006086  mov.s       $f2, $f12
    ctx->pc = 0x1dfd58u;
    ctx->f[2] = FPU_MOV_S(ctx->f[12]);
    // 0x1dfd5c: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x1dfd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x1dfd60: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1dfd60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dfd64: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1dfd64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dfd68: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1dfd68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dfd6c: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x1dfd6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x1dfd70: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1dfd70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1dfd74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dfd74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dfd78: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1dfd78u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dfd7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dfd7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dfd80: 0x46000304  c1          0x304
    ctx->pc = 0x1dfd80u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x1dfd84: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x1dfd84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dfd88: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x1DFD88u;
    {
        const bool branch_taken_0x1dfd88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dfd88) {
            ctx->pc = 0x1DFDE8u;
            goto label_1dfde8;
        }
    }
    ctx->pc = 0x1DFD90u;
    // 0x1dfd90: 0x3c01411d  lui         $at, 0x411D
    ctx->pc = 0x1dfd90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16669 << 16));
    // 0x1dfd94: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1dfd94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x1dfd98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dfd98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dfd9c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1dfd9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1dfda0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1dfda0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1dfda4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dfda4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dfda8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dfda8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dfdac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dfdacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dfdb0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1dfdb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dfdb4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1dfdb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1dfdb8: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x1dfdb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x1dfdbc: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x1dfdbcu;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[12];
    // 0x1dfdc0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dfdc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1dfdc4: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x1dfdc4u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x1dfdc8: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x1dfdc8u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1dfdcc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1dfdccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1dfdd0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1dfdd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1dfdd4: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x1dfdd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dfdd8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1dfdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dfddc: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1dfddcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dfde0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFDE0u;
    {
        const bool branch_taken_0x1dfde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFDE0u;
            // 0x1dfde4: 0xfba10000  sqc2        $vf1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfde0) {
            ctx->pc = 0x1DFDF0u;
            goto label_1dfdf0;
        }
    }
    ctx->pc = 0x1DFDE8u;
label_1dfde8:
    // 0x1dfde8: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1dfde8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dfdec: 0x0  nop
    ctx->pc = 0x1dfdecu;
    // NOP
label_1dfdf0:
    // 0x1dfdf0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1dfdf0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dfdf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFDF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFDF4u;
            // 0x1dfdf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DFDE8u: goto label_1dfde8;
            case 0x1DFDF0u: goto label_1dfdf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DFDFCu;
    // 0x1dfdfc: 0x0  nop
    ctx->pc = 0x1dfdfcu;
    // NOP
}
