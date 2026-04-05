#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001221b8
// Address: 0x1221b8 - 0x1221c4
void FUN_001221b8_0x1221b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001221b8_0x1221b8");
#endif

    ctx->pc = 0x1221b8u;

    // 0x1221b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1221b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1221bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1221bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1221c0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1221c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
}
