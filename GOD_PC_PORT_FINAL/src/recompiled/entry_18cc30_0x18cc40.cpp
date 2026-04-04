#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_18cc30
// Address: 0x18cc30 - 0x18cc40
void entry_18cc30_0x18cc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_18cc30_0x18cc40");
#endif

    ctx->pc = 0x18cc30u;

    // 0x18cc30: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x18cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x18cc34: 0x3e00008  jr          $ra
    ctx->pc = 0x18CC34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CC34u;
            // 0x18cc38: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18CC3Cu;
    // 0x18cc3c: 0x0  nop
    ctx->pc = 0x18cc3cu;
    // NOP
}
