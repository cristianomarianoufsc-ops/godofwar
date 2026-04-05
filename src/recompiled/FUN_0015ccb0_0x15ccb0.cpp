#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0015ccb0
// Address: 0x15ccb0 - 0x15ccd0
void FUN_0015ccb0_0x15ccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015ccb0_0x15ccb0");
#endif

    ctx->pc = 0x15ccb0u;

    // 0x15ccb0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x15ccb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x15ccb4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15ccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x15ccb8: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x15ccb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x15ccbc: 0x8c52104c  lw          $s2, 0x104C($v0)
    ctx->pc = 0x15ccbcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4172)));
    // 0x15ccc0: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x15ccc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x15ccc4: 0x26420360  addiu       $v0, $s2, 0x360
    ctx->pc = 0x15ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 864));
    // 0x15ccc8: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x15ccc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x15cccc: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x15ccccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
}
