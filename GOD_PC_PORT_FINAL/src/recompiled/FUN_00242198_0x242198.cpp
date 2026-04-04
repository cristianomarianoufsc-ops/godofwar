#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00242198
// Address: 0x242198 - 0x2421a4
void FUN_00242198_0x242198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00242198_0x242198");
#endif

    ctx->pc = 0x242198u;

    // 0x242198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x242198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24219c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x24219cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2421a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2421A0u;
    {
        const bool branch_taken_0x2421a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2421a0) {
            ctx->pc = 0x2421B0u;
            return;
        }
    }
    ctx->pc = 0x2421A8u;
}
