#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23cf18
// Address: 0x23cf18 - 0x23cf28
void entry_23cf18_0x23cf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23cf18_0x23cf28");
#endif

    ctx->pc = 0x23cf18u;

    // 0x23cf18: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23cf18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cf1c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x23cf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x23cf20: 0x3e00008  jr          $ra
    ctx->pc = 0x23CF20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CF20u;
            // 0x23cf24: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23CF28u;
}
