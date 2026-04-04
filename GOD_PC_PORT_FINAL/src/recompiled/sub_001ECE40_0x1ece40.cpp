#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ECE40
// Address: 0x1ece40 - 0x1ece70
void sub_001ECE40_0x1ece40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECE40_0x1ece40");
#endif

    ctx->pc = 0x1ece40u;

    // 0x1ece40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ece40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ece44: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ece44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ece48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ece48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ece4c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1ece4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ece50: 0xac660320  sw          $a2, 0x320($v1)
    ctx->pc = 0x1ece50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 800), GPR_U32(ctx, 6));
    // 0x1ece54: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1ece54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1ece58: 0x8c640324  lw          $a0, 0x324($v1)
    ctx->pc = 0x1ece58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 804)));
    // 0x1ece5c: 0xc08220c  jal         func_208830
    ctx->pc = 0x1ECE5Cu;
    SET_GPR_U32(ctx, 31, 0x1ECE64u);
    ctx->pc = 0x1ECE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECE5Cu;
            // 0x1ece60: 0x8c450240  lw          $a1, 0x240($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 576)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208830u;
    if (runtime->hasFunction(0x208830u)) {
        auto targetFn = runtime->lookupFunction(0x208830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECE64u; }
        if (ctx->pc != 0x1ECE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208830_0x208830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECE64u; }
        if (ctx->pc != 0x1ECE64u) { return; }
    }
    ctx->pc = 0x1ECE64u;
    // 0x1ece64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ece64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ece68: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECE68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECE68u;
            // 0x1ece6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ECE70u;
}
