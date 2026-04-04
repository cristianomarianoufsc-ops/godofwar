#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1d3ed8
// Address: 0x1d3ed8 - 0x1d3ee0
void entry_1d3ed8_0x1d3ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1d3ed8_0x1d3ee0");
#endif

    ctx->pc = 0x1d3ed8u;

    // 0x1d3ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D3EE0u;
}
