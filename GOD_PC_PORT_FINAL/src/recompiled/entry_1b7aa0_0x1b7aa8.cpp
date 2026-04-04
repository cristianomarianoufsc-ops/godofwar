#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1b7aa0
// Address: 0x1b7aa0 - 0x1b7aa8
void entry_1b7aa0_0x1b7aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1b7aa0_0x1b7aa8");
#endif

    ctx->pc = 0x1b7aa0u;

    // 0x1b7aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7AA0u;
            // 0x1b7aa4: 0xac8514a4  sw          $a1, 0x14A4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5284), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7AA8u;
}
