#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1733c0
// Address: 0x1733c0 - 0x1733d8
void entry_1733c0_0x1733d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1733c0_0x1733d8");
#endif

    ctx->pc = 0x1733c0u;

    // 0x1733c0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1733c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1733c4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1733c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1733c8: 0x8c42be50  lw          $v0, -0x41B0($v0)
    ctx->pc = 0x1733c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950480)));
    // 0x1733cc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1733ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1733d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1733D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1733D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1733D0u;
            // 0x1733d4: 0xac62c398  sw          $v0, -0x3C68($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294951832), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1733D8u;
}
