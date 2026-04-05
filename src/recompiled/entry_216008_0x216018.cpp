#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_216008
// Address: 0x216008 - 0x216018
void entry_216008_0x216018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_216008_0x216018");
#endif

    ctx->pc = 0x216008u;

    // 0x216008: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x216008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21600c: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x21600cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x216010: 0x3e00008  jr          $ra
    ctx->pc = 0x216010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216010u;
            // 0x216014: 0xac8200bc  sw          $v0, 0xBC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x216018u;
}
