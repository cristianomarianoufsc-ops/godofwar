#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_12e4c8
// Address: 0x12e4c8 - 0x12e4d0
void entry_12e4c8_0x12e4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_12e4c8_0x12e4d0");
#endif

    ctx->pc = 0x12e4c8u;

    // 0x12e4c8: 0x3e00008  jr          $ra
    ctx->pc = 0x12E4C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E4C8u;
            // 0x12e4cc: 0xac850158  sw          $a1, 0x158($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E4D0u;
}
