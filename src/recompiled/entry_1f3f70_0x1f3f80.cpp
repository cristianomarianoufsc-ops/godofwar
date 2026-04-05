#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1f3f70
// Address: 0x1f3f70 - 0x1f3f80
void entry_1f3f70_0x1f3f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1f3f70_0x1f3f80");
#endif

    ctx->pc = 0x1f3f70u;

    // 0x1f3f70: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1f3f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1f3f74: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x1f3f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x1f3f78: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3F78u;
            // 0x1f3f7c: 0xac820028  sw          $v0, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F3F80u;
}
