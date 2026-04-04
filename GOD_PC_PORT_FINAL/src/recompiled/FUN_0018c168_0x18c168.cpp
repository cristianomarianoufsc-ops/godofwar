#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0018c168
// Address: 0x18c168 - 0x18c174
void FUN_0018c168_0x18c168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018c168_0x18c168");
#endif

    ctx->pc = 0x18c168u;

    // 0x18c168: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x18c168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x18c16c: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x18c16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
    // 0x18c170: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x18c170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
}
