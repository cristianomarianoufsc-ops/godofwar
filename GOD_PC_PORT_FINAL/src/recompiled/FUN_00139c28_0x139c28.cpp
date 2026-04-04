#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00139c28
// Address: 0x139c28 - 0x139c30
void FUN_00139c28_0x139c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00139c28_0x139c28");
#endif

    ctx->pc = 0x139c28u;

    // 0x139c28: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x139c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x139c2c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x139c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
}
