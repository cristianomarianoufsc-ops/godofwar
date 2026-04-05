#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00122C88
// Address: 0x122c88 - 0x122e78
void sub_00122C88_0x122c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122C88_0x122c88");
#endif

    ctx->pc = 0x122c88u;

    // 0x122c88: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x122c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x122c8c: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x122c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x122c90: 0x8c8200a0  lw          $v0, 0xA0($a0)
    ctx->pc = 0x122c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x122c94: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x122c94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x122c98: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x122c98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x122c9c: 0x70e81b89  pcpyld      $v1, $a3, $t0
    ctx->pc = 0x122c9cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x122ca0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x122ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x122ca4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x122ca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ca8: 0x70e21389  pcpyld      $v0, $a3, $v0
    ctx->pc = 0x122ca8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x122cac: 0x704344c8  ppacw       $t0, $v0, $v1
    ctx->pc = 0x122cacu;
    SET_GPR_VEC(ctx, 8, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x122cb0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x122cb0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x122cb4: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x122cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x122cb8: 0xfba50100  sqc2        $vf5, 0x100($sp)
    ctx->pc = 0x122cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x122cbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x122cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x122cc0: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x122cc0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x122cc4: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x122cc4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x122cc8: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x122cc8u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x122ccc: 0x4b060840  vaddx.x     $vf1, $vf1, $vf6x
    ctx->pc = 0x122cccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x122cd0: 0x4bc12afe  vopmula.xyz $ACC, $vf5, $vf1
    ctx->pc = 0x122cd0u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[1]);
    // 0x122cd4: 0x4bc5086e  vopmsub.xyz $vf1, $vf1, $vf5
    ctx->pc = 0x122cd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x122cd8: 0x4be40b3c  vmove.xyzw  $vf4, $vf1
    ctx->pc = 0x122cd8u;
    ctx->vu0_vf[4] = ctx->vu0_vf[1];
    // 0x122cdc: 0x4a24212c  vsub.w      $vf4, $vf4, $vf4
    ctx->pc = 0x122cdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x122ce0: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x122ce0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x122ce4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x122ce4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x122ce8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x122ce8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x122cec: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x122cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x122cf0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x122cf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x122cf4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x122cf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x122cf8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x122cf8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x122cfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x122cfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x122d00: 0x46000004  c1          0x4
    ctx->pc = 0x122d00u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x122d04: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x122d04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x122d08: 0x0  nop
    ctx->pc = 0x122d08u;
    // NOP
    // 0x122d0c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x122D0Cu;
    {
        const bool branch_taken_0x122d0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x122D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122D0Cu;
            // 0x122d10: 0x4be11b3c  vmove.xyzw  $vf1, $vf3 (Delay Slot)
        ctx->vu0_vf[1] = ctx->vu0_vf[3];
        ctx->in_delay_slot = false;
        if (branch_taken_0x122d0c) {
            ctx->pc = 0x122D28u;
            goto label_122d28;
        }
    }
    ctx->pc = 0x122D14u;
    // 0x122d14: 0x4a860840  vaddx.y     $vf1, $vf1, $vf6x
    ctx->pc = 0x122d14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x122d18: 0x4bc12afe  vopmula.xyz $ACC, $vf5, $vf1
    ctx->pc = 0x122d18u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[1]);
    // 0x122d1c: 0x4bc5086e  vopmsub.xyz $vf1, $vf1, $vf5
    ctx->pc = 0x122d1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x122d20: 0x4be40b3c  vmove.xyzw  $vf4, $vf1
    ctx->pc = 0x122d20u;
    ctx->vu0_vf[4] = ctx->vu0_vf[1];
    // 0x122d24: 0x4a24212c  vsub.w      $vf4, $vf4, $vf4
    ctx->pc = 0x122d24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_122d28:
    // 0x122d28: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x122d28u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]);
    // 0x122d2c: 0x4bc428ee  vopmsub.xyz $vf3, $vf5, $vf4
    ctx->pc = 0x122d2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x122d30: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x122d30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x122d34: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x122d34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x122d38: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x122d38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x122d3c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x122d3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x122d40: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x122d40u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x122d44: 0x4a0003bf  vwaitq
    ctx->pc = 0x122d44u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x122d48: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x122d48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x122d4c: 0x4a0002ff  vnop
    ctx->pc = 0x122d4cu;
    // NOP operation, no action needed for VU0
    // 0x122d50: 0x4a0002ff  vnop
    ctx->pc = 0x122d50u;
    // NOP operation, no action needed for VU0
    // 0x122d54: 0x4be528aa  vmul.xyzw   $vf2, $vf5, $vf5
    ctx->pc = 0x122d54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x122d58: 0x4be1233c  vmove.xyzw  $vf1, $vf4
    ctx->pc = 0x122d58u;
    ctx->vu0_vf[1] = ctx->vu0_vf[4];
    // 0x122d5c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x122d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x122d60: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x122d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x122d64: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x122d64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x122d68: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x122d68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x122d6c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x122d6cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x122d70: 0x4a0003bf  vwaitq
    ctx->pc = 0x122d70u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x122d74: 0x4bc0295c  vmulq.xyz   $vf5, $vf5, $Q
    ctx->pc = 0x122d74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x122d78: 0x4a0002ff  vnop
    ctx->pc = 0x122d78u;
    // NOP operation, no action needed for VU0
    // 0x122d7c: 0x4a0002ff  vnop
    ctx->pc = 0x122d7cu;
    // NOP operation, no action needed for VU0
    // 0x122d80: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x122d80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x122d84: 0x4be12b3c  vmove.xyzw  $vf1, $vf5
    ctx->pc = 0x122d84u;
    ctx->vu0_vf[1] = ctx->vu0_vf[5];
    // 0x122d88: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x122d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x122d8c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x122d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x122d90: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x122d90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x122d94: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x122d94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x122d98: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x122d98u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x122d9c: 0x4a0003bf  vwaitq
    ctx->pc = 0x122d9cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x122da0: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x122da0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x122da4: 0x4a0002ff  vnop
    ctx->pc = 0x122da4u;
    // NOP operation, no action needed for VU0
    // 0x122da8: 0x4a0002ff  vnop
    ctx->pc = 0x122da8u;
    // NOP operation, no action needed for VU0
    // 0x122dac: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x122dacu;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x122db0: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x122db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x122db4: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x122db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x122db8: 0xc0489f2  jal         func_1227C8
    ctx->pc = 0x122DB8u;
    SET_GPR_U32(ctx, 31, 0x122DC0u);
    ctx->pc = 0x122DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122DB8u;
            // 0x122dbc: 0xfba20040  sqc2        $vf2, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1227C8u;
    if (runtime->hasFunction(0x1227C8u)) {
        auto targetFn = runtime->lookupFunction(0x1227C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122DC0u; }
        if (ctx->pc != 0x122DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001227C8_0x1227c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122DC0u; }
        if (ctx->pc != 0x122DC0u) { return; }
    }
    ctx->pc = 0x122DC0u;
    // 0x122dc0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x122dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x122dc4: 0x8c43bde8  lw          $v1, -0x4218($v0)
    ctx->pc = 0x122dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950376)));
    // 0x122dc8: 0x246200c0  addiu       $v0, $v1, 0xC0
    ctx->pc = 0x122dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x122dcc: 0xd86600c0  lqc2        $vf6, 0xC0($v1)
    ctx->pc = 0x122dccu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x122dd0: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x122dd0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x122dd4: 0xd8470010  lqc2        $vf7, 0x10($v0)
    ctx->pc = 0x122dd4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x122dd8: 0xd8480020  lqc2        $vf8, 0x20($v0)
    ctx->pc = 0x122dd8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x122ddc: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x122ddcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122de0: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x122de0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122de4: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x122de4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122de8: 0xdba50040  lqc2        $vf5, 0x40($sp)
    ctx->pc = 0x122de8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122dec: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x122decu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x122df0: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x122df0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x122df4: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x122df4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x122df8: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x122df8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x122dfc: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x122dfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x122e00: 0xfba300c0  sqc2        $vf3, 0xC0($sp)
    ctx->pc = 0x122e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x122e04: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x122e04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x122e08: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x122e08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x122e0c: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x122e0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x122e10: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x122e10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x122e14: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x122e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x122e18: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x122e18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x122e1c: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x122e1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x122e20: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x122e20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x122e24: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x122e24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x122e28: 0xfba200e0  sqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x122e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x122e2c: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x122e2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x122e30: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x122e30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x122e34: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x122e34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x122e38: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x122e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x122e3c: 0xfba30080  sqc2        $vf3, 0x80($sp)
    ctx->pc = 0x122e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x122e40: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x122e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x122e44: 0xfba200a0  sqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x122e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x122e48: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x122e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x122e4c: 0xf86300c0  sqc2        $vf3, 0xC0($v1)
    ctx->pc = 0x122e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 192), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x122e50: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x122e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x122e54: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x122e54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x122e58: 0x7c6200d0  sq          $v0, 0xD0($v1)
    ctx->pc = 0x122e58u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 208), GPR_VEC(ctx, 2));
    // 0x122e5c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x122e5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x122e60: 0x7c6200e0  sq          $v0, 0xE0($v1)
    ctx->pc = 0x122e60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 224), GPR_VEC(ctx, 2));
    // 0x122e64: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x122e64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x122e68: 0x7c6200f0  sq          $v0, 0xF0($v1)
    ctx->pc = 0x122e68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 240), GPR_VEC(ctx, 2));
    // 0x122e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x122E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122E6Cu;
            // 0x122e70: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122D28u: goto label_122d28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122E74u;
    // 0x122e74: 0x0  nop
    ctx->pc = 0x122e74u;
    // NOP
}
