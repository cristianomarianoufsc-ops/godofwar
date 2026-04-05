#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00228ed0
// Address: 0x228ed0 - 0x228ed8
void FUN_00228ed0_0x228ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00228ed0_0x228ed0");
#endif

    ctx->pc = 0x228ed0u;

    // 0x228ed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228ed4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x228ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
}
