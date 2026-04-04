#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_219cd0
// Address: 0x219cd0 - 0x219ce8
void entry_219cd0_0x219ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_219cd0_0x219ce8");
#endif

    ctx->pc = 0x219cd0u;

    // 0x219cd0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x219cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x219cd4: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x219cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x219cd8: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x219cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x219cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x219CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219CDCu;
            // 0x219ce0: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219CE4u;
    // 0x219ce4: 0x0  nop
    ctx->pc = 0x219ce4u;
    // NOP
}
