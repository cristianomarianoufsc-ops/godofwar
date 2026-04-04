#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2996a8
// Address: 0x2996a8 - 0x2996b0
void entry_2996a8_0x2996b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2996a8_0x2996b0");
#endif

    ctx->pc = 0x2996a8u;

    // 0x2996a8: 0x80a6a92  j           func_29AA48
    ctx->pc = 0x2996A8u;
    ctx->pc = 0x29AA48u;
    if (runtime->hasFunction(0x29AA48u)) {
        auto targetFn = runtime->lookupFunction(0x29AA48u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        FUN_0029aa48_0x29aa48(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2996B0u;
}
