#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0014b108
// Address: 0x14b108 - 0x14b114
void FUN_0014b108_0x14b108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014b108_0x14b108");
#endif

    ctx->pc = 0x14b108u;

    // 0x14b108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b10c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14b10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b110: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B110u;
    {
        const bool branch_taken_0x14b110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b110) {
            ctx->pc = 0x14B120u;
            return;
        }
    }
    ctx->pc = 0x14B118u;
}
