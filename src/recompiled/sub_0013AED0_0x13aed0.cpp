#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013AED0
// Address: 0x13aed0 - 0x13b048
void sub_0013AED0_0x13aed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013AED0_0x13aed0");
#endif

    ctx->pc = 0x13aed0u;

label_13aed0:
    // 0x13aed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13aed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13aed4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13aed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13aed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13aed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13aedc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13aedcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aee0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13aee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13aee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13aee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13aee8: 0x8c44ed58  lw          $a0, -0x12A8($v0)
    ctx->pc = 0x13aee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x13aeec: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x13aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x13aef0: 0x10440016  beq         $v0, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x13AEF0u;
    {
        const bool branch_taken_0x13aef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13AEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AEF0u;
            // 0x13aef4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aef0) {
            ctx->pc = 0x13AF4Cu;
            goto label_13af4c;
        }
    }
    ctx->pc = 0x13AEF8u;
    // 0x13aef8: 0xde230080  ld          $v1, 0x80($s1)
    ctx->pc = 0x13aef8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x13aefc: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x13aefcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x13af00: 0x10a30012  beq         $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x13AF00u;
    {
        const bool branch_taken_0x13af00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x13AF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AF00u;
            // 0x13af04: 0xae240090  sw          $a0, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13af00) {
            ctx->pc = 0x13AF4Cu;
            goto label_13af4c;
        }
    }
    ctx->pc = 0x13AF08u;
    // 0x13af08: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x13af08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13af0c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x13af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x13af10: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x13af10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x13af14: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x13af14u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x13af18: 0x50450005  beql        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13AF18u;
    {
        const bool branch_taken_0x13af18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x13af18) {
            ctx->pc = 0x13AF1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13AF18u;
            // 0x13af1c: 0xde040040  ld          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13AF30u;
            goto label_13af30;
        }
    }
    ctx->pc = 0x13AF20u;
    // 0x13af20: 0xc04da64  jal         func_136990
    ctx->pc = 0x13AF20u;
    SET_GPR_U32(ctx, 31, 0x13AF28u);
    ctx->pc = 0x13AF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13AF20u;
            // 0x13af24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AF28u; }
        if (ctx->pc != 0x13AF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AF28u; }
        if (ctx->pc != 0x13AF28u) { return; }
    }
    ctx->pc = 0x13AF28u;
    // 0x13af28: 0xde040040  ld          $a0, 0x40($s0)
    ctx->pc = 0x13af28u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x13af2c: 0x0  nop
    ctx->pc = 0x13af2cu;
    // NOP
label_13af30:
    // 0x13af30: 0xde220080  ld          $v0, 0x80($s1)
    ctx->pc = 0x13af30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x13af34: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x13af34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x13af38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13AF38u;
    {
        const bool branch_taken_0x13af38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AF38u;
            // 0x13af3c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13af38) {
            ctx->pc = 0x13AF50u;
            goto label_13af50;
        }
    }
    ctx->pc = 0x13AF40u;
    // 0x13af40: 0xfe240080  sd          $a0, 0x80($s1)
    ctx->pc = 0x13af40u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 4));
    // 0x13af44: 0xc04ea9a  jal         func_13AA68
    ctx->pc = 0x13AF44u;
    SET_GPR_U32(ctx, 31, 0x13AF4Cu);
    ctx->pc = 0x13AF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13AF44u;
            // 0x13af48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13AA68u;
    if (runtime->hasFunction(0x13AA68u)) {
        auto targetFn = runtime->lookupFunction(0x13AA68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AF4Cu; }
        if (ctx->pc != 0x13AF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AA68_0x13aa68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AF4Cu; }
        if (ctx->pc != 0x13AF4Cu) { return; }
    }
    ctx->pc = 0x13AF4Cu;
label_13af4c:
    // 0x13af4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13af4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13af50:
    // 0x13af50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13af50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13af54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13af54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13af58: 0x3e00008  jr          $ra
    ctx->pc = 0x13AF58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AF58u;
            // 0x13af5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13AED0u: goto label_13aed0;
            case 0x13AF30u: goto label_13af30;
            case 0x13AF4Cu: goto label_13af4c;
            case 0x13AF50u: goto label_13af50;
            case 0x13AF8Cu: goto label_13af8c;
            case 0x13AFB4u: goto label_13afb4;
            case 0x13AFF8u: goto label_13aff8;
            case 0x13B018u: goto label_13b018;
            case 0x13B02Cu: goto label_13b02c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13AF60u;
    // 0x13af60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13af60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13af64: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x13af64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x13af68: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x13af68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x13af6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13af6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13af70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13af70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13af74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13af74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13af78: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x13af78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x13af7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13af7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13af80: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x13af80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13af84: 0xc04ebb4  jal         func_13AED0
    ctx->pc = 0x13AF84u;
    SET_GPR_U32(ctx, 31, 0x13AF8Cu);
    ctx->pc = 0x13AF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13AF84u;
            // 0x13af88: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13AED0u;
    runtime->cooperativeGuestYield();
    goto label_13aed0;
    ctx->pc = 0x13AF8Cu;
label_13af8c:
    // 0x13af8c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x13af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13af90: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x13af90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13af94: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x13af94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x13af98: 0x40f809  jalr        $v0
    ctx->pc = 0x13AF98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13AFA0u);
        ctx->pc = 0x13AF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AF98u;
            // 0x13af9c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13AFA0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13AED0u: goto label_13aed0;
            case 0x13AF30u: goto label_13af30;
            case 0x13AF4Cu: goto label_13af4c;
            case 0x13AF50u: goto label_13af50;
            case 0x13AF8Cu: goto label_13af8c;
            case 0x13AFB4u: goto label_13afb4;
            case 0x13AFF8u: goto label_13aff8;
            case 0x13B018u: goto label_13b018;
            case 0x13B02Cu: goto label_13b02c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13AFA0u; }
            if (ctx->pc != 0x13AFA0u) { return; }
        }
        }
    }
    ctx->pc = 0x13AFA0u;
    // 0x13afa0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x13afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13afa4: 0x50430014  beql        $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x13AFA4u;
    {
        const bool branch_taken_0x13afa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13afa4) {
            ctx->pc = 0x13AFA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13AFA4u;
            // 0x13afa8: 0x8e22003c  lw          $v0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13AFF8u;
            goto label_13aff8;
        }
    }
    ctx->pc = 0x13AFACu;
    // 0x13afac: 0xc04ebb4  jal         func_13AED0
    ctx->pc = 0x13AFACu;
    SET_GPR_U32(ctx, 31, 0x13AFB4u);
    ctx->pc = 0x13AFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13AFACu;
            // 0x13afb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13AED0u;
    runtime->cooperativeGuestYield();
    goto label_13aed0;
    ctx->pc = 0x13AFB4u;
label_13afb4:
    // 0x13afb4: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x13afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x13afb8: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x13afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x13afbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13afc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13afc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13afc4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x13afc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x13afc8: 0x2463be70  addiu       $v1, $v1, -0x4190
    ctx->pc = 0x13afc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950512));
    // 0x13afcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13afccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13afd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13afd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13afd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13afd8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13afdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13afdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13afe0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x13afe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13afe4: 0x40f809  jalr        $v0
    ctx->pc = 0x13AFE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13AFECu);
        ctx->pc = 0x13AFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AFE4u;
            // 0x13afe8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13AFECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13AED0u: goto label_13aed0;
            case 0x13AF30u: goto label_13af30;
            case 0x13AF4Cu: goto label_13af4c;
            case 0x13AF50u: goto label_13af50;
            case 0x13AF8Cu: goto label_13af8c;
            case 0x13AFB4u: goto label_13afb4;
            case 0x13AFF8u: goto label_13aff8;
            case 0x13B018u: goto label_13b018;
            case 0x13B02Cu: goto label_13b02c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13AFECu; }
            if (ctx->pc != 0x13AFECu) { return; }
        }
        }
    }
    ctx->pc = 0x13AFECu;
    // 0x13afec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13AFECu;
    {
        const bool branch_taken_0x13afec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AFECu;
            // 0x13aff0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13afec) {
            ctx->pc = 0x13B02Cu;
            goto label_13b02c;
        }
    }
    ctx->pc = 0x13AFF4u;
    // 0x13aff4: 0x0  nop
    ctx->pc = 0x13aff4u;
    // NOP
label_13aff8:
    // 0x13aff8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13AFF8u;
    {
        const bool branch_taken_0x13aff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13AFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AFF8u;
            // 0x13affc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aff8) {
            ctx->pc = 0x13B018u;
            goto label_13b018;
        }
    }
    ctx->pc = 0x13B000u;
    // 0x13b000: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13b000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b004: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x13b004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b008: 0xc04ed4e  jal         func_13B538
    ctx->pc = 0x13B008u;
    SET_GPR_U32(ctx, 31, 0x13B010u);
    ctx->pc = 0x13B00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B008u;
            // 0x13b00c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B538u;
    if (runtime->hasFunction(0x13B538u)) {
        auto targetFn = runtime->lookupFunction(0x13B538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B010u; }
        if (ctx->pc != 0x13B010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B538_0x13b538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B010u; }
        if (ctx->pc != 0x13B010u) { return; }
    }
    ctx->pc = 0x13B010u;
    // 0x13b010: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13B010u;
    {
        const bool branch_taken_0x13b010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B010u;
            // 0x13b014: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b010) {
            ctx->pc = 0x13B02Cu;
            goto label_13b02c;
        }
    }
    ctx->pc = 0x13B018u;
label_13b018:
    // 0x13b018: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13b018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b01c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x13b01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b020: 0xc04ec12  jal         func_13B048
    ctx->pc = 0x13B020u;
    SET_GPR_U32(ctx, 31, 0x13B028u);
    ctx->pc = 0x13B024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B020u;
            // 0x13b024: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B048u;
    if (runtime->hasFunction(0x13B048u)) {
        auto targetFn = runtime->lookupFunction(0x13B048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B028u; }
        if (ctx->pc != 0x13B028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B048_0x13b048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B028u; }
        if (ctx->pc != 0x13B028u) { return; }
    }
    ctx->pc = 0x13B028u;
    // 0x13b028: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x13b028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13b02c:
    // 0x13b02c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x13b02cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b030: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13b030u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b034: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x13b034u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13b038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b03c: 0x3e00008  jr          $ra
    ctx->pc = 0x13B03Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B03Cu;
            // 0x13b040: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13AED0u: goto label_13aed0;
            case 0x13AF30u: goto label_13af30;
            case 0x13AF4Cu: goto label_13af4c;
            case 0x13AF50u: goto label_13af50;
            case 0x13AF8Cu: goto label_13af8c;
            case 0x13AFB4u: goto label_13afb4;
            case 0x13AFF8u: goto label_13aff8;
            case 0x13B018u: goto label_13b018;
            case 0x13B02Cu: goto label_13b02c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13B044u;
    // 0x13b044: 0x0  nop
    ctx->pc = 0x13b044u;
    // NOP
}
