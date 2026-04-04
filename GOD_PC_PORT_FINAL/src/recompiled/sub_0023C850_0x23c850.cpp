#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023C850
// Address: 0x23c850 - 0x23c8b0
void sub_0023C850_0x23c850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C850_0x23c850");
#endif

    ctx->pc = 0x23c850u;

    // 0x23c850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23c850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23c854: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23c854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23c858: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23c858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23c85c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c85cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c864: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x23c864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x23c868: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C868u;
    {
        const bool branch_taken_0x23c868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C868u;
            // 0x23c86c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c868) {
            ctx->pc = 0x23C878u;
            goto label_23c878;
        }
    }
    ctx->pc = 0x23C870u;
    // 0x23c870: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x23C870u;
    SET_GPR_U32(ctx, 31, 0x23C878u);
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C878u; }
        if (ctx->pc != 0x23C878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C878u; }
        if (ctx->pc != 0x23C878u) { return; }
    }
    ctx->pc = 0x23C878u;
label_23c878:
    // 0x23c878: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x23c878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x23c87c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C87Cu;
    {
        const bool branch_taken_0x23c87c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c87c) {
            ctx->pc = 0x23C880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23C87Cu;
            // 0x23c880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23C890u;
            goto label_23c890;
        }
    }
    ctx->pc = 0x23C884u;
    // 0x23c884: 0xc04c4a2  jal         func_131288
    ctx->pc = 0x23C884u;
    SET_GPR_U32(ctx, 31, 0x23C88Cu);
    ctx->pc = 0x23C888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C884u;
            // 0x23c888: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131288u;
    if (runtime->hasFunction(0x131288u)) {
        auto targetFn = runtime->lookupFunction(0x131288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C88Cu; }
        if (ctx->pc != 0x23C88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131288_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C88Cu; }
        if (ctx->pc != 0x23C88Cu) { return; }
    }
    ctx->pc = 0x23C88Cu;
    // 0x23c88c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23c88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23c890:
    // 0x23c890: 0xc08e218  jal         func_238860
    ctx->pc = 0x23C890u;
    SET_GPR_U32(ctx, 31, 0x23C898u);
    ctx->pc = 0x23C894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C890u;
            // 0x23c894: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C898u; }
        if (ctx->pc != 0x23C898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C898u; }
        if (ctx->pc != 0x23C898u) { return; }
    }
    ctx->pc = 0x23C898u;
    // 0x23c898: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23c898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c89c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23c89cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x23C8A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C8A4u;
            // 0x23c8a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C878u: goto label_23c878;
            case 0x23C890u: goto label_23c890;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C8ACu;
    // 0x23c8ac: 0x0  nop
    ctx->pc = 0x23c8acu;
    // NOP
}
