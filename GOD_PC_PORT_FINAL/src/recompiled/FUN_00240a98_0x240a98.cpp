#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00240a98
// Address: 0x240a98 - 0x240ab0
void FUN_00240a98_0x240a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00240a98_0x240a98");
#endif

    ctx->pc = 0x240a98u;

    // 0x240a98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x240a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x240a9c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x240a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x240aa0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x240aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x240aa4: 0x2442bd88  addiu       $v0, $v0, -0x4278
    ctx->pc = 0x240aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950280));
    // 0x240aa8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x240aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x240aac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x240aacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
