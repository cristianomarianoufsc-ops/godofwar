#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBE50
// Address: 0x1bbe50 - 0x1bbe78
void sub_001BBE50_0x1bbe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBE50_0x1bbe50");
#endif

    ctx->pc = 0x1bbe50u;

    // 0x1bbe50: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bbe50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bbe54: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bbe54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bbe58: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1bbe58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1bbe5c: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x1bbe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1bbe60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bbe60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bbe64: 0xc06df7c  jal         func_1B7DF0
    ctx->pc = 0x1BBE64u;
    SET_GPR_U32(ctx, 31, 0x1BBE6Cu);
    ctx->pc = 0x1BBE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBE64u;
            // 0x1bbe68: 0x24a55a18  addiu       $a1, $a1, 0x5A18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7DF0u;
    if (runtime->hasFunction(0x1B7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBE6Cu; }
        if (ctx->pc != 0x1BBE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7DF0_0x1b7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBE6Cu; }
        if (ctx->pc != 0x1BBE6Cu) { return; }
    }
    ctx->pc = 0x1BBE6Cu;
    // 0x1bbe6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbe6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbe70: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBE70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBE70u;
            // 0x1bbe74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBE78u;
}
