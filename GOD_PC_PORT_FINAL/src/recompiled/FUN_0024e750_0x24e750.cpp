#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0024e750
// Address: 0x24e750 - 0x24e760
void FUN_0024e750_0x24e750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0024e750_0x24e750");
#endif

    ctx->pc = 0x24e750u;

    // 0x24e750: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24e750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24e754: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x24e754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x24e758: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x24e758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x24e75c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24e75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
