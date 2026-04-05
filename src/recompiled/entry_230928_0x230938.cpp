#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_230928
// Address: 0x230928 - 0x230938
void entry_230928_0x230938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_230928_0x230938");
#endif

    ctx->pc = 0x230928u;

    // 0x230928: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x230928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x23092c: 0x3e00008  jr          $ra
    ctx->pc = 0x23092Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23092Cu;
            // 0x230930: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x230934u;
    // 0x230934: 0x0  nop
    ctx->pc = 0x230934u;
    // NOP
}
