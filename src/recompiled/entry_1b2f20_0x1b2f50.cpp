#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1b2f20
// Address: 0x1b2f20 - 0x1b2f50
void entry_1b2f20_0x1b2f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1b2f20_0x1b2f50");
#endif

    ctx->pc = 0x1b2f20u;

    // 0x1b2f20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b2f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2f24: 0x0  nop
    ctx->pc = 0x1b2f24u;
    // NOP
label_1b2f28:
    // 0x1b2f28: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b2f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b2f2c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1b2f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b2f30: 0x24455078  addiu       $a1, $v0, 0x5078
    ctx->pc = 0x1b2f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20600));
    // 0x1b2f34: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b2f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b2f38: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1b2f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1b2f3c: 0x28820064  slti        $v0, $a0, 0x64
    ctx->pc = 0x1b2f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1b2f40: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B2F40u;
    {
        const bool branch_taken_0x1b2f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F40u;
            // 0x1b2f44: 0xac600034  sw          $zero, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f40) {
            ctx->pc = 0x1B2F28u;
            runtime->cooperativeGuestYield();
            goto label_1b2f28;
        }
    }
    ctx->pc = 0x1B2F48u;
    // 0x1b2f48: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F48u;
            // 0x1b2f4c: 0xa4a00030  sh          $zero, 0x30($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 48), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B2F28u: goto label_1b2f28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B2F50u;
}
