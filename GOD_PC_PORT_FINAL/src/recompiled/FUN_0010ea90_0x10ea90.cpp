#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0010ea90
// Address: 0x10ea90 - 0x10ea98
void FUN_0010ea90_0x10ea90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010ea90_0x10ea90");
#endif

    ctx->pc = 0x10ea90u;

    // 0x10ea90: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x10ea90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x10ea94: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x10ea94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
}
