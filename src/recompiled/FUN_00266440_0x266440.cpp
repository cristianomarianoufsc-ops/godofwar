#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00266440
// Address: 0x266440 - 0x266448
void FUN_00266440_0x266440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00266440_0x266440");
#endif

    ctx->pc = 0x266440u;

    // 0x266440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x266440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x266444: 0x10850007  beq         $a0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x266444u;
    {
        const bool branch_taken_0x266444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x266444) {
            ctx->pc = 0x266464u;
            return;
        }
    }
    ctx->pc = 0x26644Cu;
}
