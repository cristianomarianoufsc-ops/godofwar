#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001a1600
// Address: 0x1a1600 - 0x1a1608
void FUN_001a1600_0x1a1600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a1600_0x1a1600");
#endif

    ctx->pc = 0x1a1600u;

    // 0x1a1600: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1a1600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1a1604: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1a1604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
}
