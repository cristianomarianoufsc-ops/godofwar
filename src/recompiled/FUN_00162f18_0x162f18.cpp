#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00162f18
// Address: 0x162f18 - 0x162f24
void FUN_00162f18_0x162f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00162f18_0x162f18");
#endif

    ctx->pc = 0x162f18u;

    // 0x162f18: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x162f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x162f1c: 0x27bdf880  addiu       $sp, $sp, -0x780
    ctx->pc = 0x162f1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965376));
    // 0x162f20: 0x8c42104c  lw          $v0, 0x104C($v0)
    ctx->pc = 0x162f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4172)));
}
