#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A5C98
// Address: 0x1a5c98 - 0x1a5d88
void sub_001A5C98_0x1a5c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5C98_0x1a5c98");
#endif

    ctx->pc = 0x1a5c98u;

    // 0x1a5c98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a5c9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a5c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a5ca0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a5ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a5ca4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5ca8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a5ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a5cac: 0x50600029  beql        $v1, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x1A5CACu;
    {
        const bool branch_taken_0x1a5cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5cac) {
            ctx->pc = 0x1A5CB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5CACu;
            // 0x1a5cb0: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A5D54u;
            goto label_1a5d54;
        }
    }
    ctx->pc = 0x1A5CB4u;
    // 0x1a5cb4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1a5cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1a5cb8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A5CB8u;
    {
        const bool branch_taken_0x1a5cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5CB8u;
            // 0x1a5cbc: 0x26060028  addiu       $a2, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5cb8) {
            ctx->pc = 0x1A5CE0u;
            goto label_1a5ce0;
        }
    }
    ctx->pc = 0x1A5CC0u;
    // 0x1a5cc0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1a5cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a5cc4: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1a5cc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1a5cc8: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1a5cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1a5ccc: 0x40f809  jalr        $v0
    ctx->pc = 0x1A5CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5CD4u);
        ctx->pc = 0x1A5CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5CCCu;
            // 0x1a5cd0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5CD4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5CE0u: goto label_1a5ce0;
            case 0x1A5D38u: goto label_1a5d38;
            case 0x1A5D3Cu: goto label_1a5d3c;
            case 0x1A5D54u: goto label_1a5d54;
            case 0x1A5D78u: goto label_1a5d78;
            case 0x1A5D7Cu: goto label_1a5d7c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5CD4u; }
            if (ctx->pc != 0x1A5CD4u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5CD4u;
    // 0x1a5cd4: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1a5cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1a5cd8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a5cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a5cdc: 0x26060028  addiu       $a2, $s0, 0x28
    ctx->pc = 0x1a5cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_1a5ce0:
    // 0x1a5ce0: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x1a5ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1a5ce4: 0x2607002a  addiu       $a3, $s0, 0x2A
    ctx->pc = 0x1a5ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 42));
    // 0x1a5ce8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1a5ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a5cec: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1a5cecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1a5cf0: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1a5cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1a5cf4: 0x40f809  jalr        $v0
    ctx->pc = 0x1A5CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5CFCu);
        ctx->pc = 0x1A5CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5CF4u;
            // 0x1a5cf8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5CFCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5CE0u: goto label_1a5ce0;
            case 0x1A5D38u: goto label_1a5d38;
            case 0x1A5D3Cu: goto label_1a5d3c;
            case 0x1A5D54u: goto label_1a5d54;
            case 0x1A5D78u: goto label_1a5d78;
            case 0x1A5D7Cu: goto label_1a5d7c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5CFCu; }
            if (ctx->pc != 0x1A5CFCu) { return; }
        }
        }
    }
    ctx->pc = 0x1A5CFCu;
    // 0x1a5cfc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A5CFCu;
    {
        const bool branch_taken_0x1a5cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5CFCu;
            // 0x1a5d00: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5cfc) {
            ctx->pc = 0x1A5D3Cu;
            goto label_1a5d3c;
        }
    }
    ctx->pc = 0x1A5D04u;
    // 0x1a5d04: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1a5d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1a5d08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a5d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d0c: 0x24a5d7c8  addiu       $a1, $a1, -0x2838
    ctx->pc = 0x1a5d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957000));
    // 0x1a5d10: 0xc04c572  jal         func_1315C8
    ctx->pc = 0x1A5D10u;
    SET_GPR_U32(ctx, 31, 0x1A5D18u);
    ctx->pc = 0x1A5D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D10u;
            // 0x1a5d14: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315C8u;
    if (runtime->hasFunction(0x1315C8u)) {
        auto targetFn = runtime->lookupFunction(0x1315C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D18u; }
        if (ctx->pc != 0x1A5D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1315c8_0x1315d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D18u; }
        if (ctx->pc != 0x1A5D18u) { return; }
    }
    ctx->pc = 0x1A5D18u;
    // 0x1a5d18: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a5d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a5d1c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5D1Cu;
    {
        const bool branch_taken_0x1a5d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D1Cu;
            // 0x1a5d20: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d1c) {
            ctx->pc = 0x1A5D38u;
            goto label_1a5d38;
        }
    }
    ctx->pc = 0x1A5D24u;
    // 0x1a5d24: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1a5d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a5d28: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1a5d28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a5d2c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1a5d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1a5d30: 0x40f809  jalr        $v0
    ctx->pc = 0x1A5D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5D38u);
        ctx->pc = 0x1A5D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D30u;
            // 0x1a5d34: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5D38u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5CE0u: goto label_1a5ce0;
            case 0x1A5D38u: goto label_1a5d38;
            case 0x1A5D3Cu: goto label_1a5d3c;
            case 0x1A5D54u: goto label_1a5d54;
            case 0x1A5D78u: goto label_1a5d78;
            case 0x1A5D7Cu: goto label_1a5d7c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D38u; }
            if (ctx->pc != 0x1A5D38u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5D38u;
label_1a5d38:
    // 0x1a5d38: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1a5d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1a5d3c:
    // 0x1a5d3c: 0x9602002a  lhu         $v0, 0x2A($s0)
    ctx->pc = 0x1a5d3cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1a5d40: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1A5D40u;
    {
        const bool branch_taken_0x1a5d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5d40) {
            ctx->pc = 0x1A5D44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D40u;
            // 0x1a5d44: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A5D7Cu;
            goto label_1a5d7c;
        }
    }
    ctx->pc = 0x1A5D48u;
    // 0x1a5d48: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1a5d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a5d4c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A5D4Cu;
    {
        const bool branch_taken_0x1a5d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D4Cu;
            // 0x1a5d50: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d4c) {
            ctx->pc = 0x1A5D78u;
            goto label_1a5d78;
        }
    }
    ctx->pc = 0x1A5D54u;
label_1a5d54:
    // 0x1a5d54: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A5D54u;
    {
        const bool branch_taken_0x1a5d54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5d54) {
            ctx->pc = 0x1A5D58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D54u;
            // 0x1a5d58: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A5D7Cu;
            goto label_1a5d7c;
        }
    }
    ctx->pc = 0x1A5D5Cu;
    // 0x1a5d5c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1a5d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1a5d60: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5D60u;
    {
        const bool branch_taken_0x1a5d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5d60) {
            ctx->pc = 0x1A5D64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D60u;
            // 0x1a5d64: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A5D7Cu;
            goto label_1a5d7c;
        }
    }
    ctx->pc = 0x1A5D68u;
    // 0x1a5d68: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1a5d68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1a5d6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a5d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d70: 0xc04c572  jal         func_1315C8
    ctx->pc = 0x1A5D70u;
    SET_GPR_U32(ctx, 31, 0x1A5D78u);
    ctx->pc = 0x1A5D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D70u;
            // 0x1a5d74: 0x24a5d7c8  addiu       $a1, $a1, -0x2838 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315C8u;
    if (runtime->hasFunction(0x1315C8u)) {
        auto targetFn = runtime->lookupFunction(0x1315C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D78u; }
        if (ctx->pc != 0x1A5D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1315c8_0x1315d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D78u; }
        if (ctx->pc != 0x1A5D78u) { return; }
    }
    ctx->pc = 0x1A5D78u;
label_1a5d78:
    // 0x1a5d78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a5d78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5d7c:
    // 0x1a5d7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a5d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5d80: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D80u;
            // 0x1a5d84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5CE0u: goto label_1a5ce0;
            case 0x1A5D38u: goto label_1a5d38;
            case 0x1A5D3Cu: goto label_1a5d3c;
            case 0x1A5D54u: goto label_1a5d54;
            case 0x1A5D78u: goto label_1a5d78;
            case 0x1A5D7Cu: goto label_1a5d7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5D88u;
}
