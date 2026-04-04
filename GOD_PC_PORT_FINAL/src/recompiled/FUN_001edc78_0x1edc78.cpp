#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001edc78
// Address: 0x1edc78 - 0x1edc88
void FUN_001edc78_0x1edc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001edc78_0x1edc78");
#endif

    ctx->pc = 0x1edc78u;

    // 0x1edc78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1edc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1edc7c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1edc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1edc80: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1edc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1edc84: 0x24427790  addiu       $v0, $v0, 0x7790
    ctx->pc = 0x1edc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
}
