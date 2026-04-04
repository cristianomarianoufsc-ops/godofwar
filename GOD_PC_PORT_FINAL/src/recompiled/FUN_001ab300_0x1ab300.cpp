#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001ab300
// Address: 0x1ab300 - 0x1ab30c
void FUN_001ab300_0x1ab300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ab300_0x1ab300");
#endif

    ctx->pc = 0x1ab300u;

    // 0x1ab300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ab304: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1ab304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ab308: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ab308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
}
