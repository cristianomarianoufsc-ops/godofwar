#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00263a20
// Address: 0x263a20 - 0x263a28
void FUN_00263a20_0x263a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00263a20_0x263a20");
#endif

    ctx->pc = 0x263a20u;

    // 0x263a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x263a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x263a24: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x263a24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
}
