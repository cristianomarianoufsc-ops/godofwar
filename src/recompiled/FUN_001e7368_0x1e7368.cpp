#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001e7368
// Address: 0x1e7368 - 0x1e7370
void FUN_001e7368_0x1e7368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e7368_0x1e7368");
#endif

    ctx->pc = 0x1e7368u;

    // 0x1e7368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e736c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e736cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
