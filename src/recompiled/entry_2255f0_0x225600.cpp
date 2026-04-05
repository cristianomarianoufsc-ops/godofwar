#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2255f0
// Address: 0x2255f0 - 0x225600
void entry_2255f0_0x225600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2255f0_0x225600");
#endif

    ctx->pc = 0x2255f0u;

    // 0x2255f0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2255f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2255f4: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x2255f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x2255f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2255F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2255FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2255F8u;
            // 0x2255fc: 0xac8200ac  sw          $v0, 0xAC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225600u;
}
