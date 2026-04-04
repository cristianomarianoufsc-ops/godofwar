#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23ed88
// Address: 0x23ed88 - 0x23ed98
void entry_23ed88_0x23ed98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23ed88_0x23ed98");
#endif

    ctx->pc = 0x23ed88u;

    // 0x23ed88: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x23ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x23ed8c: 0x3e00008  jr          $ra
    ctx->pc = 0x23ED8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23ED90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23ED8Cu;
            // 0x23ed90: 0x24420044  addiu       $v0, $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23ED94u;
    // 0x23ed94: 0x0  nop
    ctx->pc = 0x23ed94u;
    // NOP
}
