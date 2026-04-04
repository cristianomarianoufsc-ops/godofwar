#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_21e750
// Address: 0x21e750 - 0x21e760
void entry_21e750_0x21e760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_21e750_0x21e760");
#endif

    ctx->pc = 0x21e750u;

    // 0x21e750: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21e750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21e754: 0x3e00008  jr          $ra
    ctx->pc = 0x21E754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E754u;
            // 0x21e758: 0xac40e5c8  sw          $zero, -0x1A38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21E75Cu;
    // 0x21e75c: 0x0  nop
    ctx->pc = 0x21e75cu;
    // NOP
}
