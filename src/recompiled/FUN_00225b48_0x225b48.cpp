#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00225b48
// Address: 0x225b48 - 0x225b50
void FUN_00225b48_0x225b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00225b48_0x225b48");
#endif

    ctx->pc = 0x225b48u;

    // 0x225b48: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x225b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x225b4c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x225b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
}
