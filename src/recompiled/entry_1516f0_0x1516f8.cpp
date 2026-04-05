#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1516f0
// Address: 0x1516f0 - 0x1516f8
void entry_1516f0_0x1516f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1516f0_0x1516f8");
#endif

    ctx->pc = 0x1516f0u;

    // 0x1516f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1516F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1516F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1516F0u;
            // 0x1516f4: 0xac8000e8  sw          $zero, 0xE8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1516F8u;
}
