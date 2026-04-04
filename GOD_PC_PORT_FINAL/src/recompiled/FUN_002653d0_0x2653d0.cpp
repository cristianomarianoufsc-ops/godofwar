#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002653d0
// Address: 0x2653d0 - 0x2653d8
void FUN_002653d0_0x2653d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002653d0_0x2653d0");
#endif

    ctx->pc = 0x2653d0u;

    // 0x2653d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2653d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2653d4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2653d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
}
