#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00237648
// Address: 0x237648 - 0x237650
void FUN_00237648_0x237648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00237648_0x237648");
#endif

    ctx->pc = 0x237648u;

    // 0x237648: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23764c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23764cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
}
