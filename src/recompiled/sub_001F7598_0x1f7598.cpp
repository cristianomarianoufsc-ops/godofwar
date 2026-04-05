#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F7598
// Address: 0x1f7598 - 0x1f7748
void sub_001F7598_0x1f7598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7598_0x1f7598");
#endif

    ctx->pc = 0x1f7598u;

    // 0x1f7598: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f7598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f759c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f759cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1f75a0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f75a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1f75a4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1f75a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f75a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f75a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1f75ac: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1f75acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1f75b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f75b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f75b4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1f75b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1f75b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f75b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f75bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f75bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f75c0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1f75c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f75c4: 0xc0796e4  jal         func_1E5B90
    ctx->pc = 0x1F75C4u;
    SET_GPR_U32(ctx, 31, 0x1F75CCu);
    ctx->pc = 0x1F75C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F75C4u;
            // 0x1f75c8: 0x8e440090  lw          $a0, 0x90($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5B90u;
    if (runtime->hasFunction(0x1E5B90u)) {
        auto targetFn = runtime->lookupFunction(0x1E5B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F75CCu; }
        if (ctx->pc != 0x1F75CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5B90_0x1e5b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F75CCu; }
        if (ctx->pc != 0x1F75CCu) { return; }
    }
    ctx->pc = 0x1F75CCu;
    // 0x1f75cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f75ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f75d0: 0x5620000f  bnel        $s1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1F75D0u;
    {
        const bool branch_taken_0x1f75d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f75d0) {
            ctx->pc = 0x1F75D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F75D0u;
            // 0x1f75d4: 0x96230000  lhu         $v1, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F7610u;
            goto label_1f7610;
        }
    }
    ctx->pc = 0x1F75D8u;
    // 0x1f75d8: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x1f75d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x1f75dc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1f75dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1f75e0: 0x8c46e84c  lw          $a2, -0x17B4($v0)
    ctx->pc = 0x1f75e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1f75e4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1f75e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f75e8: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x1f75e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1f75ec: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1f75ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1f75f0: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1f75f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1f75f4: 0x40f809  jalr        $v0
    ctx->pc = 0x1F75F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F75FCu);
        ctx->pc = 0x1F75F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F75F4u;
            // 0x1f75f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F75FCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F7610u: goto label_1f7610;
            case 0x1F763Cu: goto label_1f763c;
            case 0x1F7658u: goto label_1f7658;
            case 0x1F7668u: goto label_1f7668;
            case 0x1F7688u: goto label_1f7688;
            case 0x1F7698u: goto label_1f7698;
            case 0x1F76BCu: goto label_1f76bc;
            case 0x1F76C0u: goto label_1f76c0;
            case 0x1F76D4u: goto label_1f76d4;
            case 0x1F76E8u: goto label_1f76e8;
            case 0x1F7720u: goto label_1f7720;
            case 0x1F772Cu: goto label_1f772c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F75FCu; }
            if (ctx->pc != 0x1F75FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1F75FCu;
    // 0x1f75fc: 0x8c510088  lw          $s1, 0x88($v0)
    ctx->pc = 0x1f75fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1f7600: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1F7600u;
    {
        const bool branch_taken_0x1f7600 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7600) {
            ctx->pc = 0x1F763Cu;
            goto label_1f763c;
        }
    }
    ctx->pc = 0x1F7608u;
    // 0x1f7608: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1f7608u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f760c: 0x0  nop
    ctx->pc = 0x1f760cu;
    // NOP
label_1f7610:
    // 0x1f7610: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1f7610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1f7614: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1f7614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1f7618: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f7618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f761c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f761cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f7620: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f7620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7624: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f7624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f7628: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f7628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f762c: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1f762cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1f7630: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1f7630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1f7634: 0x40f809  jalr        $v0
    ctx->pc = 0x1F7634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F763Cu);
        ctx->pc = 0x1F7638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7634u;
            // 0x1f7638: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F763Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F7610u: goto label_1f7610;
            case 0x1F763Cu: goto label_1f763c;
            case 0x1F7658u: goto label_1f7658;
            case 0x1F7668u: goto label_1f7668;
            case 0x1F7688u: goto label_1f7688;
            case 0x1F7698u: goto label_1f7698;
            case 0x1F76BCu: goto label_1f76bc;
            case 0x1F76C0u: goto label_1f76c0;
            case 0x1F76D4u: goto label_1f76d4;
            case 0x1F76E8u: goto label_1f76e8;
            case 0x1F7720u: goto label_1f7720;
            case 0x1F772Cu: goto label_1f772c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F763Cu; }
            if (ctx->pc != 0x1F763Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F763Cu;
label_1f763c:
    // 0x1f763c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F763Cu;
    {
        const bool branch_taken_0x1f763c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f763c) {
            ctx->pc = 0x1F7658u;
            goto label_1f7658;
        }
    }
    ctx->pc = 0x1F7644u;
    // 0x1f7644: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1F7644u;
    SET_GPR_U32(ctx, 31, 0x1F764Cu);
    ctx->pc = 0x1F7648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7644u;
            // 0x1f7648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F764Cu; }
        if (ctx->pc != 0x1F764Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F764Cu; }
        if (ctx->pc != 0x1F764Cu) { return; }
    }
    ctx->pc = 0x1F764Cu;
    // 0x1f764c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F764Cu;
    {
        const bool branch_taken_0x1f764c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F764Cu;
            // 0x1f7650: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f764c) {
            ctx->pc = 0x1F7668u;
            goto label_1f7668;
        }
    }
    ctx->pc = 0x1F7654u;
    // 0x1f7654: 0x0  nop
    ctx->pc = 0x1f7654u;
    // NOP
label_1f7658:
    // 0x1f7658: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x1F7658u;
    SET_GPR_U32(ctx, 31, 0x1F7660u);
    ctx->pc = 0x1F765Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7658u;
            // 0x1f765c: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (runtime->hasFunction(0x17A700u)) {
        auto targetFn = runtime->lookupFunction(0x17A700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7660u; }
        if (ctx->pc != 0x1F7660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A700_0x17a700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7660u; }
        if (ctx->pc != 0x1F7660u) { return; }
    }
    ctx->pc = 0x1F7660u;
    // 0x1f7660: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f7660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7664: 0x0  nop
    ctx->pc = 0x1f7664u;
    // NOP
label_1f7668:
    // 0x1f7668: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7668u;
    {
        const bool branch_taken_0x1f7668 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F766Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7668u;
            // 0x1f766c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7668) {
            ctx->pc = 0x1F7688u;
            goto label_1f7688;
        }
    }
    ctx->pc = 0x1F7670u;
    // 0x1f7670: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x1f7670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x1f7674: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f7674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f7678: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1f7678u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1f767c: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1f767cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1f7680: 0x40f809  jalr        $v0
    ctx->pc = 0x1F7680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F7688u);
        ctx->pc = 0x1F7684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7680u;
            // 0x1f7684: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F7688u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F7610u: goto label_1f7610;
            case 0x1F763Cu: goto label_1f763c;
            case 0x1F7658u: goto label_1f7658;
            case 0x1F7668u: goto label_1f7668;
            case 0x1F7688u: goto label_1f7688;
            case 0x1F7698u: goto label_1f7698;
            case 0x1F76BCu: goto label_1f76bc;
            case 0x1F76C0u: goto label_1f76c0;
            case 0x1F76D4u: goto label_1f76d4;
            case 0x1F76E8u: goto label_1f76e8;
            case 0x1F7720u: goto label_1f7720;
            case 0x1F772Cu: goto label_1f772c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F7688u; }
            if (ctx->pc != 0x1F7688u) { return; }
        }
        }
    }
    ctx->pc = 0x1F7688u;
label_1f7688:
    // 0x1f7688: 0x52000028  beql        $s0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x1F7688u;
    {
        const bool branch_taken_0x1f7688 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7688) {
            ctx->pc = 0x1F768Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7688u;
            // 0x1f768c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F772Cu;
            goto label_1f772c;
        }
    }
    ctx->pc = 0x1F7690u;
    // 0x1f7690: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1F7690u;
    {
        const bool branch_taken_0x1f7690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7690u;
            // 0x1f7694: 0x8e420090  lw          $v0, 0x90($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7690) {
            ctx->pc = 0x1F76E8u;
            goto label_1f76e8;
        }
    }
    ctx->pc = 0x1F7698u;
label_1f7698:
    // 0x1f7698: 0x82620020  lb          $v0, 0x20($s3)
    ctx->pc = 0x1f7698u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1f769c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F769Cu;
    {
        const bool branch_taken_0x1f769c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f769c) {
            ctx->pc = 0x1F76A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F769Cu;
            // 0x1f76a0: 0xae40009c  sw          $zero, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F76BCu;
            goto label_1f76bc;
        }
    }
    ctx->pc = 0x1F76A4u;
    // 0x1f76a4: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x1f76a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x1f76a8: 0x8c5101a4  lw          $s1, 0x1A4($v0)
    ctx->pc = 0x1f76a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 420)));
    // 0x1f76ac: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F76ACu;
    {
        const bool branch_taken_0x1f76ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f76ac) {
            ctx->pc = 0x1F76B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F76ACu;
            // 0x1f76b0: 0xae53009c  sw          $s3, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F76BCu;
            goto label_1f76bc;
        }
    }
    ctx->pc = 0x1F76B4u;
    // 0x1f76b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F76B4u;
    {
        const bool branch_taken_0x1f76b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F76B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F76B4u;
            // 0x1f76b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76b4) {
            ctx->pc = 0x1F76C0u;
            goto label_1f76c0;
        }
    }
    ctx->pc = 0x1F76BCu;
label_1f76bc:
    // 0x1f76bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f76bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f76c0:
    // 0x1f76c0: 0x12820004  beq         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F76C0u;
    {
        const bool branch_taken_0x1f76c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F76C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F76C0u;
            // 0x1f76c4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76c0) {
            ctx->pc = 0x1F76D4u;
            goto label_1f76d4;
        }
    }
    ctx->pc = 0x1F76C8u;
    // 0x1f76c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f76c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f76cc: 0xc05c472  jal         func_1711C8
    ctx->pc = 0x1F76CCu;
    SET_GPR_U32(ctx, 31, 0x1F76D4u);
    ctx->pc = 0x1F76D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F76CCu;
            // 0x1f76d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1711C8u;
    if (runtime->hasFunction(0x1711C8u)) {
        auto targetFn = runtime->lookupFunction(0x1711C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F76D4u; }
        if (ctx->pc != 0x1F76D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1711c8_0x1711d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F76D4u; }
        if (ctx->pc != 0x1F76D4u) { return; }
    }
    ctx->pc = 0x1F76D4u;
label_1f76d4:
    // 0x1f76d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f76d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f76d8: 0xc05c294  jal         func_170A50
    ctx->pc = 0x1F76D8u;
    SET_GPR_U32(ctx, 31, 0x1F76E0u);
    ctx->pc = 0x1F76DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F76D8u;
            // 0x1f76dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F76E0u; }
        if (ctx->pc != 0x1F76E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F76E0u; }
        if (ctx->pc != 0x1F76E0u) { return; }
    }
    ctx->pc = 0x1F76E0u;
    // 0x1f76e0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F76E0u;
    {
        const bool branch_taken_0x1f76e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F76E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F76E0u;
            // 0x1f76e4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76e0) {
            ctx->pc = 0x1F772Cu;
            goto label_1f772c;
        }
    }
    ctx->pc = 0x1F76E8u;
label_1f76e8:
    // 0x1f76e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f76e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f76ec: 0xc05cd4a  jal         func_173528
    ctx->pc = 0x1F76ECu;
    SET_GPR_U32(ctx, 31, 0x1F76F4u);
    ctx->pc = 0x1F76F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F76ECu;
            // 0x1f76f0: 0x8c5101a0  lw          $s1, 0x1A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173528u;
    if (runtime->hasFunction(0x173528u)) {
        auto targetFn = runtime->lookupFunction(0x173528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F76F4u; }
        if (ctx->pc != 0x1F76F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173528_0x173528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F76F4u; }
        if (ctx->pc != 0x1F76F4u) { return; }
    }
    ctx->pc = 0x1F76F4u;
    // 0x1f76f4: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1F76F4u;
    {
        const bool branch_taken_0x1f76f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F76F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F76F4u;
            // 0x1f76f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76f4) {
            ctx->pc = 0x1F76C0u;
            runtime->cooperativeGuestYield();
            goto label_1f76c0;
        }
    }
    ctx->pc = 0x1F76FCu;
    // 0x1f76fc: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x1f76fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x1f7700: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7700u;
    {
        const bool branch_taken_0x1f7700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7700) {
            ctx->pc = 0x1F7720u;
            goto label_1f7720;
        }
    }
    ctx->pc = 0x1F7708u;
    // 0x1f7708: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7708u;
    {
        const bool branch_taken_0x1f7708 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f7708) {
            ctx->pc = 0x1F770Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7708u;
            // 0x1f770c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F772Cu;
            goto label_1f772c;
        }
    }
    ctx->pc = 0x1F7710u;
    // 0x1f7710: 0xc07dd50  jal         func_1F7540
    ctx->pc = 0x1F7710u;
    SET_GPR_U32(ctx, 31, 0x1F7718u);
    ctx->pc = 0x1F7714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7710u;
            // 0x1f7714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7540u;
    if (runtime->hasFunction(0x1F7540u)) {
        auto targetFn = runtime->lookupFunction(0x1F7540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7718u; }
        if (ctx->pc != 0x1F7718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F7540_0x1f7540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7718u; }
        if (ctx->pc != 0x1F7718u) { return; }
    }
    ctx->pc = 0x1F7718u;
    // 0x1f7718: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1F7718u;
    {
        const bool branch_taken_0x1f7718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F771Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7718u;
            // 0x1f771c: 0xae500098  sw          $s0, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7718) {
            ctx->pc = 0x1F7698u;
            runtime->cooperativeGuestYield();
            goto label_1f7698;
        }
    }
    ctx->pc = 0x1F7720u;
label_1f7720:
    // 0x1f7720: 0x5600ffdd  bnel        $s0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1F7720u;
    {
        const bool branch_taken_0x1f7720 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7720) {
            ctx->pc = 0x1F7724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7720u;
            // 0x1f7724: 0xae500098  sw          $s0, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F7698u;
            runtime->cooperativeGuestYield();
            goto label_1f7698;
        }
    }
    ctx->pc = 0x1F7728u;
    // 0x1f7728: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f7728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f772c:
    // 0x1f772c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f772cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f7730: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f7730u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7734: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1f7734u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7738: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1f7738u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f773c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f773cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7740: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7740u;
            // 0x1f7744: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F7610u: goto label_1f7610;
            case 0x1F763Cu: goto label_1f763c;
            case 0x1F7658u: goto label_1f7658;
            case 0x1F7668u: goto label_1f7668;
            case 0x1F7688u: goto label_1f7688;
            case 0x1F7698u: goto label_1f7698;
            case 0x1F76BCu: goto label_1f76bc;
            case 0x1F76C0u: goto label_1f76c0;
            case 0x1F76D4u: goto label_1f76d4;
            case 0x1F76E8u: goto label_1f76e8;
            case 0x1F7720u: goto label_1f7720;
            case 0x1F772Cu: goto label_1f772c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F7748u;
}
