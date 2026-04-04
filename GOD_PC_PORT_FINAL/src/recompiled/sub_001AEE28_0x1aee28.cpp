#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AEE28
// Address: 0x1aee28 - 0x1aee70
void sub_001AEE28_0x1aee28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEE28_0x1aee28");
#endif

    ctx->pc = 0x1aee28u;

    // 0x1aee28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aee28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aee2c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1aee2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aee30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1aee30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1aee34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1aee34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aee38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1aee38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1aee3c: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1aee3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1aee40: 0x2610fdc8  addiu       $s0, $s0, -0x238
    ctx->pc = 0x1aee40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966728));
    // 0x1aee44: 0x8e022804  lw          $v0, 0x2804($s0)
    ctx->pc = 0x1aee44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10244)));
    // 0x1aee48: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1AEE48u;
    SET_GPR_U32(ctx, 31, 0x1AEE50u);
    ctx->pc = 0x1AEE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEE48u;
            // 0x1aee4c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE50u; }
        if (ctx->pc != 0x1AEE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE50u; }
        if (ctx->pc != 0x1AEE50u) { return; }
    }
    ctx->pc = 0x1AEE50u;
    // 0x1aee50: 0x8e052804  lw          $a1, 0x2804($s0)
    ctx->pc = 0x1aee50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10244)));
    // 0x1aee54: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1aee54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1aee58: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1AEE58u;
    SET_GPR_U32(ctx, 31, 0x1AEE60u);
    ctx->pc = 0x1AEE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEE58u;
            // 0x1aee5c: 0x528c0  sll         $a1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE60u; }
        if (ctx->pc != 0x1AEE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE60u; }
        if (ctx->pc != 0x1AEE60u) { return; }
    }
    ctx->pc = 0x1AEE60u;
    // 0x1aee60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1aee60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aee64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1aee64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aee68: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEE68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEE68u;
            // 0x1aee6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AEE70u;
}
