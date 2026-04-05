#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002836c0
// Address: 0x2836c0 - 0x2836d0
void FUN_002836c0_0x2836c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002836c0_0x2836c0");
#endif

    ctx->pc = 0x2836c0u;

    // 0x2836c0: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x2836c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x2836c4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2836c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2836c8: 0x8ce5616c  lw          $a1, 0x616C($a3)
    ctx->pc = 0x2836c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24940)));
    // 0x2836cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2836ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
}
