#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1759f8
// Address: 0x1759f8 - 0x175a10
void entry_1759f8_0x175a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1759f8_0x175a10");
#endif

    ctx->pc = 0x1759f8u;

    // 0x1759f8: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1759f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1759fc: 0x2463d8d8  addiu       $v1, $v1, -0x2728
    ctx->pc = 0x1759fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957272));
    // 0x175a00: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x175a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x175a04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x175a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x175a08: 0x3e00008  jr          $ra
    ctx->pc = 0x175A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175A08u;
            // 0x175a0c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175A10u;
}
