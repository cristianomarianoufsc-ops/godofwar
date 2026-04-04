#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F2BB0
// Address: 0x1f2bb0 - 0x1f2e80
void sub_001F2BB0_0x1f2bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2BB0_0x1f2bb0");
#endif

    ctx->pc = 0x1f2bb0u;

    // 0x1f2bb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f2bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f2bb4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1f2bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1f2bb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f2bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f2bbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f2bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2bc0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1f2bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1f2bc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f2bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f2bc8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1f2bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1f2bcc: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x1f2bccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1f2bd0: 0x1200009a  beqz        $s0, . + 4 + (0x9A << 2)
    ctx->pc = 0x1F2BD0u;
    {
        const bool branch_taken_0x1f2bd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2BD0u;
            // 0x1f2bd4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2bd0) {
            ctx->pc = 0x1F2E3Cu;
            goto label_1f2e3c;
        }
    }
    ctx->pc = 0x1F2BD8u;
    // 0x1f2bd8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1f2bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f2bdc: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1f2bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1f2be0: 0x24520010  addiu       $s2, $v0, 0x10
    ctx->pc = 0x1f2be0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1f2be4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1f2be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f2be8: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x1f2be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f2bec: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1f2becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1f2bf0: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x1F2BF0u;
    {
        const bool branch_taken_0x1f2bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2bf0) {
            ctx->pc = 0x1F2BF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2BF0u;
            // 0x1f2bf4: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2CA4u;
            goto label_1f2ca4;
        }
    }
    ctx->pc = 0x1F2BF8u;
    // 0x1f2bf8: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1F2BF8u;
    {
        const bool branch_taken_0x1f2bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2BF8u;
            // 0x1f2bfc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2bf8) {
            ctx->pc = 0x1F2CA0u;
            goto label_1f2ca0;
        }
    }
    ctx->pc = 0x1F2C00u;
    // 0x1f2c00: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x1f2c00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1f2c04: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2C04u;
    {
        const bool branch_taken_0x1f2c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F2C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2C04u;
            // 0x1f2c08: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2c04) {
            ctx->pc = 0x1F2C14u;
            goto label_1f2c14;
        }
    }
    ctx->pc = 0x1F2C0Cu;
    // 0x1f2c0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F2C0Cu;
    {
        const bool branch_taken_0x1f2c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2C0Cu;
            // 0x1f2c10: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2c0c) {
            ctx->pc = 0x1F2C30u;
            goto label_1f2c30;
        }
    }
    ctx->pc = 0x1F2C14u;
label_1f2c14:
    // 0x1f2c14: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1f2c14u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1f2c18: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1f2c18u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1f2c1c: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2C1Cu;
    {
        const bool branch_taken_0x1f2c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F2C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2C1Cu;
            // 0x1f2c20: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2c1c) {
            ctx->pc = 0x1F2C30u;
            goto label_1f2c30;
        }
    }
    ctx->pc = 0x1F2C24u;
    // 0x1f2c24: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1F2C24u;
    SET_GPR_U32(ctx, 31, 0x1F2C2Cu);
    ctx->pc = 0x1F2C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2C24u;
            // 0x1f2c28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2C2Cu; }
        if (ctx->pc != 0x1F2C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2C2Cu; }
        if (ctx->pc != 0x1F2C2Cu) { return; }
    }
    ctx->pc = 0x1F2C2Cu;
    // 0x1f2c2c: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1f2c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1f2c30:
    // 0x1f2c30: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1f2c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1f2c34: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f2c34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f2c38: 0xc6430058  lwc1        $f3, 0x58($s2)
    ctx->pc = 0x1f2c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f2c3c: 0xc6410050  lwc1        $f1, 0x50($s2)
    ctx->pc = 0x1f2c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2c40: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x1f2c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2c44: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x1f2c44u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1f2c48: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1f2c48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1f2c4c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1f2c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1f2c50: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1f2c50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f2c54: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1f2c54u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x1f2c58: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x1f2c58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1f2c5c: 0x70471b89  pcpyld      $v1, $v0, $a3
    ctx->pc = 0x1f2c5cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x1f2c60: 0x44071800  mfc1        $a3, $f3
    ctx->pc = 0x1f2c60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1f2c64: 0x71071389  pcpyld      $v0, $t0, $a3
    ctx->pc = 0x1f2c64u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x1f2c68: 0x704344c8  ppacw       $t0, $v0, $v1
    ctx->pc = 0x1f2c68u;
    SET_GPR_VEC(ctx, 8, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1f2c6c: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x1f2c6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1f2c70: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1f2c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f2c74: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1f2c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f2c78: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1f2c78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f2c7c: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1f2c7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f2c80: 0xd8810010  lqc2        $vf1, 0x10($a0)
    ctx->pc = 0x1f2c80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1f2c84: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1f2c84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f2c88: 0xd8810020  lqc2        $vf1, 0x20($a0)
    ctx->pc = 0x1f2c88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1f2c8c: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1f2c8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f2c90: 0xd8810030  lqc2        $vf1, 0x30($a0)
    ctx->pc = 0x1f2c90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f2c94: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x1f2c94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f2c98: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1F2C98u;
    {
        const bool branch_taken_0x1f2c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2C98u;
            // 0x1f2c9c: 0xfa210070  sqc2        $vf1, 0x70($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 112), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2c98) {
            ctx->pc = 0x1F2CD4u;
            goto label_1f2cd4;
        }
    }
    ctx->pc = 0x1F2CA0u;
label_1f2ca0:
    // 0x1f2ca0: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1f2ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1f2ca4:
    // 0x1f2ca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f2ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ca8: 0xc07c6cc  jal         func_1F1B30
    ctx->pc = 0x1F2CA8u;
    SET_GPR_U32(ctx, 31, 0x1F2CB0u);
    ctx->pc = 0x1F2CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2CA8u;
            // 0x1f2cac: 0x7a300070  lq          $s0, 0x70($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1B30u;
    if (runtime->hasFunction(0x1F1B30u)) {
        auto targetFn = runtime->lookupFunction(0x1F1B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2CB0u; }
        if (ctx->pc != 0x1F2CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1B30_0x1f1b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2CB0u; }
        if (ctx->pc != 0x1F2CB0u) { return; }
    }
    ctx->pc = 0x1F2CB0u;
    // 0x1f2cb0: 0x70022ca9  por         $a1, $zero, $v0
    ctx->pc = 0x1f2cb0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1f2cb4: 0x7e250070  sq          $a1, 0x70($s1)
    ctx->pc = 0x1f2cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), GPR_VEC(ctx, 5));
    // 0x1f2cb8: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x1f2cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f2cbc: 0x30e24800  andi        $v0, $a3, 0x4800
    ctx->pc = 0x1f2cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)18432);
    // 0x1f2cc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2CC0u;
    {
        const bool branch_taken_0x1f2cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2CC0u;
            // 0x1f2cc4: 0x701034a9  por         $a2, $zero, $s0 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2cc0) {
            ctx->pc = 0x1F2CD4u;
            goto label_1f2cd4;
        }
    }
    ctx->pc = 0x1F2CC8u;
    // 0x1f2cc8: 0xc07c726  jal         func_1F1C98
    ctx->pc = 0x1F2CC8u;
    SET_GPR_U32(ctx, 31, 0x1F2CD0u);
    ctx->pc = 0x1F2CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2CC8u;
            // 0x1f2ccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1C98u;
    if (runtime->hasFunction(0x1F1C98u)) {
        auto targetFn = runtime->lookupFunction(0x1F1C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2CD0u; }
        if (ctx->pc != 0x1F2CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f1c98_0x1f1de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2CD0u; }
        if (ctx->pc != 0x1F2CD0u) { return; }
    }
    ctx->pc = 0x1F2CD0u;
    // 0x1f2cd0: 0x7e220070  sq          $v0, 0x70($s1)
    ctx->pc = 0x1f2cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), GPR_VEC(ctx, 2));
label_1f2cd4:
    // 0x1f2cd4: 0x52600008  beql        $s3, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F2CD4u;
    {
        const bool branch_taken_0x1f2cd4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2cd4) {
            ctx->pc = 0x1F2CD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2CD4u;
            // 0x1f2cd8: 0x8e230040  lw          $v1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2CF8u;
            goto label_1f2cf8;
        }
    }
    ctx->pc = 0x1F2CDCu;
    // 0x1f2cdc: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x1f2cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1f2ce0: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1f2ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1f2ce4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1f2ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1f2ce8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1f2ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x1f2cec: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x1F2CECu;
    {
        const bool branch_taken_0x1f2cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2cec) {
            ctx->pc = 0x1F2CF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2CECu;
            // 0x1f2cf0: 0x8e250040  lw          $a1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2DB0u;
            goto label_1f2db0;
        }
    }
    ctx->pc = 0x1F2CF4u;
    // 0x1f2cf4: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x1f2cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1f2cf8:
    // 0x1f2cf8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f2cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f2cfc: 0x8c45e2cc  lw          $a1, -0x1D34($v0)
    ctx->pc = 0x1f2cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959820)));
    // 0x1f2d00: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x1f2d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1f2d04: 0xc46000f8  lwc1        $f0, 0xF8($v1)
    ctx->pc = 0x1f2d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2d08: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x1f2d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1f2d0c: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x1f2d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x1f2d10: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x1F2D10u;
    SET_GPR_U32(ctx, 31, 0x1F2D18u);
    ctx->pc = 0x1F2D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2D10u;
            // 0x1f2d14: 0x2484007c  addiu       $a0, $a0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D18u; }
        if (ctx->pc != 0x1F2D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D18u; }
        if (ctx->pc != 0x1F2D18u) { return; }
    }
    ctx->pc = 0x1F2D18u;
    // 0x1f2d18: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2D18u;
    {
        const bool branch_taken_0x1f2d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2d18) {
            ctx->pc = 0x1F2D1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2D18u;
            // 0x1f2d1c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2D30u;
            goto label_1f2d30;
        }
    }
    ctx->pc = 0x1F2D20u;
    // 0x1f2d20: 0xc07d702  jal         func_1F5C08
    ctx->pc = 0x1F2D20u;
    SET_GPR_U32(ctx, 31, 0x1F2D28u);
    ctx->pc = 0x1F2D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2D20u;
            // 0x1f2d24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5C08u;
    if (runtime->hasFunction(0x1F5C08u)) {
        auto targetFn = runtime->lookupFunction(0x1F5C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D28u; }
        if (ctx->pc != 0x1F2D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5C08_0x1f5c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D28u; }
        if (ctx->pc != 0x1F2D28u) { return; }
    }
    ctx->pc = 0x1F2D28u;
    // 0x1f2d28: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1F2D28u;
    {
        const bool branch_taken_0x1f2d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2D28u;
            // 0x1f2d2c: 0x8e250040  lw          $a1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2d28) {
            ctx->pc = 0x1F2DB0u;
            goto label_1f2db0;
        }
    }
    ctx->pc = 0x1F2D30u;
label_1f2d30:
    // 0x1f2d30: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1f2d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1f2d34: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2D34u;
    {
        const bool branch_taken_0x1f2d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2d34) {
            ctx->pc = 0x1F2D38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2D34u;
            // 0x1f2d38: 0x8e300040  lw          $s0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2D4Cu;
            goto label_1f2d4c;
        }
    }
    ctx->pc = 0x1F2D3Cu;
    // 0x1f2d3c: 0xc07c77a  jal         func_1F1DE8
    ctx->pc = 0x1F2D3Cu;
    SET_GPR_U32(ctx, 31, 0x1F2D44u);
    ctx->pc = 0x1F2D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2D3Cu;
            // 0x1f2d40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1DE8u;
    if (runtime->hasFunction(0x1F1DE8u)) {
        auto targetFn = runtime->lookupFunction(0x1F1DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D44u; }
        if (ctx->pc != 0x1F2D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1DE8_0x1f1de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D44u; }
        if (ctx->pc != 0x1F2D44u) { return; }
    }
    ctx->pc = 0x1F2D44u;
    // 0x1f2d44: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1F2D44u;
    {
        const bool branch_taken_0x1f2d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2D44u;
            // 0x1f2d48: 0x8e250040  lw          $a1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2d44) {
            ctx->pc = 0x1F2DB0u;
            goto label_1f2db0;
        }
    }
    ctx->pc = 0x1F2D4Cu;
label_1f2d4c:
    // 0x1f2d4c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f2d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f2d50: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1f2d50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1f2d54: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2D54u;
    {
        const bool branch_taken_0x1f2d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F2D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2D54u;
            // 0x1f2d58: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2d54) {
            ctx->pc = 0x1F2D64u;
            goto label_1f2d64;
        }
    }
    ctx->pc = 0x1F2D5Cu;
    // 0x1f2d5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F2D5Cu;
    {
        const bool branch_taken_0x1f2d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2D5Cu;
            // 0x1f2d60: 0x26030020  addiu       $v1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2d5c) {
            ctx->pc = 0x1F2D80u;
            goto label_1f2d80;
        }
    }
    ctx->pc = 0x1F2D64u;
label_1f2d64:
    // 0x1f2d64: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1f2d64u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1f2d68: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1f2d68u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1f2d6c: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2D6Cu;
    {
        const bool branch_taken_0x1f2d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F2D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2D6Cu;
            // 0x1f2d70: 0x26030070  addiu       $v1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2d6c) {
            ctx->pc = 0x1F2D80u;
            goto label_1f2d80;
        }
    }
    ctx->pc = 0x1F2D74u;
    // 0x1f2d74: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1F2D74u;
    SET_GPR_U32(ctx, 31, 0x1F2D7Cu);
    ctx->pc = 0x1F2D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2D74u;
            // 0x1f2d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D7Cu; }
        if (ctx->pc != 0x1F2D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D7Cu; }
        if (ctx->pc != 0x1F2D7Cu) { return; }
    }
    ctx->pc = 0x1F2D7Cu;
    // 0x1f2d7c: 0x26030070  addiu       $v1, $s0, 0x70
    ctx->pc = 0x1f2d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1f2d80:
    // 0x1f2d80: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1f2d80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f2d84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f2d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d88: 0x26250070  addiu       $a1, $s1, 0x70
    ctx->pc = 0x1f2d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x1f2d8c: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x1f2d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x1f2d90: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1f2d90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1f2d94: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x1f2d94u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x1f2d98: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1f2d98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f2d9c: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x1f2d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    // 0x1f2da0: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1f2da0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f2da4: 0xc07c17a  jal         func_1F05E8
    ctx->pc = 0x1F2DA4u;
    SET_GPR_U32(ctx, 31, 0x1F2DACu);
    ctx->pc = 0x1F2DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2DA4u;
            // 0x1f2da8: 0x7e220030  sq          $v0, 0x30($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F05E8u;
    if (runtime->hasFunction(0x1F05E8u)) {
        auto targetFn = runtime->lookupFunction(0x1F05E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2DACu; }
        if (ctx->pc != 0x1F2DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F05E8_0x1f05e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2DACu; }
        if (ctx->pc != 0x1F2DACu) { return; }
    }
    ctx->pc = 0x1F2DACu;
    // 0x1f2dac: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x1f2dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1f2db0:
    // 0x1f2db0: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1f2db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x1f2db4: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x1f2db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1f2db8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1f2db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1f2dbc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1f2dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f2dc0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f2dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f2dc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2DC4u;
    {
        const bool branch_taken_0x1f2dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2DC4u;
            // 0x1f2dc8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2dc4) {
            ctx->pc = 0x1F2DD4u;
            goto label_1f2dd4;
        }
    }
    ctx->pc = 0x1F2DCCu;
    // 0x1f2dcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F2DCCu;
    {
        const bool branch_taken_0x1f2dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2DCCu;
            // 0x1f2dd0: 0xc482003c  lwc1        $f2, 0x3C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2dcc) {
            ctx->pc = 0x1F2DD8u;
            goto label_1f2dd8;
        }
    }
    ctx->pc = 0x1F2DD4u;
label_1f2dd4:
    // 0x1f2dd4: 0xc442c4a8  lwc1        $f2, -0x3B58($v0)
    ctx->pc = 0x1f2dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f2dd8:
    // 0x1f2dd8: 0xda210030  lqc2        $vf1, 0x30($s1)
    ctx->pc = 0x1f2dd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1f2ddc: 0xda220070  lqc2        $vf2, 0x70($s1)
    ctx->pc = 0x1f2ddcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1f2de0: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1f2de0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f2de4: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1f2de4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f2de8: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1f2de8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f2dec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f2decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f2df0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f2df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f2df4: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1f2df4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f2df8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1f2df8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f2dfc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1f2dfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1f2e00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f2e00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2e04: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x1f2e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1f2e08: 0x46000004  c1          0x4
    ctx->pc = 0x1f2e08u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f2e0c: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1f2e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1f2e10: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f2e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f2e14: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1f2e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1f2e18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f2e18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f2e1c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1f2e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1f2e20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f2e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f2e24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2E24u;
    {
        const bool branch_taken_0x1f2e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2E24u;
            // 0x1f2e28: 0x46020042  mul.s       $f1, $f0, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2e24) {
            ctx->pc = 0x1F2E38u;
            goto label_1f2e38;
        }
    }
    ctx->pc = 0x1F2E2Cu;
    // 0x1f2e2c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f2e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f2e30: 0xc440c4a4  lwc1        $f0, -0x3B5C($v0)
    ctx->pc = 0x1f2e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2e34: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x1f2e34u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
label_1f2e38:
    // 0x1f2e38: 0xe62100e4  swc1        $f1, 0xE4($s1)
    ctx->pc = 0x1f2e38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
label_1f2e3c:
    // 0x1f2e3c: 0x262200f0  addiu       $v0, $s1, 0xF0
    ctx->pc = 0x1f2e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x1f2e40: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x1f2e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x1f2e44: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f2e44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f2e48:
    // 0x1f2e48: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x1f2e48u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f2e4c: 0x78860010  lq          $a2, 0x10($a0)
    ctx->pc = 0x1f2e4cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1f2e50: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x1f2e50u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x1f2e54: 0x7c460010  sq          $a2, 0x10($v0)
    ctx->pc = 0x1f2e54u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 6));
    // 0x1f2e58: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1f2e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1f2e5c: 0x1483fffa  bne         $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F2E5Cu;
    {
        const bool branch_taken_0x1f2e5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F2E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2E5Cu;
            // 0x1f2e60: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2e5c) {
            ctx->pc = 0x1F2E48u;
            runtime->cooperativeGuestYield();
            goto label_1f2e48;
        }
    }
    ctx->pc = 0x1F2E64u;
    // 0x1f2e64: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1f2e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f2e68: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1f2e68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f2e6c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1f2e6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f2e70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f2e70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f2e74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f2e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2e78: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2E78u;
            // 0x1f2e7c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F2C14u: goto label_1f2c14;
            case 0x1F2C30u: goto label_1f2c30;
            case 0x1F2CA0u: goto label_1f2ca0;
            case 0x1F2CA4u: goto label_1f2ca4;
            case 0x1F2CD4u: goto label_1f2cd4;
            case 0x1F2CF8u: goto label_1f2cf8;
            case 0x1F2D30u: goto label_1f2d30;
            case 0x1F2D4Cu: goto label_1f2d4c;
            case 0x1F2D64u: goto label_1f2d64;
            case 0x1F2D80u: goto label_1f2d80;
            case 0x1F2DB0u: goto label_1f2db0;
            case 0x1F2DD4u: goto label_1f2dd4;
            case 0x1F2DD8u: goto label_1f2dd8;
            case 0x1F2E38u: goto label_1f2e38;
            case 0x1F2E3Cu: goto label_1f2e3c;
            case 0x1F2E48u: goto label_1f2e48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F2E80u;
}
