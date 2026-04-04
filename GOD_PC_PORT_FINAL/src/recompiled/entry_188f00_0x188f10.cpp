#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_188f00
// Address: 0x188f00 - 0x188f10
void entry_188f00_0x188f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_188f00_0x188f10");
#endif

    ctx->pc = 0x188f00u;

    // 0x188f00: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x188f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x188f04: 0x3e00008  jr          $ra
    ctx->pc = 0x188F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188F04u;
            // 0x188f08: 0xac44c83c  sw          $a0, -0x37C4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294953020), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188F0Cu;
    // 0x188f0c: 0x0  nop
    ctx->pc = 0x188f0cu;
    // NOP
}
