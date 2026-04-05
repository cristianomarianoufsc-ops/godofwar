#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00263de8
// Address: 0x263de8 - 0x263dfc
void FUN_00263de8_0x263de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00263de8_0x263de8");
#endif

    ctx->pc = 0x263de8u;

    // 0x263de8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x263de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x263dec: 0x24020074  addiu       $v0, $zero, 0x74
    ctx->pc = 0x263decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x263df0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x263df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x263df4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x263df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x263df8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x263df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
}
