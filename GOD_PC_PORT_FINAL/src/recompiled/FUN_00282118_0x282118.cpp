#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00282118
// Address: 0x282118 - 0x282124
void FUN_00282118_0x282118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00282118_0x282118");
#endif

    ctx->pc = 0x282118u;

    // 0x282118: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x282118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x28211c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28211cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x282120: 0x8c442740  lw          $a0, 0x2740($v0)
    ctx->pc = 0x282120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10048)));
}
