#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00258f70
// Address: 0x258f70 - 0x258f78
void FUN_00258f70_0x258f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00258f70_0x258f70");
#endif

    ctx->pc = 0x258f70u;

    // 0x258f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x258f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x258f74: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x258f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
}
