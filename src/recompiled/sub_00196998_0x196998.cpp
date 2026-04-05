#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00196998
// Address: 0x196998 - 0x1969d0
void sub_00196998_0x196998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196998_0x196998");
#endif

    ctx->pc = 0x196998u;

    // 0x196998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19699c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19699cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1969a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1969a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1969a4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1969A4u;
    {
        const bool branch_taken_0x1969a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1969A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1969A4u;
            // 0x1969a8: 0xac44c94c  sw          $a0, -0x36B4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294953292), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1969a4) {
            ctx->pc = 0x1969C4u;
            goto label_1969c4;
        }
    }
    ctx->pc = 0x1969ACu;
    // 0x1969ac: 0xc065aac  jal         func_196AB0
    ctx->pc = 0x1969ACu;
    SET_GPR_U32(ctx, 31, 0x1969B4u);
    ctx->pc = 0x196AB0u;
    if (runtime->hasFunction(0x196AB0u)) {
        auto targetFn = runtime->lookupFunction(0x196AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1969B4u; }
        if (ctx->pc != 0x1969B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196AB0_0x196ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1969B4u; }
        if (ctx->pc != 0x1969B4u) { return; }
    }
    ctx->pc = 0x1969B4u;
    // 0x1969b4: 0xc065abe  jal         func_196AF8
    ctx->pc = 0x1969B4u;
    SET_GPR_U32(ctx, 31, 0x1969BCu);
    ctx->pc = 0x196AF8u;
    if (runtime->hasFunction(0x196AF8u)) {
        auto targetFn = runtime->lookupFunction(0x196AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1969BCu; }
        if (ctx->pc != 0x1969BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196AF8_0x196af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1969BCu; }
        if (ctx->pc != 0x1969BCu) { return; }
    }
    ctx->pc = 0x1969BCu;
    // 0x1969bc: 0xc0891de  jal         func_224778
    ctx->pc = 0x1969BCu;
    SET_GPR_U32(ctx, 31, 0x1969C4u);
    ctx->pc = 0x1969C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1969BCu;
            // 0x1969c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (runtime->hasFunction(0x224778u)) {
        auto targetFn = runtime->lookupFunction(0x224778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1969C4u; }
        if (ctx->pc != 0x1969C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224778_0x224778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1969C4u; }
        if (ctx->pc != 0x1969C4u) { return; }
    }
    ctx->pc = 0x1969C4u;
label_1969c4:
    // 0x1969c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1969c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1969c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1969C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1969CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1969C8u;
            // 0x1969cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1969C4u: goto label_1969c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1969D0u;
}
