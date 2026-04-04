#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23cb40
// Address: 0x23cb40 - 0x23cb50
void entry_23cb40_0x23cb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23cb40_0x23cb50");
#endif

    ctx->pc = 0x23cb40u;

    // 0x23cb40: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x23cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x23cb44: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x23cb44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23cb48: 0x3e00008  jr          $ra
    ctx->pc = 0x23CB48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CB48u;
            // 0x23cb4c: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23CB50u;
}
