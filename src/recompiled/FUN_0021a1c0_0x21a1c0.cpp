#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0021a1c0
// Address: 0x21a1c0 - 0x21a1d0
void FUN_0021a1c0_0x21a1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021a1c0_0x21a1c0");
#endif

    ctx->pc = 0x21a1c0u;

    // 0x21a1c0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x21a1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x21a1c4: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x21a1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x21a1c8: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x21a1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x21a1cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21a1ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
