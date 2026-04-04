#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_243570
// Address: 0x243570 - 0x243580
void entry_243570_0x243580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_243570_0x243580");
#endif

    ctx->pc = 0x243570u;

    // 0x243570: 0x8c8201ac  lw          $v0, 0x1AC($a0)
    ctx->pc = 0x243570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 428)));
    // 0x243574: 0x3e00008  jr          $ra
    ctx->pc = 0x243574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243574u;
            // 0x243578: 0x451024  and         $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24357Cu;
    // 0x24357c: 0x0  nop
    ctx->pc = 0x24357cu;
    // NOP
}
