#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001fe260
// Address: 0x1fe260 - 0x1fe270
void FUN_001fe260_0x1fe260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fe260_0x1fe260");
#endif

    ctx->pc = 0x1fe260u;

    // 0x1fe260: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1fe260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1fe264: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1fe264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x1fe268: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x1fe268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x1fe26c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fe26cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
}
