#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001e1cf8
// Address: 0x1e1cf8 - 0x1e1d04
void FUN_001e1cf8_0x1e1cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e1cf8_0x1e1cf8");
#endif

    ctx->pc = 0x1e1cf8u;

    // 0x1e1cf8: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1e1cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x1e1cfc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1e1cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1e1d00: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x1e1d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
}
