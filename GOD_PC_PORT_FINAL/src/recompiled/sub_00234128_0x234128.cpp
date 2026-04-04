#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00234128
// Address: 0x234128 - 0x234180
void sub_00234128_0x234128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234128_0x234128");
#endif

    ctx->pc = 0x234128u;

    // 0x234128: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x234128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23412c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x23412cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x234130: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x234130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x234134: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x234134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234138: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x234138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x23413c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23413cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x234140: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x234140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x234144: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x234144u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_234148:
    // 0x234148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23414c: 0xc08d03c  jal         func_2340F0
    ctx->pc = 0x23414Cu;
    SET_GPR_U32(ctx, 31, 0x234154u);
    ctx->pc = 0x234150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23414Cu;
            // 0x234150: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2340F0u;
    if (runtime->hasFunction(0x2340F0u)) {
        auto targetFn = runtime->lookupFunction(0x2340F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234154u; }
        if (ctx->pc != 0x234154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2340f0_0x234128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234154u; }
        if (ctx->pc != 0x234154u) { return; }
    }
    ctx->pc = 0x234154u;
    // 0x234154: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x234154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x234158: 0x1622fffb  bne         $s1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x234158u;
    {
        const bool branch_taken_0x234158 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23415Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234158u;
            // 0x23415c: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234158) {
            ctx->pc = 0x234148u;
            runtime->cooperativeGuestYield();
            goto label_234148;
        }
    }
    ctx->pc = 0x234160u;
    // 0x234160: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x234160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234164: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x234164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x234168: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x234168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23416c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x23416cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234174: 0x3e00008  jr          $ra
    ctx->pc = 0x234174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234174u;
            // 0x234178: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234148u: goto label_234148;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23417Cu;
    // 0x23417c: 0x0  nop
    ctx->pc = 0x23417cu;
    // NOP
}
