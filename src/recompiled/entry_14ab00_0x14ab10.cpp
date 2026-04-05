#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_14ab00
// Address: 0x14ab00 - 0x14ab10
void entry_14ab00_0x14ab10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_14ab00_0x14ab10");
#endif

    ctx->pc = 0x14ab00u;

    // 0x14ab00: 0x8c8200e0  lw          $v0, 0xE0($a0)
    ctx->pc = 0x14ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x14ab04: 0x3e00008  jr          $ra
    ctx->pc = 0x14AB04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB04u;
            // 0x14ab08: 0xac450ce4  sw          $a1, 0xCE4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3300), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14AB0Cu;
    // 0x14ab0c: 0x0  nop
    ctx->pc = 0x14ab0cu;
    // NOP
}
