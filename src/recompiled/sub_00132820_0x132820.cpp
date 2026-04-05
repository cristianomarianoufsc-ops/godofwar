#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132820
// Address: 0x132820 - 0x132888
void sub_00132820_0x132820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132820_0x132820");
#endif

    ctx->pc = 0x132820u;

    // 0x132820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x132820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x132824: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x132824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x132828: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x132828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13282c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13282cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132830: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x132830u;
    SET_GPR_U32(ctx, 31, 0x132838u);
    ctx->pc = 0x132834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132830u;
            // 0x132834: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (runtime->hasFunction(0x17A700u)) {
        auto targetFn = runtime->lookupFunction(0x17A700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132838u; }
        if (ctx->pc != 0x132838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A700_0x17a700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132838u; }
        if (ctx->pc != 0x132838u) { return; }
    }
    ctx->pc = 0x132838u;
    // 0x132838: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x132838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13283c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x13283Cu;
    {
        const bool branch_taken_0x13283c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x132840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13283Cu;
            // 0x132840: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13283c) {
            ctx->pc = 0x132870u;
            goto label_132870;
        }
    }
    ctx->pc = 0x132844u;
    // 0x132844: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x132844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x132848: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x132848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x13284c: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x13284cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x132850: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x132850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x132854: 0x40f809  jalr        $v0
    ctx->pc = 0x132854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13285Cu);
        ctx->pc = 0x132858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132854u;
            // 0x132858: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13285Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132870u: goto label_132870;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13285Cu; }
            if (ctx->pc != 0x13285Cu) { return; }
        }
        }
    }
    ctx->pc = 0x13285Cu;
    // 0x13285c: 0x24440188  addiu       $a0, $v0, 0x188
    ctx->pc = 0x13285cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 392));
    // 0x132860: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x132860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132864: 0xc04c7d0  jal         func_131F40
    ctx->pc = 0x132864u;
    SET_GPR_U32(ctx, 31, 0x13286Cu);
    ctx->pc = 0x132868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132864u;
            // 0x132868: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131F40u;
    if (runtime->hasFunction(0x131F40u)) {
        auto targetFn = runtime->lookupFunction(0x131F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13286Cu; }
        if (ctx->pc != 0x13286Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131F40_0x131f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13286Cu; }
        if (ctx->pc != 0x13286Cu) { return; }
    }
    ctx->pc = 0x13286Cu;
    // 0x13286c: 0x0  nop
    ctx->pc = 0x13286cu;
    // NOP
label_132870:
    // 0x132870: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x132870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132874: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x132874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x132878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13287c: 0x3e00008  jr          $ra
    ctx->pc = 0x13287Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13287Cu;
            // 0x132880: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132870u: goto label_132870;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132884u;
    // 0x132884: 0x0  nop
    ctx->pc = 0x132884u;
    // NOP
}
