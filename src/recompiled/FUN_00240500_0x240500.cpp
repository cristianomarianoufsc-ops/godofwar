#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00240500
// Address: 0x240500 - 0x24050c
void FUN_00240500_0x240500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00240500_0x240500");
#endif

    ctx->pc = 0x240500u;

    // 0x240500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240504: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x240504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240508: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x240508u;
    {
        const bool branch_taken_0x240508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x240508) {
            ctx->pc = 0x240518u;
            return;
        }
    }
    ctx->pc = 0x240510u;
}
