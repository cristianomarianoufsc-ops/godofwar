#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0026a6c8
// Address: 0x26a6c8 - 0x26a6d8
void FUN_0026a6c8_0x26a6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0026a6c8_0x26a6c8");
#endif

    ctx->pc = 0x26a6c8u;

    // 0x26a6c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26a6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26a6cc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x26a6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x26a6d0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x26a6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x26a6d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x26a6d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
}
