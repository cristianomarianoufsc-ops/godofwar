#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00165750
// Address: 0x165750 - 0x165760
void FUN_00165750_0x165750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00165750_0x165750");
#endif

    ctx->pc = 0x165750u;

    // 0x165750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x165750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x165754: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x165754u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165758: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x165758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16575c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x16575cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
}
