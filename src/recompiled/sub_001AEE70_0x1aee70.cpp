#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AEE70
// Address: 0x1aee70 - 0x1aeee8
void sub_001AEE70_0x1aee70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEE70_0x1aee70");
#endif

    ctx->pc = 0x1aee70u;

    // 0x1aee70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aee70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aee74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aee74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aee78: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1aee78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1aee7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aee7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aee80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aee80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aee84: 0x0  nop
    ctx->pc = 0x1aee84u;
    // NOP
label_1aee88:
    // 0x1aee88: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1aee88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1aee8c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1aee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1aee90: 0x2470fdc8  addiu       $s0, $v1, -0x238
    ctx->pc = 0x1aee90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966728));
    // 0x1aee94: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aee94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1aee98: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1aee98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1aee9c: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x1aee9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1aeea0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1aeea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1aeea4: 0x28a30500  slti        $v1, $a1, 0x500
    ctx->pc = 0x1aeea4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x1aeea8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1aeea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1aeeac: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1AEEACu;
    {
        const bool branch_taken_0x1aeeac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEEACu;
            // 0x1aeeb0: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeeac) {
            ctx->pc = 0x1AEE88u;
            runtime->cooperativeGuestYield();
            goto label_1aee88;
        }
    }
    ctx->pc = 0x1AEEB4u;
    // 0x1aeeb4: 0x26042804  addiu       $a0, $s0, 0x2804
    ctx->pc = 0x1aeeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10244));
    // 0x1aeeb8: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1AEEB8u;
    SET_GPR_U32(ctx, 31, 0x1AEEC0u);
    ctx->pc = 0x1AEEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEEB8u;
            // 0x1aeebc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEEC0u; }
        if (ctx->pc != 0x1AEEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEEC0u; }
        if (ctx->pc != 0x1AEEC0u) { return; }
    }
    ctx->pc = 0x1AEEC0u;
    // 0x1aeec0: 0x8e052804  lw          $a1, 0x2804($s0)
    ctx->pc = 0x1aeec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10244)));
    // 0x1aeec4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aeec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeec8: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1AEEC8u;
    SET_GPR_U32(ctx, 31, 0x1AEED0u);
    ctx->pc = 0x1AEECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEEC8u;
            // 0x1aeecc: 0x528c0  sll         $a1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEED0u; }
        if (ctx->pc != 0x1AEED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEED0u; }
        if (ctx->pc != 0x1AEED0u) { return; }
    }
    ctx->pc = 0x1AEED0u;
    // 0x1aeed0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1aeed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aeed4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aeed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aeed8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aeed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aeedc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEEDCu;
            // 0x1aeee0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AEE88u: goto label_1aee88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AEEE4u;
    // 0x1aeee4: 0x0  nop
    ctx->pc = 0x1aeee4u;
    // NOP
}
