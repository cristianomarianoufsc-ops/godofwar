#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6228
// Address: 0x1a6228 - 0x1a6250
void sub_001A6228_0x1a6228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6228_0x1a6228");
#endif

    ctx->pc = 0x1a6228u;

    // 0x1a6228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a622c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a622cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6230: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x1a6230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1a6234: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6234u;
    {
        const bool branch_taken_0x1a6234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6234u;
            // 0x1a6238: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6234) {
            ctx->pc = 0x1A6248u;
            goto label_1a6248;
        }
    }
    ctx->pc = 0x1A623Cu;
    // 0x1a623c: 0xc069894  jal         func_1A6250
    ctx->pc = 0x1A623Cu;
    SET_GPR_U32(ctx, 31, 0x1A6244u);
    ctx->pc = 0x1A6250u;
    if (runtime->hasFunction(0x1A6250u)) {
        auto targetFn = runtime->lookupFunction(0x1A6250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6244u; }
        if (ctx->pc != 0x1A6244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6250_0x1a6250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6244u; }
        if (ctx->pc != 0x1A6244u) { return; }
    }
    ctx->pc = 0x1A6244u;
    // 0x1a6244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6248:
    // 0x1a6248: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A624Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6248u;
            // 0x1a624c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6248u: goto label_1a6248;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A6250u;
}
