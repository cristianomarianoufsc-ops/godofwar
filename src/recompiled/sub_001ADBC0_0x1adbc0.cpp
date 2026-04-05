#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ADBC0
// Address: 0x1adbc0 - 0x1adc50
void sub_001ADBC0_0x1adbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADBC0_0x1adbc0");
#endif

    ctx->pc = 0x1adbc0u;

    // 0x1adbc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1adbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1adbc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1adbc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adbc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1adbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1adbcc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1adbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1adbd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1adbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1adbd4: 0xc04c576  jal         func_1315D8
    ctx->pc = 0x1ADBD4u;
    SET_GPR_U32(ctx, 31, 0x1ADBDCu);
    ctx->pc = 0x1ADBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADBD4u;
            // 0x1adbd8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D8u;
    if (runtime->hasFunction(0x1315D8u)) {
        auto targetFn = runtime->lookupFunction(0x1315D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADBDCu; }
        if (ctx->pc != 0x1ADBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1315d8_0x1315f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADBDCu; }
        if (ctx->pc != 0x1ADBDCu) { return; }
    }
    ctx->pc = 0x1ADBDCu;
    // 0x1adbdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1adbdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adbe0: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1adbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1adbe4: 0x2442d7c8  addiu       $v0, $v0, -0x2838
    ctx->pc = 0x1adbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957000));
    // 0x1adbe8: 0x14a20014  bne         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1ADBE8u;
    {
        const bool branch_taken_0x1adbe8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ADBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADBE8u;
            // 0x1adbec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adbe8) {
            ctx->pc = 0x1ADC3Cu;
            goto label_1adc3c;
        }
    }
    ctx->pc = 0x1ADBF0u;
    // 0x1adbf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adbf4: 0xc04c572  jal         func_1315C8
    ctx->pc = 0x1ADBF4u;
    SET_GPR_U32(ctx, 31, 0x1ADBFCu);
    ctx->pc = 0x1ADBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADBF4u;
            // 0x1adbf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315C8u;
    if (runtime->hasFunction(0x1315C8u)) {
        auto targetFn = runtime->lookupFunction(0x1315C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADBFCu; }
        if (ctx->pc != 0x1ADBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1315c8_0x1315d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADBFCu; }
        if (ctx->pc != 0x1ADBFCu) { return; }
    }
    ctx->pc = 0x1ADBFCu;
    // 0x1adbfc: 0xc0697f0  jal         func_1A5FC0
    ctx->pc = 0x1ADBFCu;
    SET_GPR_U32(ctx, 31, 0x1ADC04u);
    ctx->pc = 0x1ADC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADBFCu;
            // 0x1adc00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5FC0u;
    if (runtime->hasFunction(0x1A5FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A5FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC04u; }
        if (ctx->pc != 0x1ADC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5FC0_0x1a5fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC04u; }
        if (ctx->pc != 0x1ADC04u) { return; }
    }
    ctx->pc = 0x1ADC04u;
    // 0x1adc04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1adc04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adc08: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1ADC08u;
    {
        const bool branch_taken_0x1adc08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADC08u;
            // 0x1adc0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc08) {
            ctx->pc = 0x1ADC3Cu;
            goto label_1adc3c;
        }
    }
    ctx->pc = 0x1ADC10u;
    // 0x1adc10: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1adc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1adc14: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ADC14u;
    {
        const bool branch_taken_0x1adc14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADC14u;
            // 0x1adc18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc14) {
            ctx->pc = 0x1ADC30u;
            goto label_1adc30;
        }
    }
    ctx->pc = 0x1ADC1Cu;
    // 0x1adc1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adc20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1adc20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adc24: 0xc04c572  jal         func_1315C8
    ctx->pc = 0x1ADC24u;
    SET_GPR_U32(ctx, 31, 0x1ADC2Cu);
    ctx->pc = 0x1ADC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADC24u;
            // 0x1adc28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315C8u;
    if (runtime->hasFunction(0x1315C8u)) {
        auto targetFn = runtime->lookupFunction(0x1315C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC2Cu; }
        if (ctx->pc != 0x1ADC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1315c8_0x1315d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC2Cu; }
        if (ctx->pc != 0x1ADC2Cu) { return; }
    }
    ctx->pc = 0x1ADC2Cu;
    // 0x1adc2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1adc2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1adc30:
    // 0x1adc30: 0xc069646  jal         func_1A5918
    ctx->pc = 0x1ADC30u;
    SET_GPR_U32(ctx, 31, 0x1ADC38u);
    ctx->pc = 0x1ADC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADC30u;
            // 0x1adc34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5918u;
    if (runtime->hasFunction(0x1A5918u)) {
        auto targetFn = runtime->lookupFunction(0x1A5918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC38u; }
        if (ctx->pc != 0x1ADC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a5918_0x1a5938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC38u; }
        if (ctx->pc != 0x1ADC38u) { return; }
    }
    ctx->pc = 0x1ADC38u;
    // 0x1adc38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1adc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1adc3c:
    // 0x1adc3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1adc3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adc40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1adc40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adc44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1adc44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adc48: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADC48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADC48u;
            // 0x1adc4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ADC30u: goto label_1adc30;
            case 0x1ADC3Cu: goto label_1adc3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ADC50u;
}
