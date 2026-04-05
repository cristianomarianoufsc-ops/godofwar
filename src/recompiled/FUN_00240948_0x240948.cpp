#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00240948
// Address: 0x240948 - 0x240954
void FUN_00240948_0x240948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00240948_0x240948");
#endif

    ctx->pc = 0x240948u;

    // 0x240948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24094c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x24094cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240950: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x240950u;
    {
        const bool branch_taken_0x240950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x240950) {
            ctx->pc = 0x240970u;
            return;
        }
    }
    ctx->pc = 0x240958u;
}
