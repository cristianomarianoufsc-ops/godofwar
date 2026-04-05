#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00199da8
// Address: 0x199da8 - 0x199db4
void FUN_00199da8_0x199da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00199da8_0x199da8");
#endif

    ctx->pc = 0x199da8u;

    // 0x199da8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x199da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x199dac: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x199dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x199db0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x199db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
