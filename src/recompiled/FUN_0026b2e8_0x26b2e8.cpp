#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0026b2e8
// Address: 0x26b2e8 - 0x26b2f0
void FUN_0026b2e8_0x26b2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0026b2e8_0x26b2e8");
#endif

    ctx->pc = 0x26b2e8u;

    // 0x26b2e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26b2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26b2ec: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x26b2ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
