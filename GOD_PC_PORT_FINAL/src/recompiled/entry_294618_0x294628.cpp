#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_294618
// Address: 0x294618 - 0x294628
void entry_294618_0x294628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_294618_0x294628");
#endif

    ctx->pc = 0x294618u;

    // 0x294618: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x294618u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x29461c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29461cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x294620: 0x3e00008  jr          $ra
    ctx->pc = 0x294620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294620u;
            // 0x294624: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x294628u;
}
