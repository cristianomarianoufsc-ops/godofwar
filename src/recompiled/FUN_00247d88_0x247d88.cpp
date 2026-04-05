#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00247d88
// Address: 0x247d88 - 0x247d94
void FUN_00247d88_0x247d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00247d88_0x247d88");
#endif

    ctx->pc = 0x247d88u;

    // 0x247d88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x247d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x247d8c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x247d8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247d90: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x247D90u;
    {
        const bool branch_taken_0x247d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x247d90) {
            ctx->pc = 0x247DB0u;
            return;
        }
    }
    ctx->pc = 0x247D98u;
}
