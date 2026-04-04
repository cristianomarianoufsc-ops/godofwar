#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026B5C8
// Address: 0x26b5c8 - 0x26b690
void sub_0026B5C8_0x26b5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B5C8_0x26b5c8");
#endif

    ctx->pc = 0x26b5c8u;

    // 0x26b5c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26b5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26b5cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x26b5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x26b5d0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x26b5d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b5d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26b5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26b5d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26b5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26b5dc: 0xc0743c6  jal         func_1D0F18
    ctx->pc = 0x26B5DCu;
    SET_GPR_U32(ctx, 31, 0x26B5E4u);
    ctx->pc = 0x26B5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B5DCu;
            // 0x26b5e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F18u;
    if (runtime->hasFunction(0x1D0F18u)) {
        auto targetFn = runtime->lookupFunction(0x1D0F18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B5E4u; }
        if (ctx->pc != 0x26B5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0F18_0x1d0f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B5E4u; }
        if (ctx->pc != 0x26B5E4u) { return; }
    }
    ctx->pc = 0x26B5E4u;
    // 0x26b5e4: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x26b5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x26b5e8: 0xc074944  jal         func_1D2510
    ctx->pc = 0x26B5E8u;
    SET_GPR_U32(ctx, 31, 0x26B5F0u);
    ctx->pc = 0x26B5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B5E8u;
            // 0x26b5ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2510u;
    if (runtime->hasFunction(0x1D2510u)) {
        auto targetFn = runtime->lookupFunction(0x1D2510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B5F0u; }
        if (ctx->pc != 0x26B5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2510_0x1d2510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B5F0u; }
        if (ctx->pc != 0x26B5F0u) { return; }
    }
    ctx->pc = 0x26B5F0u;
    // 0x26b5f0: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x26b5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x26b5f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26b5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26b5f8: 0x84a20044  lh          $v0, 0x44($a1)
    ctx->pc = 0x26b5f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x26b5fc: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x26B5FCu;
    {
        const bool branch_taken_0x26b5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26B600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B5FCu;
            // 0x26b600: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b5fc) {
            ctx->pc = 0x26B63Cu;
            goto label_26b63c;
        }
    }
    ctx->pc = 0x26B604u;
    // 0x26b604: 0x84b1008c  lh          $s1, 0x8C($a1)
    ctx->pc = 0x26b604u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x26b608: 0x5222001c  beql        $s1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x26B608u;
    {
        const bool branch_taken_0x26b608 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b608) {
            ctx->pc = 0x26B60Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26B608u;
            // 0x26b60c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26B67Cu;
            goto label_26b67c;
        }
    }
    ctx->pc = 0x26B610u;
    // 0x26b610: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x26b610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26b614: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26b614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26b618: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x26b618u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x26b61c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x26b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x26b620: 0x40f809  jalr        $v0
    ctx->pc = 0x26B620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B628u);
        ctx->pc = 0x26B624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B620u;
            // 0x26b624: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B628u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B63Cu: goto label_26b63c;
            case 0x26B67Cu: goto label_26b67c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B628u; }
            if (ctx->pc != 0x26B628u) { return; }
        }
        }
    }
    ctx->pc = 0x26B628u;
    // 0x26b628: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26b628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b62c: 0xc0821f6  jal         func_2087D8
    ctx->pc = 0x26B62Cu;
    SET_GPR_U32(ctx, 31, 0x26B634u);
    ctx->pc = 0x26B630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B62Cu;
            // 0x26b630: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2087D8u;
    if (runtime->hasFunction(0x2087D8u)) {
        auto targetFn = runtime->lookupFunction(0x2087D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B634u; }
        if (ctx->pc != 0x26B634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002087D8_0x2087d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B634u; }
        if (ctx->pc != 0x26B634u) { return; }
    }
    ctx->pc = 0x26B634u;
    // 0x26b634: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26B634u;
    {
        const bool branch_taken_0x26b634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B634u;
            // 0x26b638: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b634) {
            ctx->pc = 0x26B67Cu;
            goto label_26b67c;
        }
    }
    ctx->pc = 0x26B63Cu;
label_26b63c:
    // 0x26b63c: 0x84b10090  lh          $s1, 0x90($a1)
    ctx->pc = 0x26b63cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x26b640: 0x5222000e  beql        $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26B640u;
    {
        const bool branch_taken_0x26b640 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b640) {
            ctx->pc = 0x26B644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26B640u;
            // 0x26b644: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26B67Cu;
            goto label_26b67c;
        }
    }
    ctx->pc = 0x26B648u;
    // 0x26b648: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x26b648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26b64c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26b650: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x26b650u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x26b654: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x26b654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x26b658: 0x40f809  jalr        $v0
    ctx->pc = 0x26B658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B660u);
        ctx->pc = 0x26B65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B658u;
            // 0x26b65c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B660u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B63Cu: goto label_26b63c;
            case 0x26B67Cu: goto label_26b67c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B660u; }
            if (ctx->pc != 0x26B660u) { return; }
        }
        }
    }
    ctx->pc = 0x26B660u;
    // 0x26b660: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26b660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b664: 0xc08235e  jal         func_208D78
    ctx->pc = 0x26B664u;
    SET_GPR_U32(ctx, 31, 0x26B66Cu);
    ctx->pc = 0x26B668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B664u;
            // 0x26b668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B66Cu; }
        if (ctx->pc != 0x26B66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B66Cu; }
        if (ctx->pc != 0x26B66Cu) { return; }
    }
    ctx->pc = 0x26B66Cu;
    // 0x26b66c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b670: 0xc0821f6  jal         func_2087D8
    ctx->pc = 0x26B670u;
    SET_GPR_U32(ctx, 31, 0x26B678u);
    ctx->pc = 0x26B674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B670u;
            // 0x26b674: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2087D8u;
    if (runtime->hasFunction(0x2087D8u)) {
        auto targetFn = runtime->lookupFunction(0x2087D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B678u; }
        if (ctx->pc != 0x26B678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002087D8_0x2087d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B678u; }
        if (ctx->pc != 0x26B678u) { return; }
    }
    ctx->pc = 0x26B678u;
    // 0x26b678: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x26b678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26b67c:
    // 0x26b67c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26b67cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26b680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b684: 0x3e00008  jr          $ra
    ctx->pc = 0x26B684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B684u;
            // 0x26b688: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B63Cu: goto label_26b63c;
            case 0x26B67Cu: goto label_26b67c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B68Cu;
    // 0x26b68c: 0x0  nop
    ctx->pc = 0x26b68cu;
    // NOP
}
