#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001e74c0
// Address: 0x1e74c0 - 0x1e74c8
void FUN_001e74c0_0x1e74c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e74c0_0x1e74c0");
#endif

    ctx->pc = 0x1e74c0u;

    // 0x1e74c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e74c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e74c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e74c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
}
