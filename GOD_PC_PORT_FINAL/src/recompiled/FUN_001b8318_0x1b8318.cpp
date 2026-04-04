#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001b8318
// Address: 0x1b8318 - 0x1b8324
void FUN_001b8318_0x1b8318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b8318_0x1b8318");
#endif

    ctx->pc = 0x1b8318u;

    // 0x1b8318: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b8318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b831c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b831cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b8320: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b8320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
}
