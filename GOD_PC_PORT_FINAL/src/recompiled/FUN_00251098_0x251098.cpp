#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00251098
// Address: 0x251098 - 0x2510a8
void FUN_00251098_0x251098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00251098_0x251098");
#endif

    ctx->pc = 0x251098u;

    // 0x251098: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x251098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25109c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25109cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2510a0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2510a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2510a4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2510a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
}
