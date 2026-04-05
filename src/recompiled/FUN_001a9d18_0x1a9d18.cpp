#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001a9d18
// Address: 0x1a9d18 - 0x1a9d20
void FUN_001a9d18_0x1a9d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a9d18_0x1a9d18");
#endif

    ctx->pc = 0x1a9d18u;

    // 0x1a9d18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a9d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a9d1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a9d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
}
