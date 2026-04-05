#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_22d060
// Address: 0x22d060 - 0x22d088
void entry_22d060_0x22d088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_22d060_0x22d088");
#endif

    ctx->pc = 0x22d060u;

    // 0x22d060: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22d060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22d064: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x22d064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x22d068: 0x2442aec0  addiu       $v0, $v0, -0x5140
    ctx->pc = 0x22d068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946496));
    // 0x22d06c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22d06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22d070: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x22d070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x22d074: 0xaca2120c  sw          $v0, 0x120C($a1)
    ctx->pc = 0x22d074u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4620), GPR_U32(ctx, 2));
    // 0x22d078: 0xac621210  sw          $v0, 0x1210($v1)
    ctx->pc = 0x22d078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4624), GPR_U32(ctx, 2));
    // 0x22d07c: 0x3e00008  jr          $ra
    ctx->pc = 0x22D07Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D07Cu;
            // 0x22d080: 0xac801220  sw          $zero, 0x1220($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D084u;
    // 0x22d084: 0x0  nop
    ctx->pc = 0x22d084u;
    // NOP
}
