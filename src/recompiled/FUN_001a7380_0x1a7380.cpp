#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001a7380
// Address: 0x1a7380 - 0x1a7388
void FUN_001a7380_0x1a7380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a7380_0x1a7380");
#endif

    ctx->pc = 0x1a7380u;

    // 0x1a7380: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1a7380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1a7384: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a7384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
}
