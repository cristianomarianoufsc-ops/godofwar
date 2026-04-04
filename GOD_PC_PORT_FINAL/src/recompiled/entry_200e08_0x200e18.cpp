#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_200e08
// Address: 0x200e08 - 0x200e18
void entry_200e08_0x200e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_200e08_0x200e18");
#endif

    ctx->pc = 0x200e08u;

    // 0x200e08: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x200e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x200e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x200E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200E0Cu;
            // 0x200e10: 0x30420002  andi        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200E14u;
    // 0x200e14: 0x0  nop
    ctx->pc = 0x200e14u;
    // NOP
}
