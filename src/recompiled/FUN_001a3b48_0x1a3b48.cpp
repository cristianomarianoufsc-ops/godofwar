#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001a3b48
// Address: 0x1a3b48 - 0x1a3b58
void FUN_001a3b48_0x1a3b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a3b48_0x1a3b48");
#endif

    ctx->pc = 0x1a3b48u;

    // 0x1a3b48: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1a3b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1a3b4c: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x1a3b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x1a3b50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3b54: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x1a3b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
}
