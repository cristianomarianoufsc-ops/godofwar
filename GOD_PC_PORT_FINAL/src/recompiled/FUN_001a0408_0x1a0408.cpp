#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001a0408
// Address: 0x1a0408 - 0x1a041c
void FUN_001a0408_0x1a0408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a0408_0x1a0408");
#endif

    ctx->pc = 0x1a0408u;

    // 0x1a0408: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1a0408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1a040c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x1a040cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x1a0410: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1a0410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x1a0414: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a0414u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0418: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1a0418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
}
