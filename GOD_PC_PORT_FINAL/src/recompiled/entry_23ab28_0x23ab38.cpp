#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23ab28
// Address: 0x23ab28 - 0x23ab38
void entry_23ab28_0x23ab38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23ab28_0x23ab38");
#endif

    ctx->pc = 0x23ab28u;

    // 0x23ab28: 0xac800674  sw          $zero, 0x674($a0)
    ctx->pc = 0x23ab28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1652), GPR_U32(ctx, 0));
    // 0x23ab2c: 0x3e00008  jr          $ra
    ctx->pc = 0x23AB2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AB2Cu;
            // 0x23ab30: 0xac800670  sw          $zero, 0x670($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23AB34u;
    // 0x23ab34: 0x0  nop
    ctx->pc = 0x23ab34u;
    // NOP
}
