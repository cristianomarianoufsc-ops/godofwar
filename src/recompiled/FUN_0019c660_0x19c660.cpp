#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0019c660
// Address: 0x19c660 - 0x19c670
void FUN_0019c660_0x19c660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019c660_0x19c660");
#endif

    ctx->pc = 0x19c660u;

    // 0x19c660: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19c660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19c664: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19c664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19c668: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x19c668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x19c66c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C66Cu;
    {
        const bool branch_taken_0x19c66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c66c) {
            ctx->pc = 0x19C680u;
            return;
        }
    }
    ctx->pc = 0x19C674u;
}
