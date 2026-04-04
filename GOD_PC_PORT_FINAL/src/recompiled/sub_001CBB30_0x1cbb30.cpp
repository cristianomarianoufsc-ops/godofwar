#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CBB30
// Address: 0x1cbb30 - 0x1cbba8
void sub_001CBB30_0x1cbb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CBB30_0x1cbb30");
#endif

    ctx->pc = 0x1cbb30u;

    // 0x1cbb30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cbb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cbb34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cbb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cbb38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cbb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cbb3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cbb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cbb40: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x1cbb40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cbb44: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cbb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cbb48: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1cbb48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1cbb4c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1cbb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1cbb50: 0x40f809  jalr        $v0
    ctx->pc = 0x1CBB50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CBB58u);
        ctx->pc = 0x1CBB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB50u;
            // 0x1cbb54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CBB58u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CBB94u: goto label_1cbb94;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB58u; }
            if (ctx->pc != 0x1CBB58u) { return; }
        }
        }
    }
    ctx->pc = 0x1CBB58u;
    // 0x1cbb58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cbb58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbb5c: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1CBB5Cu;
    {
        const bool branch_taken_0x1cbb5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbb5c) {
            ctx->pc = 0x1CBB60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB5Cu;
            // 0x1cbb60: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CBB94u;
            goto label_1cbb94;
        }
    }
    ctx->pc = 0x1CBB64u;
    // 0x1cbb64: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x1cbb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1cbb68: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1CBB68u;
    {
        const bool branch_taken_0x1cbb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbb68) {
            ctx->pc = 0x1CBB6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB68u;
            // 0x1cbb6c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CBB94u;
            goto label_1cbb94;
        }
    }
    ctx->pc = 0x1CBB70u;
    // 0x1cbb70: 0x8e040320  lw          $a0, 0x320($s0)
    ctx->pc = 0x1cbb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1cbb74: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1CBB74u;
    SET_GPR_U32(ctx, 31, 0x1CBB7Cu);
    ctx->pc = 0x1CBB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB74u;
            // 0x1cbb78: 0x8e300058  lw          $s0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB7Cu; }
        if (ctx->pc != 0x1CBB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB7Cu; }
        if (ctx->pc != 0x1CBB7Cu) { return; }
    }
    ctx->pc = 0x1CBB7Cu;
    // 0x1cbb7c: 0x94420270  lhu         $v0, 0x270($v0)
    ctx->pc = 0x1cbb7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x1cbb80: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CBB80u;
    {
        const bool branch_taken_0x1cbb80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CBB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB80u;
            // 0x1cbb84: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb80) {
            ctx->pc = 0x1CBB94u;
            goto label_1cbb94;
        }
    }
    ctx->pc = 0x1CBB88u;
    // 0x1cbb88: 0xc08235e  jal         func_208D78
    ctx->pc = 0x1CBB88u;
    SET_GPR_U32(ctx, 31, 0x1CBB90u);
    ctx->pc = 0x1CBB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB88u;
            // 0x1cbb8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB90u; }
        if (ctx->pc != 0x1CBB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB90u; }
        if (ctx->pc != 0x1CBB90u) { return; }
    }
    ctx->pc = 0x1CBB90u;
    // 0x1cbb90: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cbb90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cbb94:
    // 0x1cbb94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cbb94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cbb98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cbb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBB9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB9Cu;
            // 0x1cbba0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CBB94u: goto label_1cbb94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CBBA4u;
    // 0x1cbba4: 0x0  nop
    ctx->pc = 0x1cbba4u;
    // NOP
}
