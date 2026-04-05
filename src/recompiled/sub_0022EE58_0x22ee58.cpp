#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022EE58
// Address: 0x22ee58 - 0x22ee88
void sub_0022EE58_0x22ee58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EE58_0x22ee58");
#endif

    ctx->pc = 0x22ee58u;

    // 0x22ee58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22ee58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22ee5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22ee5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22ee60: 0xc08b610  jal         func_22D840
    ctx->pc = 0x22EE60u;
    SET_GPR_U32(ctx, 31, 0x22EE68u);
    ctx->pc = 0x22D840u;
    if (runtime->hasFunction(0x22D840u)) {
        auto targetFn = runtime->lookupFunction(0x22D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EE68u; }
        if (ctx->pc != 0x22EE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D840_0x22d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EE68u; }
        if (ctx->pc != 0x22EE68u) { return; }
    }
    ctx->pc = 0x22EE68u;
    // 0x22ee68: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22ee6c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22ee70: 0xac4012cc  sw          $zero, 0x12CC($v0)
    ctx->pc = 0x22ee70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4812), GPR_U32(ctx, 0));
    // 0x22ee74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22ee74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ee78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22ee78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee7c: 0xac6012b0  sw          $zero, 0x12B0($v1)
    ctx->pc = 0x22ee7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4784), GPR_U32(ctx, 0));
    // 0x22ee80: 0x3e00008  jr          $ra
    ctx->pc = 0x22EE80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EE80u;
            // 0x22ee84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22EE88u;
}
