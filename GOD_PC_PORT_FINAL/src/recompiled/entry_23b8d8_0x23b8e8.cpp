#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23b8d8
// Address: 0x23b8d8 - 0x23b8e8
void entry_23b8d8_0x23b8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23b8d8_0x23b8e8");
#endif

    ctx->pc = 0x23b8d8u;

    // 0x23b8d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23b8d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x23B8DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B8DCu;
            // 0x23b8e0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23B8E4u;
    // 0x23b8e4: 0x0  nop
    ctx->pc = 0x23b8e4u;
    // NOP
}
