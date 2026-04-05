#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00121128
// Address: 0x121128 - 0x121130
void FUN_00121128_0x121128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00121128_0x121128");
#endif

    ctx->pc = 0x121128u;

    // 0x121128: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x121128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12112c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x12112cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
}
