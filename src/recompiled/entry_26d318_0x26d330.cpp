#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26d318
// Address: 0x26d318 - 0x26d330
void entry_26d318_0x26d330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26d318_0x26d330");
#endif

    ctx->pc = 0x26d318u;

    // 0x26d318: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26d318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26d31c: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x26d31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x26d320: 0xac44a468  sw          $a0, -0x5B98($v0)
    ctx->pc = 0x26d320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943848), GPR_U32(ctx, 4));
    // 0x26d324: 0x3e00008  jr          $ra
    ctx->pc = 0x26D324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D324u;
            // 0x26d328: 0xac65a46c  sw          $a1, -0x5B94($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294943852), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26D32Cu;
    // 0x26d32c: 0x0  nop
    ctx->pc = 0x26d32cu;
    // NOP
}
