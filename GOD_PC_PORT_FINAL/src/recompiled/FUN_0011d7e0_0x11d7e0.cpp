#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0011d7e0
// Address: 0x11d7e0 - 0x11d7f0
void FUN_0011d7e0_0x11d7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011d7e0_0x11d7e0");
#endif

    ctx->pc = 0x11d7e0u;

    // 0x11d7e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11d7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11d7e4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x11d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x11d7e8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11d7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11d7ec: 0x2442de90  addiu       $v0, $v0, -0x2170
    ctx->pc = 0x11d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
}
