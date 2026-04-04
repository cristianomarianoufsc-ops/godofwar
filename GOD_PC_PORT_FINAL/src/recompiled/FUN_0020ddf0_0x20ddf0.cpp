#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0020ddf0
// Address: 0x20ddf0 - 0x20ddf4
void FUN_0020ddf0_0x20ddf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020ddf0_0x20ddf0");
#endif

    ctx->pc = 0x20ddf0u;

    // 0x20ddf0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x20ddf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
}
