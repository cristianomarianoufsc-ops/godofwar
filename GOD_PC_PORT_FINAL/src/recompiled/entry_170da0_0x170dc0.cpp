#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_170da0
// Address: 0x170da0 - 0x170dc0
void entry_170da0_0x170dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_170da0_0x170dc0");
#endif

    ctx->pc = 0x170da0u;

    // 0x170da0: 0x8c82009c  lw          $v0, 0x9C($a0)
    ctx->pc = 0x170da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x170da4: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x170DA4u;
    {
        const bool branch_taken_0x170da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x170da4) {
            ctx->pc = 0x170DB4u;
            goto label_170db4;
        }
    }
    ctx->pc = 0x170DACu;
    // 0x170dac: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x170DACu;
    {
        const bool branch_taken_0x170dac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x170dac) {
            ctx->pc = 0x170DB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x170DACu;
            // 0x170db0: 0xa48000cc  sh          $zero, 0xCC($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 204), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x170DB4u;
            goto label_170db4;
        }
    }
    ctx->pc = 0x170DB4u;
label_170db4:
    // 0x170db4: 0x3e00008  jr          $ra
    ctx->pc = 0x170DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170DB4u;
            // 0x170db8: 0xac85009c  sw          $a1, 0x9C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170DB4u: goto label_170db4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170DBCu;
    // 0x170dbc: 0x0  nop
    ctx->pc = 0x170dbcu;
    // NOP
}
