#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001f87d8
// Address: 0x1f87d8 - 0x1f87e4
void FUN_001f87d8_0x1f87d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f87d8_0x1f87d8");
#endif

    ctx->pc = 0x1f87d8u;

    // 0x1f87d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f87d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f87dc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1f87dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1f87e0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1f87e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
}
