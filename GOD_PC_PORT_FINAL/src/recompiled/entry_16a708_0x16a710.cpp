#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_16a708
// Address: 0x16a708 - 0x16a710
void entry_16a708_0x16a710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_16a708_0x16a710");
#endif

    ctx->pc = 0x16a708u;

    // 0x16a708: 0x3e00008  jr          $ra
    ctx->pc = 0x16A708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A708u;
            // 0x16a70c: 0x7c850020  sq          $a1, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A710u;
}
