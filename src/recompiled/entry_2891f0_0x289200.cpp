#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2891f0
// Address: 0x2891f0 - 0x289200
void entry_2891f0_0x289200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2891f0_0x289200");
#endif

    ctx->pc = 0x2891f0u;

    // 0x2891f0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2891f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2891f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2891F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2891F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2891F4u;
            // 0x2891f8: 0x8c624294  lw          $v0, 0x4294($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17044)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2891FCu;
    // 0x2891fc: 0x0  nop
    ctx->pc = 0x2891fcu;
    // NOP
}
