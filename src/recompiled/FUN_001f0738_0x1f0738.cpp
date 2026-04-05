#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001f0738
// Address: 0x1f0738 - 0x1f0740
void FUN_001f0738_0x1f0738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f0738_0x1f0738");
#endif

    ctx->pc = 0x1f0738u;

    // 0x1f0738: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1f0738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1f073c: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x1f073cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
}
