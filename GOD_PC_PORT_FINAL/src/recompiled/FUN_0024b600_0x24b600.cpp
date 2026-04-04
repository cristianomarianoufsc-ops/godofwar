#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0024b600
// Address: 0x24b600 - 0x24b610
void FUN_0024b600_0x24b600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0024b600_0x24b600");
#endif

    ctx->pc = 0x24b600u;

    // 0x24b600: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x24b600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x24b604: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x24b604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x24b608: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x24b608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x24b60c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x24b60cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
}
