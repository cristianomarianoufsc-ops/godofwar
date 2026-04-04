#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26ff70
// Address: 0x26ff70 - 0x26ff88
void entry_26ff70_0x26ff88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26ff70_0x26ff88");
#endif

    ctx->pc = 0x26ff70u;

    // 0x26ff70: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x26ff70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x26ff74: 0x3e00008  jr          $ra
    ctx->pc = 0x26FF74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FF74u;
            // 0x26ff78: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26FF7Cu;
    // 0x26ff7c: 0x0  nop
    ctx->pc = 0x26ff7cu;
    // NOP
    // 0x26ff80: 0xac4600ac  sw          $a2, 0xAC($v0)
    ctx->pc = 0x26ff80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 6));
    // 0x26ff84: 0x0  nop
    ctx->pc = 0x26ff84u;
    // NOP
}
