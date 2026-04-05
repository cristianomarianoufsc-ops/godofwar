#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0021aa50
// Address: 0x21aa50 - 0x21aa58
void FUN_0021aa50_0x21aa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021aa50_0x21aa50");
#endif

    ctx->pc = 0x21aa50u;

    // 0x21aa50: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x21aa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x21aa54: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x21aa54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
}
