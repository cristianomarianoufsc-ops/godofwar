#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_16f160
// Address: 0x16f160 - 0x16f170
void entry_16f160_0x16f170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_16f160_0x16f170");
#endif

    ctx->pc = 0x16f160u;

    // 0x16f160: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x16f160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x16f164: 0x3e00008  jr          $ra
    ctx->pc = 0x16F164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F164u;
            // 0x16f168: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16F16Cu;
    // 0x16f16c: 0x0  nop
    ctx->pc = 0x16f16cu;
    // NOP
}
