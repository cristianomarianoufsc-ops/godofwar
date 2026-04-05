#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ADC50
// Address: 0x1adc50 - 0x1add30
void sub_001ADC50_0x1adc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADC50_0x1adc50");
#endif

    ctx->pc = 0x1adc50u;

    // 0x1adc50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1adc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1adc54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1adc54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adc58: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1adc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1adc5c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1adc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1adc60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1adc60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adc64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1adc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1adc68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1adc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1adc6c: 0x8e510018  lw          $s1, 0x18($s2)
    ctx->pc = 0x1adc6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1adc70: 0xc04c576  jal         func_1315D8
    ctx->pc = 0x1ADC70u;
    SET_GPR_U32(ctx, 31, 0x1ADC78u);
    ctx->pc = 0x1ADC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADC70u;
            // 0x1adc74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D8u;
    if (runtime->hasFunction(0x1315D8u)) {
        auto targetFn = runtime->lookupFunction(0x1315D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC78u; }
        if (ctx->pc != 0x1ADC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1315d8_0x1315f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC78u; }
        if (ctx->pc != 0x1ADC78u) { return; }
    }
    ctx->pc = 0x1ADC78u;
    // 0x1adc78: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1adc78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1adc7c: 0x2463d7c8  addiu       $v1, $v1, -0x2838
    ctx->pc = 0x1adc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957000));
    // 0x1adc80: 0x14430024  bne         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1ADC80u;
    {
        const bool branch_taken_0x1adc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1ADC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADC80u;
            // 0x1adc84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc80) {
            ctx->pc = 0x1ADD14u;
            goto label_1add14;
        }
    }
    ctx->pc = 0x1ADC88u;
    // 0x1adc88: 0xc0697f0  jal         func_1A5FC0
    ctx->pc = 0x1ADC88u;
    SET_GPR_U32(ctx, 31, 0x1ADC90u);
    ctx->pc = 0x1ADC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADC88u;
            // 0x1adc8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5FC0u;
    if (runtime->hasFunction(0x1A5FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A5FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC90u; }
        if (ctx->pc != 0x1ADC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5FC0_0x1a5fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC90u; }
        if (ctx->pc != 0x1ADC90u) { return; }
    }
    ctx->pc = 0x1ADC90u;
    // 0x1adc90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1adc90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adc94: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1ADC94u;
    {
        const bool branch_taken_0x1adc94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adc94) {
            ctx->pc = 0x1ADCC8u;
            goto label_1adcc8;
        }
    }
    ctx->pc = 0x1ADC9Cu;
    // 0x1adc9c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1adc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1adca0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ADCA0u;
    {
        const bool branch_taken_0x1adca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADCA0u;
            // 0x1adca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adca0) {
            ctx->pc = 0x1ADCC8u;
            goto label_1adcc8;
        }
    }
    ctx->pc = 0x1ADCA8u;
    // 0x1adca8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1adca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adcac: 0xc04c572  jal         func_1315C8
    ctx->pc = 0x1ADCACu;
    SET_GPR_U32(ctx, 31, 0x1ADCB4u);
    ctx->pc = 0x1ADCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADCACu;
            // 0x1adcb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315C8u;
    if (runtime->hasFunction(0x1315C8u)) {
        auto targetFn = runtime->lookupFunction(0x1315C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADCB4u; }
        if (ctx->pc != 0x1ADCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1315c8_0x1315d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADCB4u; }
        if (ctx->pc != 0x1ADCB4u) { return; }
    }
    ctx->pc = 0x1ADCB4u;
    // 0x1adcb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1adcb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adcb8: 0xc069646  jal         func_1A5918
    ctx->pc = 0x1ADCB8u;
    SET_GPR_U32(ctx, 31, 0x1ADCC0u);
    ctx->pc = 0x1ADCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADCB8u;
            // 0x1adcbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5918u;
    if (runtime->hasFunction(0x1A5918u)) {
        auto targetFn = runtime->lookupFunction(0x1A5918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADCC0u; }
        if (ctx->pc != 0x1ADCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a5918_0x1a5938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADCC0u; }
        if (ctx->pc != 0x1ADCC0u) { return; }
    }
    ctx->pc = 0x1ADCC0u;
    // 0x1adcc0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1ADCC0u;
    {
        const bool branch_taken_0x1adcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADCC0u;
            // 0x1adcc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adcc0) {
            ctx->pc = 0x1ADD14u;
            goto label_1add14;
        }
    }
    ctx->pc = 0x1ADCC8u;
label_1adcc8:
    // 0x1adcc8: 0xc06b64a  jal         func_1AD928
    ctx->pc = 0x1ADCC8u;
    SET_GPR_U32(ctx, 31, 0x1ADCD0u);
    ctx->pc = 0x1ADCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADCC8u;
            // 0x1adccc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD928u;
    if (runtime->hasFunction(0x1AD928u)) {
        auto targetFn = runtime->lookupFunction(0x1AD928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADCD0u; }
        if (ctx->pc != 0x1ADCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD928_0x1ad928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADCD0u; }
        if (ctx->pc != 0x1ADCD0u) { return; }
    }
    ctx->pc = 0x1ADCD0u;
    // 0x1adcd0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1adcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1adcd4: 0x8c42ecb4  lw          $v0, -0x134C($v0)
    ctx->pc = 0x1adcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962356)));
    // 0x1adcd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1adcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1adcdc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1adcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1adce0: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x1adce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1adce4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ADCE4u;
    {
        const bool branch_taken_0x1adce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADCE4u;
            // 0x1adce8: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adce4) {
            ctx->pc = 0x1ADD0Cu;
            goto label_1add0c;
        }
    }
    ctx->pc = 0x1ADCECu;
    // 0x1adcec: 0x0  nop
    ctx->pc = 0x1adcecu;
    // NOP
label_1adcf0:
    // 0x1adcf0: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1adcf0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1adcf4: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1adcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1adcf8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ADCF8u;
    {
        const bool branch_taken_0x1adcf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADCF8u;
            // 0x1adcfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adcf8) {
            ctx->pc = 0x1ADD14u;
            goto label_1add14;
        }
    }
    ctx->pc = 0x1ADD00u;
    // 0x1add00: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1add00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1add04: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ADD04u;
    {
        const bool branch_taken_0x1add04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD04u;
            // 0x1add08: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add04) {
            ctx->pc = 0x1ADCF0u;
            runtime->cooperativeGuestYield();
            goto label_1adcf0;
        }
    }
    ctx->pc = 0x1ADD0Cu;
label_1add0c:
    // 0x1add0c: 0xc06b74c  jal         func_1ADD30
    ctx->pc = 0x1ADD0Cu;
    SET_GPR_U32(ctx, 31, 0x1ADD14u);
    ctx->pc = 0x1ADD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD0Cu;
            // 0x1add10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ADD30u;
    if (runtime->hasFunction(0x1ADD30u)) {
        auto targetFn = runtime->lookupFunction(0x1ADD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD14u; }
        if (ctx->pc != 0x1ADD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADD30_0x1add30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD14u; }
        if (ctx->pc != 0x1ADD14u) { return; }
    }
    ctx->pc = 0x1ADD14u;
label_1add14:
    // 0x1add14: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1add14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1add18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1add18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1add1c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1add1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1add20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1add20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1add24: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADD24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD24u;
            // 0x1add28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ADCC8u: goto label_1adcc8;
            case 0x1ADCF0u: goto label_1adcf0;
            case 0x1ADD0Cu: goto label_1add0c;
            case 0x1ADD14u: goto label_1add14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ADD2Cu;
    // 0x1add2c: 0x0  nop
    ctx->pc = 0x1add2cu;
    // NOP
}
