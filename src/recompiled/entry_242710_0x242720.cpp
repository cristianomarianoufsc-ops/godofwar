#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_242710
// Address: 0x242710 - 0x242720
void entry_242710_0x242720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_242710_0x242720");
#endif

    ctx->pc = 0x242710u;

    // 0x242710: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x242710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x242714: 0x3e00008  jr          $ra
    ctx->pc = 0x242714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242714u;
            // 0x242718: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24271Cu;
    // 0x24271c: 0x0  nop
    ctx->pc = 0x24271cu;
    // NOP
}
