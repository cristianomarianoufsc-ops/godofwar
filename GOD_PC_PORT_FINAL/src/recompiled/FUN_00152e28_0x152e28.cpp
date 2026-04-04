#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00152e28
// Address: 0x152e28 - 0x152e38
void FUN_00152e28_0x152e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00152e28_0x152e28");
#endif

    ctx->pc = 0x152e28u;

    // 0x152e28: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x152e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x152e2c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x152e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x152e30: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x152e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x152e34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x152e34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
