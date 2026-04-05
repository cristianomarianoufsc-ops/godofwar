#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3508
// Address: 0x1b3508 - 0x1b3538
void sub_001B3508_0x1b3508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3508_0x1b3508");
#endif

    ctx->pc = 0x1b3508u;

    // 0x1b3508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b350c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b350cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3510: 0xc06cd0c  jal         func_1B3430
    ctx->pc = 0x1B3510u;
    SET_GPR_U32(ctx, 31, 0x1B3518u);
    ctx->pc = 0x1B3430u;
    if (runtime->hasFunction(0x1B3430u)) {
        auto targetFn = runtime->lookupFunction(0x1B3430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3518u; }
        if (ctx->pc != 0x1B3518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3430_0x1b3430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3518u; }
        if (ctx->pc != 0x1B3518u) { return; }
    }
    ctx->pc = 0x1B3518u;
    // 0x1b3518: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3518u;
    {
        const bool branch_taken_0x1b3518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3518) {
            ctx->pc = 0x1B351Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3518u;
            // 0x1b351c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B3528u;
            goto label_1b3528;
        }
    }
    ctx->pc = 0x1B3520u;
    // 0x1b3520: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1b3520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1b3524: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x1b3524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_1b3528:
    // 0x1b3528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b352c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B352Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B352Cu;
            // 0x1b3530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3528u: goto label_1b3528;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B3534u;
    // 0x1b3534: 0x0  nop
    ctx->pc = 0x1b3534u;
    // NOP
}
