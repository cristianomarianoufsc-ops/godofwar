#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CAE50
// Address: 0x1cae50 - 0x1caf48
void sub_001CAE50_0x1cae50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CAE50_0x1cae50");
#endif

    ctx->pc = 0x1cae50u;

    // 0x1cae50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1cae50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1cae54: 0x48a51800  qmtc2.ni    $a1, $vf3
    ctx->pc = 0x1cae54u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1cae58: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1cae58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1cae5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cae5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae60: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1cae60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1cae64: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1cae64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1cae68: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x1cae68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1cae6c: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x1CAE6Cu;
    SET_GPR_U32(ctx, 31, 0x1CAE74u);
    ctx->pc = 0x1CAE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAE6Cu;
            // 0x1cae70: 0x2484b950  addiu       $a0, $a0, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAE74u; }
        if (ctx->pc != 0x1CAE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAE74u; }
        if (ctx->pc != 0x1CAE74u) { return; }
    }
    ctx->pc = 0x1CAE74u;
    // 0x1cae74: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1cae74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1cae78: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cae78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cae7c: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x1cae7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
    // 0x1cae80: 0x3421b8c0  ori         $at, $at, 0xB8C0
    ctx->pc = 0x1cae80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47296);
    // 0x1cae84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cae84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cae88: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1cae88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1cae8c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x1cae8cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cae90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cae90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1cae94: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x1cae94u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1cae98: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1cae98u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1cae9c: 0x4be2233c  vmove.xyzw  $vf2, $vf4
    ctx->pc = 0x1cae9cu;
    ctx->vu0_vf[2] = ctx->vu0_vf[4];
    // 0x1caea0: 0x4a851080  vaddx.y     $vf2, $vf2, $vf5x
    ctx->pc = 0x1caea0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1caea4: 0xdba30040  lqc2        $vf3, 0x40($sp)
    ctx->pc = 0x1caea4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1caea8: 0x4bc312fe  vopmula.xyz $ACC, $vf2, $vf3
    ctx->pc = 0x1caea8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]);
    // 0x1caeac: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1caeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1caeb0: 0x4bc218ae  vopmsub.xyz $vf2, $vf3, $vf2
    ctx->pc = 0x1caeb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1caeb4: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1caeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1caeb8: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1caeb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1caebc: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1caebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1caec0: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x1caec0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1caec4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1caec4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1caec8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1caec8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1caecc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1caeccu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1caed0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1caed0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1caed4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1caed4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1caed8: 0x0  nop
    ctx->pc = 0x1caed8u;
    // NOP
    // 0x1caedc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1CAEDCu;
    {
        const bool branch_taken_0x1caedc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CAEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAEDCu;
            // 0x1caee0: 0x4be1233c  vmove.xyzw  $vf1, $vf4 (Delay Slot)
        ctx->vu0_vf[1] = ctx->vu0_vf[4];
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caedc) {
            ctx->pc = 0x1CAF00u;
            goto label_1caf00;
        }
    }
    ctx->pc = 0x1CAEE4u;
    // 0x1caee4: 0x4b050840  vaddx.x     $vf1, $vf1, $vf5x
    ctx->pc = 0x1caee4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1caee8: 0x4bc30afe  vopmula.xyz $ACC, $vf1, $vf3
    ctx->pc = 0x1caee8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]);
    // 0x1caeec: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1caeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1caef0: 0x4bc1186e  vopmsub.xyz $vf1, $vf3, $vf1
    ctx->pc = 0x1caef0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1caef4: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1caef4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1caef8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1caef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1caefc: 0x0  nop
    ctx->pc = 0x1caefcu;
    // NOP
label_1caf00:
    // 0x1caf00: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1caf00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1caf04: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1caf04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1caf08: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1caf08u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x1caf0c: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1caf0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1caf10: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1caf10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1caf14: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1caf14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1caf18: 0xc06115e  jal         func_184578
    ctx->pc = 0x1CAF18u;
    SET_GPR_U32(ctx, 31, 0x1CAF20u);
    ctx->pc = 0x1CAF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAF18u;
            // 0x1caf1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184578u;
    if (runtime->hasFunction(0x184578u)) {
        auto targetFn = runtime->lookupFunction(0x184578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAF20u; }
        if (ctx->pc != 0x1CAF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184578_0x184578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAF20u; }
        if (ctx->pc != 0x1CAF20u) { return; }
    }
    ctx->pc = 0x1CAF20u;
    // 0x1caf20: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1caf20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1caf24: 0x70021f89  pexew       $v1, $v0
    ctx->pc = 0x1caf24u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1caf28: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x1caf28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x1caf2c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1caf2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1caf30: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1caf30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1caf34: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1caf34u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1caf38: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x1caf38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x1caf3c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1caf3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1caf40: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAF40u;
            // 0x1caf44: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CAF00u: goto label_1caf00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CAF48u;
}
