#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002424f8
// Address: 0x2424f8 - 0x242500
void FUN_002424f8_0x2424f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002424f8_0x2424f8");
#endif

    ctx->pc = 0x2424f8u;

    // 0x2424f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2424f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2424fc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2424fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
}
