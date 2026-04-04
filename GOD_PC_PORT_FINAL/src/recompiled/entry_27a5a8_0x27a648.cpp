#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_27a5a8
// Address: 0x27a5a8 - 0x27a648
void entry_27a5a8_0x27a648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_27a5a8_0x27a648");
#endif

    ctx->pc = 0x27a5a8u;

    // 0x27a5a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27a5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27a5ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27a5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27a5b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27a5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27a5b4: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x27A5B4u;
    {
        const bool branch_taken_0x27a5b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A5B4u;
            // 0x27a5b8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a5b4) {
            ctx->pc = 0x27A60Cu;
            goto label_27a60c;
        }
    }
    ctx->pc = 0x27A5BCu;
    // 0x27a5bc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27a5c0: 0x8c431710  lw          $v1, 0x1710($v0)
    ctx->pc = 0x27a5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5904)));
    // 0x27a5c4: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A5C4u;
    {
        const bool branch_taken_0x27a5c4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27A5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A5C4u;
            // 0x27a5c8: 0x3c04002c  lui         $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a5c4) {
            ctx->pc = 0x27A5D4u;
            goto label_27a5d4;
        }
    }
    ctx->pc = 0x27A5CCu;
    // 0x27a5cc: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x27A5CCu;
    SET_GPR_U32(ctx, 31, 0x27A5D4u);
    ctx->pc = 0x27A5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A5CCu;
            // 0x27a5d0: 0x24844bc0  addiu       $a0, $a0, 0x4BC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A5D4u; }
        if (ctx->pc != 0x27A5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A5D4u; }
        if (ctx->pc != 0x27A5D4u) { return; }
    }
    ctx->pc = 0x27A5D4u;
label_27a5d4:
    // 0x27a5d4: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x27a5d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x27a5d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27A5D8u;
    {
        const bool branch_taken_0x27a5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A5D8u;
            // 0x27a5dc: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a5d8) {
            ctx->pc = 0x27A5E8u;
            goto label_27a5e8;
        }
    }
    ctx->pc = 0x27A5E0u;
label_27a5e0:
    // 0x27a5e0: 0xc0a528c  jal         func_294A30
    ctx->pc = 0x27A5E0u;
    SET_GPR_U32(ctx, 31, 0x27A5E8u);
    ctx->pc = 0x27A5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A5E0u;
            // 0x27a5e4: 0x24040fa0  addiu       $a0, $zero, 0xFA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294A30u;
    if (runtime->hasFunction(0x294A30u)) {
        auto targetFn = runtime->lookupFunction(0x294A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A5E8u; }
        if (ctx->pc != 0x27A5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_294a30_0x294af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A5E8u; }
        if (ctx->pc != 0x27A5E8u) { return; }
    }
    ctx->pc = 0x27A5E8u;
label_27a5e8:
    // 0x27a5e8: 0x8e221734  lw          $v0, 0x1734($s1)
    ctx->pc = 0x27a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5940)));
    // 0x27a5ec: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x27A5ECu;
    {
        const bool branch_taken_0x27a5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a5ec) {
            ctx->pc = 0x27A5E0u;
            runtime->cooperativeGuestYield();
            goto label_27a5e0;
        }
    }
    ctx->pc = 0x27A5F4u;
    // 0x27a5f4: 0xc0a5d9c  jal         func_297670
    ctx->pc = 0x27A5F4u;
    SET_GPR_U32(ctx, 31, 0x27A5FCu);
    ctx->pc = 0x27A5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A5F4u;
            // 0x27a5f8: 0x260428d0  addiu       $a0, $s0, 0x28D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297670u;
    if (runtime->hasFunction(0x297670u)) {
        auto targetFn = runtime->lookupFunction(0x297670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A5FCu; }
        if (ctx->pc != 0x27A5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_297670_0x2976c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A5FCu; }
        if (ctx->pc != 0x27A5FCu) { return; }
    }
    ctx->pc = 0x27A5FCu;
    // 0x27a5fc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x27A5FCu;
    {
        const bool branch_taken_0x27a5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A5FCu;
            // 0x27a600: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a5fc) {
            ctx->pc = 0x27A5E0u;
            runtime->cooperativeGuestYield();
            goto label_27a5e0;
        }
    }
    ctx->pc = 0x27A604u;
    // 0x27a604: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27A604u;
    {
        const bool branch_taken_0x27a604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A604u;
            // 0x27a608: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a604) {
            ctx->pc = 0x27A638u;
            goto label_27a638;
        }
    }
    ctx->pc = 0x27A60Cu;
label_27a60c:
    // 0x27a60c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27a60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27a610: 0x8c431734  lw          $v1, 0x1734($v0)
    ctx->pc = 0x27a610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5940)));
    // 0x27a614: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27A614u;
    {
        const bool branch_taken_0x27a614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A614u;
            // 0x27a618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a614) {
            ctx->pc = 0x27A634u;
            goto label_27a634;
        }
    }
    ctx->pc = 0x27A61Cu;
    // 0x27a61c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x27a61cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x27a620: 0xc0a5d9c  jal         func_297670
    ctx->pc = 0x27A620u;
    SET_GPR_U32(ctx, 31, 0x27A628u);
    ctx->pc = 0x27A624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A620u;
            // 0x27a624: 0x248428d0  addiu       $a0, $a0, 0x28D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297670u;
    if (runtime->hasFunction(0x297670u)) {
        auto targetFn = runtime->lookupFunction(0x297670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A628u; }
        if (ctx->pc != 0x27A628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_297670_0x2976c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A628u; }
        if (ctx->pc != 0x27A628u) { return; }
    }
    ctx->pc = 0x27A628u;
    // 0x27a628: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27A628u;
    {
        const bool branch_taken_0x27a628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A628u;
            // 0x27a62c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a628) {
            ctx->pc = 0x27A634u;
            goto label_27a634;
        }
    }
    ctx->pc = 0x27A630u;
    // 0x27a630: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27a630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a634:
    // 0x27a634: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27a634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_27a638:
    // 0x27a638: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27a638u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a63c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27a63cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a640: 0x3e00008  jr          $ra
    ctx->pc = 0x27A640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A640u;
            // 0x27a644: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27A5D4u: goto label_27a5d4;
            case 0x27A5E0u: goto label_27a5e0;
            case 0x27A5E8u: goto label_27a5e8;
            case 0x27A60Cu: goto label_27a60c;
            case 0x27A634u: goto label_27a634;
            case 0x27A638u: goto label_27a638;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27A648u;
}
