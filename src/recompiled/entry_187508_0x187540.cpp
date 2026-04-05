#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_187508
// Address: 0x187508 - 0x187540
void entry_187508_0x187540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_187508_0x187540");
#endif

    ctx->pc = 0x187508u;

    // 0x187508: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x187508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18750c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x18750cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_187510:
    // 0x187510: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x187510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x187514: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x187514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x187518: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x187518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18751c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18751Cu;
    {
        const bool branch_taken_0x18751c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18751Cu;
            // 0x187520: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18751c) {
            ctx->pc = 0x18752Cu;
            goto label_18752c;
        }
    }
    ctx->pc = 0x187524u;
    // 0x187524: 0x3e00008  jr          $ra
    ctx->pc = 0x187524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187524u;
            // 0x187528: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187510u: goto label_187510;
            case 0x18752Cu: goto label_18752c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18752Cu;
label_18752c:
    // 0x18752c: 0x28c20006  slti        $v0, $a2, 0x6
    ctx->pc = 0x18752cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x187530: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x187530u;
    {
        const bool branch_taken_0x187530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187530u;
            // 0x187534: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187530) {
            ctx->pc = 0x187510u;
            runtime->cooperativeGuestYield();
            goto label_187510;
        }
    }
    ctx->pc = 0x187538u;
    // 0x187538: 0x3e00008  jr          $ra
    ctx->pc = 0x187538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187510u: goto label_187510;
            case 0x18752Cu: goto label_18752c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187540u;
}
