#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0018ce00
// Address: 0x18ce00 - 0x18ce10
void FUN_0018ce00_0x18ce00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018ce00_0x18ce00");
#endif

    ctx->pc = 0x18ce00u;

    // 0x18ce00: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x18ce00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x18ce04: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x18ce04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x18ce08: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x18ce08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x18ce0c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x18ce0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
