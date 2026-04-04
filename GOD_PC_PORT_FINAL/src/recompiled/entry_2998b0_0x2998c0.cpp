#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2998b0
// Address: 0x2998b0 - 0x2998c0
void entry_2998b0_0x2998c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2998b0_0x2998c0");
#endif

    ctx->pc = 0x2998b0u;

    // 0x2998b0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2998b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2998b4: 0x3c04b000  lui         $a0, 0xB000
    ctx->pc = 0x2998b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45056 << 16));
    // 0x2998b8: 0x80a6608  j           func_299820
    ctx->pc = 0x2998B8u;
    ctx->pc = 0x2998BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2998B8u;
            // 0x2998bc: 0x34841020  ori         $a0, $a0, 0x1020 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x299820u;
    if (runtime->hasFunction(0x299820u)) {
        auto targetFn = runtime->lookupFunction(0x299820u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_299820_0x299890(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2998C0u;
}
