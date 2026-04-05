#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23ed80
// Address: 0x23ed80 - 0x23ed88
void entry_23ed80_0x23ed88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23ed80_0x23ed88");
#endif

    ctx->pc = 0x23ed80u;

    // 0x23ed80: 0x3e00008  jr          $ra
    ctx->pc = 0x23ED80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23ED84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23ED80u;
            // 0x23ed84: 0x7c850090  sq          $a1, 0x90($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23ED88u;
}
