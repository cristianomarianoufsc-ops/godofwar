#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_270280
// Address: 0x270280 - 0x270290
void entry_270280_0x270290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_270280_0x270290");
#endif

    ctx->pc = 0x270280u;

    // 0x270280: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x270280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x270284: 0x3e00008  jr          $ra
    ctx->pc = 0x270284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270284u;
            // 0x270288: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27028Cu;
    // 0x27028c: 0x0  nop
    ctx->pc = 0x27028cu;
    // NOP
}
