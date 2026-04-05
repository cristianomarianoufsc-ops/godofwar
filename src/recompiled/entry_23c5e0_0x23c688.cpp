#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23c5e0
// Address: 0x23c5e0 - 0x23c688
void entry_23c5e0_0x23c688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23c5e0_0x23c688");
#endif

    ctx->pc = 0x23c5e0u;

    // 0x23c5e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23c5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23c5e4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23c5e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23c5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23c5ec: 0x2442eaf8  addiu       $v0, $v0, -0x1508
    ctx->pc = 0x23c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961912));
    // 0x23c5f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23c5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23c5f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c5f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c5f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c5fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23c5fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c600: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x23c600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x23c604: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23c604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c608: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x23c608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x23c60c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x23c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x23c610: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x23c610u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x23c614: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x23c614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x23c618: 0x40f809  jalr        $v0
    ctx->pc = 0x23C618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23C620u);
        ctx->pc = 0x23C61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C618u;
            // 0x23c61c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23C620u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C654u: goto label_23c654;
            case 0x23C674u: goto label_23c674;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23C620u; }
            if (ctx->pc != 0x23C620u) { return; }
        }
        }
    }
    ctx->pc = 0x23C620u;
    // 0x23c620: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23c620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23c624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23c624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c628: 0x244203d0  addiu       $v0, $v0, 0x3D0
    ctx->pc = 0x23c628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 976));
    // 0x23c62c: 0xc05fed4  jal         func_17FB50
    ctx->pc = 0x23C62Cu;
    SET_GPR_U32(ctx, 31, 0x23C634u);
    ctx->pc = 0x23C630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C62Cu;
            // 0x23c630: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FB50u;
    if (runtime->hasFunction(0x17FB50u)) {
        auto targetFn = runtime->lookupFunction(0x17FB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C634u; }
        if (ctx->pc != 0x23C634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FB50_0x17fb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C634u; }
        if (ctx->pc != 0x23C634u) { return; }
    }
    ctx->pc = 0x23C634u;
    // 0x23c634: 0xc05fc98  jal         func_17F260
    ctx->pc = 0x23C634u;
    SET_GPR_U32(ctx, 31, 0x23C63Cu);
    ctx->pc = 0x23C638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C634u;
            // 0x23c638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F260u;
    if (runtime->hasFunction(0x17F260u)) {
        auto targetFn = runtime->lookupFunction(0x17F260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C63Cu; }
        if (ctx->pc != 0x23C63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F260_0x17f260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C63Cu; }
        if (ctx->pc != 0x23C63Cu) { return; }
    }
    ctx->pc = 0x23C63Cu;
    // 0x23c63c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x23c63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x23c640: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C640u;
    {
        const bool branch_taken_0x23c640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c640) {
            ctx->pc = 0x23C644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23C640u;
            // 0x23c644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23C654u;
            goto label_23c654;
        }
    }
    ctx->pc = 0x23C648u;
    // 0x23c648: 0xc05fb4a  jal         func_17ED28
    ctx->pc = 0x23C648u;
    SET_GPR_U32(ctx, 31, 0x23C650u);
    ctx->pc = 0x23C64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C648u;
            // 0x23c64c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17ED28u;
    if (runtime->hasFunction(0x17ED28u)) {
        auto targetFn = runtime->lookupFunction(0x17ED28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C650u; }
        if (ctx->pc != 0x23C650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017ED28_0x17ed28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C650u; }
        if (ctx->pc != 0x23C650u) { return; }
    }
    ctx->pc = 0x23C650u;
    // 0x23c650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23c650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23c654:
    // 0x23c654: 0xc0602a0  jal         func_180A80
    ctx->pc = 0x23C654u;
    SET_GPR_U32(ctx, 31, 0x23C65Cu);
    ctx->pc = 0x23C658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C654u;
            // 0x23c658: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A80u;
    if (runtime->hasFunction(0x180A80u)) {
        auto targetFn = runtime->lookupFunction(0x180A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C65Cu; }
        if (ctx->pc != 0x23C65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_180a80_0x180a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C65Cu; }
        if (ctx->pc != 0x23C65Cu) { return; }
    }
    ctx->pc = 0x23C65Cu;
    // 0x23c65c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x23c65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x23c660: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C660u;
    {
        const bool branch_taken_0x23c660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c660) {
            ctx->pc = 0x23C664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23C660u;
            // 0x23c664: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23C674u;
            goto label_23c674;
        }
    }
    ctx->pc = 0x23C668u;
    // 0x23c668: 0xc08f1d2  jal         func_23C748
    ctx->pc = 0x23C668u;
    SET_GPR_U32(ctx, 31, 0x23C670u);
    ctx->pc = 0x23C66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C668u;
            // 0x23c66c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C748u;
    if (runtime->hasFunction(0x23C748u)) {
        auto targetFn = runtime->lookupFunction(0x23C748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C670u; }
        if (ctx->pc != 0x23C670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023C748_0x23c748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C670u; }
        if (ctx->pc != 0x23C670u) { return; }
    }
    ctx->pc = 0x23C670u;
    // 0x23c670: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23c670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23c674:
    // 0x23c674: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23c674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c67c: 0x3e00008  jr          $ra
    ctx->pc = 0x23C67Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C67Cu;
            // 0x23c680: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C654u: goto label_23c654;
            case 0x23C674u: goto label_23c674;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C684u;
    // 0x23c684: 0x0  nop
    ctx->pc = 0x23c684u;
    // NOP
}
