#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001b7720
// Address: 0x1b7720 - 0x1b7728
void FUN_001b7720_0x1b7720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7720_0x1b7720");
#endif

    ctx->pc = 0x1b7720u;

    // 0x1b7720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b7720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b7724: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1b7724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
}
