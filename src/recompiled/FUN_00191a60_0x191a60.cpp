#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00191a60
// Address: 0x191a60 - 0x191a6c
void FUN_00191a60_0x191a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00191a60_0x191a60");
#endif

    ctx->pc = 0x191a60u;

    // 0x191a60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x191a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x191a64: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x191a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x191a68: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x191a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
}
