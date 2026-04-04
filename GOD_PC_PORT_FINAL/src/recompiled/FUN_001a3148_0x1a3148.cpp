#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001a3148
// Address: 0x1a3148 - 0x1a3160
void FUN_001a3148_0x1a3148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a3148_0x1a3148");
#endif

    ctx->pc = 0x1a3148u;

    // 0x1a3148: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1a3148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1a314c: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x1a314cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x1a3150: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3154: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x1a3154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x1a3158: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x1a3158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x1a315c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a315cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
}
