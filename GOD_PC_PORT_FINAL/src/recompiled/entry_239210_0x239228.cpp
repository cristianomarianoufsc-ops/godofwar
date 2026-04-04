#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_239210
// Address: 0x239210 - 0x239228
void entry_239210_0x239228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_239210_0x239228");
#endif

    ctx->pc = 0x239210u;

    // 0x239210: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x239210u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x239214: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x239214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x239218: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x239218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x23921c: 0x3e00008  jr          $ra
    ctx->pc = 0x23921Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23921Cu;
            // 0x239220: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x239224u;
    // 0x239224: 0x0  nop
    ctx->pc = 0x239224u;
    // NOP
}
