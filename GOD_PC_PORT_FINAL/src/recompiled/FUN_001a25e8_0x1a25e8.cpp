#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001a25e8
// Address: 0x1a25e8 - 0x1a25f4
void FUN_001a25e8_0x1a25e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a25e8_0x1a25e8");
#endif

    ctx->pc = 0x1a25e8u;

    // 0x1a25e8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1a25e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1a25ec: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1a25ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x1a25f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a25f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
