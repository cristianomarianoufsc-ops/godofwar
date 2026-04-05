#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0010b9c0
// Address: 0x10b9c0 - 0x10b9d0
void FUN_0010b9c0_0x10b9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010b9c0_0x10b9c0");
#endif

    ctx->pc = 0x10b9c0u;

    // 0x10b9c0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x10b9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x10b9c4: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x10b9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x10b9c8: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x10b9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x10b9cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x10b9ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
}
