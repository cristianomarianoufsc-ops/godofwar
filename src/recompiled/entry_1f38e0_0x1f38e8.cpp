#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1f38e0
// Address: 0x1f38e0 - 0x1f38e8
void entry_1f38e0_0x1f38e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1f38e0_0x1f38e8");
#endif

    ctx->pc = 0x1f38e0u;

    // 0x1f38e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F38E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F38E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F38E0u;
            // 0x1f38e4: 0x78820000  lq          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F38E8u;
}
