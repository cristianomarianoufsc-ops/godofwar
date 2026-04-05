#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001281c8
// Address: 0x1281c8 - 0x1281ec
void FUN_001281c8_0x1281c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001281c8_0x1281c8");
#endif

    ctx->pc = 0x1281c8u;

    // 0x1281c8: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x1281c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x1281cc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1281ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1281d0: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x1281d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
    // 0x1281d4: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x1281d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
    // 0x1281d8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1281d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1281dc: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x1281dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x1281e0: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x1281e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x1281e4: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x1281e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
    // 0x1281e8: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x1281e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
}
