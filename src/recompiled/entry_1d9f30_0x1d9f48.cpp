#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1d9f30
// Address: 0x1d9f30 - 0x1d9f48
void entry_1d9f30_0x1d9f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1d9f30_0x1d9f48");
#endif

    ctx->pc = 0x1d9f30u;

    // 0x1d9f30: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d9f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d9f34: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d9f34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d9f38: 0x24422de0  addiu       $v0, $v0, 0x2DE0
    ctx->pc = 0x1d9f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11744));
    // 0x1d9f3c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1d9f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1d9f40: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9F40u;
            // 0x1d9f44: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D9F48u;
}
