#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F1DE8
// Address: 0x1f1de8 - 0x1f2bb0
void sub_001F1DE8_0x1f1de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1DE8_0x1f1de8");
#endif

    ctx->pc = 0x1f1de8u;

    // 0x1f1de8: 0x27bdfbf0  addiu       $sp, $sp, -0x410
    ctx->pc = 0x1f1de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966256));
    // 0x1f1dec: 0x7fb30390  sq          $s3, 0x390($sp)
    ctx->pc = 0x1f1decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), GPR_VEC(ctx, 19));
    // 0x1f1df0: 0x7fb40380  sq          $s4, 0x380($sp)
    ctx->pc = 0x1f1df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 20));
    // 0x1f1df4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f1df4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1df8: 0xe7ba0400  swc1        $f26, 0x400($sp)
    ctx->pc = 0x1f1df8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1024), bits); }
    // 0x1f1dfc: 0xe7b703e8  swc1        $f23, 0x3E8($sp)
    ctx->pc = 0x1f1dfcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1000), bits); }
    // 0x1f1e00: 0xe7b603e0  swc1        $f22, 0x3E0($sp)
    ctx->pc = 0x1f1e00u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 992), bits); }
    // 0x1f1e04: 0xe7b403d0  swc1        $f20, 0x3D0($sp)
    ctx->pc = 0x1f1e04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 976), bits); }
    // 0x1f1e08: 0x7fb003c0  sq          $s0, 0x3C0($sp)
    ctx->pc = 0x1f1e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), GPR_VEC(ctx, 16));
    // 0x1f1e0c: 0x7fb103b0  sq          $s1, 0x3B0($sp)
    ctx->pc = 0x1f1e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), GPR_VEC(ctx, 17));
    // 0x1f1e10: 0x7fb203a0  sq          $s2, 0x3A0($sp)
    ctx->pc = 0x1f1e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), GPR_VEC(ctx, 18));
    // 0x1f1e14: 0x7fb50370  sq          $s5, 0x370($sp)
    ctx->pc = 0x1f1e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 21));
    // 0x1f1e18: 0x7fb60360  sq          $s6, 0x360($sp)
    ctx->pc = 0x1f1e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 22));
    // 0x1f1e1c: 0x7fb70350  sq          $s7, 0x350($sp)
    ctx->pc = 0x1f1e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 23));
    // 0x1f1e20: 0x7fbe0340  sq          $fp, 0x340($sp)
    ctx->pc = 0x1f1e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 30));
    // 0x1f1e24: 0xffbf0330  sd          $ra, 0x330($sp)
    ctx->pc = 0x1f1e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 816), GPR_U64(ctx, 31));
    // 0x1f1e28: 0xe7b903f8  swc1        $f25, 0x3F8($sp)
    ctx->pc = 0x1f1e28u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1016), bits); }
    // 0x1f1e2c: 0xe7b803f0  swc1        $f24, 0x3F0($sp)
    ctx->pc = 0x1f1e2cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1008), bits); }
    // 0x1f1e30: 0xe7b503d8  swc1        $f21, 0x3D8($sp)
    ctx->pc = 0x1f1e30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 984), bits); }
    // 0x1f1e34: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1f1e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1f1e38: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1f1e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1f1e3c: 0xc66c0088  lwc1        $f12, 0x88($s3)
    ctx->pc = 0x1f1e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f1e40: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x1f1e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1f1e44: 0x46176303  div.s       $f12, $f12, $f23
    ctx->pc = 0x1f1e44u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[23];
    // 0x1f1e48: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1f1e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1f1e4c: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1f1e4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1f1e50: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1f1e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1f1e54: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1f1e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1f1e58: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x1f1e58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1f1e5c: 0xc060e52  jal         func_183948
    ctx->pc = 0x1F1E5Cu;
    SET_GPR_U32(ctx, 31, 0x1F1E64u);
    ctx->pc = 0x1F1E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1E5Cu;
            // 0x1f1e60: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183948u;
    if (runtime->hasFunction(0x183948u)) {
        auto targetFn = runtime->lookupFunction(0x183948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1E64u; }
        if (ctx->pc != 0x1F1E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183948_0x183a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1E64u; }
        if (ctx->pc != 0x1F1E64u) { return; }
    }
    ctx->pc = 0x1F1E64u;
    // 0x1f1e64: 0xc66c008c  lwc1        $f12, 0x8C($s3)
    ctx->pc = 0x1f1e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f1e68: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1f1e68u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1f1e6c: 0x46176303  div.s       $f12, $f12, $f23
    ctx->pc = 0x1f1e6cu;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[23];
    // 0x1f1e70: 0xc060e52  jal         func_183948
    ctx->pc = 0x1F1E70u;
    SET_GPR_U32(ctx, 31, 0x1F1E78u);
    ctx->pc = 0x1F1E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1E70u;
            // 0x1f1e74: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183948u;
    if (runtime->hasFunction(0x183948u)) {
        auto targetFn = runtime->lookupFunction(0x183948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1E78u; }
        if (ctx->pc != 0x1F1E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183948_0x183a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1E78u; }
        if (ctx->pc != 0x1F1E78u) { return; }
    }
    ctx->pc = 0x1F1E78u;
    // 0x1f1e78: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1f1e78u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1f1e7c: 0xda630070  lqc2        $vf3, 0x70($s3)
    ctx->pc = 0x1f1e7cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x1f1e80: 0xc6600090  lwc1        $f0, 0x90($s3)
    ctx->pc = 0x1f1e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1e84: 0xda610030  lqc2        $vf1, 0x30($s3)
    ctx->pc = 0x1f1e84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1f1e88: 0x46140682  mul.s       $f26, $f0, $f20
    ctx->pc = 0x1f1e88u;
    ctx->f[26] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1f1e8c: 0x4be118ec  vsub.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1f1e8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f1e90: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x1f1e90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x1f1e94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f1e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1e98: 0xfba30320  sqc2        $vf3, 0x320($sp)
    ctx->pc = 0x1f1e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f1e9c: 0xc0613b4  jal         func_184ED0
    ctx->pc = 0x1F1E9Cu;
    SET_GPR_U32(ctx, 31, 0x1F1EA4u);
    ctx->pc = 0x1F1EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1E9Cu;
            // 0x1f1ea0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184ED0u;
    if (runtime->hasFunction(0x184ED0u)) {
        auto targetFn = runtime->lookupFunction(0x184ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1EA4u; }
        if (ctx->pc != 0x1F1EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_184ed0_0x184f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1EA4u; }
        if (ctx->pc != 0x1F1EA4u) { return; }
    }
    ctx->pc = 0x1F1EA4u;
    // 0x1f1ea4: 0xdba30320  lqc2        $vf3, 0x320($sp)
    ctx->pc = 0x1f1ea4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1ea8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1f1ea8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1eac: 0x4be309bc  vmulax.xyzw $ACC, $vf1, $vf3x
    ctx->pc = 0x1f1eacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f1eb0: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1f1eb0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f1eb4: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1f1eb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1eb8: 0x4be308bd  vmadday.xyzw $ACC, $vf1, $vf3y
    ctx->pc = 0x1f1eb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f1ebc: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1f1ebcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f1ec0: 0x4be308be  vmaddaz.xyzw $ACC, $vf1, $vf3z
    ctx->pc = 0x1f1ec0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f1ec4: 0x4be3108b  vmaddw.xyzw $vf2, $vf2, $vf3w
    ctx->pc = 0x1f1ec4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f1ec8: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1f1ec8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f1ecc: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1f1eccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f1ed0: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1f1ed0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f1ed4: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1f1ed4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f1ed8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1f1ed8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f1edc: 0x26650088  addiu       $a1, $s3, 0x88
    ctx->pc = 0x1f1edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 136));
    // 0x1f1ee0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f1ee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1ee4: 0x2666008c  addiu       $a2, $s3, 0x8C
    ctx->pc = 0x1f1ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 140));
    // 0x1f1ee8: 0x46000004  c1          0x4
    ctx->pc = 0x1f1ee8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f1eec: 0xc07c084  jal         func_1F0210
    ctx->pc = 0x1F1EECu;
    SET_GPR_U32(ctx, 31, 0x1F1EF4u);
    ctx->pc = 0x1F1EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1EECu;
            // 0x1f1ef0: 0xe6600090  swc1        $f0, 0x90($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 144), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0210u;
    if (runtime->hasFunction(0x1F0210u)) {
        auto targetFn = runtime->lookupFunction(0x1F0210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1EF4u; }
        if (ctx->pc != 0x1F1EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0210_0x1f0210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1EF4u; }
        if (ctx->pc != 0x1F1EF4u) { return; }
    }
    ctx->pc = 0x1F1EF4u;
    // 0x1f1ef4: 0xc66000d0  lwc1        $f0, 0xD0($s3)
    ctx->pc = 0x1f1ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1ef8: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1f1ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1f1efc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f1efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f1f00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f1f00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f1f04: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x1F1F04u;
    SET_GPR_U32(ctx, 31, 0x1F1F0Cu);
    ctx->pc = 0x1F1F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1F04u;
            // 0x1f1f08: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1F0Cu; }
        if (ctx->pc != 0x1F1F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1F0Cu; }
        if (ctx->pc != 0x1F1F0Cu) { return; }
    }
    ctx->pc = 0x1F1F0Cu;
    // 0x1f1f0c: 0xc7a101b0  lwc1        $f1, 0x1B0($sp)
    ctx->pc = 0x1f1f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1f10: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1f1f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1f1f14: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f1f14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f1f18: 0x46010543  div.s       $f21, $f0, $f1
    ctx->pc = 0x1f1f18u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[21] = ctx->f[0] / ctx->f[1];
    // 0x1f1f1c: 0xc68c0028  lwc1        $f12, 0x28($s4)
    ctx->pc = 0x1f1f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f1f20: 0x4614ad02  mul.s       $f20, $f21, $f20
    ctx->pc = 0x1f1f20u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x1f1f24: 0xc060f2a  jal         func_183CA8
    ctx->pc = 0x1F1F24u;
    SET_GPR_U32(ctx, 31, 0x1F1F2Cu);
    ctx->pc = 0x1F1F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1F24u;
            // 0x1f1f28: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183CA8u;
    if (runtime->hasFunction(0x183CA8u)) {
        auto targetFn = runtime->lookupFunction(0x183CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1F2Cu; }
        if (ctx->pc != 0x1F1F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183ca8_0x183d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1F2Cu; }
        if (ctx->pc != 0x1F1F2Cu) { return; }
    }
    ctx->pc = 0x1F1F2Cu;
    // 0x1f1f2c: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x1f1f2cu;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x1f1f30: 0xc68c002c  lwc1        $f12, 0x2C($s4)
    ctx->pc = 0x1f1f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f1f34: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x1f1f34u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x1f1f38: 0xc060f2a  jal         func_183CA8
    ctx->pc = 0x1F1F38u;
    SET_GPR_U32(ctx, 31, 0x1F1F40u);
    ctx->pc = 0x1F1F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1F38u;
            // 0x1f1f3c: 0x46170642  mul.s       $f25, $f0, $f23 (Delay Slot)
        ctx->f[25] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183CA8u;
    if (runtime->hasFunction(0x183CA8u)) {
        auto targetFn = runtime->lookupFunction(0x183CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1F40u; }
        if (ctx->pc != 0x1F1F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183ca8_0x183d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1F40u; }
        if (ctx->pc != 0x1F1F40u) { return; }
    }
    ctx->pc = 0x1F1F40u;
    // 0x1f1f40: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x1f1f40u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x1f1f44: 0xc68c0030  lwc1        $f12, 0x30($s4)
    ctx->pc = 0x1f1f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f1f48: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x1f1f48u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x1f1f4c: 0xc060f2a  jal         func_183CA8
    ctx->pc = 0x1F1F4Cu;
    SET_GPR_U32(ctx, 31, 0x1F1F54u);
    ctx->pc = 0x1F1F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1F4Cu;
            // 0x1f1f50: 0x46170602  mul.s       $f24, $f0, $f23 (Delay Slot)
        ctx->f[24] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183CA8u;
    if (runtime->hasFunction(0x183CA8u)) {
        auto targetFn = runtime->lookupFunction(0x183CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1F54u; }
        if (ctx->pc != 0x1F1F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183ca8_0x183d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1F54u; }
        if (ctx->pc != 0x1F1F54u) { return; }
    }
    ctx->pc = 0x1F1F54u;
    // 0x1f1f54: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x1f1f54u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x1f1f58: 0xc68c0034  lwc1        $f12, 0x34($s4)
    ctx->pc = 0x1f1f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f1f5c: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x1f1f5cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x1f1f60: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x1f1f60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x1f1f64: 0xc060f2a  jal         func_183CA8
    ctx->pc = 0x1F1F64u;
    SET_GPR_U32(ctx, 31, 0x1F1F6Cu);
    ctx->pc = 0x1F1F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1F64u;
            // 0x1f1f68: 0x46000507  neg.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183CA8u;
    if (runtime->hasFunction(0x183CA8u)) {
        auto targetFn = runtime->lookupFunction(0x183CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1F6Cu; }
        if (ctx->pc != 0x1F1F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183ca8_0x183d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1F6Cu; }
        if (ctx->pc != 0x1F1F6Cu) { return; }
    }
    ctx->pc = 0x1F1F6Cu;
    // 0x1f1f6c: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x1f1f6cu;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x1f1f70: 0x4618c834  c.lt.s      $f25, $f24
    ctx->pc = 0x1f1f70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1f74: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x1f1f74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x1f1f78: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1F78u;
    {
        const bool branch_taken_0x1f1f78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F1F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1F78u;
            // 0x1f1f7c: 0x46000087  neg.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f78) {
            ctx->pc = 0x1F1F88u;
            goto label_1f1f88;
        }
    }
    ctx->pc = 0x1F1F80u;
    // 0x1f1f80: 0x4600ce06  mov.s       $f24, $f25
    ctx->pc = 0x1f1f80u;
    ctx->f[24] = FPU_MOV_S(ctx->f[25]);
    // 0x1f1f84: 0x0  nop
    ctx->pc = 0x1f1f84u;
    // NOP
label_1f1f88:
    // 0x1f1f88: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x1f1f88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1f8c: 0x0  nop
    ctx->pc = 0x1f1f8cu;
    // NOP
    // 0x1f1f90: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F1F90u;
    {
        const bool branch_taken_0x1f1f90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f1f90) {
            ctx->pc = 0x1F1F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1F90u;
            // 0x1f1f94: 0x4600a086  mov.s       $f2, $f20 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1F98u;
            goto label_1f1f98;
        }
    }
    ctx->pc = 0x1F1F98u;
label_1f1f98:
    // 0x1f1f98: 0xc660008c  lwc1        $f0, 0x8C($s3)
    ctx->pc = 0x1f1f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1f9c: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x1f1f9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1fa0: 0x0  nop
    ctx->pc = 0x1f1fa0u;
    // NOP
    // 0x1f1fa4: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
    ctx->pc = 0x1F1FA4u;
    {
        const bool branch_taken_0x1f1fa4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f1fa4) {
            ctx->pc = 0x1F1FA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1FA4u;
            // 0x1f1fa8: 0x46180068  max.s       $f1, $f0, $f24 (Delay Slot)
        ctx->f[1] = std::max(ctx->f[0], ctx->f[24]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1FE8u;
            goto label_1f1fe8;
        }
    }
    ctx->pc = 0x1F1FACu;
    // 0x1f1fac: 0x4600c834  c.lt.s      $f25, $f0
    ctx->pc = 0x1f1facu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1fb0: 0x0  nop
    ctx->pc = 0x1f1fb0u;
    // NOP
    // 0x1f1fb4: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
    ctx->pc = 0x1F1FB4u;
    {
        const bool branch_taken_0x1f1fb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f1fb4) {
            ctx->pc = 0x1F1FB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1FB4u;
            // 0x1f1fb8: 0x46180068  max.s       $f1, $f0, $f24 (Delay Slot)
        ctx->f[1] = std::max(ctx->f[0], ctx->f[24]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1FE8u;
            goto label_1f1fe8;
        }
    }
    ctx->pc = 0x1F1FBCu;
    // 0x1f1fbc: 0xc6610088  lwc1        $f1, 0x88($s3)
    ctx->pc = 0x1f1fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1fc0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1f1fc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1fc4: 0x0  nop
    ctx->pc = 0x1f1fc4u;
    // NOP
    // 0x1f1fc8: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1FC8u;
    {
        const bool branch_taken_0x1f1fc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f1fc8) {
            ctx->pc = 0x1F1FCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1FC8u;
            // 0x1f1fcc: 0x46180068  max.s       $f1, $f0, $f24 (Delay Slot)
        ctx->f[1] = std::max(ctx->f[0], ctx->f[24]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1FE8u;
            goto label_1f1fe8;
        }
    }
    ctx->pc = 0x1F1FD0u;
    // 0x1f1fd0: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1f1fd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1fd4: 0x0  nop
    ctx->pc = 0x1f1fd4u;
    // NOP
    // 0x1f1fd8: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x1F1FD8u;
    {
        const bool branch_taken_0x1f1fd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f1fd8) {
            ctx->pc = 0x1F1FDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1FD8u;
            // 0x1f1fdc: 0x86820008  lh          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2010u;
            goto label_1f2010;
        }
    }
    ctx->pc = 0x1F1FE0u;
    // 0x1f1fe0: 0x46180068  max.s       $f1, $f0, $f24
    ctx->pc = 0x1f1fe0u;
    ctx->f[1] = std::max(ctx->f[0], ctx->f[24]);
    // 0x1f1fe4: 0x0  nop
    ctx->pc = 0x1f1fe4u;
    // NOP
label_1f1fe8:
    // 0x1f1fe8: 0x46190869  min.s       $f1, $f1, $f25
    ctx->pc = 0x1f1fe8u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[25]);
    // 0x1f1fec: 0xc6600088  lwc1        $f0, 0x88($s3)
    ctx->pc = 0x1f1fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1ff0: 0xe661008c  swc1        $f1, 0x8C($s3)
    ctx->pc = 0x1f1ff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 140), bits); }
    // 0x1f1ff4: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x1f1ff4u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x1f1ff8: 0x46140029  min.s       $f0, $f0, $f20
    ctx->pc = 0x1f1ff8u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[20]);
    // 0x1f1ffc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f1ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2000: 0xe6600088  swc1        $f0, 0x88($s3)
    ctx->pc = 0x1f2000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 136), bits); }
    // 0x1f2004: 0xc07c154  jal         func_1F0550
    ctx->pc = 0x1F2004u;
    SET_GPR_U32(ctx, 31, 0x1F200Cu);
    ctx->pc = 0x1F2008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2004u;
            // 0x1f2008: 0x26650070  addiu       $a1, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0550u;
    if (runtime->hasFunction(0x1F0550u)) {
        auto targetFn = runtime->lookupFunction(0x1F0550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F200Cu; }
        if (ctx->pc != 0x1F200Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0550_0x1f0550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F200Cu; }
        if (ctx->pc != 0x1F200Cu) { return; }
    }
    ctx->pc = 0x1F200Cu;
    // 0x1f200c: 0x86820008  lh          $v0, 0x8($s4)
    ctx->pc = 0x1f200cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
label_1f2010:
    // 0x1f2010: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1f2010u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2014: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f2014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f2018: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2018u;
    {
        const bool branch_taken_0x1f2018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F201Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2018u;
            // 0x1f201c: 0x96840008  lhu         $a0, 0x8($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2018) {
            ctx->pc = 0x1F202Cu;
            goto label_1f202c;
        }
    }
    ctx->pc = 0x1F2020u;
    // 0x1f2020: 0x8682000a  lh          $v0, 0xA($s4)
    ctx->pc = 0x1f2020u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x1f2024: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2024u;
    {
        const bool branch_taken_0x1f2024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F2028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2024u;
            // 0x1f2028: 0x41400  sll         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2024) {
            ctx->pc = 0x1F2034u;
            goto label_1f2034;
        }
    }
    ctx->pc = 0x1F202Cu;
label_1f202c:
    // 0x1f202c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1f202cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2030: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x1f2030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_1f2034:
    // 0x1f2034: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1f2034u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1f2038: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f2038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f203c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F203Cu;
    {
        const bool branch_taken_0x1f203c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F2040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F203Cu;
            // 0x1f2040: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f203c) {
            ctx->pc = 0x1F2050u;
            goto label_1f2050;
        }
    }
    ctx->pc = 0x1F2044u;
    // 0x1f2044: 0x8682000a  lh          $v0, 0xA($s4)
    ctx->pc = 0x1f2044u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x1f2048: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2048u;
    {
        const bool branch_taken_0x1f2048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F204Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2048u;
            // 0x1f204c: 0x41400  sll         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2048) {
            ctx->pc = 0x1F2058u;
            goto label_1f2058;
        }
    }
    ctx->pc = 0x1F2050u;
label_1f2050:
    // 0x1f2050: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1f2050u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2054: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x1f2054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_1f2058:
    // 0x1f2058: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1f2058u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1f205c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f205cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2060: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2060u;
    {
        const bool branch_taken_0x1f2060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F2064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2060u;
            // 0x1f2064: 0xafa00290  sw          $zero, 0x290($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2060) {
            ctx->pc = 0x1F2074u;
            goto label_1f2074;
        }
    }
    ctx->pc = 0x1F2068u;
    // 0x1f2068: 0x8682000a  lh          $v0, 0xA($s4)
    ctx->pc = 0x1f2068u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x1f206c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F206Cu;
    {
        const bool branch_taken_0x1f206c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f206c) {
            ctx->pc = 0x1F207Cu;
            goto label_1f207c;
        }
    }
    ctx->pc = 0x1F2074u;
label_1f2074:
    // 0x1f2074: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f2074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2078: 0xafa70290  sw          $a3, 0x290($sp)
    ctx->pc = 0x1f2078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 7));
label_1f207c:
    // 0x1f207c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F207Cu;
    {
        const bool branch_taken_0x1f207c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F207Cu;
            // 0x1f2080: 0xafa00294  sw          $zero, 0x294($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f207c) {
            ctx->pc = 0x1F2090u;
            goto label_1f2090;
        }
    }
    ctx->pc = 0x1F2084u;
    // 0x1f2084: 0x8682000a  lh          $v0, 0xA($s4)
    ctx->pc = 0x1f2084u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x1f2088: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2088u;
    {
        const bool branch_taken_0x1f2088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2088) {
            ctx->pc = 0x1F208Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2088u;
            // 0x1f208c: 0xc66c0088  lwc1        $f12, 0x88($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F209Cu;
            goto label_1f209c;
        }
    }
    ctx->pc = 0x1F2090u;
label_1f2090:
    // 0x1f2090: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f2090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2094: 0xafa80294  sw          $t0, 0x294($sp)
    ctx->pc = 0x1f2094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 8));
    // 0x1f2098: 0xc66c0088  lwc1        $f12, 0x88($s3)
    ctx->pc = 0x1f2098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f209c:
    // 0x1f209c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1f209cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1f20a0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f20a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f20a4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1f20a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1f20a8: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1f20a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1f20ac: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1f20acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1f20b0: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x1f20b0u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x1f20b4: 0x7a620030  lq          $v0, 0x30($s3)
    ctx->pc = 0x1f20b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1f20b8: 0x7fa202a0  sq          $v0, 0x2A0($sp)
    ctx->pc = 0x1f20b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 2));
    // 0x1f20bc: 0xc060e52  jal         func_183948
    ctx->pc = 0x1F20BCu;
    SET_GPR_U32(ctx, 31, 0x1F20C4u);
    ctx->pc = 0x1F20C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F20BCu;
            // 0x1f20c0: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183948u;
    if (runtime->hasFunction(0x183948u)) {
        auto targetFn = runtime->lookupFunction(0x183948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F20C4u; }
        if (ctx->pc != 0x1F20C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183948_0x183a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F20C4u; }
        if (ctx->pc != 0x1F20C4u) { return; }
    }
    ctx->pc = 0x1F20C4u;
    // 0x1f20c4: 0xc66c008c  lwc1        $f12, 0x8C($s3)
    ctx->pc = 0x1f20c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f20c8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1f20c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1f20cc: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x1f20ccu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x1f20d0: 0xc060e52  jal         func_183948
    ctx->pc = 0x1F20D0u;
    SET_GPR_U32(ctx, 31, 0x1F20D8u);
    ctx->pc = 0x1F20D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F20D0u;
            // 0x1f20d4: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183948u;
    if (runtime->hasFunction(0x183948u)) {
        auto targetFn = runtime->lookupFunction(0x183948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F20D8u; }
        if (ctx->pc != 0x1F20D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183948_0x183a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F20D8u; }
        if (ctx->pc != 0x1F20D8u) { return; }
    }
    ctx->pc = 0x1F20D8u;
    // 0x1f20d8: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1f20d8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1f20dc: 0xda620020  lqc2        $vf2, 0x20($s3)
    ctx->pc = 0x1f20dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1f20e0: 0xc6600090  lwc1        $f0, 0x90($s3)
    ctx->pc = 0x1f20e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f20e4: 0xda630030  lqc2        $vf3, 0x30($s3)
    ctx->pc = 0x1f20e4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1f20e8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1f20e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1f20ec: 0xfba201c0  sqc2        $vf2, 0x1C0($sp)
    ctx->pc = 0x1f20ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f20f0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1f20f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1f20f4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1f20f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1f20f8: 0x4be11058  vmulx.xyzw  $vf1, $vf2, $vf1x
    ctx->pc = 0x1f20f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f20fc: 0x4be1192c  vsub.xyzw   $vf4, $vf3, $vf1
    ctx->pc = 0x1f20fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f2100: 0xfba402b0  sqc2        $vf4, 0x2B0($sp)
    ctx->pc = 0x1f2100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f2104: 0x7bb102b0  lq          $s1, 0x2B0($sp)
    ctx->pc = 0x1f2104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1f2108: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1f2108u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f210c: 0xfba201d0  sqc2        $vf2, 0x1D0($sp)
    ctx->pc = 0x1f210cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f2110: 0xfba102c0  sqc2        $vf1, 0x2C0($sp)
    ctx->pc = 0x1f2110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f2114: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1f2114u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f2118: 0xfba302d0  sqc2        $vf3, 0x2D0($sp)
    ctx->pc = 0x1f2118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f211c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f211cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f2120: 0x8e700040  lw          $s0, 0x40($s3)
    ctx->pc = 0x1f2120u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1f2124: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1f2124u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1f2128: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2128u;
    {
        const bool branch_taken_0x1f2128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F212Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2128u;
            // 0x1f212c: 0x7a720010  lq          $s2, 0x10($s3) (Delay Slot)
        SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2128) {
            ctx->pc = 0x1F2138u;
            goto label_1f2138;
        }
    }
    ctx->pc = 0x1F2130u;
    // 0x1f2130: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F2130u;
    {
        const bool branch_taken_0x1f2130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2130u;
            // 0x1f2134: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2130) {
            ctx->pc = 0x1F2158u;
            goto label_1f2158;
        }
    }
    ctx->pc = 0x1F2138u;
label_1f2138:
    // 0x1f2138: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f2138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f213c: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1f213cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1f2140: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1f2140u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1f2144: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2144u;
    {
        const bool branch_taken_0x1f2144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F2148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2144u;
            // 0x1f2148: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2144) {
            ctx->pc = 0x1F2158u;
            goto label_1f2158;
        }
    }
    ctx->pc = 0x1F214Cu;
    // 0x1f214c: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1F214Cu;
    SET_GPR_U32(ctx, 31, 0x1F2154u);
    ctx->pc = 0x1F2150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F214Cu;
            // 0x1f2150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2154u; }
        if (ctx->pc != 0x1F2154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2154u; }
        if (ctx->pc != 0x1F2154u) { return; }
    }
    ctx->pc = 0x1F2154u;
    // 0x1f2154: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1f2154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1f2158:
    // 0x1f2158: 0xd8810020  lqc2        $vf1, 0x20($a0)
    ctx->pc = 0x1f2158u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1f215c: 0x78950010  lq          $s5, 0x10($a0)
    ctx->pc = 0x1f215cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1f2160: 0xfba101e0  sqc2        $vf1, 0x1E0($sp)
    ctx->pc = 0x1f2160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f2164: 0xdba402c0  lqc2        $vf4, 0x2C0($sp)
    ctx->pc = 0x1f2164u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x1f2168: 0x4be1212c  vsub.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x1f2168u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f216c: 0xfba402e0  sqc2        $vf4, 0x2E0($sp)
    ctx->pc = 0x1f216cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f2170: 0x78840030  lq          $a0, 0x30($a0)
    ctx->pc = 0x1f2170u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f2174: 0x7fa402f0  sq          $a0, 0x2F0($sp)
    ctx->pc = 0x1f2174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 4));
    // 0x1f2178: 0x8e640044  lw          $a0, 0x44($s3)
    ctx->pc = 0x1f2178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1f217c: 0x50800098  beql        $a0, $zero, . + 4 + (0x98 << 2)
    ctx->pc = 0x1F217Cu;
    {
        const bool branch_taken_0x1f217c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f217c) {
            ctx->pc = 0x1F2180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F217Cu;
            // 0x1f2180: 0xc6810024  lwc1        $f1, 0x24($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F23E0u;
            goto label_1f23e0;
        }
    }
    ctx->pc = 0x1F2184u;
    // 0x1f2184: 0x12c00094  beqz        $s6, . + 4 + (0x94 << 2)
    ctx->pc = 0x1F2184u;
    {
        const bool branch_taken_0x1f2184 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2184u;
            // 0x1f2188: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2184) {
            ctx->pc = 0x1F23D8u;
            goto label_1f23d8;
        }
    }
    ctx->pc = 0x1F218Cu;
    // 0x1f218c: 0x8c42e29c  lw          $v0, -0x1D64($v0)
    ctx->pc = 0x1f218cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959772)));
    // 0x1f2190: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F2190u;
    {
        const bool branch_taken_0x1f2190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2190u;
            // 0x1f2194: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2190) {
            ctx->pc = 0x1F21B0u;
            goto label_1f21b0;
        }
    }
    ctx->pc = 0x1F2198u;
    // 0x1f2198: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1f2198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1f219c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f219cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1f21a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f21a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f21a4: 0xc04f8da  jal         func_13E368
    ctx->pc = 0x1F21A4u;
    SET_GPR_U32(ctx, 31, 0x1F21ACu);
    ctx->pc = 0x1F21A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F21A4u;
            // 0x1f21a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E368u;
    if (runtime->hasFunction(0x13E368u)) {
        auto targetFn = runtime->lookupFunction(0x13E368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F21ACu; }
        if (ctx->pc != 0x1F21ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e368_0x13e370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F21ACu; }
        if (ctx->pc != 0x1F21ACu) { return; }
    }
    ctx->pc = 0x1F21ACu;
    // 0x1f21ac: 0x0  nop
    ctx->pc = 0x1f21acu;
    // NOP
label_1f21b0:
    // 0x1f21b0: 0xc6750048  lwc1        $f21, 0x48($s3)
    ctx->pc = 0x1f21b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f21b4: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1f21b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1f21b8: 0x4616a834  c.lt.s      $f21, $f22
    ctx->pc = 0x1f21b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f21bc: 0x0  nop
    ctx->pc = 0x1f21bcu;
    // NOP
    // 0x1f21c0: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1F21C0u;
    {
        const bool branch_taken_0x1f21c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F21C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F21C0u;
            // 0x1f21c4: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f21c0) {
            ctx->pc = 0x1F2208u;
            goto label_1f2208;
        }
    }
    ctx->pc = 0x1F21C8u;
    // 0x1f21c8: 0xc660004c  lwc1        $f0, 0x4C($s3)
    ctx->pc = 0x1f21c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f21cc: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x1f21ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f21d0: 0x0  nop
    ctx->pc = 0x1f21d0u;
    // NOP
    // 0x1f21d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1F21D4u;
    {
        const bool branch_taken_0x1f21d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F21D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F21D4u;
            // 0x1f21d8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f21d4) {
            ctx->pc = 0x1F21E0u;
            goto label_1f21e0;
        }
    }
    ctx->pc = 0x1F21DCu;
    // 0x1f21dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f21dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f21e0:
    // 0x1f21e0: 0x8e640040  lw          $a0, 0x40($s3)
    ctx->pc = 0x1f21e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1f21e4: 0x701134a9  por         $a2, $zero, $s1
    ctx->pc = 0x1f21e4u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 17)));
    // 0x1f21e8: 0x8e650044  lw          $a1, 0x44($s3)
    ctx->pc = 0x1f21e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1f21ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f21ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f21f0: 0x7ba802d0  lq          $t0, 0x2D0($sp)
    ctx->pc = 0x1f21f0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1f21f4: 0xc07c54e  jal         func_1F1538
    ctx->pc = 0x1F21F4u;
    SET_GPR_U32(ctx, 31, 0x1F21FCu);
    ctx->pc = 0x1F21F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F21F4u;
            // 0x1f21f8: 0x7ba702a0  lq          $a3, 0x2A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 672)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1538u;
    if (runtime->hasFunction(0x1F1538u)) {
        auto targetFn = runtime->lookupFunction(0x1F1538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F21FCu; }
        if (ctx->pc != 0x1F21FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1538_0x1f1538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F21FCu; }
        if (ctx->pc != 0x1F21FCu) { return; }
    }
    ctx->pc = 0x1F21FCu;
    // 0x1f21fc: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1F21FCu;
    {
        const bool branch_taken_0x1f21fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F21FCu;
            // 0x1f2200: 0xe6600048  swc1        $f0, 0x48($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f21fc) {
            ctx->pc = 0x1F22ECu;
            goto label_1f22ec;
        }
    }
    ctx->pc = 0x1F2204u;
    // 0x1f2204: 0x0  nop
    ctx->pc = 0x1f2204u;
    // NOP
label_1f2208:
    // 0x1f2208: 0x8e640040  lw          $a0, 0x40($s3)
    ctx->pc = 0x1f2208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1f220c: 0x8e650044  lw          $a1, 0x44($s3)
    ctx->pc = 0x1f220cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1f2210: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f2210u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f2214: 0x7ba602b0  lq          $a2, 0x2B0($sp)
    ctx->pc = 0x1f2214u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1f2218: 0xc07c3ba  jal         func_1F0EE8
    ctx->pc = 0x1F2218u;
    SET_GPR_U32(ctx, 31, 0x1F2220u);
    ctx->pc = 0x1F221Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2218u;
            // 0x1f221c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0EE8u;
    if (runtime->hasFunction(0x1F0EE8u)) {
        auto targetFn = runtime->lookupFunction(0x1F0EE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2220u; }
        if (ctx->pc != 0x1F2220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0EE8_0x1f0ee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2220u; }
        if (ctx->pc != 0x1F2220u) { return; }
    }
    ctx->pc = 0x1F2220u;
    // 0x1f2220: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x1f2220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1f2224: 0x46140081  sub.s       $f2, $f0, $f20
    ctx->pc = 0x1f2224u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1f2228: 0x46001105  abs.s       $f4, $f2
    ctx->pc = 0x1f2228u;
    ctx->f[4] = FPU_ABS_S(ctx->f[2]);
    // 0x1f222c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f222cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f2230: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x1f2230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1f2234: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f2234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f2238: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1f2238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f223c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f223cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f2240: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1f2240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1f2244: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F2244u;
    {
        const bool branch_taken_0x1f2244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2244u;
            // 0x1f2248: 0xc443fffc  lwc1        $f3, -0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2244) {
            ctx->pc = 0x1F22D0u;
            goto label_1f22d0;
        }
    }
    ctx->pc = 0x1F224Cu;
    // 0x1f224c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f224cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f2250: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f2250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2254: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1f2254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1f2258: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x1f2258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f225c: 0x0  nop
    ctx->pc = 0x1f225cu;
    // NOP
    // 0x1f2260: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
    ctx->pc = 0x1F2260u;
    {
        const bool branch_taken_0x1f2260 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f2260) {
            ctx->pc = 0x1F2264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2260u;
            // 0x1f2264: 0xc6810038  lwc1        $f1, 0x38($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F22D4u;
            goto label_1f22d4;
        }
    }
    ctx->pc = 0x1F2268u;
    // 0x1f2268: 0x4602b034  c.lt.s      $f22, $f2
    ctx->pc = 0x1f2268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f226c: 0x0  nop
    ctx->pc = 0x1f226cu;
    // NOP
    // 0x1f2270: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1F2270u;
    {
        const bool branch_taken_0x1f2270 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F2274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2270u;
            // 0x1f2274: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2270) {
            ctx->pc = 0x1F227Cu;
            goto label_1f227c;
        }
    }
    ctx->pc = 0x1F2278u;
    // 0x1f2278: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f2278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f227c:
    // 0x1f227c: 0xc6810038  lwc1        $f1, 0x38($s4)
    ctx->pc = 0x1f227cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2280: 0x46041881  sub.s       $f2, $f3, $f4
    ctx->pc = 0x1f2280u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x1f2284: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f2284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f2288: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f2288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f228c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f228cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f2290: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2290u;
    {
        const bool branch_taken_0x1f2290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2290u;
            // 0x1f2294: 0x46001082  mul.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2290) {
            ctx->pc = 0x1F22A0u;
            goto label_1f22a0;
        }
    }
    ctx->pc = 0x1F2298u;
    // 0x1f2298: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F2298u;
    {
        const bool branch_taken_0x1f2298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F229Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2298u;
            // 0x1f229c: 0x4602a501  sub.s       $f20, $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2298) {
            ctx->pc = 0x1F22A4u;
            goto label_1f22a4;
        }
    }
    ctx->pc = 0x1F22A0u;
label_1f22a0:
    // 0x1f22a0: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x1f22a0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
label_1f22a4:
    // 0x1f22a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f22a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f22a8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1f22a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f22ac: 0x0  nop
    ctx->pc = 0x1f22acu;
    // NOP
    // 0x1f22b0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F22B0u;
    {
        const bool branch_taken_0x1f22b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f22b0) {
            ctx->pc = 0x1F22B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F22B0u;
            // 0x1f22b4: 0x4603a500  add.s       $f20, $f20, $f3 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F22B8u;
            goto label_1f22b8;
        }
    }
    ctx->pc = 0x1F22B8u;
label_1f22b8:
    // 0x1f22b8: 0x46141834  c.lt.s      $f3, $f20
    ctx->pc = 0x1f22b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f22bc: 0x0  nop
    ctx->pc = 0x1f22bcu;
    // NOP
    // 0x1f22c0: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1F22C0u;
    {
        const bool branch_taken_0x1f22c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f22c0) {
            ctx->pc = 0x1F22C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F22C0u;
            // 0x1f22c4: 0x4603a501  sub.s       $f20, $f20, $f3 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F22E8u;
            goto label_1f22e8;
        }
    }
    ctx->pc = 0x1F22C8u;
    // 0x1f22c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F22C8u;
    {
        const bool branch_taken_0x1f22c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F22CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F22C8u;
            // 0x1f22cc: 0xe6740048  swc1        $f20, 0x48($s3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f22c8) {
            ctx->pc = 0x1F22ECu;
            goto label_1f22ec;
        }
    }
    ctx->pc = 0x1F22D0u;
label_1f22d0:
    // 0x1f22d0: 0xc6810038  lwc1        $f1, 0x38($s4)
    ctx->pc = 0x1f22d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f22d4:
    // 0x1f22d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f22d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f22d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f22d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f22dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f22dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f22e0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1f22e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1f22e4: 0x4600ad00  add.s       $f20, $f21, $f0
    ctx->pc = 0x1f22e4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_1f22e8:
    // 0x1f22e8: 0xe6740048  swc1        $f20, 0x48($s3)
    ctx->pc = 0x1f22e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
label_1f22ec:
    // 0x1f22ec: 0xc6620048  lwc1        $f2, 0x48($s3)
    ctx->pc = 0x1f22ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f22f0: 0x8e660044  lw          $a2, 0x44($s3)
    ctx->pc = 0x1f22f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1f22f4: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x1f22f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1f22f8: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x1f22f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1f22fc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f22fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f2300: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1f2300u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x1f2304: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1f2304u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1f2308: 0x70471b89  pcpyld      $v1, $v0, $a3
    ctx->pc = 0x1f2308u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x1f230c: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x1f230cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1f2310: 0x71071389  pcpyld      $v0, $t0, $a3
    ctx->pc = 0x1f2310u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x1f2314: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1f2314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f2318: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1f2318u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1f231c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f231cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2320: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1f2320u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f2324: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1f2324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f2328: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1f2328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1f232c: 0x18800013  blez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F232Cu;
    {
        const bool branch_taken_0x1f232c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1F2330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F232Cu;
            // 0x1f2330: 0x7fa201f0  sq          $v0, 0x1F0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f232c) {
            ctx->pc = 0x1F237Cu;
            goto label_1f237c;
        }
    }
    ctx->pc = 0x1F2334u;
    // 0x1f2334: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1f2334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1f2338: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1f2338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f233c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f233cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2340: 0x0  nop
    ctx->pc = 0x1f2340u;
    // NOP
    // 0x1f2344: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
    ctx->pc = 0x1F2344u;
    {
        const bool branch_taken_0x1f2344 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f2344) {
            ctx->pc = 0x1F2348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2344u;
            // 0x1f2348: 0x8cc30008  lw          $v1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2380u;
            goto label_1f2380;
        }
    }
    ctx->pc = 0x1F234Cu;
    // 0x1f234c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f234cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f2350:
    // 0x1f2350: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f2350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f2354: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f2354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f2358: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1f2358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f235c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F235Cu;
    {
        const bool branch_taken_0x1f235c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F235Cu;
            // 0x1f2360: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f235c) {
            ctx->pc = 0x1F237Cu;
            goto label_1f237c;
        }
    }
    ctx->pc = 0x1F2364u;
    // 0x1f2364: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f2364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f2368: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1f2368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f236c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f236cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2370: 0x0  nop
    ctx->pc = 0x1f2370u;
    // NOP
    // 0x1f2374: 0x4502fff6  bc1fl       . + 4 + (-0xA << 2)
    ctx->pc = 0x1F2374u;
    {
        const bool branch_taken_0x1f2374 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f2374) {
            ctx->pc = 0x1F2378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2374u;
            // 0x1f2378: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2350u;
            runtime->cooperativeGuestYield();
            goto label_1f2350;
        }
    }
    ctx->pc = 0x1F237Cu;
label_1f237c:
    // 0x1f237c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1f237cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1f2380:
    // 0x1f2380: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x1f2380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1f2384: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f2384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f2388: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f2388u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f238c: 0x4be309bc  vmulax.xyzw $ACC, $vf1, $vf3x
    ctx->pc = 0x1f238cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f2390: 0xd8420030  lqc2        $vf2, 0x30($v0)
    ctx->pc = 0x1f2390u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f2394: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1f2394u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f2398: 0x4be308bd  vmadday.xyzw $ACC, $vf1, $vf3y
    ctx->pc = 0x1f2398u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f239c: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1f239cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1f23a0: 0x4be308be  vmaddaz.xyzw $ACC, $vf1, $vf3z
    ctx->pc = 0x1f23a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f23a4: 0x4be3108b  vmaddw.xyzw $vf2, $vf2, $vf3w
    ctx->pc = 0x1f23a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f23a8: 0xfba20200  sqc2        $vf2, 0x200($sp)
    ctx->pc = 0x1f23a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f23ac: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x1f23acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f23b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f23b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f23b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f23b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f23b8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1f23b8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f23bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f23bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f23c0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f23c0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1f23c4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1f23c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1f23c8: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x1f23c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1f23cc: 0x4be110d8  vmulx.xyzw  $vf3, $vf2, $vf1x
    ctx->pc = 0x1f23ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f23d0: 0xfba302f0  sqc2        $vf3, 0x2F0($sp)
    ctx->pc = 0x1f23d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f23d4: 0x0  nop
    ctx->pc = 0x1f23d4u;
    // NOP
label_1f23d8:
    // 0x1f23d8: 0xc6810024  lwc1        $f1, 0x24($s4)
    ctx->pc = 0x1f23d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f23dc: 0x0  nop
    ctx->pc = 0x1f23dcu;
    // NOP
label_1f23e0:
    // 0x1f23e0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1f23e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1f23e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f23e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f23e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f23e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f23ec: 0x0  nop
    ctx->pc = 0x1f23ecu;
    // NOP
    // 0x1f23f0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F23F0u;
    {
        const bool branch_taken_0x1f23f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F23F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F23F0u;
            // 0x1f23f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f23f0) {
            ctx->pc = 0x1F2414u;
            goto label_1f2414;
        }
    }
    ctx->pc = 0x1F23F8u;
    // 0x1f23f8: 0xc6810020  lwc1        $f1, 0x20($s4)
    ctx->pc = 0x1f23f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f23fc: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x1f23fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x1f2400: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f2400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2404: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f2404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2408: 0x0  nop
    ctx->pc = 0x1f2408u;
    // NOP
    // 0x1f240c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F240Cu;
    {
        const bool branch_taken_0x1f240c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F2410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F240Cu;
            // 0x1f2410: 0x3c17002a  lui         $s7, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f240c) {
            ctx->pc = 0x1F241Cu;
            goto label_1f241c;
        }
    }
    ctx->pc = 0x1F2414u;
label_1f2414:
    // 0x1f2414: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1f2414u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2418: 0x3c17002a  lui         $s7, 0x2A
    ctx->pc = 0x1f2418u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)42 << 16));
label_1f241c:
    // 0x1f241c: 0xdba402b0  lqc2        $vf4, 0x2B0($sp)
    ctx->pc = 0x1f241cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1f2420: 0x8ee2e2a4  lw          $v0, -0x1D5C($s7)
    ctx->pc = 0x1f2420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294959780)));
    // 0x1f2424: 0xdba202f0  lqc2        $vf2, 0x2F0($sp)
    ctx->pc = 0x1f2424u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1f2428: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1f2428u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f242c: 0x4be2206c  vsub.xyzw   $vf1, $vf4, $vf2
    ctx->pc = 0x1f242cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f2430: 0xfba10210  sqc2        $vf1, 0x210($sp)
    ctx->pc = 0x1f2430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f2434: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f2434u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f2438: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x1f2438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f243c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f243cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2440: 0x0  nop
    ctx->pc = 0x1f2440u;
    // NOP
    // 0x1f2444: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2444u;
    {
        const bool branch_taken_0x1f2444 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F2448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2444u;
            // 0x1f2448: 0xdba302c0  lqc2        $vf3, 0x2C0($sp) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2444) {
            ctx->pc = 0x1F2458u;
            goto label_1f2458;
        }
    }
    ctx->pc = 0x1F244Cu;
    // 0x1f244c: 0x4be1186c  vsub.xyzw   $vf1, $vf3, $vf1
    ctx->pc = 0x1f244cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f2450: 0xfba10210  sqc2        $vf1, 0x210($sp)
    ctx->pc = 0x1f2450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f2454: 0x0  nop
    ctx->pc = 0x1f2454u;
    // NOP
label_1f2458:
    // 0x1f2458: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2458u;
    {
        const bool branch_taken_0x1f2458 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F245Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2458u;
            // 0x1f245c: 0x7ba40210  lq          $a0, 0x210($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2458) {
            ctx->pc = 0x1F246Cu;
            goto label_1f246c;
        }
    }
    ctx->pc = 0x1F2460u;
    // 0x1f2460: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F2460u;
    {
        const bool branch_taken_0x1f2460 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2460u;
            // 0x1f2464: 0x8fa20290  lw          $v0, 0x290($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2460) {
            ctx->pc = 0x1F2480u;
            goto label_1f2480;
        }
    }
    ctx->pc = 0x1F2468u;
    // 0x1f2468: 0x7ba40210  lq          $a0, 0x210($sp)
    ctx->pc = 0x1f2468u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_1f246c:
    // 0x1f246c: 0x70122ca9  por         $a1, $zero, $s2
    ctx->pc = 0x1f246cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 18)));
    // 0x1f2470: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x1f2470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1f2474: 0xc07c0ca  jal         func_1F0328
    ctx->pc = 0x1F2474u;
    SET_GPR_U32(ctx, 31, 0x1F247Cu);
    ctx->pc = 0x1F2478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2474u;
            // 0x1f2478: 0x27a70224  addiu       $a3, $sp, 0x224 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 548));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0328u;
    if (runtime->hasFunction(0x1F0328u)) {
        auto targetFn = runtime->lookupFunction(0x1F0328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F247Cu; }
        if (ctx->pc != 0x1F247Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0328_0x1f0328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F247Cu; }
        if (ctx->pc != 0x1F247Cu) { return; }
    }
    ctx->pc = 0x1F247Cu;
    // 0x1f247c: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1f247cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_1f2480:
    // 0x1f2480: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2480u;
    {
        const bool branch_taken_0x1f2480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2480u;
            // 0x1f2484: 0x7ba402e0  lq          $a0, 0x2E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2480) {
            ctx->pc = 0x1F2498u;
            goto label_1f2498;
        }
    }
    ctx->pc = 0x1F2488u;
    // 0x1f2488: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2488u;
    {
        const bool branch_taken_0x1f2488 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F248Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2488u;
            // 0x1f248c: 0x70152ca9  por         $a1, $zero, $s5 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2488) {
            ctx->pc = 0x1F249Cu;
            goto label_1f249c;
        }
    }
    ctx->pc = 0x1F2490u;
    // 0x1f2490: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F2490u;
    {
        const bool branch_taken_0x1f2490 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2490u;
            // 0x1f2494: 0x8fa30294  lw          $v1, 0x294($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2490) {
            ctx->pc = 0x1F24ACu;
            goto label_1f24ac;
        }
    }
    ctx->pc = 0x1F2498u;
label_1f2498:
    // 0x1f2498: 0x70152ca9  por         $a1, $zero, $s5
    ctx->pc = 0x1f2498u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 21)));
label_1f249c:
    // 0x1f249c: 0x27a60228  addiu       $a2, $sp, 0x228
    ctx->pc = 0x1f249cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
    // 0x1f24a0: 0xc07c0ca  jal         func_1F0328
    ctx->pc = 0x1F24A0u;
    SET_GPR_U32(ctx, 31, 0x1F24A8u);
    ctx->pc = 0x1F24A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F24A0u;
            // 0x1f24a4: 0x27a7022c  addiu       $a3, $sp, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 556));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0328u;
    if (runtime->hasFunction(0x1F0328u)) {
        auto targetFn = runtime->lookupFunction(0x1F0328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F24A8u; }
        if (ctx->pc != 0x1F24A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0328_0x1f0328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F24A8u; }
        if (ctx->pc != 0x1F24A8u) { return; }
    }
    ctx->pc = 0x1F24A8u;
    // 0x1f24a8: 0x8fa30294  lw          $v1, 0x294($sp)
    ctx->pc = 0x1f24a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
label_1f24ac:
    // 0x1f24ac: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F24ACu;
    {
        const bool branch_taken_0x1f24ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f24ac) {
            ctx->pc = 0x1F24B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F24ACu;
            // 0x1f24b0: 0x86830008  lh          $v1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F24F4u;
            goto label_1f24f4;
        }
    }
    ctx->pc = 0x1F24B4u;
    // 0x1f24b4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F24B4u;
    {
        const bool branch_taken_0x1f24b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F24B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F24B4u;
            // 0x1f24b8: 0xc7a00228  lwc1        $f0, 0x228($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f24b4) {
            ctx->pc = 0x1F24CCu;
            goto label_1f24cc;
        }
    }
    ctx->pc = 0x1F24BCu;
    // 0x1f24bc: 0xc7a1022c  lwc1        $f1, 0x22C($sp)
    ctx->pc = 0x1f24bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f24c0: 0xe7a00230  swc1        $f0, 0x230($sp)
    ctx->pc = 0x1f24c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x1f24c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F24C4u;
    {
        const bool branch_taken_0x1f24c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F24C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F24C4u;
            // 0x1f24c8: 0xe7a10234  swc1        $f1, 0x234($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f24c4) {
            ctx->pc = 0x1F24F0u;
            goto label_1f24f0;
        }
    }
    ctx->pc = 0x1F24CCu;
label_1f24cc:
    // 0x1f24cc: 0xdba102b0  lqc2        $vf1, 0x2B0($sp)
    ctx->pc = 0x1f24ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1f24d0: 0x70122ca9  por         $a1, $zero, $s2
    ctx->pc = 0x1f24d0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 18)));
    // 0x1f24d4: 0xdba202a0  lqc2        $vf2, 0x2A0($sp)
    ctx->pc = 0x1f24d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1f24d8: 0x27a60230  addiu       $a2, $sp, 0x230
    ctx->pc = 0x1f24d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1f24dc: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1f24dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f24e0: 0x27a70234  addiu       $a3, $sp, 0x234
    ctx->pc = 0x1f24e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 564));
    // 0x1f24e4: 0xc07c0ca  jal         func_1F0328
    ctx->pc = 0x1F24E4u;
    SET_GPR_U32(ctx, 31, 0x1F24ECu);
    ctx->pc = 0x1F24E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F24E4u;
            // 0x1f24e8: 0x48240800  qmfc2.ni    $a0, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0328u;
    if (runtime->hasFunction(0x1F0328u)) {
        auto targetFn = runtime->lookupFunction(0x1F0328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F24ECu; }
        if (ctx->pc != 0x1F24ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0328_0x1f0328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F24ECu; }
        if (ctx->pc != 0x1F24ECu) { return; }
    }
    ctx->pc = 0x1F24ECu;
    // 0x1f24ec: 0x0  nop
    ctx->pc = 0x1f24ecu;
    // NOP
label_1f24f0:
    // 0x1f24f0: 0x86830008  lh          $v1, 0x8($s4)
    ctx->pc = 0x1f24f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
label_1f24f4:
    // 0x1f24f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f24f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f24f8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F24F8u;
    {
        const bool branch_taken_0x1f24f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F24FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F24F8u;
            // 0x1f24fc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f24f8) {
            ctx->pc = 0x1F2528u;
            goto label_1f2528;
        }
    }
    ctx->pc = 0x1F2500u;
    // 0x1f2500: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2500u;
    {
        const bool branch_taken_0x1f2500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2500u;
            // 0x1f2504: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2500) {
            ctx->pc = 0x1F2518u;
            goto label_1f2518;
        }
    }
    ctx->pc = 0x1F2508u;
    // 0x1f2508: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F2508u;
    {
        const bool branch_taken_0x1f2508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F250Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2508u;
            // 0x1f250c: 0xc7a00234  lwc1        $f0, 0x234($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2508) {
            ctx->pc = 0x1F252Cu;
            goto label_1f252c;
        }
    }
    ctx->pc = 0x1F2510u;
    // 0x1f2510: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F2510u;
    {
        const bool branch_taken_0x1f2510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2510u;
            // 0x1f2514: 0x8683000a  lh          $v1, 0xA($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2510) {
            ctx->pc = 0x1F2534u;
            goto label_1f2534;
        }
    }
    ctx->pc = 0x1F2518u;
label_1f2518:
    // 0x1f2518: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2518u;
    {
        const bool branch_taken_0x1f2518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F251Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2518u;
            // 0x1f251c: 0xc7a00224  lwc1        $f0, 0x224($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2518) {
            ctx->pc = 0x1F2530u;
            goto label_1f2530;
        }
    }
    ctx->pc = 0x1F2520u;
    // 0x1f2520: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2520u;
    {
        const bool branch_taken_0x1f2520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2520u;
            // 0x1f2524: 0xe6600084  swc1        $f0, 0x84($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2520) {
            ctx->pc = 0x1F2530u;
            goto label_1f2530;
        }
    }
    ctx->pc = 0x1F2528u;
label_1f2528:
    // 0x1f2528: 0xc7a0022c  lwc1        $f0, 0x22C($sp)
    ctx->pc = 0x1f2528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f252c:
    // 0x1f252c: 0xe6600084  swc1        $f0, 0x84($s3)
    ctx->pc = 0x1f252cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
label_1f2530:
    // 0x1f2530: 0x8683000a  lh          $v1, 0xA($s4)
    ctx->pc = 0x1f2530u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
label_1f2534:
    // 0x1f2534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2538: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F2538u;
    {
        const bool branch_taken_0x1f2538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F253Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2538u;
            // 0x1f253c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2538) {
            ctx->pc = 0x1F2568u;
            goto label_1f2568;
        }
    }
    ctx->pc = 0x1F2540u;
    // 0x1f2540: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2540u;
    {
        const bool branch_taken_0x1f2540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2540) {
            ctx->pc = 0x1F2544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2540u;
            // 0x1f2544: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2558u;
            goto label_1f2558;
        }
    }
    ctx->pc = 0x1F2548u;
    // 0x1f2548: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F2548u;
    {
        const bool branch_taken_0x1f2548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F254Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2548u;
            // 0x1f254c: 0xc7a00230  lwc1        $f0, 0x230($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2548) {
            ctx->pc = 0x1F256Cu;
            goto label_1f256c;
        }
    }
    ctx->pc = 0x1F2550u;
    // 0x1f2550: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F2550u;
    {
        const bool branch_taken_0x1f2550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2550u;
            // 0x1f2554: 0x86830008  lh          $v1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2550) {
            ctx->pc = 0x1F2574u;
            goto label_1f2574;
        }
    }
    ctx->pc = 0x1F2558u;
label_1f2558:
    // 0x1f2558: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2558u;
    {
        const bool branch_taken_0x1f2558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F255Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2558u;
            // 0x1f255c: 0xc7a00220  lwc1        $f0, 0x220($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2558) {
            ctx->pc = 0x1F2570u;
            goto label_1f2570;
        }
    }
    ctx->pc = 0x1F2560u;
    // 0x1f2560: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2560u;
    {
        const bool branch_taken_0x1f2560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2560u;
            // 0x1f2564: 0xe6600080  swc1        $f0, 0x80($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2560) {
            ctx->pc = 0x1F2570u;
            goto label_1f2570;
        }
    }
    ctx->pc = 0x1F2568u;
label_1f2568:
    // 0x1f2568: 0xc7a00228  lwc1        $f0, 0x228($sp)
    ctx->pc = 0x1f2568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f256c:
    // 0x1f256c: 0xe6600080  swc1        $f0, 0x80($s3)
    ctx->pc = 0x1f256cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 128), bits); }
label_1f2570:
    // 0x1f2570: 0x86830008  lh          $v1, 0x8($s4)
    ctx->pc = 0x1f2570u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
label_1f2574:
    // 0x1f2574: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2574u;
    {
        const bool branch_taken_0x1f2574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2574u;
            // 0x1f2578: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2574) {
            ctx->pc = 0x1F2588u;
            goto label_1f2588;
        }
    }
    ctx->pc = 0x1F257Cu;
    // 0x1f257c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f257cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f2580: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2580u;
    {
        const bool branch_taken_0x1f2580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f2580) {
            ctx->pc = 0x1F2584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2580u;
            // 0x1f2584: 0x8683000a  lh          $v1, 0xA($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2590u;
            goto label_1f2590;
        }
    }
    ctx->pc = 0x1F2588u;
label_1f2588:
    // 0x1f2588: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f2588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f258c: 0x8683000a  lh          $v1, 0xA($s4)
    ctx->pc = 0x1f258cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
label_1f2590:
    // 0x1f2590: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2590u;
    {
        const bool branch_taken_0x1f2590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2590u;
            // 0x1f2594: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2590) {
            ctx->pc = 0x1F25A4u;
            goto label_1f25a4;
        }
    }
    ctx->pc = 0x1F2598u;
    // 0x1f2598: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f2598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f259c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F259Cu;
    {
        const bool branch_taken_0x1f259c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F25A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F259Cu;
            // 0x1f25a0: 0xa61025  or          $v0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f259c) {
            ctx->pc = 0x1F25ACu;
            goto label_1f25ac;
        }
    }
    ctx->pc = 0x1F25A4u;
label_1f25a4:
    // 0x1f25a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f25a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f25a8: 0xa61025  or          $v0, $a1, $a2
    ctx->pc = 0x1f25a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_1f25ac:
    // 0x1f25ac: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1F25ACu;
    {
        const bool branch_taken_0x1f25ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F25B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F25ACu;
            // 0x1f25b0: 0x8ee2e2a4  lw          $v0, -0x1D5C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294959780)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f25ac) {
            ctx->pc = 0x1F269Cu;
            goto label_1f269c;
        }
    }
    ctx->pc = 0x1F25B4u;
    // 0x1f25b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f25b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f25b8: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1f25b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1f25bc: 0x84440006  lh          $a0, 0x6($v0)
    ctx->pc = 0x1f25bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1f25c0: 0x46002146  mov.s       $f5, $f4
    ctx->pc = 0x1f25c0u;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
    // 0x1f25c4: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1F25C4u;
    {
        const bool branch_taken_0x1f25c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F25C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F25C4u;
            // 0x1f25c8: 0x460020c6  mov.s       $f3, $f4 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f25c4) {
            ctx->pc = 0x1F2680u;
            goto label_1f2680;
        }
    }
    ctx->pc = 0x1F25CCu;
    // 0x1f25cc: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1f25ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1f25d0: 0x2442d9c0  addiu       $v0, $v0, -0x2640
    ctx->pc = 0x1f25d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957504));
    // 0x1f25d4: 0x24430058  addiu       $v1, $v0, 0x58
    ctx->pc = 0x1f25d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x1f25d8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f25d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f25dc: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1f25dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1f25e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f25e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f25e4: 0xc440c64c  lwc1        $f0, -0x39B4($v0)
    ctx->pc = 0x1f25e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f25e8: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F25E8u;
    {
        const bool branch_taken_0x1f25e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F25ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F25E8u;
            // 0x1f25ec: 0x46010082  mul.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f25e8) {
            ctx->pc = 0x1F2650u;
            goto label_1f2650;
        }
    }
    ctx->pc = 0x1F25F0u;
    // 0x1f25f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F25F0u;
    {
        const bool branch_taken_0x1f25f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F25F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F25F0u;
            // 0x1f25f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f25f0) {
            ctx->pc = 0x1F2600u;
            goto label_1f2600;
        }
    }
    ctx->pc = 0x1F25F8u;
    // 0x1f25f8: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F25F8u;
    {
        const bool branch_taken_0x1f25f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F25FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F25F8u;
            // 0x1f25fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f25f8) {
            ctx->pc = 0x1F2630u;
            goto label_1f2630;
        }
    }
    ctx->pc = 0x1F2600u;
label_1f2600:
    // 0x1f2600: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f2600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f2604: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x1f2604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2608: 0xc440e2a0  lwc1        $f0, -0x1D60($v0)
    ctx->pc = 0x1f2608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f260c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f260cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f2610: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f2610u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f2614: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2614u;
    {
        const bool branch_taken_0x1f2614 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F2618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2614u;
            // 0x1f2618: 0x460200c2  mul.s       $f3, $f0, $f2 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2614) {
            ctx->pc = 0x1F262Cu;
            goto label_1f262c;
        }
    }
    ctx->pc = 0x1F261Cu;
    // 0x1f261c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f261cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f2620: 0xc440e294  lwc1        $f0, -0x1D6C($v0)
    ctx->pc = 0x1f2620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2624: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f2624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f2628: 0x46020142  mul.s       $f5, $f0, $f2
    ctx->pc = 0x1f2628u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1f262c:
    // 0x1f262c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f262cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2630:
    // 0x1f2630: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F2630u;
    {
        const bool branch_taken_0x1f2630 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F2634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2630u;
            // 0x1f2634: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2630) {
            ctx->pc = 0x1F2668u;
            goto label_1f2668;
        }
    }
    ctx->pc = 0x1F2638u;
    // 0x1f2638: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x1f2638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f263c: 0xc441e294  lwc1        $f1, -0x1D6C($v0)
    ctx->pc = 0x1f263cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2640: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f2640u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1f2644: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f2644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f2648: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F2648u;
    {
        const bool branch_taken_0x1f2648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F264Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2648u;
            // 0x1f264c: 0x46020142  mul.s       $f5, $f0, $f2 (Delay Slot)
        ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2648) {
            ctx->pc = 0x1F2668u;
            goto label_1f2668;
        }
    }
    ctx->pc = 0x1F2650u;
label_1f2650:
    // 0x1f2650: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1F2650u;
    {
        const bool branch_taken_0x1f2650 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2650u;
            // 0x1f2654: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2650) {
            ctx->pc = 0x1F2680u;
            goto label_1f2680;
        }
    }
    ctx->pc = 0x1F2658u;
    // 0x1f2658: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x1f2658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f265c: 0xc441e2a0  lwc1        $f1, -0x1D60($v0)
    ctx->pc = 0x1f265cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2660: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f2660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f2664: 0x460200c2  mul.s       $f3, $f0, $f2
    ctx->pc = 0x1f2664u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1f2668:
    // 0x1f2668: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2668u;
    {
        const bool branch_taken_0x1f2668 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F266Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2668u;
            // 0x1f266c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2668) {
            ctx->pc = 0x1F2680u;
            goto label_1f2680;
        }
    }
    ctx->pc = 0x1F2670u;
    // 0x1f2670: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1f2670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2674: 0xc441e290  lwc1        $f1, -0x1D70($v0)
    ctx->pc = 0x1f2674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2678: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f2678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f267c: 0x46020102  mul.s       $f4, $f0, $f2
    ctx->pc = 0x1f267cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1f2680:
    // 0x1f2680: 0xc6610084  lwc1        $f1, 0x84($s3)
    ctx->pc = 0x1f2680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2684: 0x4603d680  add.s       $f26, $f26, $f3
    ctx->pc = 0x1f2684u;
    ctx->f[26] = FPU_ADD_S(ctx->f[26], ctx->f[3]);
    // 0x1f2688: 0xc6600080  lwc1        $f0, 0x80($s3)
    ctx->pc = 0x1f2688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f268c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1f268cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x1f2690: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1f2690u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1f2694: 0xe6610084  swc1        $f1, 0x84($s3)
    ctx->pc = 0x1f2694u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    // 0x1f2698: 0xe6600080  swc1        $f0, 0x80($s3)
    ctx->pc = 0x1f2698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 128), bits); }
label_1f269c:
    // 0x1f269c: 0x17c00003  bnez        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F269Cu;
    {
        const bool branch_taken_0x1f269c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F26A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F269Cu;
            // 0x1f26a0: 0xdba302b0  lqc2        $vf3, 0x2B0($sp) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f269c) {
            ctx->pc = 0x1F26ACu;
            goto label_1f26ac;
        }
    }
    ctx->pc = 0x1F26A4u;
    // 0x1f26a4: 0x52c0001a  beql        $s6, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F26A4u;
    {
        const bool branch_taken_0x1f26a4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f26a4) {
            ctx->pc = 0x1F26A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F26A4u;
            // 0x1f26a8: 0xc681000c  lwc1        $f1, 0xC($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2710u;
            goto label_1f2710;
        }
    }
    ctx->pc = 0x1F26ACu;
label_1f26ac:
    // 0x1f26ac: 0xdba402f0  lqc2        $vf4, 0x2F0($sp)
    ctx->pc = 0x1f26acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1f26b0: 0x4be4186c  vsub.xyzw   $vf1, $vf3, $vf4
    ctx->pc = 0x1f26b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f26b4: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1f26b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f26b8: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1f26b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f26bc: 0xc682000c  lwc1        $f2, 0xC($s4)
    ctx->pc = 0x1f26bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f26c0: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1f26c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f26c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f26c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f26c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f26c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f26cc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1f26ccu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f26d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f26d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f26d4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1f26d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1f26d8: 0x460100c4  c1          0x100C4
    ctx->pc = 0x1f26d8u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f26dc: 0x16c0000a  bnez        $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x1F26DCu;
    {
        const bool branch_taken_0x1f26dc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F26E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F26DCu;
            // 0x1f26e0: 0x46001d02  mul.s       $f20, $f3, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f26dc) {
            ctx->pc = 0x1F2708u;
            goto label_1f2708;
        }
    }
    ctx->pc = 0x1F26E4u;
    // 0x1f26e4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1f26e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1f26e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f26e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f26ec: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x1f26ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f26f0: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x1f26f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f26f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f26f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f26f8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1f26f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1f26fc: 0x4601a529  min.s       $f20, $f20, $f1
    ctx->pc = 0x1f26fcu;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[1]);
    // 0x1f2700: 0x4602a528  max.s       $f20, $f20, $f2
    ctx->pc = 0x1f2700u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[2]);
    // 0x1f2704: 0x0  nop
    ctx->pc = 0x1f2704u;
    // NOP
label_1f2708:
    // 0x1f2708: 0x46141e81  sub.s       $f26, $f3, $f20
    ctx->pc = 0x1f2708u;
    ctx->f[26] = FPU_SUB_S(ctx->f[3], ctx->f[20]);
    // 0x1f270c: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x1f270cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f2710:
    // 0x1f2710: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2714: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f2714u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2718: 0x0  nop
    ctx->pc = 0x1f2718u;
    // NOP
    // 0x1f271c: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x1F271Cu;
    {
        const bool branch_taken_0x1f271c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f271c) {
            ctx->pc = 0x1F2720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F271Cu;
            // 0x1f2720: 0xc6810018  lwc1        $f1, 0x18($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2750u;
            goto label_1f2750;
        }
    }
    ctx->pc = 0x1F2724u;
    // 0x1f2724: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x1f2724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2728: 0xc681001c  lwc1        $f1, 0x1C($s4)
    ctx->pc = 0x1f2728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f272c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f272cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1f2730: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1f2730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1f2734: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f2734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f2738: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1f2738u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1f273c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1f273cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1f2740: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1f2740u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1f2744: 0x4600d6a8  max.s       $f26, $f26, $f0
    ctx->pc = 0x1f2744u;
    ctx->f[26] = std::max(ctx->f[26], ctx->f[0]);
    // 0x1f2748: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F2748u;
    {
        const bool branch_taken_0x1f2748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F274Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2748u;
            // 0x1f274c: 0x4601d6a9  min.s       $f26, $f26, $f1 (Delay Slot)
        ctx->f[26] = std::min(ctx->f[26], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2748) {
            ctx->pc = 0x1F276Cu;
            goto label_1f276c;
        }
    }
    ctx->pc = 0x1F2750u;
label_1f2750:
    // 0x1f2750: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1f2750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1f2754: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f2754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2758: 0xc682001c  lwc1        $f2, 0x1C($s4)
    ctx->pc = 0x1f2758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f275c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f275cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f2760: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1f2760u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1f2764: 0x4601d6a9  min.s       $f26, $f26, $f1
    ctx->pc = 0x1f2764u;
    ctx->f[26] = std::min(ctx->f[26], ctx->f[1]);
    // 0x1f2768: 0x4602d6a8  max.s       $f26, $f26, $f2
    ctx->pc = 0x1f2768u;
    ctx->f[26] = std::max(ctx->f[26], ctx->f[2]);
label_1f276c:
    // 0x1f276c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f276cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2770: 0x4600d034  c.lt.s      $f26, $f0
    ctx->pc = 0x1f2770u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[26], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2774: 0x0  nop
    ctx->pc = 0x1f2774u;
    // NOP
    // 0x1f2778: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F2778u;
    {
        const bool branch_taken_0x1f2778 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f2778) {
            ctx->pc = 0x1F277Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2778u;
            // 0x1f277c: 0x4600d687  neg.s       $f26, $f26 (Delay Slot)
        ctx->f[26] = FPU_NEG_S(ctx->f[26]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2780u;
            goto label_1f2780;
        }
    }
    ctx->pc = 0x1F2780u;
label_1f2780:
    // 0x1f2780: 0x522000e5  beql        $s1, $zero, . + 4 + (0xE5 << 2)
    ctx->pc = 0x1F2780u;
    {
        const bool branch_taken_0x1f2780 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2780) {
            ctx->pc = 0x1F2784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2780u;
            // 0x1f2784: 0xc66c008c  lwc1        $f12, 0x8C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2B18u;
            goto label_1f2b18;
        }
    }
    ctx->pc = 0x1F2788u;
    // 0x1f2788: 0x8e660044  lw          $a2, 0x44($s3)
    ctx->pc = 0x1f2788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1f278c: 0x10c000bc  beqz        $a2, . + 4 + (0xBC << 2)
    ctx->pc = 0x1F278Cu;
    {
        const bool branch_taken_0x1f278c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F278Cu;
            // 0x1f2790: 0xe67a0090  swc1        $f26, 0x90($s3) (Delay Slot)
        { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f278c) {
            ctx->pc = 0x1F2A80u;
            goto label_1f2a80;
        }
    }
    ctx->pc = 0x1F2794u;
    // 0x1f2794: 0x12c000bc  beqz        $s6, . + 4 + (0xBC << 2)
    ctx->pc = 0x1F2794u;
    {
        const bool branch_taken_0x1f2794 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2794u;
            // 0x1f2798: 0x27b00170  addiu       $s0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2794) {
            ctx->pc = 0x1F2A88u;
            goto label_1f2a88;
        }
    }
    ctx->pc = 0x1F279Cu;
    // 0x1f279c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1f279cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1f27a0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1f27a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1f27a4: 0x104000b9  beqz        $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x1F27A4u;
    {
        const bool branch_taken_0x1f27a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F27A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F27A4u;
            // 0x1f27a8: 0x26720070  addiu       $s2, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f27a4) {
            ctx->pc = 0x1F2A8Cu;
            goto label_1f2a8c;
        }
    }
    ctx->pc = 0x1F27ACu;
    // 0x1f27ac: 0xc6620048  lwc1        $f2, 0x48($s3)
    ctx->pc = 0x1f27acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f27b0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1f27b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1f27b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f27b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f27b8: 0x46021040  add.s       $f1, $f2, $f2
    ctx->pc = 0x1f27b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x1f27bc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1f27bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1f27c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1f27c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1f27c4: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x1f27c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1f27c8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1f27c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1f27cc: 0x70e81b89  pcpyld      $v1, $a3, $t0
    ctx->pc = 0x1f27ccu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x1f27d0: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1f27d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1f27d4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1f27d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1f27d8: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1f27d8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1f27dc: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1f27dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f27e0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1f27e0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1f27e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f27e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f27e8: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1f27e8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f27ec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1f27ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f27f0: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1f27f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1f27f4: 0x18800013  blez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F27F4u;
    {
        const bool branch_taken_0x1f27f4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1F27F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F27F4u;
            // 0x1f27f8: 0x7fa20240  sq          $v0, 0x240($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f27f4) {
            ctx->pc = 0x1F2844u;
            goto label_1f2844;
        }
    }
    ctx->pc = 0x1F27FCu;
    // 0x1f27fc: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1f27fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1f2800: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1f2800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2804: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f2804u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2808: 0x0  nop
    ctx->pc = 0x1f2808u;
    // NOP
    // 0x1f280c: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
    ctx->pc = 0x1F280Cu;
    {
        const bool branch_taken_0x1f280c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f280c) {
            ctx->pc = 0x1F2810u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F280Cu;
            // 0x1f2810: 0x8cc30008  lw          $v1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2848u;
            goto label_1f2848;
        }
    }
    ctx->pc = 0x1F2814u;
    // 0x1f2814: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f2814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f2818:
    // 0x1f2818: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f2818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f281c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f281cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f2820: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1f2820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f2824: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F2824u;
    {
        const bool branch_taken_0x1f2824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2824u;
            // 0x1f2828: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2824) {
            ctx->pc = 0x1F2844u;
            goto label_1f2844;
        }
    }
    ctx->pc = 0x1F282Cu;
    // 0x1f282c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f282cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f2830: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1f2830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2834: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f2834u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2838: 0x0  nop
    ctx->pc = 0x1f2838u;
    // NOP
    // 0x1f283c: 0x4502fff6  bc1fl       . + 4 + (-0xA << 2)
    ctx->pc = 0x1F283Cu;
    {
        const bool branch_taken_0x1f283c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f283c) {
            ctx->pc = 0x1F2840u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F283Cu;
            // 0x1f2840: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2818u;
            runtime->cooperativeGuestYield();
            goto label_1f2818;
        }
    }
    ctx->pc = 0x1F2844u;
label_1f2844:
    // 0x1f2844: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1f2844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1f2848:
    // 0x1f2848: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x1f2848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1f284c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f284cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f2850: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f2850u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f2854: 0x4be309bc  vmulax.xyzw $ACC, $vf1, $vf3x
    ctx->pc = 0x1f2854u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f2858: 0xd8420030  lqc2        $vf2, 0x30($v0)
    ctx->pc = 0x1f2858u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f285c: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1f285cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f2860: 0x4be308bd  vmadday.xyzw $ACC, $vf1, $vf3y
    ctx->pc = 0x1f2860u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f2864: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1f2864u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1f2868: 0x4be308be  vmaddaz.xyzw $ACC, $vf1, $vf3z
    ctx->pc = 0x1f2868u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f286c: 0x4be3108b  vmaddw.xyzw $vf2, $vf2, $vf3w
    ctx->pc = 0x1f286cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f2870: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x1f2870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1f2874: 0x26710070  addiu       $s1, $s3, 0x70
    ctx->pc = 0x1f2874u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x1f2878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f287c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f287cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2880: 0xc07c154  jal         func_1F0550
    ctx->pc = 0x1F2880u;
    SET_GPR_U32(ctx, 31, 0x1F2888u);
    ctx->pc = 0x1F2884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2880u;
            // 0x1f2884: 0xfba20310  sqc2        $vf2, 0x310($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 784), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0550u;
    if (runtime->hasFunction(0x1F0550u)) {
        auto targetFn = runtime->lookupFunction(0x1F0550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2888u; }
        if (ctx->pc != 0x1F2888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0550_0x1f0550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2888u; }
        if (ctx->pc != 0x1F2888u) { return; }
    }
    ctx->pc = 0x1F2888u;
    // 0x1f2888: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1f2888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1f288c: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1f288cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1f2890: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x1f2890u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1f2894: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1f2894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1f2898: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1f2898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1f289c: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1f289cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1f28a0: 0xdba20310  lqc2        $vf2, 0x310($sp)
    ctx->pc = 0x1f28a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x1f28a4: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x1f28a4u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1f28a8: 0x4be2112a  vmul.xyzw   $vf4, $vf2, $vf2
    ctx->pc = 0x1f28a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f28ac: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x1f28acu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1f28b0: 0xfba300a0  sqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x1f28b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f28b4: 0xfba30250  sqc2        $vf3, 0x250($sp)
    ctx->pc = 0x1f28b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f28b8: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x1f28b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f28bc: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x1f28bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f28c0: 0x4bc21afe  vopmula.xyz $ACC, $vf3, $vf2
    ctx->pc = 0x1f28c0u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]);
    // 0x1f28c4: 0x4be5133c  vmove.xyzw  $vf5, $vf2
    ctx->pc = 0x1f28c4u;
    ctx->vu0_vf[5] = ctx->vu0_vf[2];
    // 0x1f28c8: 0x4bc310ee  vopmsub.xyz $vf3, $vf2, $vf3
    ctx->pc = 0x1f28c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f28cc: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1f28ccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1f28d0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1f28d0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1f28d4: 0x4bc0295c  vmulq.xyz   $vf5, $vf5, $Q
    ctx->pc = 0x1f28d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1f28d8: 0x4a0002ff  vnop
    ctx->pc = 0x1f28d8u;
    // NOP operation, no action needed for VU0
    // 0x1f28dc: 0x4a0002ff  vnop
    ctx->pc = 0x1f28dcu;
    // NOP operation, no action needed for VU0
    // 0x1f28e0: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x1f28e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f28e4: 0xfba500b0  sqc2        $vf5, 0xB0($sp)
    ctx->pc = 0x1f28e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1f28e8: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1f28e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f28ec: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1f28ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f28f0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1f28f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f28f4: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1f28f4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1f28f8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1f28f8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1f28fc: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1f28fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f2900: 0x4a0002ff  vnop
    ctx->pc = 0x1f2900u;
    // NOP operation, no action needed for VU0
    // 0x1f2904: 0x4a0002ff  vnop
    ctx->pc = 0x1f2904u;
    // NOP operation, no action needed for VU0
    // 0x1f2908: 0x4bc32afe  vopmula.xyz $ACC, $vf5, $vf3
    ctx->pc = 0x1f2908u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]);
    // 0x1f290c: 0xfba300c0  sqc2        $vf3, 0xC0($sp)
    ctx->pc = 0x1f290cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f2910: 0x4bc5186e  vopmsub.xyz $vf1, $vf3, $vf5
    ctx->pc = 0x1f2910u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f2914: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1f2914u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f2918: 0x4be1092a  vmul.xyzw   $vf4, $vf1, $vf1
    ctx->pc = 0x1f2918u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f291c: 0x4b042081  vaddy.x     $vf2, $vf4, $vf4y
    ctx->pc = 0x1f291cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f2920: 0x4b041082  vaddz.x     $vf2, $vf2, $vf4z
    ctx->pc = 0x1f2920u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f2924: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1f2924u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1f2928: 0x4a0003bf  vwaitq
    ctx->pc = 0x1f2928u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1f292c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1f292cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f2930: 0x4a0002ff  vnop
    ctx->pc = 0x1f2930u;
    // NOP operation, no action needed for VU0
    // 0x1f2934: 0x4a0002ff  vnop
    ctx->pc = 0x1f2934u;
    // NOP operation, no action needed for VU0
    // 0x1f2938: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x1f2938u;
    ctx->vu0_vf[4] = ctx->vu0_vf[0];
    // 0x1f293c: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x1f293cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f2940: 0xfba300e0  sqc2        $vf3, 0xE0($sp)
    ctx->pc = 0x1f2940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f2944: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1f2944u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f2948: 0xfba20300  sqc2        $vf2, 0x300($sp)
    ctx->pc = 0x1f2948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f294c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1f294cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1f2950: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x1f2950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f2954: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1f2954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1f2958: 0xfba50100  sqc2        $vf5, 0x100($sp)
    ctx->pc = 0x1f2958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1f295c: 0xc0613b4  jal         func_184ED0
    ctx->pc = 0x1F295Cu;
    SET_GPR_U32(ctx, 31, 0x1F2964u);
    ctx->pc = 0x1F2960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F295Cu;
            // 0x1f2960: 0xfba40110  sqc2        $vf4, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184ED0u;
    if (runtime->hasFunction(0x184ED0u)) {
        auto targetFn = runtime->lookupFunction(0x184ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2964u; }
        if (ctx->pc != 0x1F2964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_184ed0_0x184f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2964u; }
        if (ctx->pc != 0x1F2964u) { return; }
    }
    ctx->pc = 0x1F2964u;
    // 0x1f2964: 0xdba20080  lqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1f2964u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f2968: 0xfba20260  sqc2        $vf2, 0x260($sp)
    ctx->pc = 0x1f2968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f296c: 0xdba30300  lqc2        $vf3, 0x300($sp)
    ctx->pc = 0x1f296cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x1f2970: 0x4be218ac  vsub.xyzw   $vf2, $vf3, $vf2
    ctx->pc = 0x1f2970u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f2974: 0xdba10120  lqc2        $vf1, 0x120($sp)
    ctx->pc = 0x1f2974u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1f2978: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1f2978u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f297c: 0xdba10130  lqc2        $vf1, 0x130($sp)
    ctx->pc = 0x1f297cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1f2980: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1f2980u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f2984: 0xdba10140  lqc2        $vf1, 0x140($sp)
    ctx->pc = 0x1f2984u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f2988: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1f2988u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f298c: 0xdba10150  lqc2        $vf1, 0x150($sp)
    ctx->pc = 0x1f298cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1f2990: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x1f2990u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f2994: 0xfba10280  sqc2        $vf1, 0x280($sp)
    ctx->pc = 0x1f2994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f2998: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1f2998u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f299c: 0x27a50270  addiu       $a1, $sp, 0x270
    ctx->pc = 0x1f299cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x1f29a0: 0xc07c084  jal         func_1F0210
    ctx->pc = 0x1F29A0u;
    SET_GPR_U32(ctx, 31, 0x1F29A8u);
    ctx->pc = 0x1F29A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F29A0u;
            // 0x1f29a4: 0x27a60274  addiu       $a2, $sp, 0x274 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 628));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0210u;
    if (runtime->hasFunction(0x1F0210u)) {
        auto targetFn = runtime->lookupFunction(0x1F0210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F29A8u; }
        if (ctx->pc != 0x1F29A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0210_0x1f0210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F29A8u; }
        if (ctx->pc != 0x1F29A8u) { return; }
    }
    ctx->pc = 0x1F29A8u;
    // 0x1f29a8: 0xc7a0022c  lwc1        $f0, 0x22C($sp)
    ctx->pc = 0x1f29a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f29ac: 0xc6810020  lwc1        $f1, 0x20($s4)
    ctx->pc = 0x1f29acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f29b0: 0xc7b40274  lwc1        $f20, 0x274($sp)
    ctx->pc = 0x1f29b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f29b4: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x1f29b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f29b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f29b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f29bc: 0x4600a528  max.s       $f20, $f20, $f0
    ctx->pc = 0x1f29bcu;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[0]);
    // 0x1f29c0: 0xc7ad0228  lwc1        $f13, 0x228($sp)
    ctx->pc = 0x1f29c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f29c4: 0x4602a529  min.s       $f20, $f20, $f2
    ctx->pc = 0x1f29c4u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[2]);
    // 0x1f29c8: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x1f29c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f29cc: 0xc7ac0270  lwc1        $f12, 0x270($sp)
    ctx->pc = 0x1f29ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f29d0: 0x46006b80  add.s       $f14, $f13, $f0
    ctx->pc = 0x1f29d0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x1f29d4: 0xc07c020  jal         func_1F0080
    ctx->pc = 0x1F29D4u;
    SET_GPR_U32(ctx, 31, 0x1F29DCu);
    ctx->pc = 0x1F29D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F29D4u;
            // 0x1f29d8: 0x46006b41  sub.s       $f13, $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0080u;
    if (runtime->hasFunction(0x1F0080u)) {
        auto targetFn = runtime->lookupFunction(0x1F0080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F29DCu; }
        if (ctx->pc != 0x1F29DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f0080_0x1f0148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F29DCu; }
        if (ctx->pc != 0x1F29DCu) { return; }
    }
    ctx->pc = 0x1F29DCu;
    // 0x1f29dc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1f29dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1f29e0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1f29e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1f29e4: 0xc07c0b0  jal         func_1F02C0
    ctx->pc = 0x1F29E4u;
    SET_GPR_U32(ctx, 31, 0x1F29ECu);
    ctx->pc = 0x1F29E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F29E4u;
            // 0x1f29e8: 0x27a40280  addiu       $a0, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F02C0u;
    if (runtime->hasFunction(0x1F02C0u)) {
        auto targetFn = runtime->lookupFunction(0x1F02C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F29ECu; }
        if (ctx->pc != 0x1F29ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F02C0_0x1f02c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F29ECu; }
        if (ctx->pc != 0x1F29ECu) { return; }
    }
    ctx->pc = 0x1F29ECu;
    // 0x1f29ec: 0xdba10280  lqc2        $vf1, 0x280($sp)
    ctx->pc = 0x1f29ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1f29f0: 0xdba40300  lqc2        $vf4, 0x300($sp)
    ctx->pc = 0x1f29f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x1f29f4: 0x4be120ac  vsub.xyzw   $vf2, $vf4, $vf1
    ctx->pc = 0x1f29f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f29f8: 0xdba100e0  lqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1f29f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f29fc: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1f29fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f2a00: 0xdba100f0  lqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x1f2a00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1f2a04: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1f2a04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f2a08: 0xdba30110  lqc2        $vf3, 0x110($sp)
    ctx->pc = 0x1f2a08u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1f2a0c: 0xdba10100  lqc2        $vf1, 0x100($sp)
    ctx->pc = 0x1f2a0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f2a10: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1f2a10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f2a14: 0x4be218cb  vmaddw.xyzw $vf3, $vf3, $vf2w
    ctx->pc = 0x1f2a14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f2a18: 0xfba30280  sqc2        $vf3, 0x280($sp)
    ctx->pc = 0x1f2a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f2a1c: 0xdba20250  lqc2        $vf2, 0x250($sp)
    ctx->pc = 0x1f2a1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1f2a20: 0x4bc312fe  vopmula.xyz $ACC, $vf2, $vf3
    ctx->pc = 0x1f2a20u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]);
    // 0x1f2a24: 0x4bc218ae  vopmsub.xyz $vf2, $vf3, $vf2
    ctx->pc = 0x1f2a24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f2a28: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1f2a28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f2a2c: 0x4be2112a  vmul.xyzw   $vf4, $vf2, $vf2
    ctx->pc = 0x1f2a2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f2a30: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x1f2a30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f2a34: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x1f2a34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f2a38: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1f2a38u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1f2a3c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1f2a3cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1f2a40: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1f2a40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f2a44: 0x4a0002ff  vnop
    ctx->pc = 0x1f2a44u;
    // NOP operation, no action needed for VU0
    // 0x1f2a48: 0x4a0002ff  vnop
    ctx->pc = 0x1f2a48u;
    // NOP operation, no action needed for VU0
    // 0x1f2a4c: 0x4bc21afe  vopmula.xyz $ACC, $vf3, $vf2
    ctx->pc = 0x1f2a4cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]);
    // 0x1f2a50: 0xfba20160  sqc2        $vf2, 0x160($sp)
    ctx->pc = 0x1f2a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f2a54: 0x4bc3106e  vopmsub.xyz $vf1, $vf2, $vf3
    ctx->pc = 0x1f2a54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f2a58: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x1f2a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f2a5c: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1f2a5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f2a60: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1f2a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f2a64: 0xfba30080  sqc2        $vf3, 0x80($sp)
    ctx->pc = 0x1f2a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f2a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a6c: 0xc07c17a  jal         func_1F05E8
    ctx->pc = 0x1F2A6Cu;
    SET_GPR_U32(ctx, 31, 0x1F2A74u);
    ctx->pc = 0x1F2A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2A6Cu;
            // 0x1f2a70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F05E8u;
    if (runtime->hasFunction(0x1F05E8u)) {
        auto targetFn = runtime->lookupFunction(0x1F05E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A74u; }
        if (ctx->pc != 0x1F2A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F05E8_0x1f05e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A74u; }
        if (ctx->pc != 0x1F2A74u) { return; }
    }
    ctx->pc = 0x1F2A74u;
    // 0x1f2a74: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1F2A74u;
    {
        const bool branch_taken_0x1f2a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2A74u;
            // 0x1f2a78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a74) {
            ctx->pc = 0x1F2B5Cu;
            goto label_1f2b5c;
        }
    }
    ctx->pc = 0x1F2A7Cu;
    // 0x1f2a7c: 0x0  nop
    ctx->pc = 0x1f2a7cu;
    // NOP
label_1f2a80:
    // 0x1f2a80: 0x27b00170  addiu       $s0, $sp, 0x170
    ctx->pc = 0x1f2a80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1f2a84: 0x0  nop
    ctx->pc = 0x1f2a84u;
    // NOP
label_1f2a88:
    // 0x1f2a88: 0x26720070  addiu       $s2, $s3, 0x70
    ctx->pc = 0x1f2a88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_1f2a8c:
    // 0x1f2a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a90: 0xc07c154  jal         func_1F0550
    ctx->pc = 0x1F2A90u;
    SET_GPR_U32(ctx, 31, 0x1F2A98u);
    ctx->pc = 0x1F2A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2A90u;
            // 0x1f2a94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0550u;
    if (runtime->hasFunction(0x1F0550u)) {
        auto targetFn = runtime->lookupFunction(0x1F0550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A98u; }
        if (ctx->pc != 0x1F2A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0550_0x1f0550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A98u; }
        if (ctx->pc != 0x1F2A98u) { return; }
    }
    ctx->pc = 0x1F2A98u;
    // 0x1f2a98: 0xc7a0022c  lwc1        $f0, 0x22C($sp)
    ctx->pc = 0x1f2a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2a9c: 0xc6810020  lwc1        $f1, 0x20($s4)
    ctx->pc = 0x1f2a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2aa0: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x1f2aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1f2aa4: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x1f2aa4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f2aa8: 0xc6740084  lwc1        $f20, 0x84($s3)
    ctx->pc = 0x1f2aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f2aac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f2aacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f2ab0: 0x4600a528  max.s       $f20, $f20, $f0
    ctx->pc = 0x1f2ab0u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[0]);
    // 0x1f2ab4: 0xc7ad0228  lwc1        $f13, 0x228($sp)
    ctx->pc = 0x1f2ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f2ab8: 0x4602a529  min.s       $f20, $f20, $f2
    ctx->pc = 0x1f2ab8u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[2]);
    // 0x1f2abc: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x1f2abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2ac0: 0xc66c0080  lwc1        $f12, 0x80($s3)
    ctx->pc = 0x1f2ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f2ac4: 0x46006b80  add.s       $f14, $f13, $f0
    ctx->pc = 0x1f2ac4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x1f2ac8: 0xc07c020  jal         func_1F0080
    ctx->pc = 0x1F2AC8u;
    SET_GPR_U32(ctx, 31, 0x1F2AD0u);
    ctx->pc = 0x1F2ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2AC8u;
            // 0x1f2acc: 0x46006b41  sub.s       $f13, $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0080u;
    if (runtime->hasFunction(0x1F0080u)) {
        auto targetFn = runtime->lookupFunction(0x1F0080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2AD0u; }
        if (ctx->pc != 0x1F2AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f0080_0x1f0148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2AD0u; }
        if (ctx->pc != 0x1F2AD0u) { return; }
    }
    ctx->pc = 0x1F2AD0u;
    // 0x1f2ad0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1f2ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1f2ad4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f2ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f2ad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2adc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1f2adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1f2ae0: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1f2ae0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1f2ae4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f2ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f2ae8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f2ae8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1f2aec: 0x4601a503  div.s       $f20, $f20, $f1
    ctx->pc = 0x1f2aecu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[1];
    // 0x1f2af0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1f2af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1f2af4: 0x460c0342  mul.s       $f13, $f0, $f12
    ctx->pc = 0x1f2af4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1f2af8: 0xc061248  jal         func_184920
    ctx->pc = 0x1F2AF8u;
    SET_GPR_U32(ctx, 31, 0x1F2B00u);
    ctx->pc = 0x1F2AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2AF8u;
            // 0x1f2afc: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184920u;
    if (runtime->hasFunction(0x184920u)) {
        auto targetFn = runtime->lookupFunction(0x184920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2B00u; }
        if (ctx->pc != 0x1F2B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184920_0x184920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2B00u; }
        if (ctx->pc != 0x1F2B00u) { return; }
    }
    ctx->pc = 0x1F2B00u;
    // 0x1f2b00: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x1f2b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
    // 0x1f2b04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b08: 0xc07c17a  jal         func_1F05E8
    ctx->pc = 0x1F2B08u;
    SET_GPR_U32(ctx, 31, 0x1F2B10u);
    ctx->pc = 0x1F2B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2B08u;
            // 0x1f2b0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F05E8u;
    if (runtime->hasFunction(0x1F05E8u)) {
        auto targetFn = runtime->lookupFunction(0x1F05E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2B10u; }
        if (ctx->pc != 0x1F2B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F05E8_0x1f05e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2B10u; }
        if (ctx->pc != 0x1F2B10u) { return; }
    }
    ctx->pc = 0x1F2B10u;
    // 0x1f2b10: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F2B10u;
    {
        const bool branch_taken_0x1f2b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2B10u;
            // 0x1f2b14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2b10) {
            ctx->pc = 0x1F2B5Cu;
            goto label_1f2b5c;
        }
    }
    ctx->pc = 0x1F2B18u;
label_1f2b18:
    // 0x1f2b18: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1f2b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1f2b1c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f2b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f2b20: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1f2b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1f2b24: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1f2b24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1f2b28: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1f2b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1f2b2c: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x1f2b2cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x1f2b30: 0xc060e52  jal         func_183948
    ctx->pc = 0x1F2B30u;
    SET_GPR_U32(ctx, 31, 0x1F2B38u);
    ctx->pc = 0x1F2B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2B30u;
            // 0x1f2b34: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183948u;
    if (runtime->hasFunction(0x183948u)) {
        auto targetFn = runtime->lookupFunction(0x183948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2B38u; }
        if (ctx->pc != 0x1F2B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183948_0x183a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2B38u; }
        if (ctx->pc != 0x1F2B38u) { return; }
    }
    ctx->pc = 0x1F2B38u;
    // 0x1f2b38: 0xc66c0088  lwc1        $f12, 0x88($s3)
    ctx->pc = 0x1f2b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f2b3c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1f2b3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1f2b40: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x1f2b40u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x1f2b44: 0xc060e52  jal         func_183948
    ctx->pc = 0x1F2B44u;
    SET_GPR_U32(ctx, 31, 0x1F2B4Cu);
    ctx->pc = 0x1F2B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2B44u;
            // 0x1f2b48: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183948u;
    if (runtime->hasFunction(0x183948u)) {
        auto targetFn = runtime->lookupFunction(0x183948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2B4Cu; }
        if (ctx->pc != 0x1F2B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183948_0x183a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2B4Cu; }
        if (ctx->pc != 0x1F2B4Cu) { return; }
    }
    ctx->pc = 0x1F2B4Cu;
    // 0x1f2b4c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1f2b4cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1f2b50: 0x4614d503  div.s       $f20, $f26, $f20
    ctx->pc = 0x1f2b50u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[26] * 0.0f); } else ctx->f[20] = ctx->f[26] / ctx->f[20];
    // 0x1f2b54: 0xe6740090  swc1        $f20, 0x90($s3)
    ctx->pc = 0x1f2b54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 144), bits); }
    // 0x1f2b58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f2b5c:
    // 0x1f2b5c: 0xc07c154  jal         func_1F0550
    ctx->pc = 0x1F2B5Cu;
    SET_GPR_U32(ctx, 31, 0x1F2B64u);
    ctx->pc = 0x1F2B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2B5Cu;
            // 0x1f2b60: 0x24850070  addiu       $a1, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0550u;
    if (runtime->hasFunction(0x1F0550u)) {
        auto targetFn = runtime->lookupFunction(0x1F0550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2B64u; }
        if (ctx->pc != 0x1F2B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0550_0x1f0550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2B64u; }
        if (ctx->pc != 0x1F2B64u) { return; }
    }
    ctx->pc = 0x1F2B64u;
    // 0x1f2b64: 0x7bb003c0  lq          $s0, 0x3C0($sp)
    ctx->pc = 0x1f2b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x1f2b68: 0x7bb103b0  lq          $s1, 0x3B0($sp)
    ctx->pc = 0x1f2b68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x1f2b6c: 0x7bb203a0  lq          $s2, 0x3A0($sp)
    ctx->pc = 0x1f2b6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x1f2b70: 0x7bb30390  lq          $s3, 0x390($sp)
    ctx->pc = 0x1f2b70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x1f2b74: 0x7bb40380  lq          $s4, 0x380($sp)
    ctx->pc = 0x1f2b74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x1f2b78: 0x7bb50370  lq          $s5, 0x370($sp)
    ctx->pc = 0x1f2b78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x1f2b7c: 0x7bb60360  lq          $s6, 0x360($sp)
    ctx->pc = 0x1f2b7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x1f2b80: 0x7bb70350  lq          $s7, 0x350($sp)
    ctx->pc = 0x1f2b80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x1f2b84: 0x7bbe0340  lq          $fp, 0x340($sp)
    ctx->pc = 0x1f2b84u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1f2b88: 0xdfbf0330  ld          $ra, 0x330($sp)
    ctx->pc = 0x1f2b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x1f2b8c: 0xc7ba0400  lwc1        $f26, 0x400($sp)
    ctx->pc = 0x1f2b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1f2b90: 0xc7b903f8  lwc1        $f25, 0x3F8($sp)
    ctx->pc = 0x1f2b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1f2b94: 0xc7b803f0  lwc1        $f24, 0x3F0($sp)
    ctx->pc = 0x1f2b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1f2b98: 0xc7b703e8  lwc1        $f23, 0x3E8($sp)
    ctx->pc = 0x1f2b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f2b9c: 0xc7b603e0  lwc1        $f22, 0x3E0($sp)
    ctx->pc = 0x1f2b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f2ba0: 0xc7b503d8  lwc1        $f21, 0x3D8($sp)
    ctx->pc = 0x1f2ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f2ba4: 0xc7b403d0  lwc1        $f20, 0x3D0($sp)
    ctx->pc = 0x1f2ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f2ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2BA8u;
            // 0x1f2bac: 0x27bd0410  addiu       $sp, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F1F88u: goto label_1f1f88;
            case 0x1F1F98u: goto label_1f1f98;
            case 0x1F1FE8u: goto label_1f1fe8;
            case 0x1F2010u: goto label_1f2010;
            case 0x1F202Cu: goto label_1f202c;
            case 0x1F2034u: goto label_1f2034;
            case 0x1F2050u: goto label_1f2050;
            case 0x1F2058u: goto label_1f2058;
            case 0x1F2074u: goto label_1f2074;
            case 0x1F207Cu: goto label_1f207c;
            case 0x1F2090u: goto label_1f2090;
            case 0x1F209Cu: goto label_1f209c;
            case 0x1F2138u: goto label_1f2138;
            case 0x1F2158u: goto label_1f2158;
            case 0x1F21B0u: goto label_1f21b0;
            case 0x1F21E0u: goto label_1f21e0;
            case 0x1F2208u: goto label_1f2208;
            case 0x1F227Cu: goto label_1f227c;
            case 0x1F22A0u: goto label_1f22a0;
            case 0x1F22A4u: goto label_1f22a4;
            case 0x1F22B8u: goto label_1f22b8;
            case 0x1F22D0u: goto label_1f22d0;
            case 0x1F22D4u: goto label_1f22d4;
            case 0x1F22E8u: goto label_1f22e8;
            case 0x1F22ECu: goto label_1f22ec;
            case 0x1F2350u: goto label_1f2350;
            case 0x1F237Cu: goto label_1f237c;
            case 0x1F2380u: goto label_1f2380;
            case 0x1F23D8u: goto label_1f23d8;
            case 0x1F23E0u: goto label_1f23e0;
            case 0x1F2414u: goto label_1f2414;
            case 0x1F241Cu: goto label_1f241c;
            case 0x1F2458u: goto label_1f2458;
            case 0x1F246Cu: goto label_1f246c;
            case 0x1F2480u: goto label_1f2480;
            case 0x1F2498u: goto label_1f2498;
            case 0x1F249Cu: goto label_1f249c;
            case 0x1F24ACu: goto label_1f24ac;
            case 0x1F24CCu: goto label_1f24cc;
            case 0x1F24F0u: goto label_1f24f0;
            case 0x1F24F4u: goto label_1f24f4;
            case 0x1F2518u: goto label_1f2518;
            case 0x1F2528u: goto label_1f2528;
            case 0x1F252Cu: goto label_1f252c;
            case 0x1F2530u: goto label_1f2530;
            case 0x1F2534u: goto label_1f2534;
            case 0x1F2558u: goto label_1f2558;
            case 0x1F2568u: goto label_1f2568;
            case 0x1F256Cu: goto label_1f256c;
            case 0x1F2570u: goto label_1f2570;
            case 0x1F2574u: goto label_1f2574;
            case 0x1F2588u: goto label_1f2588;
            case 0x1F2590u: goto label_1f2590;
            case 0x1F25A4u: goto label_1f25a4;
            case 0x1F25ACu: goto label_1f25ac;
            case 0x1F2600u: goto label_1f2600;
            case 0x1F262Cu: goto label_1f262c;
            case 0x1F2630u: goto label_1f2630;
            case 0x1F2650u: goto label_1f2650;
            case 0x1F2668u: goto label_1f2668;
            case 0x1F2680u: goto label_1f2680;
            case 0x1F269Cu: goto label_1f269c;
            case 0x1F26ACu: goto label_1f26ac;
            case 0x1F2708u: goto label_1f2708;
            case 0x1F2710u: goto label_1f2710;
            case 0x1F2750u: goto label_1f2750;
            case 0x1F276Cu: goto label_1f276c;
            case 0x1F2780u: goto label_1f2780;
            case 0x1F2818u: goto label_1f2818;
            case 0x1F2844u: goto label_1f2844;
            case 0x1F2848u: goto label_1f2848;
            case 0x1F2A80u: goto label_1f2a80;
            case 0x1F2A88u: goto label_1f2a88;
            case 0x1F2A8Cu: goto label_1f2a8c;
            case 0x1F2B18u: goto label_1f2b18;
            case 0x1F2B5Cu: goto label_1f2b5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F2BB0u;
}
