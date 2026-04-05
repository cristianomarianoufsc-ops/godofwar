#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0026abd8
// Address: 0x26abd8 - 0x26abe0
void FUN_0026abd8_0x26abd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0026abd8_0x26abd8");
#endif

    ctx->pc = 0x26abd8u;

    // 0x26abd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26abd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26abdc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26abdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
}
