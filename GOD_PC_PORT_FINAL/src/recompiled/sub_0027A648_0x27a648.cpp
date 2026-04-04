#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027A648
// Address: 0x27a648 - 0x27a6b8
void sub_0027A648_0x27a648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A648_0x27a648");
#endif

    ctx->pc = 0x27a648u;

    // 0x27a648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27a648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27a64c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27a64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27a650: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27A650u;
    {
        const bool branch_taken_0x27a650 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A650u;
            // 0x27a654: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a650) {
            ctx->pc = 0x27A698u;
            goto label_27a698;
        }
    }
    ctx->pc = 0x27A658u;
    // 0x27a658: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27a658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27a65c: 0x8c431710  lw          $v1, 0x1710($v0)
    ctx->pc = 0x27a65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5904)));
    // 0x27a660: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A660u;
    {
        const bool branch_taken_0x27a660 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27A664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A660u;
            // 0x27a664: 0x3c04002c  lui         $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a660) {
            ctx->pc = 0x27A670u;
            goto label_27a670;
        }
    }
    ctx->pc = 0x27A668u;
    // 0x27a668: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x27A668u;
    SET_GPR_U32(ctx, 31, 0x27A670u);
    ctx->pc = 0x27A66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A668u;
            // 0x27a66c: 0x24844bd0  addiu       $a0, $a0, 0x4BD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A670u; }
        if (ctx->pc != 0x27A670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A670u; }
        if (ctx->pc != 0x27A670u) { return; }
    }
    ctx->pc = 0x27A670u;
label_27a670:
    // 0x27a670: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27A670u;
    {
        const bool branch_taken_0x27a670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A670u;
            // 0x27a674: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a670) {
            ctx->pc = 0x27A680u;
            goto label_27a680;
        }
    }
    ctx->pc = 0x27A678u;
label_27a678:
    // 0x27a678: 0xc0a528c  jal         func_294A30
    ctx->pc = 0x27A678u;
    SET_GPR_U32(ctx, 31, 0x27A680u);
    ctx->pc = 0x27A67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A678u;
            // 0x27a67c: 0x24040fa0  addiu       $a0, $zero, 0xFA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294A30u;
    if (runtime->hasFunction(0x294A30u)) {
        auto targetFn = runtime->lookupFunction(0x294A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A680u; }
        if (ctx->pc != 0x27A680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_294a30_0x294af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A680u; }
        if (ctx->pc != 0x27A680u) { return; }
    }
    ctx->pc = 0x27A680u;
label_27a680:
    // 0x27a680: 0xc0a5d9c  jal         func_297670
    ctx->pc = 0x27A680u;
    SET_GPR_U32(ctx, 31, 0x27A688u);
    ctx->pc = 0x27A684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A680u;
            // 0x27a684: 0x26043280  addiu       $a0, $s0, 0x3280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297670u;
    if (runtime->hasFunction(0x297670u)) {
        auto targetFn = runtime->lookupFunction(0x297670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A688u; }
        if (ctx->pc != 0x27A688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_297670_0x2976c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A688u; }
        if (ctx->pc != 0x27A688u) { return; }
    }
    ctx->pc = 0x27A688u;
    // 0x27a688: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x27A688u;
    {
        const bool branch_taken_0x27a688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A688u;
            // 0x27a68c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a688) {
            ctx->pc = 0x27A678u;
            runtime->cooperativeGuestYield();
            goto label_27a678;
        }
    }
    ctx->pc = 0x27A690u;
    // 0x27a690: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27A690u;
    {
        const bool branch_taken_0x27a690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A690u;
            // 0x27a694: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a690) {
            ctx->pc = 0x27A6A8u;
            goto label_27a6a8;
        }
    }
    ctx->pc = 0x27A698u;
label_27a698:
    // 0x27a698: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x27a698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x27a69c: 0xc0a5d9c  jal         func_297670
    ctx->pc = 0x27A69Cu;
    SET_GPR_U32(ctx, 31, 0x27A6A4u);
    ctx->pc = 0x27A6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A69Cu;
            // 0x27a6a0: 0x24843280  addiu       $a0, $a0, 0x3280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297670u;
    if (runtime->hasFunction(0x297670u)) {
        auto targetFn = runtime->lookupFunction(0x297670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A6A4u; }
        if (ctx->pc != 0x27A6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_297670_0x2976c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A6A4u; }
        if (ctx->pc != 0x27A6A4u) { return; }
    }
    ctx->pc = 0x27A6A4u;
    // 0x27a6a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27a6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27a6a8:
    // 0x27a6a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27a6a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x27A6ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A6ACu;
            // 0x27a6b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27A670u: goto label_27a670;
            case 0x27A678u: goto label_27a678;
            case 0x27A680u: goto label_27a680;
            case 0x27A698u: goto label_27a698;
            case 0x27A6A8u: goto label_27a6a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27A6B4u;
    // 0x27a6b4: 0x0  nop
    ctx->pc = 0x27a6b4u;
    // NOP
}
