#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025AFE0
// Address: 0x25afe0 - 0x25b0b8
void sub_0025AFE0_0x25afe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AFE0_0x25afe0");
#endif

    ctx->pc = 0x25afe0u;

    // 0x25afe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25afe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25afe4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25afe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25afe8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25afe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25afec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25afecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25aff0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25aff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25aff4: 0xc096402  jal         func_259008
    ctx->pc = 0x25AFF4u;
    SET_GPR_U32(ctx, 31, 0x25AFFCu);
    ctx->pc = 0x25AFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AFF4u;
            // 0x25aff8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AFFCu; }
        if (ctx->pc != 0x25AFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AFFCu; }
        if (ctx->pc != 0x25AFFCu) { return; }
    }
    ctx->pc = 0x25AFFCu;
    // 0x25affc: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x25affcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x25b000: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x25b000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x25b004: 0x24633618  addiu       $v1, $v1, 0x3618
    ctx->pc = 0x25b004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13848));
    // 0x25b008: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25b008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b00c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x25b00cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x25b010: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25b010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b014: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25b014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b01c: 0x3e00008  jr          $ra
    ctx->pc = 0x25B01Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B01Cu;
            // 0x25b020: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B06Cu: goto label_25b06c;
            case 0x25B088u: goto label_25b088;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25B024u;
    // 0x25b024: 0x0  nop
    ctx->pc = 0x25b024u;
    // NOP
    // 0x25b028: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25b028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25b02c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x25b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x25b030: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25b030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25b034: 0x24421df8  addiu       $v0, $v0, 0x1DF8
    ctx->pc = 0x25b034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7672));
    // 0x25b038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25b038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25b03c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25b03cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b044: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x25b044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x25b048: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x25b048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25b04c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25B04Cu;
    {
        const bool branch_taken_0x25b04c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B04Cu;
            // 0x25b050: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b04c) {
            ctx->pc = 0x25B06Cu;
            goto label_25b06c;
        }
    }
    ctx->pc = 0x25B054u;
    // 0x25b054: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x25b054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25b058: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x25b058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25b05c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x25b05cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25b060: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x25b060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x25b064: 0x40f809  jalr        $v0
    ctx->pc = 0x25B064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25B06Cu);
        ctx->pc = 0x25B068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B064u;
            // 0x25b068: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25B06Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B06Cu: goto label_25b06c;
            case 0x25B088u: goto label_25b088;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25B06Cu; }
            if (ctx->pc != 0x25B06Cu) { return; }
        }
        }
    }
    ctx->pc = 0x25B06Cu;
label_25b06c:
    // 0x25b06c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x25b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x25b070: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x25b070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x25b074: 0x2442a770  addiu       $v0, $v0, -0x5890
    ctx->pc = 0x25b074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944624));
    // 0x25b078: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25B078u;
    {
        const bool branch_taken_0x25b078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B078u;
            // 0x25b07c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b078) {
            ctx->pc = 0x25B088u;
            goto label_25b088;
        }
    }
    ctx->pc = 0x25B080u;
    // 0x25b080: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x25B080u;
    SET_GPR_U32(ctx, 31, 0x25B088u);
    ctx->pc = 0x25B084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B080u;
            // 0x25b084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B088u; }
        if (ctx->pc != 0x25B088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B088u; }
        if (ctx->pc != 0x25B088u) { return; }
    }
    ctx->pc = 0x25B088u;
label_25b088:
    // 0x25b088: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25b088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b08c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25b08cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b094: 0x3e00008  jr          $ra
    ctx->pc = 0x25B094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B094u;
            // 0x25b098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B06Cu: goto label_25b06c;
            case 0x25B088u: goto label_25b088;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25B09Cu;
    // 0x25b09c: 0x0  nop
    ctx->pc = 0x25b09cu;
    // NOP
    // 0x25b0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x25B0A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B0A0u;
            // 0x25b0a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B06Cu: goto label_25b06c;
            case 0x25B088u: goto label_25b088;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25B0A8u;
    // 0x25b0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x25B0A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B06Cu: goto label_25b06c;
            case 0x25B088u: goto label_25b088;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25B0B0u;
    // 0x25b0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x25B0B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B0B0u;
            // 0x25b0b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B06Cu: goto label_25b06c;
            case 0x25B088u: goto label_25b088;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25B0B8u;
}
