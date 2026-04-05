#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1be7b0
// Address: 0x1be7b0 - 0x1be7e8
void entry_1be7b0_0x1be7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1be7b0_0x1be7e8");
#endif

    ctx->pc = 0x1be7b0u;

    // 0x1be7b0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1be7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1be7b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1be7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be7b8: 0xac40ccb4  sw          $zero, -0x334C($v0)
    ctx->pc = 0x1be7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954164), GPR_U32(ctx, 0));
    // 0x1be7bc: 0x0  nop
    ctx->pc = 0x1be7bcu;
    // NOP
label_1be7c0:
    // 0x1be7c0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1be7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1be7c4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1be7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1be7c8: 0x24425e90  addiu       $v0, $v0, 0x5E90
    ctx->pc = 0x1be7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24208));
    // 0x1be7cc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1be7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1be7d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1be7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1be7d4: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BE7D4u;
    {
        const bool branch_taken_0x1be7d4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1BE7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE7D4u;
            // 0x1be7d8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be7d4) {
            ctx->pc = 0x1BE7C0u;
            runtime->cooperativeGuestYield();
            goto label_1be7c0;
        }
    }
    ctx->pc = 0x1BE7DCu;
    // 0x1be7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE7DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BE7C0u: goto label_1be7c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BE7E4u;
    // 0x1be7e4: 0x0  nop
    ctx->pc = 0x1be7e4u;
    // NOP
}
