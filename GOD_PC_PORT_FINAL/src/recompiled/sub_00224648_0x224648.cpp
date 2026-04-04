#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224648
// Address: 0x224648 - 0x224700
void sub_00224648_0x224648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224648_0x224648");
#endif

    ctx->pc = 0x224648u;

    // 0x224648: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x224648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22464c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x22464cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x224650: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x224650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x224654: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x224654u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224658: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x224658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x22465c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22465cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x224660: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x224660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x224664: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x224664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x224668: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x224668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x22466c: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x22466cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x224670: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x224670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x224674: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x224674u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x224678: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x224678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x22467c: 0x40f809  jalr        $v0
    ctx->pc = 0x22467Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x224684u);
        ctx->pc = 0x224680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22467Cu;
            // 0x224680: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x224684u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2246D8u: goto label_2246d8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x224684u; }
            if (ctx->pc != 0x224684u) { return; }
        }
        }
    }
    ctx->pc = 0x224684u;
    // 0x224684: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224688: 0x8e446ea8  lw          $a0, 0x6EA8($s2)
    ctx->pc = 0x224688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28328)));
    // 0x22468c: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x22468cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x224690: 0xc08c85c  jal         func_232170
    ctx->pc = 0x224690u;
    SET_GPR_U32(ctx, 31, 0x224698u);
    ctx->pc = 0x224694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224690u;
            // 0x224694: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232170u;
    if (runtime->hasFunction(0x232170u)) {
        auto targetFn = runtime->lookupFunction(0x232170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224698u; }
        if (ctx->pc != 0x224698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232170_0x232170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224698u; }
        if (ctx->pc != 0x224698u) { return; }
    }
    ctx->pc = 0x224698u;
    // 0x224698: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x224698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22469c: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x22469Cu;
    {
        const bool branch_taken_0x22469c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2246A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22469Cu;
            // 0x2246a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22469c) {
            ctx->pc = 0x2246D8u;
            goto label_2246d8;
        }
    }
    ctx->pc = 0x2246A4u;
    // 0x2246a4: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x2246A4u;
    SET_GPR_U32(ctx, 31, 0x2246ACu);
    ctx->pc = 0x2246A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2246A4u;
            // 0x2246a8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2246ACu; }
        if (ctx->pc != 0x2246ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2246ACu; }
        if (ctx->pc != 0x2246ACu) { return; }
    }
    ctx->pc = 0x2246ACu;
    // 0x2246ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2246acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2246b0: 0xc0890a8  jal         func_2242A0
    ctx->pc = 0x2246B0u;
    SET_GPR_U32(ctx, 31, 0x2246B8u);
    ctx->pc = 0x2246B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2246B0u;
            // 0x2246b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2242A0u;
    if (runtime->hasFunction(0x2242A0u)) {
        auto targetFn = runtime->lookupFunction(0x2242A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2246B8u; }
        if (ctx->pc != 0x2246B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002242A0_0x2242a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2246B8u; }
        if (ctx->pc != 0x2246B8u) { return; }
    }
    ctx->pc = 0x2246B8u;
    // 0x2246b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2246b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2246bc: 0x8e446ea8  lw          $a0, 0x6EA8($s2)
    ctx->pc = 0x2246bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28328)));
    // 0x2246c0: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x2246c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x2246c4: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x2246c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2246c8: 0xc08c996  jal         func_232658
    ctx->pc = 0x2246C8u;
    SET_GPR_U32(ctx, 31, 0x2246D0u);
    ctx->pc = 0x2246CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2246C8u;
            // 0x2246cc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232658u;
    if (runtime->hasFunction(0x232658u)) {
        auto targetFn = runtime->lookupFunction(0x232658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2246D0u; }
        if (ctx->pc != 0x2246D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232658_0x232658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2246D0u; }
        if (ctx->pc != 0x2246D0u) { return; }
    }
    ctx->pc = 0x2246D0u;
    // 0x2246d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2246d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2246d4: 0x0  nop
    ctx->pc = 0x2246d4u;
    // NOP
label_2246d8:
    // 0x2246d8: 0xc089124  jal         func_224490
    ctx->pc = 0x2246D8u;
    SET_GPR_U32(ctx, 31, 0x2246E0u);
    ctx->pc = 0x2246DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2246D8u;
            // 0x2246dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224490u;
    if (runtime->hasFunction(0x224490u)) {
        auto targetFn = runtime->lookupFunction(0x224490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2246E0u; }
        if (ctx->pc != 0x2246E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224490_0x224490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2246E0u; }
        if (ctx->pc != 0x2246E0u) { return; }
    }
    ctx->pc = 0x2246E0u;
    // 0x2246e0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2246e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2246e4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2246e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2246e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2246e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2246ec: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2246ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2246f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2246f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2246f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2246F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2246F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2246F4u;
            // 0x2246f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2246D8u: goto label_2246d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2246FCu;
    // 0x2246fc: 0x0  nop
    ctx->pc = 0x2246fcu;
    // NOP
}
