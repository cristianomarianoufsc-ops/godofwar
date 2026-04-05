#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00241640
// Address: 0x241640 - 0x24164c
void FUN_00241640_0x241640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00241640_0x241640");
#endif

    ctx->pc = 0x241640u;

    // 0x241640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x241640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x241644: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x241644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241648: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x241648u;
    {
        const bool branch_taken_0x241648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x241648) {
            ctx->pc = 0x241658u;
            return;
        }
    }
    ctx->pc = 0x241650u;
}
