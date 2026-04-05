#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001980a8
// Address: 0x1980a8 - 0x1980b8
void FUN_001980a8_0x1980a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001980a8_0x1980a8");
#endif

    ctx->pc = 0x1980a8u;

    // 0x1980a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1980a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1980ac: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1980acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1980b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1980b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1980b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1980b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
