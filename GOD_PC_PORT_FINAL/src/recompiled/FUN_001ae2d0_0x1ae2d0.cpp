#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001ae2d0
// Address: 0x1ae2d0 - 0x1ae2e0
void FUN_001ae2d0_0x1ae2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ae2d0_0x1ae2d0");
#endif

    ctx->pc = 0x1ae2d0u;

    // 0x1ae2d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ae2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ae2d4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1ae2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1ae2d8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1ae2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1ae2dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ae2dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
