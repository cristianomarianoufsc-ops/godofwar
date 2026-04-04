#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1dc2b0
// Address: 0x1dc2b0 - 0x1dc2c0
void entry_1dc2b0_0x1dc2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1dc2b0_0x1dc2c0");
#endif

    ctx->pc = 0x1dc2b0u;

    // 0x1dc2b0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1dc2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1dc2b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dc2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC2B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC2B8u;
            // 0x1dc2bc: 0xac62d298  sw          $v0, -0x2D68($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294955672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC2C0u;
}
