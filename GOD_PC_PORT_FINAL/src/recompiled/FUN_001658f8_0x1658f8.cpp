#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001658f8
// Address: 0x1658f8 - 0x165904
void FUN_001658f8_0x1658f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001658f8_0x1658f8");
#endif

    ctx->pc = 0x1658f8u;

    // 0x1658f8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1658f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1658fc: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1658fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x165900: 0x27a90048  addiu       $t1, $sp, 0x48
    ctx->pc = 0x165900u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
}
