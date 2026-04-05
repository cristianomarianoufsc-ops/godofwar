#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00294d40
// Address: 0x294d40 - 0x294d48
void FUN_00294d40_0x294d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00294d40_0x294d40");
#endif

    ctx->pc = 0x294d40u;

    // 0x294d40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x294d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x294d44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x294d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
}
