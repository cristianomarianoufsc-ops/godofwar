#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ADAB8
// Address: 0x1adab8 - 0x1adbc0
void sub_001ADAB8_0x1adab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADAB8_0x1adab8");
#endif

    ctx->pc = 0x1adab8u;

    // 0x1adab8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1adab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1adabc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1adabcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1adac0: 0x8c432610  lw          $v1, 0x2610($v0)
    ctx->pc = 0x1adac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9744)));
    // 0x1adac4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1adac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1adac8: 0x24422610  addiu       $v0, $v0, 0x2610
    ctx->pc = 0x1adac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9744));
    // 0x1adacc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1adaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1adad0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1adad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adad4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1adad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1adad8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1adad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1adadc: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1ADADCu;
    {
        const bool branch_taken_0x1adadc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ADAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADADCu;
            // 0x1adae0: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adadc) {
            ctx->pc = 0x1ADB40u;
            goto label_1adb40;
        }
    }
    ctx->pc = 0x1ADAE4u;
    // 0x1adae4: 0x0  nop
    ctx->pc = 0x1adae4u;
    // NOP
label_1adae8:
    // 0x1adae8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1adae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1adaec: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x1adaecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1adaf0: 0xc06a732  jal         func_1A9CC8
    ctx->pc = 0x1ADAF0u;
    SET_GPR_U32(ctx, 31, 0x1ADAF8u);
    ctx->pc = 0x1ADAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADAF0u;
            // 0x1adaf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9CC8u;
    if (runtime->hasFunction(0x1A9CC8u)) {
        auto targetFn = runtime->lookupFunction(0x1A9CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAF8u; }
        if (ctx->pc != 0x1ADAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9CC8_0x1a9cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAF8u; }
        if (ctx->pc != 0x1ADAF8u) { return; }
    }
    ctx->pc = 0x1ADAF8u;
    // 0x1adaf8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1adaf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adafc: 0x9622002a  lhu         $v0, 0x2A($s1)
    ctx->pc = 0x1adafcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x1adb00: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADB00u;
    {
        const bool branch_taken_0x1adb00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1adb00) {
            ctx->pc = 0x1ADB04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADB00u;
            // 0x1adb04: 0x8e0200a4  lw          $v0, 0xA4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ADB14u;
            goto label_1adb14;
        }
    }
    ctx->pc = 0x1ADB08u;
    // 0x1adb08: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ADB08u;
    {
        const bool branch_taken_0x1adb08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADB08u;
            // 0x1adb0c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adb08) {
            ctx->pc = 0x1ADB30u;
            goto label_1adb30;
        }
    }
    ctx->pc = 0x1ADB10u;
    // 0x1adb10: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x1adb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1adb14:
    // 0x1adb14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1adb14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb18: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1adb18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1adb1c: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1adb1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1adb20: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1adb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1adb24: 0x40f809  jalr        $v0
    ctx->pc = 0x1ADB24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ADB2Cu);
        ctx->pc = 0x1ADB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADB24u;
            // 0x1adb28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ADB2Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ADAE8u: goto label_1adae8;
            case 0x1ADB14u: goto label_1adb14;
            case 0x1ADB30u: goto label_1adb30;
            case 0x1ADB40u: goto label_1adb40;
            case 0x1ADBA8u: goto label_1adba8;
            case 0x1ADBACu: goto label_1adbac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ADB2Cu; }
            if (ctx->pc != 0x1ADB2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1ADB2Cu;
    // 0x1adb2c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1adb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1adb30:
    // 0x1adb30: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1adb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adb34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1adb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1adb38: 0x1443ffeb  bne         $v0, $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1ADB38u;
    {
        const bool branch_taken_0x1adb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1ADB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADB38u;
            // 0x1adb3c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adb38) {
            ctx->pc = 0x1ADAE8u;
            runtime->cooperativeGuestYield();
            goto label_1adae8;
        }
    }
    ctx->pc = 0x1ADB40u;
label_1adb40:
    // 0x1adb40: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x1adb40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1adb44: 0x50a00019  beql        $a1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1ADB44u;
    {
        const bool branch_taken_0x1adb44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adb44) {
            ctx->pc = 0x1ADB48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADB44u;
            // 0x1adb48: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ADBACu;
            goto label_1adbac;
        }
    }
    ctx->pc = 0x1ADB4Cu;
    // 0x1adb4c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1adb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1adb50: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1ADB50u;
    {
        const bool branch_taken_0x1adb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADB50u;
            // 0x1adb54: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adb50) {
            ctx->pc = 0x1ADBA8u;
            goto label_1adba8;
        }
    }
    ctx->pc = 0x1ADB58u;
    // 0x1adb58: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1adb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1adb5c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1adb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1adb60: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1adb60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1adb64: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1adb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1adb68: 0x40f809  jalr        $v0
    ctx->pc = 0x1ADB68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ADB70u);
        ctx->pc = 0x1ADB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADB68u;
            // 0x1adb6c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ADB70u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ADAE8u: goto label_1adae8;
            case 0x1ADB14u: goto label_1adb14;
            case 0x1ADB30u: goto label_1adb30;
            case 0x1ADB40u: goto label_1adb40;
            case 0x1ADBA8u: goto label_1adba8;
            case 0x1ADBACu: goto label_1adbac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ADB70u; }
            if (ctx->pc != 0x1ADB70u) { return; }
        }
        }
    }
    ctx->pc = 0x1ADB70u;
    // 0x1adb70: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x1adb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1adb74: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1adb74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1adb78: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1adb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1adb7c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1ADB7Cu;
    {
        const bool branch_taken_0x1adb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADB7Cu;
            // 0x1adb80: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adb7c) {
            ctx->pc = 0x1ADBACu;
            goto label_1adbac;
        }
    }
    ctx->pc = 0x1ADB84u;
    // 0x1adb84: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x1adb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1adb88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1adb88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb8c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1adb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1adb90: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x1adb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x1adb94: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1adb94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1adb98: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1adb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1adb9c: 0x40f809  jalr        $v0
    ctx->pc = 0x1ADB9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ADBA4u);
        ctx->pc = 0x1ADBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADB9Cu;
            // 0x1adba0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ADBA4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ADAE8u: goto label_1adae8;
            case 0x1ADB14u: goto label_1adb14;
            case 0x1ADB30u: goto label_1adb30;
            case 0x1ADB40u: goto label_1adb40;
            case 0x1ADBA8u: goto label_1adba8;
            case 0x1ADBACu: goto label_1adbac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ADBA4u; }
            if (ctx->pc != 0x1ADBA4u) { return; }
        }
        }
    }
    ctx->pc = 0x1ADBA4u;
    // 0x1adba4: 0x0  nop
    ctx->pc = 0x1adba4u;
    // NOP
label_1adba8:
    // 0x1adba8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1adba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1adbac:
    // 0x1adbac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1adbacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adbb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1adbb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADBB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADBB4u;
            // 0x1adbb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ADAE8u: goto label_1adae8;
            case 0x1ADB14u: goto label_1adb14;
            case 0x1ADB30u: goto label_1adb30;
            case 0x1ADB40u: goto label_1adb40;
            case 0x1ADBA8u: goto label_1adba8;
            case 0x1ADBACu: goto label_1adbac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ADBBCu;
    // 0x1adbbc: 0x0  nop
    ctx->pc = 0x1adbbcu;
    // NOP
}
