#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0024a5c8
// Address: 0x24a5c8 - 0x24a5d8
void FUN_0024a5c8_0x24a5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0024a5c8_0x24a5c8");
#endif

    ctx->pc = 0x24a5c8u;

    // 0x24a5c8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x24a5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x24a5cc: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x24a5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x24a5d0: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x24a5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x24a5d4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x24a5d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
}
