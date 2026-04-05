#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0024e650
// Address: 0x24e650 - 0x24e65c
void FUN_0024e650_0x24e650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0024e650_0x24e650");
#endif

    ctx->pc = 0x24e650u;

    // 0x24e650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24e650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24e654: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x24e654u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e658: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24E658u;
    {
        const bool branch_taken_0x24e658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e658) {
            ctx->pc = 0x24E678u;
            return;
        }
    }
    ctx->pc = 0x24E660u;
}
