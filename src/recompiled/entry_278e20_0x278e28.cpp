#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_278e20
// Address: 0x278e20 - 0x278e28
void entry_278e20_0x278e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_278e20_0x278e28");
#endif

    ctx->pc = 0x278e20u;

    // 0x278e20: 0x809db08  j           func_276C20
    ctx->pc = 0x278E20u;
    ctx->pc = 0x276C20u;
    if (runtime->hasFunction(0x276C20u)) {
        auto targetFn = runtime->lookupFunction(0x276C20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        FUN_00276c20_0x276c20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x278E28u;
}
