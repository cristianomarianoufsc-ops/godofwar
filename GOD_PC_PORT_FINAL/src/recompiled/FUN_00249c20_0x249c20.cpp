#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00249c20
// Address: 0x249c20 - 0x249c2c
void FUN_00249c20_0x249c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00249c20_0x249c20");
#endif

    ctx->pc = 0x249c20u;

    // 0x249c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x249c24: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x249c24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249c28: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x249C28u;
    {
        const bool branch_taken_0x249c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x249c28) {
            ctx->pc = 0x249C48u;
            return;
        }
    }
    ctx->pc = 0x249C30u;
}
