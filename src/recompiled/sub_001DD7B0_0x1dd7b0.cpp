#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD7B0
// Address: 0x1dd7b0 - 0x1dd918
void sub_001DD7B0_0x1dd7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD7B0_0x1dd7b0");
#endif

    ctx->pc = 0x1dd7b0u;

    // 0x1dd7b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1dd7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1dd7b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1dd7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1dd7b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1dd7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1dd7bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dd7bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dd7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dd7c4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1dd7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1dd7c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd7cc: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1dd7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1dd7d0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD7D0u;
    {
        const bool branch_taken_0x1dd7d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd7d0) {
            ctx->pc = 0x1DD7E4u;
            goto label_1dd7e4;
        }
    }
    ctx->pc = 0x1DD7D8u;
    // 0x1dd7d8: 0xc0777f0  jal         func_1DDFC0
    ctx->pc = 0x1DD7D8u;
    SET_GPR_U32(ctx, 31, 0x1DD7E0u);
    ctx->pc = 0x1DD7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD7D8u;
            // 0x1dd7dc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DDFC0u;
    if (runtime->hasFunction(0x1DDFC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DDFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD7E0u; }
        if (ctx->pc != 0x1DD7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DDFC0_0x1ddfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD7E0u; }
        if (ctx->pc != 0x1DD7E0u) { return; }
    }
    ctx->pc = 0x1DD7E0u;
    // 0x1dd7e0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1dd7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1dd7e4:
    // 0x1dd7e4: 0xc06b74c  jal         func_1ADD30
    ctx->pc = 0x1DD7E4u;
    SET_GPR_U32(ctx, 31, 0x1DD7ECu);
    ctx->pc = 0x1DD7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD7E4u;
            // 0x1dd7e8: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ADD30u;
    if (runtime->hasFunction(0x1ADD30u)) {
        auto targetFn = runtime->lookupFunction(0x1ADD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD7ECu; }
        if (ctx->pc != 0x1DD7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADD30_0x1add30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD7ECu; }
        if (ctx->pc != 0x1DD7ECu) { return; }
    }
    ctx->pc = 0x1DD7ECu;
    // 0x1dd7ec: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x1DD7ECu;
    {
        const bool branch_taken_0x1dd7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd7ec) {
            ctx->pc = 0x1DD7F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD7ECu;
            // 0x1dd7f0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD900u;
            goto label_1dd900;
        }
    }
    ctx->pc = 0x1DD7F4u;
    // 0x1dd7f4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1dd7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1dd7f8: 0x84430018  lh          $v1, 0x18($v0)
    ctx->pc = 0x1dd7f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1dd7fc: 0x1860003b  blez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1DD7FCu;
    {
        const bool branch_taken_0x1dd7fc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1DD800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD7FCu;
            // 0x1dd800: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7fc) {
            ctx->pc = 0x1DD8ECu;
            goto label_1dd8ec;
        }
    }
    ctx->pc = 0x1DD804u;
    // 0x1dd804: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x1DD804u;
    {
        const bool branch_taken_0x1dd804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd804) {
            ctx->pc = 0x1DD808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD804u;
            // 0x1dd808: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD8C8u;
            goto label_1dd8c8;
        }
    }
    ctx->pc = 0x1DD80Cu;
    // 0x1dd80c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dd80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dd810: 0x14620037  bne         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1DD810u;
    {
        const bool branch_taken_0x1dd810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DD814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD810u;
            // 0x1dd814: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd810) {
            ctx->pc = 0x1DD8F0u;
            goto label_1dd8f0;
        }
    }
    ctx->pc = 0x1DD818u;
    // 0x1dd818: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1dd818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1dd81c: 0x8c42ec68  lw          $v0, -0x1398($v0)
    ctx->pc = 0x1dd81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962280)));
    // 0x1dd820: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd824: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd828: 0x8c5200c0  lw          $s2, 0xC0($v0)
    ctx->pc = 0x1dd828u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1dd82c: 0x52400026  beql        $s2, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x1DD82Cu;
    {
        const bool branch_taken_0x1dd82c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd82c) {
            ctx->pc = 0x1DD830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD82Cu;
            // 0x1dd830: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD8C8u;
            goto label_1dd8c8;
        }
    }
    ctx->pc = 0x1DD834u;
    // 0x1dd834: 0x2642ffec  addiu       $v0, $s2, -0x14
    ctx->pc = 0x1dd834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967276));
label_1dd838:
    // 0x1dd838: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dd838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd83c: 0x52880b  movn        $s1, $v0, $s2
    ctx->pc = 0x1dd83cu;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x1dd840: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x1dd840u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1dd844: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x1dd844u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1dd848: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1dd848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1dd84c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DD84Cu;
    {
        const bool branch_taken_0x1dd84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD84Cu;
            // 0x1dd850: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd84c) {
            ctx->pc = 0x1DD888u;
            goto label_1dd888;
        }
    }
    ctx->pc = 0x1DD854u;
    // 0x1dd854: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1dd854u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dd858: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1dd858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1dd85c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1dd85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1dd860: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dd864: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dd864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dd868: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dd868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd86c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1dd86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd870: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1dd870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1dd874: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1dd874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dd878: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1dd878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1dd87c: 0x40f809  jalr        $v0
    ctx->pc = 0x1DD87Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD884u);
        ctx->pc = 0x1DD880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD87Cu;
            // 0x1dd880: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DD884u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DD7E4u: goto label_1dd7e4;
            case 0x1DD838u: goto label_1dd838;
            case 0x1DD888u: goto label_1dd888;
            case 0x1DD8C8u: goto label_1dd8c8;
            case 0x1DD8ECu: goto label_1dd8ec;
            case 0x1DD8F0u: goto label_1dd8f0;
            case 0x1DD900u: goto label_1dd900;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DD884u; }
            if (ctx->pc != 0x1DD884u) { return; }
        }
        }
    }
    ctx->pc = 0x1DD884u;
    // 0x1dd884: 0x0  nop
    ctx->pc = 0x1dd884u;
    // NOP
label_1dd888:
    // 0x1dd888: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1dd888u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dd88c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1dd88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1dd890: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1dd890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1dd894: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dd898: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dd898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dd89c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dd89cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd8a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1dd8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd8a4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1dd8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1dd8a8: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1dd8a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1dd8ac: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1dd8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1dd8b0: 0x40f809  jalr        $v0
    ctx->pc = 0x1DD8B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD8B8u);
        ctx->pc = 0x1DD8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD8B0u;
            // 0x1dd8b4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DD8B8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DD7E4u: goto label_1dd7e4;
            case 0x1DD838u: goto label_1dd838;
            case 0x1DD888u: goto label_1dd888;
            case 0x1DD8C8u: goto label_1dd8c8;
            case 0x1DD8ECu: goto label_1dd8ec;
            case 0x1DD8F0u: goto label_1dd8f0;
            case 0x1DD900u: goto label_1dd900;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DD8B8u; }
            if (ctx->pc != 0x1DD8B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1DD8B8u;
    // 0x1dd8b8: 0x1660ffdf  bnez        $s3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1DD8B8u;
    {
        const bool branch_taken_0x1dd8b8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD8B8u;
            // 0x1dd8bc: 0x2642ffec  addiu       $v0, $s2, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd8b8) {
            ctx->pc = 0x1DD838u;
            runtime->cooperativeGuestYield();
            goto label_1dd838;
        }
    }
    ctx->pc = 0x1DD8C0u;
    // 0x1dd8c0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1dd8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1dd8c4: 0x0  nop
    ctx->pc = 0x1dd8c4u;
    // NOP
label_1dd8c8:
    // 0x1dd8c8: 0xc07775a  jal         func_1DDD68
    ctx->pc = 0x1DD8C8u;
    SET_GPR_U32(ctx, 31, 0x1DD8D0u);
    ctx->pc = 0x1DD8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD8C8u;
            // 0x1dd8cc: 0xc60c0010  lwc1        $f12, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DDD68u;
    if (runtime->hasFunction(0x1DDD68u)) {
        auto targetFn = runtime->lookupFunction(0x1DDD68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD8D0u; }
        if (ctx->pc != 0x1DD8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1ddd68_0x1dddd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD8D0u; }
        if (ctx->pc != 0x1DD8D0u) { return; }
    }
    ctx->pc = 0x1DD8D0u;
    // 0x1dd8d0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1dd8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1dd8d4: 0xc077776  jal         func_1DDDD8
    ctx->pc = 0x1DD8D4u;
    SET_GPR_U32(ctx, 31, 0x1DD8DCu);
    ctx->pc = 0x1DD8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD8D4u;
            // 0x1dd8d8: 0x7a050000  lq          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DDDD8u;
    if (runtime->hasFunction(0x1DDDD8u)) {
        auto targetFn = runtime->lookupFunction(0x1DDDD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD8DCu; }
        if (ctx->pc != 0x1DD8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1dddd8_0x1dde68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD8DCu; }
        if (ctx->pc != 0x1DD8DCu) { return; }
    }
    ctx->pc = 0x1DD8DCu;
    // 0x1dd8dc: 0xc04c9da  jal         func_132768
    ctx->pc = 0x1DD8DCu;
    SET_GPR_U32(ctx, 31, 0x1DD8E4u);
    ctx->pc = 0x1DD8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD8DCu;
            // 0x1dd8e0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD8E4u; }
        if (ctx->pc != 0x1DD8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD8E4u; }
        if (ctx->pc != 0x1DD8E4u) { return; }
    }
    ctx->pc = 0x1DD8E4u;
    // 0x1dd8e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD8E4u;
    {
        const bool branch_taken_0x1dd8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD8E4u;
            // 0x1dd8e8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd8e4) {
            ctx->pc = 0x1DD900u;
            goto label_1dd900;
        }
    }
    ctx->pc = 0x1DD8ECu;
label_1dd8ec:
    // 0x1dd8ec: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1dd8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1dd8f0:
    // 0x1dd8f0: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x1dd8f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1dd8f4: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x1dd8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x1dd8f8: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x1dd8f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1dd8fc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1dd8fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dd900:
    // 0x1dd900: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1dd900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd904: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dd904u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd908: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1dd908u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd90c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd910: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD910u;
            // 0x1dd914: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DD7E4u: goto label_1dd7e4;
            case 0x1DD838u: goto label_1dd838;
            case 0x1DD888u: goto label_1dd888;
            case 0x1DD8C8u: goto label_1dd8c8;
            case 0x1DD8ECu: goto label_1dd8ec;
            case 0x1DD8F0u: goto label_1dd8f0;
            case 0x1DD900u: goto label_1dd900;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DD918u;
}
