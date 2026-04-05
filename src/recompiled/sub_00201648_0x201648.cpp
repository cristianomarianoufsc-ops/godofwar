#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00201648
// Address: 0x201648 - 0x2016a0
void sub_00201648_0x201648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201648_0x201648");
#endif

    ctx->pc = 0x201648u;

    // 0x201648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20164c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20164cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x201650: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x201650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201654: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x201654u;
    {
        const bool branch_taken_0x201654 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x201658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201654u;
            // 0x201658: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201654) {
            ctx->pc = 0x20168Cu;
            goto label_20168c;
        }
    }
    ctx->pc = 0x20165Cu;
    // 0x20165c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20165cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201660: 0xc04c4c0  jal         func_131300
    ctx->pc = 0x201660u;
    SET_GPR_U32(ctx, 31, 0x201668u);
    ctx->pc = 0x201664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201660u;
            // 0x201664: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131300u;
    if (runtime->hasFunction(0x131300u)) {
        auto targetFn = runtime->lookupFunction(0x131300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201668u; }
        if (ctx->pc != 0x201668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131300_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201668u; }
        if (ctx->pc != 0x201668u) { return; }
    }
    ctx->pc = 0x201668u;
    // 0x201668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20166c: 0xc04c4c0  jal         func_131300
    ctx->pc = 0x20166Cu;
    SET_GPR_U32(ctx, 31, 0x201674u);
    ctx->pc = 0x201670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20166Cu;
            // 0x201670: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131300u;
    if (runtime->hasFunction(0x131300u)) {
        auto targetFn = runtime->lookupFunction(0x131300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201674u; }
        if (ctx->pc != 0x201674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131300_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201674u; }
        if (ctx->pc != 0x201674u) { return; }
    }
    ctx->pc = 0x201674u;
    // 0x201674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201678: 0xc04c4c0  jal         func_131300
    ctx->pc = 0x201678u;
    SET_GPR_U32(ctx, 31, 0x201680u);
    ctx->pc = 0x20167Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201678u;
            // 0x20167c: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131300u;
    if (runtime->hasFunction(0x131300u)) {
        auto targetFn = runtime->lookupFunction(0x131300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201680u; }
        if (ctx->pc != 0x201680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131300_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201680u; }
        if (ctx->pc != 0x201680u) { return; }
    }
    ctx->pc = 0x201680u;
    // 0x201680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201684: 0xc04c4c0  jal         func_131300
    ctx->pc = 0x201684u;
    SET_GPR_U32(ctx, 31, 0x20168Cu);
    ctx->pc = 0x201688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201684u;
            // 0x201688: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131300u;
    if (runtime->hasFunction(0x131300u)) {
        auto targetFn = runtime->lookupFunction(0x131300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20168Cu; }
        if (ctx->pc != 0x20168Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131300_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20168Cu; }
        if (ctx->pc != 0x20168Cu) { return; }
    }
    ctx->pc = 0x20168Cu;
label_20168c:
    // 0x20168c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20168cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201694: 0x3e00008  jr          $ra
    ctx->pc = 0x201694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201694u;
            // 0x201698: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20168Cu: goto label_20168c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20169Cu;
    // 0x20169c: 0x0  nop
    ctx->pc = 0x20169cu;
    // NOP
}
