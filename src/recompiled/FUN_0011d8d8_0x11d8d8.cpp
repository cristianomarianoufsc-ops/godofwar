#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0011d8d8
// Address: 0x11d8d8 - 0x11d8dc
void FUN_0011d8d8_0x11d8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011d8d8_0x11d8d8");
#endif

    ctx->pc = 0x11d8d8u;

    // 0x11d8d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11d8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
}
