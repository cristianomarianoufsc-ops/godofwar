#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00192590
// Address: 0x192590 - 0x192598
void FUN_00192590_0x192590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00192590_0x192590");
#endif

    ctx->pc = 0x192590u;

    // 0x192590: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x192590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x192594: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x192594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
}
