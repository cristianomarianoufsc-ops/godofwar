#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132508
// Address: 0x132508 - 0x132530
void sub_00132508_0x132508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132508_0x132508");
#endif

    ctx->pc = 0x132508u;

    // 0x132508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x132508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13250c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13250cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132510: 0xc04c920  jal         func_132480
    ctx->pc = 0x132510u;
    SET_GPR_U32(ctx, 31, 0x132518u);
    ctx->pc = 0x132480u;
    if (runtime->hasFunction(0x132480u)) {
        auto targetFn = runtime->lookupFunction(0x132480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132518u; }
        if (ctx->pc != 0x132518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132480_0x132480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132518u; }
        if (ctx->pc != 0x132518u) { return; }
    }
    ctx->pc = 0x132518u;
    // 0x132518: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x132518u;
    {
        const bool branch_taken_0x132518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132518) {
            ctx->pc = 0x13251Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x132518u;
            // 0x13251c: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x132524u;
            goto label_132524;
        }
    }
    ctx->pc = 0x132520u;
    // 0x132520: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x132520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132524:
    // 0x132524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x132524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132528: 0x3e00008  jr          $ra
    ctx->pc = 0x132528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13252Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132528u;
            // 0x13252c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132524u: goto label_132524;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132530u;
}
