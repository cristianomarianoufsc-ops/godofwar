#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1711c8
// Address: 0x1711c8 - 0x1711d8
void entry_1711c8_0x1711d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1711c8_0x1711d8");
#endif

    ctx->pc = 0x1711c8u;

    // 0x1711c8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1711c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1711cc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1711ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1711d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1711D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1711D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1711D0u;
            // 0x1711d4: 0xac8600ac  sw          $a2, 0xAC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1711D8u;
}
