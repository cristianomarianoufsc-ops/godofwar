#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1a5de0
// Address: 0x1a5de0 - 0x1a5e00
void entry_1a5de0_0x1a5e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1a5de0_0x1a5e00");
#endif

    ctx->pc = 0x1a5de0u;

    // 0x1a5de0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1a5de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1a5de4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5DE4u;
    {
        const bool branch_taken_0x1a5de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5de4) {
            ctx->pc = 0x1A5DE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5DE4u;
            // 0x1a5de8: 0xac80002c  sw          $zero, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A5DF4u;
            goto label_1a5df4;
        }
    }
    ctx->pc = 0x1A5DECu;
    // 0x1a5dec: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5DECu;
            // 0x1a5df0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5DF4u: goto label_1a5df4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5DF4u;
label_1a5df4:
    // 0x1a5df4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5DF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5DF4u;
            // 0x1a5df8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5DF4u: goto label_1a5df4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5DFCu;
    // 0x1a5dfc: 0x0  nop
    ctx->pc = 0x1a5dfcu;
    // NOP
}
