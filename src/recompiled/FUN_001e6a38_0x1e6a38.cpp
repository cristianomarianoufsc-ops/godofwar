#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001e6a38
// Address: 0x1e6a38 - 0x1e6a4c
void FUN_001e6a38_0x1e6a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e6a38_0x1e6a38");
#endif

    ctx->pc = 0x1e6a38u;

    // 0x1e6a38: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e6a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e6a3c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e6a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1e6a40: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e6a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1e6a44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e6a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6a48: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e6a48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
}
