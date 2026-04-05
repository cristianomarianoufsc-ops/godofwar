#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001f7230
// Address: 0x1f7230 - 0x1f7238
void FUN_001f7230_0x1f7230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f7230_0x1f7230");
#endif

    ctx->pc = 0x1f7230u;

    // 0x1f7230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f7230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f7234: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1f7234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
