#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001b7f50
// Address: 0x1b7f50 - 0x1b7f68
void FUN_001b7f50_0x1b7f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7f50_0x1b7f50");
#endif

    ctx->pc = 0x1b7f50u;

    // 0x1b7f50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b7f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b7f54: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b7f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b7f58: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b7f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1b7f5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b7f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f60: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b7f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b7f64: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b7f64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
