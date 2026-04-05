#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FFBF0
// Address: 0x1ffbf0 - 0x1ffde8
void sub_001FFBF0_0x1ffbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FFBF0_0x1ffbf0");
#endif

    ctx->pc = 0x1ffbf0u;

    // 0x1ffbf0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1ffbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1ffbf4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ffbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ffbf8: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x1ffbf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1ffbfc: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x1ffbfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1ffc00: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x1ffc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ffc04: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1ffc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x1ffc08: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1ffc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x1ffc0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ffc0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc10: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ffc10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc14: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ffc14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1ffc18: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x1ffc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ffc1c: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x1ffc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x1ffc20: 0xc07fdac  jal         func_1FF6B0
    ctx->pc = 0x1FFC20u;
    SET_GPR_U32(ctx, 31, 0x1FFC28u);
    ctx->pc = 0x1FFC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFC20u;
            // 0x1ffc24: 0x7fa70050  sq          $a3, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF6B0u;
    if (runtime->hasFunction(0x1FF6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1FF6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFC28u; }
        if (ctx->pc != 0x1FFC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF6B0_0x1ff6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFC28u; }
        if (ctx->pc != 0x1FFC28u) { return; }
    }
    ctx->pc = 0x1FFC28u;
    // 0x1ffc28: 0xdba100d0  lqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x1ffc28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1ffc2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ffc2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc30: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x1ffc30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ffc34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ffc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ffc38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ffc38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ffc3c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1ffc3cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ffc40: 0xc60e0048  lwc1        $f14, 0x48($s0)
    ctx->pc = 0x1ffc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ffc44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ffc44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ffc48: 0xc60f004c  lwc1        $f15, 0x4C($s0)
    ctx->pc = 0x1ffc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1ffc4c: 0x46006329  min.s       $f12, $f12, $f0
    ctx->pc = 0x1ffc4cu;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[0]);
    // 0x1ffc50: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1ffc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1ffc54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ffc54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ffc58: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1ffc58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1ffc5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ffc5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ffc60: 0x46006305  abs.s       $f12, $f12
    ctx->pc = 0x1ffc60u;
    ctx->f[12] = FPU_ABS_S(ctx->f[12]);
    // 0x1ffc64: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x1ffc64u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x1ffc68: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1ffc68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ffc6c: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x1ffc6cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x1ffc70: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x1ffc70u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1ffc74: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ffc74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ffc78: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x1ffc78u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x1ffc7c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1ffc7cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1ffc80: 0x46147382  mul.s       $f14, $f14, $f20
    ctx->pc = 0x1ffc80u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[20]);
    // 0x1ffc84: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x1ffc84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x1ffc88: 0xc07950a  jal         func_1E5428
    ctx->pc = 0x1FFC88u;
    SET_GPR_U32(ctx, 31, 0x1FFC90u);
    ctx->pc = 0x1FFC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFC88u;
            // 0x1ffc8c: 0x46147bc2  mul.s       $f15, $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5428u;
    if (runtime->hasFunction(0x1E5428u)) {
        auto targetFn = runtime->lookupFunction(0x1E5428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFC90u; }
        if (ctx->pc != 0x1FFC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e5428_0x1e54c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFC90u; }
        if (ctx->pc != 0x1FFC90u) { return; }
    }
    ctx->pc = 0x1FFC90u;
    // 0x1ffc90: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ffc90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ffc94: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1ffc94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ffc98: 0xdba10050  lqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1ffc98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ffc9c: 0x4a420040  vaddx.z     $vf1, $vf0, $vf2x
    ctx->pc = 0x1ffc9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ffca0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1ffca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ffca4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1ffca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ffca8: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1ffca8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1ffcac: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1ffcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1ffcb0: 0x40f809  jalr        $v0
    ctx->pc = 0x1FFCB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FFCB8u);
        ctx->pc = 0x1FFCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFCB0u;
            // 0x1ffcb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FFCB8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FFD28u: goto label_1ffd28;
            case 0x1FFD70u: goto label_1ffd70;
            case 0x1FFD80u: goto label_1ffd80;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FFCB8u; }
            if (ctx->pc != 0x1FFCB8u) { return; }
        }
        }
    }
    ctx->pc = 0x1FFCB8u;
    // 0x1ffcb8: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1ffcb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ffcbc: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1ffcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1ffcc0: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1ffcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ffcc4: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x1ffcc4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1ffcc8: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x1ffcc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ffccc: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1ffcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ffcd0: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1ffcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ffcd4: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1ffcd4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1ffcd8: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x1ffcd8u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1ffcdc: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1ffcdcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1ffce0: 0x61083  sra         $v0, $a2, 2
    ctx->pc = 0x1ffce0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 2));
    // 0x1ffce4: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1ffce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ffce8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ffce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ffcec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FFCECu;
    {
        const bool branch_taken_0x1ffcec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFCF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFCECu;
            // 0x1ffcf0: 0xfba20060  sqc2        $vf2, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffcec) {
            ctx->pc = 0x1FFD28u;
            goto label_1ffd28;
        }
    }
    ctx->pc = 0x1FFCF4u;
    // 0x1ffcf4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1ffcf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1ffcf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ffcf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ffcfc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1ffcfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1ffd00: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ffd00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ffd04: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1ffd04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ffd08: 0x4be11058  vmulx.xyzw  $vf1, $vf2, $vf1x
    ctx->pc = 0x1ffd08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ffd0c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1ffd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ffd10: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1ffd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1ffd14: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1ffd14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ffd18: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1ffd18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ffd1c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1FFD1Cu;
    {
        const bool branch_taken_0x1ffd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFD1Cu;
            // 0x1ffd20: 0xfba10080  sqc2        $vf1, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd1c) {
            ctx->pc = 0x1FFD70u;
            goto label_1ffd70;
        }
    }
    ctx->pc = 0x1FFD24u;
    // 0x1ffd24: 0x0  nop
    ctx->pc = 0x1ffd24u;
    // NOP
label_1ffd28:
    // 0x1ffd28: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x1ffd28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
    // 0x1ffd2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ffd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ffd30: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FFD30u;
    {
        const bool branch_taken_0x1ffd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFD30u;
            // 0x1ffd34: 0x26220050  addiu       $v0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd30) {
            ctx->pc = 0x1FFD80u;
            goto label_1ffd80;
        }
    }
    ctx->pc = 0x1FFD38u;
    // 0x1ffd38: 0x4be2206c  vsub.xyzw   $vf1, $vf4, $vf2
    ctx->pc = 0x1ffd38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ffd3c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1ffd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ffd40: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1ffd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1ffd44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ffd44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ffd48: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1ffd48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1ffd4c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1ffd4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1ffd50: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1ffd50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1ffd54: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1ffd54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ffd58: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1ffd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ffd5c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1ffd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1ffd60: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1ffd60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ffd64: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1ffd64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ffd68: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1ffd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ffd6c: 0x0  nop
    ctx->pc = 0x1ffd6cu;
    // NOP
label_1ffd70:
    // 0x1ffd70: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1ffd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1ffd74: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1ffd74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ffd78: 0x4be20918  vmulx.xyzw  $vf4, $vf1, $vf2x
    ctx->pc = 0x1ffd78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ffd7c: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x1ffd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1ffd80:
    // 0x1ffd80: 0x7a240050  lq          $a0, 0x50($s1)
    ctx->pc = 0x1ffd80u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1ffd84: 0xd8420020  lqc2        $vf2, 0x20($v0)
    ctx->pc = 0x1ffd84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1ffd88: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1ffd88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ffd8c: 0x78450030  lq          $a1, 0x30($v0)
    ctx->pc = 0x1ffd8cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ffd90: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x1ffd90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ffd94: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x1ffd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x1ffd98: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1ffd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x1ffd9c: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1ffd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ffda0: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x1ffda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x1ffda4: 0xfba200c0  sqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x1ffda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ffda8: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1ffda8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ffdac: 0xdba30050  lqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1ffdacu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ffdb0: 0x4be3085a  vmulz.xyzw  $vf1, $vf1, $vf3z
    ctx->pc = 0x1ffdb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ffdb4: 0x4be12128  vadd.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x1ffdb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ffdb8: 0x7e240050  sq          $a0, 0x50($s1)
    ctx->pc = 0x1ffdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 4));
    // 0x1ffdbc: 0xfa2400e0  sqc2        $vf4, 0xE0($s1)
    ctx->pc = 0x1ffdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ffdc0: 0x7e230060  sq          $v1, 0x60($s1)
    ctx->pc = 0x1ffdc0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), GPR_VEC(ctx, 3));
    // 0x1ffdc4: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x1ffdc4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ffdc8: 0xfa220070  sqc2        $vf2, 0x70($s1)
    ctx->pc = 0x1ffdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ffdcc: 0x7e250080  sq          $a1, 0x80($s1)
    ctx->pc = 0x1ffdccu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), GPR_VEC(ctx, 5));
    // 0x1ffdd0: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x1ffdd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ffdd4: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x1ffdd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1ffdd8: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1ffdd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1ffddc: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x1ffddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ffde0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFDE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFDE0u;
            // 0x1ffde4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FFD28u: goto label_1ffd28;
            case 0x1FFD70u: goto label_1ffd70;
            case 0x1FFD80u: goto label_1ffd80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FFDE8u;
}
