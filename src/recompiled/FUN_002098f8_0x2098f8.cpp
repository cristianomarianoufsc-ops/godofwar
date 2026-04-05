#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002098f8
// Address: 0x2098f8 - 0x2098fc
void FUN_002098f8_0x2098f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002098f8_0x2098f8");
#endif

    ctx->pc = 0x2098f8u;

    // 0x2098f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2098f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
}
