#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0025aa78
// Address: 0x25aa78 - 0x25aa80
void FUN_0025aa78_0x25aa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0025aa78_0x25aa78");
#endif

    ctx->pc = 0x25aa78u;

    // 0x25aa78: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25aa78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25aa7c: 0x2402041f  addiu       $v0, $zero, 0x41F
    ctx->pc = 0x25aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1055));
}
