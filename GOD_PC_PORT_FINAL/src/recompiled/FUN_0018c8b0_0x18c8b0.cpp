#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0018c8b0
// Address: 0x18c8b0 - 0x18c8cc
void FUN_0018c8b0_0x18c8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018c8b0_0x18c8b0");
#endif

    ctx->pc = 0x18c8b0u;

    // 0x18c8b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x18c8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18c8b4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x18c8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18c8b8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x18c8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x18c8bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18c8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18c8c0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x18c8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x18c8c4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x18c8c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c8c8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x18c8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
}
