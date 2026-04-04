#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001337a0
// Address: 0x1337a0 - 0x1337a8
void FUN_001337a0_0x1337a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001337a0_0x1337a0");
#endif

    ctx->pc = 0x1337a0u;

    // 0x1337a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1337a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1337a4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1337a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
}
