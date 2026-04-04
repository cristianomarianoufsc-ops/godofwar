#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2340c0
// Address: 0x2340c0 - 0x2340d0
void entry_2340c0_0x2340d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2340c0_0x2340d0");
#endif

    ctx->pc = 0x2340c0u;

    // 0x2340c0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2340c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2340c4: 0xac840000  sw          $a0, 0x0($a0)
    ctx->pc = 0x2340c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
    // 0x2340c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2340C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2340CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2340C8u;
            // 0x2340cc: 0xac840004  sw          $a0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2340D0u;
}
