#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_234520
// Address: 0x234520 - 0x234558
void entry_234520_0x234558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_234520_0x234558");
#endif

    ctx->pc = 0x234520u;

    // 0x234520: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x234520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234524: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x234524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x234528: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x234528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23452c: 0x0  nop
    ctx->pc = 0x23452cu;
    // NOP
label_234530:
    // 0x234530: 0x0  nop
    ctx->pc = 0x234530u;
    // NOP
    // 0x234534: 0x0  nop
    ctx->pc = 0x234534u;
    // NOP
    // 0x234538: 0x0  nop
    ctx->pc = 0x234538u;
    // NOP
    // 0x23453c: 0x0  nop
    ctx->pc = 0x23453cu;
    // NOP
    // 0x234540: 0x0  nop
    ctx->pc = 0x234540u;
    // NOP
    // 0x234544: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x234544u;
    {
        const bool branch_taken_0x234544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x234548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234544u;
            // 0x234548: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234544) {
            ctx->pc = 0x234530u;
            runtime->cooperativeGuestYield();
            goto label_234530;
        }
    }
    ctx->pc = 0x23454Cu;
    // 0x23454c: 0x3e00008  jr          $ra
    ctx->pc = 0x23454Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23454Cu;
            // 0x234550: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234530u: goto label_234530;
            default: break;
        }
        return;
    }
    ctx->pc = 0x234554u;
    // 0x234554: 0x0  nop
    ctx->pc = 0x234554u;
    // NOP
}
