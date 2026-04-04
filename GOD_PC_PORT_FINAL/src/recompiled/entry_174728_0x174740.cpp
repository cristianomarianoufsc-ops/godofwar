#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_174728
// Address: 0x174728 - 0x174740
void entry_174728_0x174740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_174728_0x174740");
#endif

    ctx->pc = 0x174728u;

    // 0x174728: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x174728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x17472c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x17472cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x174730: 0x24424f20  addiu       $v0, $v0, 0x4F20
    ctx->pc = 0x174730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20256));
    // 0x174734: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x174734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x174738: 0x3e00008  jr          $ra
    ctx->pc = 0x174738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17473Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174738u;
            // 0x17473c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174740u;
}
