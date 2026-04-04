#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00106180
// Address: 0x106180 - 0x106190
void FUN_00106180_0x106180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00106180_0x106180");
#endif

    ctx->pc = 0x106180u;

    // 0x106180: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x106180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x106184: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x106184u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x106188: 0x8c42ec50  lw          $v0, -0x13B0($v0)
    ctx->pc = 0x106188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962256)));
    // 0x10618c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10618Cu;
    {
        const bool branch_taken_0x10618c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10618c) {
            ctx->pc = 0x10619Cu;
            return;
        }
    }
    ctx->pc = 0x106194u;
}
