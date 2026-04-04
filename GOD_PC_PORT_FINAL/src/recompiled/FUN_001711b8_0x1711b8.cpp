#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001711b8
// Address: 0x1711b8 - 0x1711c0
void FUN_001711b8_0x1711b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001711b8_0x1711b8");
#endif

    ctx->pc = 0x1711b8u;

    // 0x1711b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1711B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1711BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1711B8u;
            // 0x1711bc: 0xac8500a0  sw          $a1, 0xA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1711C0u;
}
