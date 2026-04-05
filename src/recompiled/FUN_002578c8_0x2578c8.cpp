#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002578c8
// Address: 0x2578c8 - 0x2578d4
void FUN_002578c8_0x2578c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002578c8_0x2578c8");
#endif

    ctx->pc = 0x2578c8u;

    // 0x2578c8: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x2578c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x2578cc: 0x7fb10200  sq          $s1, 0x200($sp)
    ctx->pc = 0x2578ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 17));
    // 0x2578d0: 0x7fb201f0  sq          $s2, 0x1F0($sp)
    ctx->pc = 0x2578d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 18));
}
