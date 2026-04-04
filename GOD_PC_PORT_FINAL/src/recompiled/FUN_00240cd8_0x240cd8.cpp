#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00240cd8
// Address: 0x240cd8 - 0x240ce4
void FUN_00240cd8_0x240cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00240cd8_0x240cd8");
#endif

    ctx->pc = 0x240cd8u;

    // 0x240cd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240cdc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x240cdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240ce0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x240CE0u;
    {
        const bool branch_taken_0x240ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x240ce0) {
            ctx->pc = 0x240D00u;
            return;
        }
    }
    ctx->pc = 0x240CE8u;
}
