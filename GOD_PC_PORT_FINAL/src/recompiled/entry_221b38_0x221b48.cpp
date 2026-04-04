#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_221b38
// Address: 0x221b38 - 0x221b48
void entry_221b38_0x221b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_221b38_0x221b48");
#endif

    ctx->pc = 0x221b38u;

    // 0x221b38: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x221b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x221b3c: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x221b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x221b40: 0x3e00008  jr          $ra
    ctx->pc = 0x221B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221B40u;
            // 0x221b44: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x221B48u;
}
