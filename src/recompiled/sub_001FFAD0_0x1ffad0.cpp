#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FFAD0
// Address: 0x1ffad0 - 0x1ffbf0
void sub_001FFAD0_0x1ffad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FFAD0_0x1ffad0");
#endif

    ctx->pc = 0x1ffad0u;

    // 0x1ffad0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ffad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ffad4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ffad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ffad8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1ffad8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1ffadc: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x1ffadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ffae0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1ffae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1ffae4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1ffae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1ffae8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ffae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffaec: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x1ffaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x1ffaf0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ffaf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffaf4: 0x700734a9  por         $a2, $zero, $a3
    ctx->pc = 0x1ffaf4u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x1ffaf8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ffaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ffafc: 0x7fa80010  sq          $t0, 0x10($sp)
    ctx->pc = 0x1ffafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
    // 0x1ffb00: 0xc07fdac  jal         func_1FF6B0
    ctx->pc = 0x1FFB00u;
    SET_GPR_U32(ctx, 31, 0x1FFB08u);
    ctx->pc = 0x1FFB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFB00u;
            // 0x1ffb04: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF6B0u;
    if (runtime->hasFunction(0x1FF6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1FF6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB08u; }
        if (ctx->pc != 0x1FFB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF6B0_0x1ff6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB08u; }
        if (ctx->pc != 0x1FFB08u) { return; }
    }
    ctx->pc = 0x1FFB08u;
    // 0x1ffb08: 0x7ba60030  lq          $a2, 0x30($sp)
    ctx->pc = 0x1ffb08u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ffb0c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ffb0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1ffb10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ffb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb14: 0xc07fdf0  jal         func_1FF7C0
    ctx->pc = 0x1FFB14u;
    SET_GPR_U32(ctx, 31, 0x1FFB1Cu);
    ctx->pc = 0x1FFB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFB14u;
            // 0x1ffb18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7C0u;
    if (runtime->hasFunction(0x1FF7C0u)) {
        auto targetFn = runtime->lookupFunction(0x1FF7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB1Cu; }
        if (ctx->pc != 0x1FFB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1ff7c0_0x1ffad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB1Cu; }
        if (ctx->pc != 0x1FFB1Cu) { return; }
    }
    ctx->pc = 0x1FFB1Cu;
    // 0x1ffb1c: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1ffb1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ffb20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ffb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb24: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x1ffb24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ffb28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ffb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ffb2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ffb2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ffb30: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1ffb30u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ffb34: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1ffb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1ffb38: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ffb38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ffb3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ffb3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ffb40: 0xc60f004c  lwc1        $f15, 0x4C($s0)
    ctx->pc = 0x1ffb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1ffb44: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x1ffb44u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
    // 0x1ffb48: 0xc60e0048  lwc1        $f14, 0x48($s0)
    ctx->pc = 0x1ffb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ffb4c: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x1ffb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ffb50: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x1ffb50u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x1ffb54: 0x46027bc2  mul.s       $f15, $f15, $f2
    ctx->pc = 0x1ffb54u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[2]);
    // 0x1ffb58: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1ffb58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffb5c: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x1ffb5cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x1ffb60: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x1ffb60u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1ffb64: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ffb64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ffb68: 0x46027382  mul.s       $f14, $f14, $f2
    ctx->pc = 0x1ffb68u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x1ffb6c: 0x46147bc2  mul.s       $f15, $f15, $f20
    ctx->pc = 0x1ffb6cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[20]);
    // 0x1ffb70: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x1ffb70u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x1ffb74: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x1ffb74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x1ffb78: 0xc07950a  jal         func_1E5428
    ctx->pc = 0x1FFB78u;
    SET_GPR_U32(ctx, 31, 0x1FFB80u);
    ctx->pc = 0x1FFB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFB78u;
            // 0x1ffb7c: 0x46147382  mul.s       $f14, $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5428u;
    if (runtime->hasFunction(0x1E5428u)) {
        auto targetFn = runtime->lookupFunction(0x1E5428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB80u; }
        if (ctx->pc != 0x1FFB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e5428_0x1e54c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB80u; }
        if (ctx->pc != 0x1FFB80u) { return; }
    }
    ctx->pc = 0x1FFB80u;
    // 0x1ffb80: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ffb80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ffb84: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1ffb84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ffb88: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1ffb88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffb8c: 0x4a410100  vaddx.z     $vf4, $vf0, $vf1x
    ctx->pc = 0x1ffb8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ffb90: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1ffb90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ffb94: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1ffb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ffb98: 0xda010020  lqc2        $vf1, 0x20($s0)
    ctx->pc = 0x1ffb98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ffb9c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1ffb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ffba0: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1ffba0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ffba4: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1ffba4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ffba8: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1ffba8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ffbac: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1ffbacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ffbb0: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1ffbb0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1ffbb4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1ffbb4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1ffbb8: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1ffbb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ffbbc: 0x4a0002ff  vnop
    ctx->pc = 0x1ffbbcu;
    // NOP operation, no action needed for VU0
    // 0x1ffbc0: 0x4a0002ff  vnop
    ctx->pc = 0x1ffbc0u;
    // NOP operation, no action needed for VU0
    // 0x1ffbc4: 0x4be4105a  vmulz.xyzw  $vf1, $vf2, $vf4z
    ctx->pc = 0x1ffbc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ffbc8: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1ffbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ffbcc: 0xfa2100e0  sqc2        $vf1, 0xE0($s1)
    ctx->pc = 0x1ffbccu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ffbd0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1ffbd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ffbd4: 0x48222000  qmfc2.ni    $v0, $vf4
    ctx->pc = 0x1ffbd4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ffbd8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1ffbd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ffbdc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ffbdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ffbe0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1ffbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ffbe4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFBE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFBE4u;
            // 0x1ffbe8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FFBECu;
    // 0x1ffbec: 0x0  nop
    ctx->pc = 0x1ffbecu;
    // NOP
}
