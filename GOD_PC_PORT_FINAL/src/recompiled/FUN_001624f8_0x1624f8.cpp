#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001624f8
// Address: 0x1624f8 - 0x162500
void FUN_001624f8_0x1624f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001624f8_0x1624f8");
#endif

    ctx->pc = 0x1624f8u;

    // 0x1624f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1624f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1624fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1624fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
}
