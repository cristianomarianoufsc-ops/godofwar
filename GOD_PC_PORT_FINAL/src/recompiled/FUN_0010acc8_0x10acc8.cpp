#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0010acc8
// Address: 0x10acc8 - 0x10ace0
void FUN_0010acc8_0x10acc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010acc8_0x10acc8");
#endif

    ctx->pc = 0x10acc8u;

    // 0x10acc8: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x10acc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x10accc: 0x7fb10200  sq          $s1, 0x200($sp)
    ctx->pc = 0x10acccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 17));
    // 0x10acd0: 0x7fb00210  sq          $s0, 0x210($sp)
    ctx->pc = 0x10acd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 16));
    // 0x10acd4: 0x7fb401d0  sq          $s4, 0x1D0($sp)
    ctx->pc = 0x10acd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 20));
    // 0x10acd8: 0x7fb601b0  sq          $s6, 0x1B0($sp)
    ctx->pc = 0x10acd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 22));
    // 0x10acdc: 0x7fb201f0  sq          $s2, 0x1F0($sp)
    ctx->pc = 0x10acdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 18));
}
