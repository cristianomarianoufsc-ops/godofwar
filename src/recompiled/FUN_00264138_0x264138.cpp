#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00264138
// Address: 0x264138 - 0x264144
void FUN_00264138_0x264138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00264138_0x264138");
#endif

    ctx->pc = 0x264138u;

    // 0x264138: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x264138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x26413c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x26413cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x264140: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x264140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
}
