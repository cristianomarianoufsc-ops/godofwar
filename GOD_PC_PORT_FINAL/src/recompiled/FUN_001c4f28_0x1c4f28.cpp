#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001c4f28
// Address: 0x1c4f28 - 0x1c4f38
void FUN_001c4f28_0x1c4f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c4f28_0x1c4f28");
#endif

    ctx->pc = 0x1c4f28u;

    // 0x1c4f28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c4f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c4f2c: 0x3c08002c  lui         $t0, 0x2C
    ctx->pc = 0x1c4f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)44 << 16));
    // 0x1c4f30: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c4f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1c4f34: 0x25027790  addiu       $v0, $t0, 0x7790
    ctx->pc = 0x1c4f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 30608));
}
