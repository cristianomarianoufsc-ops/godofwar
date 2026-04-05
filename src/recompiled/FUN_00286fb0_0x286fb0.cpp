#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00286fb0
// Address: 0x286fb0 - 0x286fc0
void FUN_00286fb0_0x286fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00286fb0_0x286fb0");
#endif

    ctx->pc = 0x286fb0u;

    // 0x286fb0: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x286fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x286fb4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x286fb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x286fb8: 0x8c436990  lw          $v1, 0x6990($v0)
    ctx->pc = 0x286fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27024)));
    // 0x286fbc: 0x24456990  addiu       $a1, $v0, 0x6990
    ctx->pc = 0x286fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27024));
}
