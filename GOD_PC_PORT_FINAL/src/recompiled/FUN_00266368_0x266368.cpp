#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00266368
// Address: 0x266368 - 0x26637c
void FUN_00266368_0x266368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00266368_0x266368");
#endif

    ctx->pc = 0x266368u;

    // 0x266368: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x266368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26636c: 0x240203f7  addiu       $v0, $zero, 0x3F7
    ctx->pc = 0x26636cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1015));
    // 0x266370: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x266370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x266374: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x266374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x266378: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x266378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
}
