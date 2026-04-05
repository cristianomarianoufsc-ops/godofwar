#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_276cf0
// Address: 0x276cf0 - 0x276cf8
void entry_276cf0_0x276cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_276cf0_0x276cf8");
#endif

    ctx->pc = 0x276cf0u;

    // 0x276cf0: 0x809db08  j           func_276C20
    ctx->pc = 0x276CF0u;
    ctx->pc = 0x276C20u;
    if (runtime->hasFunction(0x276C20u)) {
        auto targetFn = runtime->lookupFunction(0x276C20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        FUN_00276c20_0x276c20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x276CF8u;
}
