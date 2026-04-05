#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2EC0
// Address: 0x1b2ec0 - 0x1b2f20
void sub_001B2EC0_0x1b2ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2EC0_0x1b2ec0");
#endif

    ctx->pc = 0x1b2ec0u;

    // 0x1b2ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2ec8: 0xc0623bc  jal         func_188EF0
    ctx->pc = 0x1B2EC8u;
    SET_GPR_U32(ctx, 31, 0x1B2ED0u);
    ctx->pc = 0x188EF0u;
    if (runtime->hasFunction(0x188EF0u)) {
        auto targetFn = runtime->lookupFunction(0x188EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2ED0u; }
        if (ctx->pc != 0x1B2ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00188ef0_0x188ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2ED0u; }
        if (ctx->pc != 0x1B2ED0u) { return; }
    }
    ctx->pc = 0x1B2ED0u;
    // 0x1b2ed0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2ED0u;
    {
        const bool branch_taken_0x1b2ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2ED0u;
            // 0x1b2ed4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ed0) {
            ctx->pc = 0x1B2EE8u;
            goto label_1b2ee8;
        }
    }
    ctx->pc = 0x1B2ED8u;
    // 0x1b2ed8: 0xc0623c8  jal         func_188F20
    ctx->pc = 0x1B2ED8u;
    SET_GPR_U32(ctx, 31, 0x1B2EE0u);
    ctx->pc = 0x188F20u;
    if (runtime->hasFunction(0x188F20u)) {
        auto targetFn = runtime->lookupFunction(0x188F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2EE0u; }
        if (ctx->pc != 0x1B2EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188F20_0x188f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2EE0u; }
        if (ctx->pc != 0x1B2EE0u) { return; }
    }
    ctx->pc = 0x1B2EE0u;
    // 0x1b2ee0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b2ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b2ee4: 0x0  nop
    ctx->pc = 0x1b2ee4u;
    // NOP
label_1b2ee8:
    // 0x1b2ee8: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1b2ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1b2eec: 0x24425078  addiu       $v0, $v0, 0x5078
    ctx->pc = 0x1b2eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20600));
    // 0x1b2ef0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b2ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b2ef4: 0xa0400026  sb          $zero, 0x26($v0)
    ctx->pc = 0x1b2ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 38), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b2ef8: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1b2ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1b2efc: 0xaca0cb0c  sw          $zero, -0x34F4($a1)
    ctx->pc = 0x1b2efcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294953740), GPR_U32(ctx, 0));
    // 0x1b2f00: 0xac60cb14  sw          $zero, -0x34EC($v1)
    ctx->pc = 0x1b2f00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953748), GPR_U32(ctx, 0));
    // 0x1b2f04: 0xac80cb18  sw          $zero, -0x34E8($a0)
    ctx->pc = 0x1b2f04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294953752), GPR_U32(ctx, 0));
    // 0x1b2f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2f0c: 0xa0400024  sb          $zero, 0x24($v0)
    ctx->pc = 0x1b2f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b2f10: 0xa0400025  sb          $zero, 0x25($v0)
    ctx->pc = 0x1b2f10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 37), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b2f14: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F14u;
            // 0x1b2f18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B2EE8u: goto label_1b2ee8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B2F1Cu;
    // 0x1b2f1c: 0x0  nop
    ctx->pc = 0x1b2f1cu;
    // NOP
}
