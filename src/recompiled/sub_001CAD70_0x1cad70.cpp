#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CAD70
// Address: 0x1cad70 - 0x1cae50
void sub_001CAD70_0x1cad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CAD70_0x1cad70");
#endif

    ctx->pc = 0x1cad70u;

    // 0x1cad70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cad70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cad74: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1cad74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1cad78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cad78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cad7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cad7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cad80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cad80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cad84: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1cad84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1cad88: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1cad88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cad8c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1cad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cad90: 0x78420050  lq          $v0, 0x50($v0)
    ctx->pc = 0x1cad90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1cad94: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1cad94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1cad98: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1cad98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cad9c: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1cad9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1cada0: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x1cada0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x1cada4: 0x40f809  jalr        $v0
    ctx->pc = 0x1CADA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CADACu);
        ctx->pc = 0x1CADA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CADA4u;
            // 0x1cada8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CADACu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CAE18u: goto label_1cae18;
            case 0x1CAE34u: goto label_1cae34;
            case 0x1CAE38u: goto label_1cae38;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CADACu; }
            if (ctx->pc != 0x1CADACu) { return; }
        }
        }
    }
    ctx->pc = 0x1CADACu;
    // 0x1cadac: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1cadacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1cadb0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cadb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cadb4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cadb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cadb8: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x1cadb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cadbc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1cadbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1cadc0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1cadc0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1cadc4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1cadc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cadc8: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x1cadc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cadcc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cadccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadd0: 0x96020078  lhu         $v0, 0x78($s0)
    ctx->pc = 0x1cadd0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1cadd4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CADD4u;
    {
        const bool branch_taken_0x1cadd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CADD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CADD4u;
            // 0x1cadd8: 0xfba10000  sqc2        $vf1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cadd4) {
            ctx->pc = 0x1CAE34u;
            goto label_1cae34;
        }
    }
    ctx->pc = 0x1CADDCu;
    // 0x1caddc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1caddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cade0: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1cade0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1cade4: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1cade4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1cade8: 0x40f809  jalr        $v0
    ctx->pc = 0x1CADE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CADF0u);
        ctx->pc = 0x1CADECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CADE8u;
            // 0x1cadec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CADF0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CAE18u: goto label_1cae18;
            case 0x1CAE34u: goto label_1cae34;
            case 0x1CAE38u: goto label_1cae38;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CADF0u; }
            if (ctx->pc != 0x1CADF0u) { return; }
        }
        }
    }
    ctx->pc = 0x1CADF0u;
    // 0x1cadf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cadf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadf4: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1cadf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1cadf8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CADF8u;
    {
        const bool branch_taken_0x1cadf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cadf8) {
            ctx->pc = 0x1CADFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CADF8u;
            // 0x1cadfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CAE18u;
            goto label_1cae18;
        }
    }
    ctx->pc = 0x1CAE00u;
    // 0x1cae00: 0xc090d56  jal         func_243558
    ctx->pc = 0x1CAE00u;
    SET_GPR_U32(ctx, 31, 0x1CAE08u);
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAE08u; }
        if (ctx->pc != 0x1CAE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAE08u; }
        if (ctx->pc != 0x1CAE08u) { return; }
    }
    ctx->pc = 0x1CAE08u;
    // 0x1cae08: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1cae08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1cae0c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1cae0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1cae10: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1cae10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1cae14: 0x0  nop
    ctx->pc = 0x1cae14u;
    // NOP
label_1cae18:
    // 0x1cae18: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CAE18u;
    {
        const bool branch_taken_0x1cae18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cae18) {
            ctx->pc = 0x1CAE1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAE18u;
            // 0x1cae1c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CAE34u;
            goto label_1cae34;
        }
    }
    ctx->pc = 0x1CAE20u;
    // 0x1cae20: 0xc07634a  jal         func_1D8D28
    ctx->pc = 0x1CAE20u;
    SET_GPR_U32(ctx, 31, 0x1CAE28u);
    ctx->pc = 0x1CAE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAE20u;
            // 0x1cae24: 0x7ba40000  lq          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8D28u;
    if (runtime->hasFunction(0x1D8D28u)) {
        auto targetFn = runtime->lookupFunction(0x1D8D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAE28u; }
        if (ctx->pc != 0x1CAE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8d28_0x1d8ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAE28u; }
        if (ctx->pc != 0x1CAE28u) { return; }
    }
    ctx->pc = 0x1CAE28u;
    // 0x1cae28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAE28u;
    {
        const bool branch_taken_0x1cae28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAE28u;
            // 0x1cae2c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae28) {
            ctx->pc = 0x1CAE38u;
            goto label_1cae38;
        }
    }
    ctx->pc = 0x1CAE30u;
    // 0x1cae30: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1cae30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cae34:
    // 0x1cae34: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1cae34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cae38:
    // 0x1cae38: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1cae38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cae3c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1cae3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cae40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cae40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cae44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cae44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cae48: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAE48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAE48u;
            // 0x1cae4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CAE18u: goto label_1cae18;
            case 0x1CAE34u: goto label_1cae34;
            case 0x1CAE38u: goto label_1cae38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CAE50u;
}
