#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00223db0
// Address: 0x223db0 - 0x223dbc
void FUN_00223db0_0x223db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00223db0_0x223db0");
#endif

    ctx->pc = 0x223db0u;

    // 0x223db0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x223db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x223db4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223db4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x223db8: 0x8c44f190  lw          $a0, -0xE70($v0)
    ctx->pc = 0x223db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963600)));
}
