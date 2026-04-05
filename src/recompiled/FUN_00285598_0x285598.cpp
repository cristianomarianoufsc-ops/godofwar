#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00285598
// Address: 0x285598 - 0x2855a8
void FUN_00285598_0x285598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00285598_0x285598");
#endif

    ctx->pc = 0x285598u;

    // 0x285598: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x285598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x28559c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28559cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2855a0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2855a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2855a4: 0x244255c0  addiu       $v0, $v0, 0x55C0
    ctx->pc = 0x2855a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21952));
}
