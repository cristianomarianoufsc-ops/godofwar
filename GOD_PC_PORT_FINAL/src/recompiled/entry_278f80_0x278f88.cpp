#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_278f80
// Address: 0x278f80 - 0x278f88
void entry_278f80_0x278f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_278f80_0x278f88");
#endif

    ctx->pc = 0x278f80u;

    // 0x278f80: 0x809e388  j           func_278E20
    ctx->pc = 0x278F80u;
    ctx->pc = 0x278F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278F80u;
            // 0x278f84: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278E20u;
    if (runtime->hasFunction(0x278E20u)) {
        auto targetFn = runtime->lookupFunction(0x278E20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_278e20_0x278e28(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x278F88u;
}
