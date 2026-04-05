#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1d4118
// Address: 0x1d4118 - 0x1d4128
void entry_1d4118_0x1d4128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1d4118_0x1d4128");
#endif

    ctx->pc = 0x1d4118u;

    // 0x1d4118: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1d4118u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1d411c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D411Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D411Cu;
            // 0x1d4120: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4124u;
    // 0x1d4124: 0x0  nop
    ctx->pc = 0x1d4124u;
    // NOP
}
