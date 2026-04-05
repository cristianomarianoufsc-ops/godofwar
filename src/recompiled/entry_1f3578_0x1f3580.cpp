#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1f3578
// Address: 0x1f3578 - 0x1f3580
void entry_1f3578_0x1f3580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1f3578_0x1f3580");
#endif

    ctx->pc = 0x1f3578u;

    // 0x1f3578: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F357Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3578u;
            // 0x1f357c: 0x78820030  lq          $v0, 0x30($a0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F3580u;
}
