#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00265220
// Address: 0x265220 - 0x265234
void FUN_00265220_0x265220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00265220_0x265220");
#endif

    ctx->pc = 0x265220u;

    // 0x265220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x265220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x265224: 0x24020405  addiu       $v0, $zero, 0x405
    ctx->pc = 0x265224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
    // 0x265228: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x265228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x26522c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x26522cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x265230: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x265230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
}
