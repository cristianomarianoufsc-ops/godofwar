#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00123E18
// Address: 0x123e18 - 0x123e48
void sub_00123E18_0x123e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123E18_0x123e18");
#endif

    ctx->pc = 0x123e18u;

    // 0x123e18: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x123e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x123e1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x123e1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x123e20: 0x8c44bdec  lw          $a0, -0x4214($v0)
    ctx->pc = 0x123e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950380)));
    // 0x123e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x123e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x123e28: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x123E28u;
    SET_GPR_U32(ctx, 31, 0x123E30u);
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123E30u; }
        if (ctx->pc != 0x123E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123E30u; }
        if (ctx->pc != 0x123E30u) { return; }
    }
    ctx->pc = 0x123E30u;
    // 0x123e30: 0xc08fb9e  jal         func_23EE78
    ctx->pc = 0x123E30u;
    SET_GPR_U32(ctx, 31, 0x123E38u);
    ctx->pc = 0x123E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123E30u;
            // 0x123e34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EE78u;
    if (runtime->hasFunction(0x23EE78u)) {
        auto targetFn = runtime->lookupFunction(0x23EE78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123E38u; }
        if (ctx->pc != 0x123E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023EE78_0x23ee78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123E38u; }
        if (ctx->pc != 0x123E38u) { return; }
    }
    ctx->pc = 0x123E38u;
    // 0x123e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x123e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x123E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123E3Cu;
            // 0x123e40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x123E44u;
    // 0x123e44: 0x0  nop
    ctx->pc = 0x123e44u;
    // NOP
}
