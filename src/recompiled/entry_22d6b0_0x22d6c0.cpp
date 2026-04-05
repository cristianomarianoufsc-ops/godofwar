#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_22d6b0
// Address: 0x22d6b0 - 0x22d6c0
void entry_22d6b0_0x22d6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_22d6b0_0x22d6c0");
#endif

    ctx->pc = 0x22d6b0u;

    // 0x22d6b0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22d6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x22D6B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D6B4u;
            // 0x22d6b8: 0xac441270  sw          $a0, 0x1270($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4720), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D6BCu;
    // 0x22d6bc: 0x0  nop
    ctx->pc = 0x22d6bcu;
    // NOP
}
