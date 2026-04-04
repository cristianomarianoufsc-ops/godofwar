#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1710e8
// Address: 0x1710e8 - 0x171100
void entry_1710e8_0x171100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1710e8_0x171100");
#endif

    ctx->pc = 0x1710e8u;

    // 0x1710e8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1710e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1710ec: 0xac85007c  sw          $a1, 0x7C($a0)
    ctx->pc = 0x1710ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 5));
    // 0x1710f0: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x1710f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    // 0x1710f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1710F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1710F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1710F4u;
            // 0x1710f8: 0xac800084  sw          $zero, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1710FCu;
    // 0x1710fc: 0x0  nop
    ctx->pc = 0x1710fcu;
    // NOP
}
