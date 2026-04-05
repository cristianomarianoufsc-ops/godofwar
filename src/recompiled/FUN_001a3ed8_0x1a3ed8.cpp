#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001a3ed8
// Address: 0x1a3ed8 - 0x1a3ee8
void FUN_001a3ed8_0x1a3ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a3ed8_0x1a3ed8");
#endif

    ctx->pc = 0x1a3ed8u;

    // 0x1a3ed8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1a3ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1a3edc: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1a3edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x1a3ee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3ee4: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1a3ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
}
