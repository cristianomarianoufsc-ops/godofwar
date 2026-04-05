#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00188f10
// Address: 0x188f10 - 0x188f20
void FUN_00188f10_0x188f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00188f10_0x188f10");
#endif

    ctx->pc = 0x188f10u;

    // 0x188f10: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x188f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x188f14: 0x8c62c840  lw          $v0, -0x37C0($v1)
    ctx->pc = 0x188f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953024)));
    // 0x188f18: 0x3e00008  jr          $ra
    ctx->pc = 0x188F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188F18u;
            // 0x188f1c: 0xac60c840  sw          $zero, -0x37C0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953024), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188F20u;
}
