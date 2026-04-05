#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1fce40
// Address: 0x1fce40 - 0x1fce50
void entry_1fce40_0x1fce50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1fce40_0x1fce50");
#endif

    ctx->pc = 0x1fce40u;

    // 0x1fce40: 0x8c8200a8  lw          $v0, 0xA8($a0)
    ctx->pc = 0x1fce40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x1fce44: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1fce44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1fce48: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCE48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCE48u;
            // 0x1fce4c: 0xac8200a8  sw          $v0, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FCE50u;
}
