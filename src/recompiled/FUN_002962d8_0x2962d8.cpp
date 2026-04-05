#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002962d8
// Address: 0x2962d8 - 0x2962e4
void FUN_002962d8_0x2962d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002962d8_0x2962d8");
#endif

    ctx->pc = 0x2962d8u;

    // 0x2962d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2962d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2962dc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2962dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2962e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2962E0u;
    {
        const bool branch_taken_0x2962e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2962e0) {
            ctx->pc = 0x2962F0u;
            return;
        }
    }
    ctx->pc = 0x2962E8u;
}
