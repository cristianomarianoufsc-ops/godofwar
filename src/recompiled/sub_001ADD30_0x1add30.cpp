#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ADD30
// Address: 0x1add30 - 0x1ade58
void sub_001ADD30_0x1add30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADD30_0x1add30");
#endif

    ctx->pc = 0x1add30u;

    // 0x1add30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1add30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1add34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1add34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1add38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1add3c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1add3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1add40: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1add40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1add44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1add44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1add48: 0xc04c576  jal         func_1315D8
    ctx->pc = 0x1ADD48u;
    SET_GPR_U32(ctx, 31, 0x1ADD50u);
    ctx->pc = 0x1ADD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD48u;
            // 0x1add4c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D8u;
    if (runtime->hasFunction(0x1315D8u)) {
        auto targetFn = runtime->lookupFunction(0x1315D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD50u; }
        if (ctx->pc != 0x1ADD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1315d8_0x1315f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD50u; }
        if (ctx->pc != 0x1ADD50u) { return; }
    }
    ctx->pc = 0x1ADD50u;
    // 0x1add50: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1add50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1add54: 0x2463d7c8  addiu       $v1, $v1, -0x2838
    ctx->pc = 0x1add54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957000));
    // 0x1add58: 0x14430038  bne         $v0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1ADD58u;
    {
        const bool branch_taken_0x1add58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1ADD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD58u;
            // 0x1add5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add58) {
            ctx->pc = 0x1ADE3Cu;
            goto label_1ade3c;
        }
    }
    ctx->pc = 0x1ADD60u;
    // 0x1add60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1add60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1add64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add68: 0xc04c572  jal         func_1315C8
    ctx->pc = 0x1ADD68u;
    SET_GPR_U32(ctx, 31, 0x1ADD70u);
    ctx->pc = 0x1ADD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD68u;
            // 0x1add6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315C8u;
    if (runtime->hasFunction(0x1315C8u)) {
        auto targetFn = runtime->lookupFunction(0x1315C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD70u; }
        if (ctx->pc != 0x1ADD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1315c8_0x1315d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD70u; }
        if (ctx->pc != 0x1ADD70u) { return; }
    }
    ctx->pc = 0x1ADD70u;
    // 0x1add70: 0xc0697f0  jal         func_1A5FC0
    ctx->pc = 0x1ADD70u;
    SET_GPR_U32(ctx, 31, 0x1ADD78u);
    ctx->pc = 0x1ADD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD70u;
            // 0x1add74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5FC0u;
    if (runtime->hasFunction(0x1A5FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A5FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD78u; }
        if (ctx->pc != 0x1ADD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5FC0_0x1a5fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD78u; }
        if (ctx->pc != 0x1ADD78u) { return; }
    }
    ctx->pc = 0x1ADD78u;
    // 0x1add78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1add78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add7c: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x1ADD7Cu;
    {
        const bool branch_taken_0x1add7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1add7c) {
            ctx->pc = 0x1ADDB4u;
            goto label_1addb4;
        }
    }
    ctx->pc = 0x1ADD84u;
    // 0x1add84: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1add84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1add88: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ADD88u;
    {
        const bool branch_taken_0x1add88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD88u;
            // 0x1add8c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add88) {
            ctx->pc = 0x1ADDA0u;
            goto label_1adda0;
        }
    }
    ctx->pc = 0x1ADD90u;
    // 0x1add90: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1add90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1add94: 0x8c42caa4  lw          $v0, -0x355C($v0)
    ctx->pc = 0x1add94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953636)));
    // 0x1add98: 0x2221026  xor         $v0, $s1, $v0
    ctx->pc = 0x1add98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
    // 0x1add9c: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x1add9cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1adda0:
    // 0x1adda0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1adda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adda4: 0xc069646  jal         func_1A5918
    ctx->pc = 0x1ADDA4u;
    SET_GPR_U32(ctx, 31, 0x1ADDACu);
    ctx->pc = 0x1ADDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADDA4u;
            // 0x1adda8: 0x3a050001  xori        $a1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5918u;
    if (runtime->hasFunction(0x1A5918u)) {
        auto targetFn = runtime->lookupFunction(0x1A5918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADDACu; }
        if (ctx->pc != 0x1ADDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a5918_0x1a5938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADDACu; }
        if (ctx->pc != 0x1ADDACu) { return; }
    }
    ctx->pc = 0x1ADDACu;
    // 0x1addac: 0x16000023  bnez        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1ADDACu;
    {
        const bool branch_taken_0x1addac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADDACu;
            // 0x1addb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1addac) {
            ctx->pc = 0x1ADE3Cu;
            goto label_1ade3c;
        }
    }
    ctx->pc = 0x1ADDB4u;
label_1addb4:
    // 0x1addb4: 0xc06b634  jal         func_1AD8D0
    ctx->pc = 0x1ADDB4u;
    SET_GPR_U32(ctx, 31, 0x1ADDBCu);
    ctx->pc = 0x1ADDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADDB4u;
            // 0x1addb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD8D0u;
    if (runtime->hasFunction(0x1AD8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AD8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADDBCu; }
        if (ctx->pc != 0x1ADDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD8D0_0x1ad8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADDBCu; }
        if (ctx->pc != 0x1ADDBCu) { return; }
    }
    ctx->pc = 0x1ADDBCu;
    // 0x1addbc: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1addbcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1addc0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1addc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1addc4: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1addc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1addc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1addc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1addcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1addccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1addd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1addd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1addd4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1addd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1addd8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1addd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1adddc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1adddcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1adde0: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1adde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1adde4: 0x40f809  jalr        $v0
    ctx->pc = 0x1ADDE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ADDECu);
        ctx->pc = 0x1ADDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADDE4u;
            // 0x1adde8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ADDECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ADDA0u: goto label_1adda0;
            case 0x1ADDB4u: goto label_1addb4;
            case 0x1ADE08u: goto label_1ade08;
            case 0x1ADE38u: goto label_1ade38;
            case 0x1ADE3Cu: goto label_1ade3c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ADDECu; }
            if (ctx->pc != 0x1ADDECu) { return; }
        }
        }
    }
    ctx->pc = 0x1ADDECu;
    // 0x1addec: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ADDECu;
    {
        const bool branch_taken_0x1addec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADDECu;
            // 0x1addf0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1addec) {
            ctx->pc = 0x1ADE08u;
            goto label_1ade08;
        }
    }
    ctx->pc = 0x1ADDF4u;
    // 0x1addf4: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x1addf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1addf8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1addf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1addfc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1ADDFCu;
    {
        const bool branch_taken_0x1addfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADDFCu;
            // 0x1ade00: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1addfc) {
            ctx->pc = 0x1ADE38u;
            goto label_1ade38;
        }
    }
    ctx->pc = 0x1ADE04u;
    // 0x1ade04: 0x0  nop
    ctx->pc = 0x1ade04u;
    // NOP
label_1ade08:
    // 0x1ade08: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1ADE08u;
    SET_GPR_U32(ctx, 31, 0x1ADE10u);
    ctx->pc = 0x1ADE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE08u;
            // 0x1ade0c: 0x8c44ca1c  lw          $a0, -0x35E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953500)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE10u; }
        if (ctx->pc != 0x1ADE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE10u; }
        if (ctx->pc != 0x1ADE10u) { return; }
    }
    ctx->pc = 0x1ADE10u;
    // 0x1ade10: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1ade10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1ade14: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1ade14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1ade18: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1ade18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1ade1c: 0x24632640  addiu       $v1, $v1, 0x2640
    ctx->pc = 0x1ade1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9792));
    // 0x1ade20: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x1ade20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x1ade24: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1ade24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ade28: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1ade28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1ade2c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ade2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ade30: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1ade30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1ade34: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ade34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1ade38:
    // 0x1ade38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ade38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ade3c:
    // 0x1ade3c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ade3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ade40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ade40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ade44: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ade44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ade48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ade48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ade4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADE4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE4Cu;
            // 0x1ade50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ADDA0u: goto label_1adda0;
            case 0x1ADDB4u: goto label_1addb4;
            case 0x1ADE08u: goto label_1ade08;
            case 0x1ADE38u: goto label_1ade38;
            case 0x1ADE3Cu: goto label_1ade3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ADE54u;
    // 0x1ade54: 0x0  nop
    ctx->pc = 0x1ade54u;
    // NOP
}
