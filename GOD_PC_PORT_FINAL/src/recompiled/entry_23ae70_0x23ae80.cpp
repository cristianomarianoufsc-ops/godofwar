#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23ae70
// Address: 0x23ae70 - 0x23ae80
void entry_23ae70_0x23ae80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23ae70_0x23ae80");
#endif

    ctx->pc = 0x23ae70u;

    // 0x23ae70: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23ae70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ae74: 0xac840000  sw          $a0, 0x0($a0)
    ctx->pc = 0x23ae74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
    // 0x23ae78: 0x3e00008  jr          $ra
    ctx->pc = 0x23AE78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AE78u;
            // 0x23ae7c: 0xac840004  sw          $a0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23AE80u;
}
