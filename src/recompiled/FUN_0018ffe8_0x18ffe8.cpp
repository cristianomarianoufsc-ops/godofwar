#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0018ffe8
// Address: 0x18ffe8 - 0x18fff8
void FUN_0018ffe8_0x18ffe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018ffe8_0x18ffe8");
#endif

    ctx->pc = 0x18ffe8u;

    // 0x18ffe8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18ffe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18ffec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18ffecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18fff0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18fff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18fff4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18fff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
