#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00265b50
// Address: 0x265b50 - 0x265b58
void FUN_00265b50_0x265b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00265b50_0x265b50");
#endif

    ctx->pc = 0x265b50u;

    // 0x265b50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x265b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x265b54: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x265b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
}
