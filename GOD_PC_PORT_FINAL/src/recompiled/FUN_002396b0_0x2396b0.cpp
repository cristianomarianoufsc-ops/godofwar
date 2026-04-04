#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002396b0
// Address: 0x2396b0 - 0x2396b8
void FUN_002396b0_0x2396b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002396b0_0x2396b0");
#endif

    ctx->pc = 0x2396b0u;

    // 0x2396b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2396b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2396b4: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x2396b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
}
