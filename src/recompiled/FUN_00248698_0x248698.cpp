#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00248698
// Address: 0x248698 - 0x2486a4
void FUN_00248698_0x248698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00248698_0x248698");
#endif

    ctx->pc = 0x248698u;

    // 0x248698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24869c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x24869cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2486a0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2486A0u;
    {
        const bool branch_taken_0x2486a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2486a0) {
            ctx->pc = 0x2486C0u;
            return;
        }
    }
    ctx->pc = 0x2486A8u;
}
