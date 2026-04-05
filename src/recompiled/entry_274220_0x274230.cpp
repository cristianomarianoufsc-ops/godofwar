#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_274220
// Address: 0x274220 - 0x274230
void entry_274220_0x274230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_274220_0x274230");
#endif

    ctx->pc = 0x274220u;

    // 0x274220: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x274220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274224: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x274224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x274228: 0x80a58f0  j           func_2963C0
    ctx->pc = 0x274228u;
    ctx->pc = 0x27422Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274228u;
            // 0x27422c: 0x24844520  addiu       $a0, $a0, 0x4520 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002963C0_0x2963c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x274230u;
}
