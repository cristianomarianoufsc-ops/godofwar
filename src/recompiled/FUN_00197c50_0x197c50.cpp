#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00197c50
// Address: 0x197c50 - 0x197c58
void FUN_00197c50_0x197c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00197c50_0x197c50");
#endif

    ctx->pc = 0x197c50u;

    // 0x197c50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x197c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x197c54: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x197c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
}
