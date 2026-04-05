#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00188610
// Address: 0x188610 - 0x188688
void sub_00188610_0x188610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188610_0x188610");
#endif

    ctx->pc = 0x188610u;

    // 0x188610: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x188610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x188614: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x188614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x188618: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x188618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x18861c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x18861cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188620: 0x18c00013  blez        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x188620u;
    {
        const bool branch_taken_0x188620 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x188624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188620u;
            // 0x188624: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188620) {
            ctx->pc = 0x188670u;
            goto label_188670;
        }
    }
    ctx->pc = 0x188628u;
    // 0x188628: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x188628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x18862c: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x18862cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x188630: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x188630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x188634: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x188634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x188638: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x188638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18863c: 0x0  nop
    ctx->pc = 0x18863cu;
    // NOP
label_188640:
    // 0x188640: 0xc0a4ff8  jal         func_293FE0
    ctx->pc = 0x188640u;
    SET_GPR_U32(ctx, 31, 0x188648u);
    ctx->pc = 0x188644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188640u;
            // 0x188644: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293FE0u;
    if (runtime->hasFunction(0x293FE0u)) {
        auto targetFn = runtime->lookupFunction(0x293FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188648u; }
        if (ctx->pc != 0x188648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293fe0_0x293ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188648u; }
        if (ctx->pc != 0x188648u) { return; }
    }
    ctx->pc = 0x188648u;
    // 0x188648: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x188648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18864c: 0x1200fffc  beqz        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x18864Cu;
    {
        const bool branch_taken_0x18864c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x188650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18864Cu;
            // 0x188650: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18864c) {
            ctx->pc = 0x188640u;
            runtime->cooperativeGuestYield();
            goto label_188640;
        }
    }
    ctx->pc = 0x188654u;
    // 0x188654: 0x0  nop
    ctx->pc = 0x188654u;
    // NOP
label_188658:
    // 0x188658: 0x52200006  beql        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x188658u;
    {
        const bool branch_taken_0x188658 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x188658) {
            ctx->pc = 0x18865Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x188658u;
            // 0x18865c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x188674u;
            goto label_188674;
        }
    }
    ctx->pc = 0x188660u;
    // 0x188660: 0xc0a4ff0  jal         func_293FC0
    ctx->pc = 0x188660u;
    SET_GPR_U32(ctx, 31, 0x188668u);
    ctx->pc = 0x188664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188660u;
            // 0x188664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293FC0u;
    if (runtime->hasFunction(0x293FC0u)) {
        auto targetFn = runtime->lookupFunction(0x293FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188668u; }
        if (ctx->pc != 0x188668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293fc0_0x293fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188668u; }
        if (ctx->pc != 0x188668u) { return; }
    }
    ctx->pc = 0x188668u;
    // 0x188668: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x188668u;
    {
        const bool branch_taken_0x188668 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x188668) {
            ctx->pc = 0x188658u;
            runtime->cooperativeGuestYield();
            goto label_188658;
        }
    }
    ctx->pc = 0x188670u;
label_188670:
    // 0x188670: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x188670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_188674:
    // 0x188674: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x188674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188678: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x188678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18867c: 0x3e00008  jr          $ra
    ctx->pc = 0x18867Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18867Cu;
            // 0x188680: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188640u: goto label_188640;
            case 0x188658u: goto label_188658;
            case 0x188670u: goto label_188670;
            case 0x188674u: goto label_188674;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188684u;
    // 0x188684: 0x0  nop
    ctx->pc = 0x188684u;
    // NOP
}
