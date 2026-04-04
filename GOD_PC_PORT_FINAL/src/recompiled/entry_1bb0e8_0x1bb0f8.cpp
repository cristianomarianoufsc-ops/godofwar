#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1bb0e8
// Address: 0x1bb0e8 - 0x1bb0f8
void entry_1bb0e8_0x1bb0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1bb0e8_0x1bb0f8");
#endif

    ctx->pc = 0x1bb0e8u;

    // 0x1bb0e8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bb0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bb0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB0ECu;
            // 0x1bb0f0: 0xac40cc3c  sw          $zero, -0x33C4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954044), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB0F4u;
    // 0x1bb0f4: 0x0  nop
    ctx->pc = 0x1bb0f4u;
    // NOP
}
