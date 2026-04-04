#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001a1dc0
// Address: 0x1a1dc0 - 0x1a1dcc
void FUN_001a1dc0_0x1a1dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a1dc0_0x1a1dc0");
#endif

    ctx->pc = 0x1a1dc0u;

    // 0x1a1dc0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1a1dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1a1dc4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1a1dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1a1dc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
