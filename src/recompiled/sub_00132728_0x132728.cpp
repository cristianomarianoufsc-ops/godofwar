#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132728
// Address: 0x132728 - 0x132768
void sub_00132728_0x132728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132728_0x132728");
#endif

    ctx->pc = 0x132728u;

    // 0x132728: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13272c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13272cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x132730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x132730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132734: 0xc05e996  jal         func_17A658
    ctx->pc = 0x132734u;
    SET_GPR_U32(ctx, 31, 0x13273Cu);
    ctx->pc = 0x132738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132734u;
            // 0x132738: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13273Cu; }
        if (ctx->pc != 0x13273Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13273Cu; }
        if (ctx->pc != 0x13273Cu) { return; }
    }
    ctx->pc = 0x13273Cu;
    // 0x13273c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13273Cu;
    {
        const bool branch_taken_0x13273c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13273c) {
            ctx->pc = 0x132740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13273Cu;
            // 0x132740: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x132754u;
            goto label_132754;
        }
    }
    ctx->pc = 0x132744u;
    // 0x132744: 0xc04c9a2  jal         func_132688
    ctx->pc = 0x132744u;
    SET_GPR_U32(ctx, 31, 0x13274Cu);
    ctx->pc = 0x132748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132744u;
            // 0x132748: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132688u;
    if (runtime->hasFunction(0x132688u)) {
        auto targetFn = runtime->lookupFunction(0x132688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13274Cu; }
        if (ctx->pc != 0x13274Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132688_0x132688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13274Cu; }
        if (ctx->pc != 0x13274Cu) { return; }
    }
    ctx->pc = 0x13274Cu;
    // 0x13274c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13274cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132750: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x132750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132754:
    // 0x132754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x132754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132758: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x132758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13275c: 0x3e00008  jr          $ra
    ctx->pc = 0x13275Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13275Cu;
            // 0x132760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132754u: goto label_132754;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132764u;
    // 0x132764: 0x0  nop
    ctx->pc = 0x132764u;
    // NOP
}
