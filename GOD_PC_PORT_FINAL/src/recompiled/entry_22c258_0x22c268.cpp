#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_22c258
// Address: 0x22c258 - 0x22c268
void entry_22c258_0x22c268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_22c258_0x22c268");
#endif

    ctx->pc = 0x22c258u;

    // 0x22c258: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x22c258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x22c25c: 0x3e00008  jr          $ra
    ctx->pc = 0x22C25Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C25Cu;
            // 0x22c260: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22C264u;
    // 0x22c264: 0x0  nop
    ctx->pc = 0x22c264u;
    // NOP
}
