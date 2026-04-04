#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001a1158
// Address: 0x1a1158 - 0x1a1164
void FUN_001a1158_0x1a1158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a1158_0x1a1158");
#endif

    ctx->pc = 0x1a1158u;

    // 0x1a1158: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a1158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a115c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a115cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a1160: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a1160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
}
