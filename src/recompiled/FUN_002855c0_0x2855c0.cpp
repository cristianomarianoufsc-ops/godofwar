#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002855c0
// Address: 0x2855c0 - 0x2855cc
void FUN_002855c0_0x2855c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002855c0_0x2855c0");
#endif

    ctx->pc = 0x2855c0u;

    // 0x2855c0: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x2855c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x2855c4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2855c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2855c8: 0x8c626980  lw          $v0, 0x6980($v1)
    ctx->pc = 0x2855c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27008)));
}
