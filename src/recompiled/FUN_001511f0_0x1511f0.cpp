#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001511f0
// Address: 0x1511f0 - 0x151200
void FUN_001511f0_0x1511f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001511f0_0x1511f0");
#endif

    ctx->pc = 0x1511f0u;

    // 0x1511f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1511f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1511f4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1511f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1511f8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1511f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1511fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1511fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
