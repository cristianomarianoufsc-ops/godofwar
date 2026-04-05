#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1ecf60
// Address: 0x1ecf60 - 0x1ecf70
void entry_1ecf60_0x1ecf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1ecf60_0x1ecf70");
#endif

    ctx->pc = 0x1ecf60u;

    // 0x1ecf60: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ecf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ecf64: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x1ecf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x1ecf68: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECF68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF68u;
            // 0x1ecf6c: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ECF70u;
}
