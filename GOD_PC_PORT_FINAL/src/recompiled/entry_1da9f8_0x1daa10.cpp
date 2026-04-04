#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1da9f8
// Address: 0x1da9f8 - 0x1daa10
void entry_1da9f8_0x1daa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1da9f8_0x1daa10");
#endif

    ctx->pc = 0x1da9f8u;

    // 0x1da9f8: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x1da9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1da9fc: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x1da9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x1daa00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1daa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1daa04: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAA04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAA04u;
            // 0x1daa08: 0xac820064  sw          $v0, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DAA0Cu;
    // 0x1daa0c: 0x0  nop
    ctx->pc = 0x1daa0cu;
    // NOP
}
