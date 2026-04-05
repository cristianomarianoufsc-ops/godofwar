#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015BB18
// Address: 0x15bb18 - 0x15bb78
void sub_0015BB18_0x15bb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BB18_0x15bb18");
#endif

    ctx->pc = 0x15bb18u;

    // 0x15bb18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15bb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15bb1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15bb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15bb20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15bb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15bb24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15bb24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bb28: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x15bb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x15bb2c: 0x8e30017c  lw          $s0, 0x17C($s1)
    ctx->pc = 0x15bb2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
    // 0x15bb30: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x15BB30u;
    {
        const bool branch_taken_0x15bb30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bb30) {
            ctx->pc = 0x15BB34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB30u;
            // 0x15bb34: 0xae200160  sw          $zero, 0x160($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BB58u;
            goto label_15bb58;
        }
    }
    ctx->pc = 0x15BB38u;
    // 0x15bb38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15bb38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bb3c: 0x0  nop
    ctx->pc = 0x15bb3cu;
    // NOP
label_15bb40:
    // 0x15bb40: 0x8e240174  lw          $a0, 0x174($s1)
    ctx->pc = 0x15bb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x15bb44: 0xc057006  jal         func_15C018
    ctx->pc = 0x15BB44u;
    SET_GPR_U32(ctx, 31, 0x15BB4Cu);
    ctx->pc = 0x15BB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB44u;
            // 0x15bb48: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C018u;
    if (runtime->hasFunction(0x15C018u)) {
        auto targetFn = runtime->lookupFunction(0x15C018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB4Cu; }
        if (ctx->pc != 0x15BB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C018_0x15c018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB4Cu; }
        if (ctx->pc != 0x15BB4Cu) { return; }
    }
    ctx->pc = 0x15BB4Cu;
    // 0x15bb4c: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x15BB4Cu;
    {
        const bool branch_taken_0x15bb4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB4Cu;
            // 0x15bb50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb4c) {
            ctx->pc = 0x15BB40u;
            runtime->cooperativeGuestYield();
            goto label_15bb40;
        }
    }
    ctx->pc = 0x15BB54u;
    // 0x15bb54: 0xae200160  sw          $zero, 0x160($s1)
    ctx->pc = 0x15bb54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 0));
label_15bb58:
    // 0x15bb58: 0xae20017c  sw          $zero, 0x17C($s1)
    ctx->pc = 0x15bb58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 0));
    // 0x15bb5c: 0xae200178  sw          $zero, 0x178($s1)
    ctx->pc = 0x15bb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 376), GPR_U32(ctx, 0));
    // 0x15bb60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15bb60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bb64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15bb64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bb68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15bb68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x15BB6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB6Cu;
            // 0x15bb70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15BB40u: goto label_15bb40;
            case 0x15BB58u: goto label_15bb58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15BB74u;
    // 0x15bb74: 0x0  nop
    ctx->pc = 0x15bb74u;
    // NOP
}
