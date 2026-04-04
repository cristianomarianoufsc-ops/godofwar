#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1efe60
// Address: 0x1efe60 - 0x1efe70
void entry_1efe60_0x1efe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1efe60_0x1efe70");
#endif

    ctx->pc = 0x1efe60u;

    // 0x1efe60: 0x8c820954  lw          $v0, 0x954($a0)
    ctx->pc = 0x1efe60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2388)));
    // 0x1efe64: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFE64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFE64u;
            // 0x1efe68: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EFE6Cu;
    // 0x1efe6c: 0x0  nop
    ctx->pc = 0x1efe6cu;
    // NOP
}
