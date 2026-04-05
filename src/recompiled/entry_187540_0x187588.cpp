#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_187540
// Address: 0x187540 - 0x187588
void entry_187540_0x187588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_187540_0x187588");
#endif

    ctx->pc = 0x187540u;

    // 0x187540: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x187540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x187544: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x187544u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187548: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x187548u;
    {
        const bool branch_taken_0x187548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18754Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187548u;
            // 0x18754c: 0x24850050  addiu       $a1, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187548) {
            ctx->pc = 0x187580u;
            goto label_187580;
        }
    }
    ctx->pc = 0x187550u;
    // 0x187550: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x187550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x187554: 0x0  nop
    ctx->pc = 0x187554u;
    // NOP
label_187558:
    // 0x187558: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x187558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18755c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18755cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x187560: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x187560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x187564: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x187564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x187568: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x187568u;
    {
        const bool branch_taken_0x187568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18756Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187568u;
            // 0x18756c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187568) {
            ctx->pc = 0x187580u;
            goto label_187580;
        }
    }
    ctx->pc = 0x187570u;
    // 0x187570: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x187570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x187574: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x187574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187578: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x187578u;
    {
        const bool branch_taken_0x187578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18757Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187578u;
            // 0x18757c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187578) {
            ctx->pc = 0x187558u;
            runtime->cooperativeGuestYield();
            goto label_187558;
        }
    }
    ctx->pc = 0x187580u;
label_187580:
    // 0x187580: 0x3e00008  jr          $ra
    ctx->pc = 0x187580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187558u: goto label_187558;
            case 0x187580u: goto label_187580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187588u;
}
