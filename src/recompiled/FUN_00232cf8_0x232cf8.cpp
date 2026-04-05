#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00232cf8
// Address: 0x232cf8 - 0x232d08
void FUN_00232cf8_0x232cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00232cf8_0x232cf8");
#endif

    ctx->pc = 0x232cf8u;

    // 0x232cf8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x232cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x232cfc: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x232cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x232d00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x232d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232d04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
