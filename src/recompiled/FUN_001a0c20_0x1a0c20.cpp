#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001a0c20
// Address: 0x1a0c20 - 0x1a0c2c
void FUN_001a0c20_0x1a0c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a0c20_0x1a0c20");
#endif

    ctx->pc = 0x1a0c20u;

    // 0x1a0c20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a0c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a0c24: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a0c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a0c28: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a0c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
}
