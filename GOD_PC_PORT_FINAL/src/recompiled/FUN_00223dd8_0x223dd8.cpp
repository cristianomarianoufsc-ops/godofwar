#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00223dd8
// Address: 0x223dd8 - 0x223dec
void FUN_00223dd8_0x223dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00223dd8_0x223dd8");
#endif

    ctx->pc = 0x223dd8u;

    // 0x223dd8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x223dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x223ddc: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x223ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x223de0: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x223de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x223de4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x223de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223de8: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x223de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
}
