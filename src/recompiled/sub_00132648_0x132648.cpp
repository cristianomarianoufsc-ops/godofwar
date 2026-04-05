#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132648
// Address: 0x132648 - 0x132688
void sub_00132648_0x132648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132648_0x132648");
#endif

    ctx->pc = 0x132648u;

    // 0x132648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13264c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13264cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x132650: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x132650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132654: 0xc05e996  jal         func_17A658
    ctx->pc = 0x132654u;
    SET_GPR_U32(ctx, 31, 0x13265Cu);
    ctx->pc = 0x132658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132654u;
            // 0x132658: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13265Cu; }
        if (ctx->pc != 0x13265Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13265Cu; }
        if (ctx->pc != 0x13265Cu) { return; }
    }
    ctx->pc = 0x13265Cu;
    // 0x13265c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13265Cu;
    {
        const bool branch_taken_0x13265c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13265c) {
            ctx->pc = 0x132660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13265Cu;
            // 0x132660: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x132678u;
            goto label_132678;
        }
    }
    ctx->pc = 0x132664u;
    // 0x132664: 0xc04c94c  jal         func_132530
    ctx->pc = 0x132664u;
    SET_GPR_U32(ctx, 31, 0x13266Cu);
    ctx->pc = 0x132668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132664u;
            // 0x132668: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132530u;
    if (runtime->hasFunction(0x132530u)) {
        auto targetFn = runtime->lookupFunction(0x132530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13266Cu; }
        if (ctx->pc != 0x13266Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132530_0x132530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13266Cu; }
        if (ctx->pc != 0x13266Cu) { return; }
    }
    ctx->pc = 0x13266Cu;
    // 0x13266c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13266cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132670: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x132670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132674: 0x0  nop
    ctx->pc = 0x132674u;
    // NOP
label_132678:
    // 0x132678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x132678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13267c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13267cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132680: 0x3e00008  jr          $ra
    ctx->pc = 0x132680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132680u;
            // 0x132684: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132678u: goto label_132678;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132688u;
}
