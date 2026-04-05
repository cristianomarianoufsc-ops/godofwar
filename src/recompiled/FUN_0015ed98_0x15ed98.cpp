#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0015ed98
// Address: 0x15ed98 - 0x15eda8
void FUN_0015ed98_0x15ed98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015ed98_0x15ed98");
#endif

    ctx->pc = 0x15ed98u;

    // 0x15ed98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15ed98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15ed9c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x15ed9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x15eda0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x15eda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x15eda4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15eda4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
}
