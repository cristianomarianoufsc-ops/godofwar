#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020CF08
// Address: 0x20cf08 - 0x20cf30
void sub_0020CF08_0x20cf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CF08_0x20cf08");
#endif

    ctx->pc = 0x20cf08u;

    // 0x20cf08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20cf08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20cf0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20cf0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20cf10: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x20cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x20cf14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20CF14u;
    {
        const bool branch_taken_0x20cf14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CF14u;
            // 0x20cf18: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cf14) {
            ctx->pc = 0x20CF28u;
            goto label_20cf28;
        }
    }
    ctx->pc = 0x20CF1Cu;
    // 0x20cf1c: 0xc0833cc  jal         func_20CF30
    ctx->pc = 0x20CF1Cu;
    SET_GPR_U32(ctx, 31, 0x20CF24u);
    ctx->pc = 0x20CF30u;
    if (runtime->hasFunction(0x20CF30u)) {
        auto targetFn = runtime->lookupFunction(0x20CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CF24u; }
        if (ctx->pc != 0x20CF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020CF30_0x20cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CF24u; }
        if (ctx->pc != 0x20CF24u) { return; }
    }
    ctx->pc = 0x20CF24u;
    // 0x20cf24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20cf24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20cf28:
    // 0x20cf28: 0x3e00008  jr          $ra
    ctx->pc = 0x20CF28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CF28u;
            // 0x20cf2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20CF28u: goto label_20cf28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20CF30u;
}
