#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001902c8
// Address: 0x1902c8 - 0x1902d0
void FUN_001902c8_0x1902c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001902c8_0x1902c8");
#endif

    ctx->pc = 0x1902c8u;

    // 0x1902c8: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1902c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1902cc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1902ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
}
