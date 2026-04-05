#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_14a8d0
// Address: 0x14a8d0 - 0x14a8e0
void entry_14a8d0_0x14a8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_14a8d0_0x14a8e0");
#endif

    ctx->pc = 0x14a8d0u;

    // 0x14a8d0: 0x8c8300e0  lw          $v1, 0xE0($a0)
    ctx->pc = 0x14a8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x14a8d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x14A8D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A8D8u;
            // 0x14a8dc: 0xac620d00  sw          $v0, 0xD00($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14A8E0u;
}
