#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DA038
// Address: 0x1da038 - 0x1da158
void sub_001DA038_0x1da038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA038_0x1da038");
#endif

    ctx->pc = 0x1da038u;

    // 0x1da038: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1da038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1da03c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1da03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1da040: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1da040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1da044: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1da044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da048: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1da048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1da04c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1da04cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da050: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1da050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1da054: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1da054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1da058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da05c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1da05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1da060: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x1da060u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da064: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1da064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1da068:
    // 0x1da068: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1da068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da06c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1da06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1da070: 0x8c500024  lw          $s0, 0x24($v0)
    ctx->pc = 0x1da070u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1da074: 0xc04c55c  jal         func_131570
    ctx->pc = 0x1DA074u;
    SET_GPR_U32(ctx, 31, 0x1DA07Cu);
    ctx->pc = 0x1DA078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA074u;
            // 0x1da078: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131570u;
    if (runtime->hasFunction(0x131570u)) {
        auto targetFn = runtime->lookupFunction(0x131570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA07Cu; }
        if (ctx->pc != 0x1DA07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131570_0x131570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA07Cu; }
        if (ctx->pc != 0x1DA07Cu) { return; }
    }
    ctx->pc = 0x1DA07Cu;
    // 0x1da07c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1da07cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1da080: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1da080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1da084: 0x2473e848  addiu       $s3, $v1, -0x17B8
    ctx->pc = 0x1da084u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961224));
    // 0x1da088: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1da088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1da08c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1da08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1da090: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1da090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da094: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1da094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da098: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1da098u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1da09c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1da09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1da0a0: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1da0a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1da0a4: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1da0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1da0a8: 0x40f809  jalr        $v0
    ctx->pc = 0x1DA0A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DA0B0u);
        ctx->pc = 0x1DA0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA0A8u;
            // 0x1da0ac: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DA0B0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA068u: goto label_1da068;
            case 0x1DA0F8u: goto label_1da0f8;
            case 0x1DA138u: goto label_1da138;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DA0B0u; }
            if (ctx->pc != 0x1DA0B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1DA0B0u;
    // 0x1da0b0: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x1da0b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1da0b4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1DA0B4u;
    {
        const bool branch_taken_0x1da0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA0B4u;
            // 0x1da0b8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da0b4) {
            ctx->pc = 0x1DA068u;
            runtime->cooperativeGuestYield();
            goto label_1da068;
        }
    }
    ctx->pc = 0x1DA0BCu;
    // 0x1da0bc: 0x8e300044  lw          $s0, 0x44($s1)
    ctx->pc = 0x1da0bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1da0c0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DA0C0u;
    {
        const bool branch_taken_0x1da0c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA0C0u;
            // 0x1da0c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da0c0) {
            ctx->pc = 0x1DA0F8u;
            goto label_1da0f8;
        }
    }
    ctx->pc = 0x1DA0C8u;
    // 0x1da0c8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1da0c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1da0cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1da0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1da0d0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1da0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1da0d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1da0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da0d8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1da0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1da0dc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1da0dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1da0e0: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1da0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1da0e4: 0x40f809  jalr        $v0
    ctx->pc = 0x1DA0E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DA0ECu);
        ctx->pc = 0x1DA0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA0E4u;
            // 0x1da0e8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DA0ECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA068u: goto label_1da068;
            case 0x1DA0F8u: goto label_1da0f8;
            case 0x1DA138u: goto label_1da138;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DA0ECu; }
            if (ctx->pc != 0x1DA0ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1DA0ECu;
    // 0x1da0ec: 0xc04c9da  jal         func_132768
    ctx->pc = 0x1DA0ECu;
    SET_GPR_U32(ctx, 31, 0x1DA0F4u);
    ctx->pc = 0x1DA0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA0ECu;
            // 0x1da0f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA0F4u; }
        if (ctx->pc != 0x1DA0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA0F4u; }
        if (ctx->pc != 0x1DA0F4u) { return; }
    }
    ctx->pc = 0x1DA0F4u;
    // 0x1da0f4: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x1da0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_1da0f8:
    // 0x1da0f8: 0x8e300048  lw          $s0, 0x48($s1)
    ctx->pc = 0x1da0f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1da0fc: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DA0FCu;
    {
        const bool branch_taken_0x1da0fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA0FCu;
            // 0x1da100: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da0fc) {
            ctx->pc = 0x1DA138u;
            goto label_1da138;
        }
    }
    ctx->pc = 0x1DA104u;
    // 0x1da104: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1da104u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1da108: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1da108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1da10c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1da10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1da110: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1da110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da114: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1da114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1da118: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1da118u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1da11c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1da11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1da120: 0x40f809  jalr        $v0
    ctx->pc = 0x1DA120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DA128u);
        ctx->pc = 0x1DA124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA120u;
            // 0x1da124: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DA128u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA068u: goto label_1da068;
            case 0x1DA0F8u: goto label_1da0f8;
            case 0x1DA138u: goto label_1da138;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DA128u; }
            if (ctx->pc != 0x1DA128u) { return; }
        }
        }
    }
    ctx->pc = 0x1DA128u;
    // 0x1da128: 0xc04c9da  jal         func_132768
    ctx->pc = 0x1DA128u;
    SET_GPR_U32(ctx, 31, 0x1DA130u);
    ctx->pc = 0x1DA12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA128u;
            // 0x1da12c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA130u; }
        if (ctx->pc != 0x1DA130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA130u; }
        if (ctx->pc != 0x1DA130u) { return; }
    }
    ctx->pc = 0x1DA130u;
    // 0x1da130: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x1da130u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x1da134: 0x0  nop
    ctx->pc = 0x1da134u;
    // NOP
label_1da138:
    // 0x1da138: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1da138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1da13c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1da13cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1da140: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1da140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da144: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1da144u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da148: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1da148u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da14c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da150: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA150u;
            // 0x1da154: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA068u: goto label_1da068;
            case 0x1DA0F8u: goto label_1da0f8;
            case 0x1DA138u: goto label_1da138;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DA158u;
}
