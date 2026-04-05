#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0019d798
// Address: 0x19d798 - 0x19d7a4
void FUN_0019d798_0x19d798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019d798_0x19d798");
#endif

    ctx->pc = 0x19d798u;

    // 0x19d798: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x19d798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19d79c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x19d79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x19d7a0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19d7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
}
