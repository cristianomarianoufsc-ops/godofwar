#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1c0868
// Address: 0x1c0868 - 0x1c0880
void entry_1c0868_0x1c0880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1c0868_0x1c0880");
#endif

    ctx->pc = 0x1c0868u;

    // 0x1c0868: 0x8c820374  lw          $v0, 0x374($a0)
    ctx->pc = 0x1c0868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 884)));
    // 0x1c086c: 0xac800370  sw          $zero, 0x370($a0)
    ctx->pc = 0x1c086cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 0));
    // 0x1c0870: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0874: 0xac800378  sw          $zero, 0x378($a0)
    ctx->pc = 0x1c0874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 888), GPR_U32(ctx, 0));
    // 0x1c0878: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C087Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0878u;
            // 0x1c087c: 0xac820374  sw          $v0, 0x374($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 884), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0880u;
}
