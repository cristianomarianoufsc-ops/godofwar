#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1bbc90
// Address: 0x1bbc90 - 0x1bbca0
void entry_1bbc90_0x1bbca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1bbc90_0x1bbca0");
#endif

    ctx->pc = 0x1bbc90u;

    // 0x1bbc90: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bbc90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bbc94: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBC94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC94u;
            // 0x1bbc98: 0x8c42cc50  lw          $v0, -0x33B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954064)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBC9Cu;
    // 0x1bbc9c: 0x0  nop
    ctx->pc = 0x1bbc9cu;
    // NOP
}
