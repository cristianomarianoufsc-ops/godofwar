#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00296300
// Address: 0x296300 - 0x29630c
void FUN_00296300_0x296300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00296300_0x296300");
#endif

    ctx->pc = 0x296300u;

    // 0x296300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x296300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x296304: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x296304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296308: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x296308u;
    {
        const bool branch_taken_0x296308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x296308) {
            ctx->pc = 0x296318u;
            return;
        }
    }
    ctx->pc = 0x296310u;
}
