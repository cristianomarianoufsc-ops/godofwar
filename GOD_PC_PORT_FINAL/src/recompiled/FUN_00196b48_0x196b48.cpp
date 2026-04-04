#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00196b48
// Address: 0x196b48 - 0x196b54
void FUN_00196b48_0x196b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00196b48_0x196b48");
#endif

    ctx->pc = 0x196b48u;

    // 0x196b48: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x196b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x196b4c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196b4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x196b50: 0x8c62c99c  lw          $v0, -0x3664($v1)
    ctx->pc = 0x196b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953372)));
}
