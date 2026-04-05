#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0024a748
// Address: 0x24a748 - 0x24a750
void FUN_0024a748_0x24a748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0024a748_0x24a748");
#endif

    ctx->pc = 0x24a748u;

    // 0x24a748: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x24a748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x24a74c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x24a74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
}
