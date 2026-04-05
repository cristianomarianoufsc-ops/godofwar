#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23ec68
// Address: 0x23ec68 - 0x23ec70
void entry_23ec68_0x23ec70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23ec68_0x23ec70");
#endif

    ctx->pc = 0x23ec68u;

    // 0x23ec68: 0x3e00008  jr          $ra
    ctx->pc = 0x23EC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EC68u;
            // 0x23ec6c: 0x8c8200a4  lw          $v0, 0xA4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23EC70u;
}
