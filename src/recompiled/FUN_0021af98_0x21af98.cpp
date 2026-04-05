#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0021af98
// Address: 0x21af98 - 0x21afa0
void FUN_0021af98_0x21af98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021af98_0x21af98");
#endif

    ctx->pc = 0x21af98u;

    // 0x21af98: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x21af98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x21af9c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x21af9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
}
