#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00122060
// Address: 0x122060 - 0x12206c
void FUN_00122060_0x122060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00122060_0x122060");
#endif

    ctx->pc = 0x122060u;

    // 0x122060: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x122060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x122064: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x122064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122068: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x122068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
}
