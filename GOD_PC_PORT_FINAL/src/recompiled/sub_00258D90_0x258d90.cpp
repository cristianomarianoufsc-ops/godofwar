#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00258D90
// Address: 0x258d90 - 0x258dd8
void sub_00258D90_0x258d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258D90_0x258d90");
#endif

    ctx->pc = 0x258d90u;

    // 0x258d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258d94: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x258d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x258d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x258d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x258d9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x258d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258da0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258da4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x258da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x258da8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258DA8u;
    {
        const bool branch_taken_0x258da8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x258DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258DA8u;
            // 0x258dac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258da8) {
            ctx->pc = 0x258DB8u;
            goto label_258db8;
        }
    }
    ctx->pc = 0x258DB0u;
    // 0x258db0: 0xc04c4a2  jal         func_131288
    ctx->pc = 0x258DB0u;
    SET_GPR_U32(ctx, 31, 0x258DB8u);
    ctx->pc = 0x258DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258DB0u;
            // 0x258db4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131288u;
    if (runtime->hasFunction(0x131288u)) {
        auto targetFn = runtime->lookupFunction(0x131288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258DB8u; }
        if (ctx->pc != 0x258DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131288_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258DB8u; }
        if (ctx->pc != 0x258DB8u) { return; }
    }
    ctx->pc = 0x258DB8u;
label_258db8:
    // 0x258db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258dbc: 0xc08e218  jal         func_238860
    ctx->pc = 0x258DBCu;
    SET_GPR_U32(ctx, 31, 0x258DC4u);
    ctx->pc = 0x258DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258DBCu;
            // 0x258dc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258DC4u; }
        if (ctx->pc != 0x258DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258DC4u; }
        if (ctx->pc != 0x258DC4u) { return; }
    }
    ctx->pc = 0x258DC4u;
    // 0x258dc4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x258dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258dc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x258dc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258dcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x258DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258DD0u;
            // 0x258dd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x258DB8u: goto label_258db8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x258DD8u;
}
