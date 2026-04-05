#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0024a240
// Address: 0x24a240 - 0x24a24c
void FUN_0024a240_0x24a240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0024a240_0x24a240");
#endif

    ctx->pc = 0x24a240u;

    // 0x24a240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a244: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x24a244u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a248: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24A248u;
    {
        const bool branch_taken_0x24a248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a248) {
            ctx->pc = 0x24A268u;
            return;
        }
    }
    ctx->pc = 0x24A250u;
}
