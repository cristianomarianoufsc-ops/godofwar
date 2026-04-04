#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00278fd8
// Address: 0x278fd8 - 0x278fe0
void FUN_00278fd8_0x278fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00278fd8_0x278fd8");
#endif

    ctx->pc = 0x278fd8u;

    // 0x278fd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x278fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x278fdc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x278fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
}
