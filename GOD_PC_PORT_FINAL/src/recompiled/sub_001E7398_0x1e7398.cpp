#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E7398
// Address: 0x1e7398 - 0x1e7550
void sub_001E7398_0x1e7398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7398_0x1e7398");
#endif

    ctx->pc = 0x1e7398u;

    // 0x1e7398: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e739c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1e739cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1e73a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e73a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e73a4: 0x2442a528  addiu       $v0, $v0, -0x5AD8
    ctx->pc = 0x1e73a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944040));
    // 0x1e73a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e73a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e73ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e73acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e73b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e73b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e73b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e73b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e73b8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1e73b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1e73bc: 0xc07110c  jal         func_1C4430
    ctx->pc = 0x1E73BCu;
    SET_GPR_U32(ctx, 31, 0x1E73C4u);
    ctx->pc = 0x1E73C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E73BCu;
            // 0x1e73c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4430u;
    if (runtime->hasFunction(0x1C4430u)) {
        auto targetFn = runtime->lookupFunction(0x1C4430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E73C4u; }
        if (ctx->pc != 0x1E73C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4430_0x1c4430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E73C4u; }
        if (ctx->pc != 0x1E73C4u) { return; }
    }
    ctx->pc = 0x1E73C4u;
    // 0x1e73c4: 0xc079cbc  jal         func_1E72F0
    ctx->pc = 0x1E73C4u;
    SET_GPR_U32(ctx, 31, 0x1E73CCu);
    ctx->pc = 0x1E73C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E73C4u;
            // 0x1e73c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E72F0u;
    if (runtime->hasFunction(0x1E72F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E72F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E73CCu; }
        if (ctx->pc != 0x1E73CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E72F0_0x1e72f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E73CCu; }
        if (ctx->pc != 0x1E73CCu) { return; }
    }
    ctx->pc = 0x1E73CCu;
    // 0x1e73cc: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x1e73ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x1e73d0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E73D0u;
    {
        const bool branch_taken_0x1e73d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E73D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E73D0u;
            // 0x1e73d4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e73d0) {
            ctx->pc = 0x1E73ECu;
            goto label_1e73ec;
        }
    }
    ctx->pc = 0x1E73D8u;
    // 0x1e73d8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1e73d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e73dc: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1e73dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e73e0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1e73e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1e73e4: 0x40f809  jalr        $v0
    ctx->pc = 0x1E73E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E73ECu);
        ctx->pc = 0x1E73E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E73E4u;
            // 0x1e73e8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E73ECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E73ECu: goto label_1e73ec;
            case 0x1E740Cu: goto label_1e740c;
            case 0x1E7424u: goto label_1e7424;
            case 0x1E7440u: goto label_1e7440;
            case 0x1E7460u: goto label_1e7460;
            case 0x1E7480u: goto label_1e7480;
            case 0x1E74B0u: goto label_1e74b0;
            case 0x1E7508u: goto label_1e7508;
            case 0x1E7538u: goto label_1e7538;
            case 0x1E7540u: goto label_1e7540;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E73ECu; }
            if (ctx->pc != 0x1E73ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1E73ECu;
label_1e73ec:
    // 0x1e73ec: 0x8e030330  lw          $v1, 0x330($s0)
    ctx->pc = 0x1e73ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x1e73f0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E73F0u;
    {
        const bool branch_taken_0x1e73f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E73F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E73F0u;
            // 0x1e73f4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e73f0) {
            ctx->pc = 0x1E740Cu;
            goto label_1e740c;
        }
    }
    ctx->pc = 0x1E73F8u;
    // 0x1e73f8: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x1e73f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1e73fc: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1e73fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e7400: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1e7400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1e7404: 0x40f809  jalr        $v0
    ctx->pc = 0x1E7404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E740Cu);
        ctx->pc = 0x1E7408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7404u;
            // 0x1e7408: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E740Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E73ECu: goto label_1e73ec;
            case 0x1E740Cu: goto label_1e740c;
            case 0x1E7424u: goto label_1e7424;
            case 0x1E7440u: goto label_1e7440;
            case 0x1E7460u: goto label_1e7460;
            case 0x1E7480u: goto label_1e7480;
            case 0x1E74B0u: goto label_1e74b0;
            case 0x1E7508u: goto label_1e7508;
            case 0x1E7538u: goto label_1e7538;
            case 0x1E7540u: goto label_1e7540;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E740Cu; }
            if (ctx->pc != 0x1E740Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E740Cu;
label_1e740c:
    // 0x1e740c: 0x8e040324  lw          $a0, 0x324($s0)
    ctx->pc = 0x1e740cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1e7410: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7410u;
    {
        const bool branch_taken_0x1e7410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7410) {
            ctx->pc = 0x1E7414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7410u;
            // 0x1e7414: 0x8e030338  lw          $v1, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7424u;
            goto label_1e7424;
        }
    }
    ctx->pc = 0x1E7418u;
    // 0x1e7418: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1E7418u;
    SET_GPR_U32(ctx, 31, 0x1E7420u);
    ctx->pc = 0x1E741Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7418u;
            // 0x1e741c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (runtime->hasFunction(0x2023C0u)) {
        auto targetFn = runtime->lookupFunction(0x2023C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7420u; }
        if (ctx->pc != 0x1E7420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002023C0_0x2023c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7420u; }
        if (ctx->pc != 0x1E7420u) { return; }
    }
    ctx->pc = 0x1E7420u;
    // 0x1e7420: 0x8e030338  lw          $v1, 0x338($s0)
    ctx->pc = 0x1e7420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_1e7424:
    // 0x1e7424: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E7424u;
    {
        const bool branch_taken_0x1e7424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7424u;
            // 0x1e7428: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7424) {
            ctx->pc = 0x1E7440u;
            goto label_1e7440;
        }
    }
    ctx->pc = 0x1E742Cu;
    // 0x1e742c: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1e742cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x1e7430: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1e7430u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e7434: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1e7434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1e7438: 0x40f809  jalr        $v0
    ctx->pc = 0x1E7438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E7440u);
        ctx->pc = 0x1E743Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7438u;
            // 0x1e743c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E7440u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E73ECu: goto label_1e73ec;
            case 0x1E740Cu: goto label_1e740c;
            case 0x1E7424u: goto label_1e7424;
            case 0x1E7440u: goto label_1e7440;
            case 0x1E7460u: goto label_1e7460;
            case 0x1E7480u: goto label_1e7480;
            case 0x1E74B0u: goto label_1e74b0;
            case 0x1E7508u: goto label_1e7508;
            case 0x1E7538u: goto label_1e7538;
            case 0x1E7540u: goto label_1e7540;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E7440u; }
            if (ctx->pc != 0x1E7440u) { return; }
        }
        }
    }
    ctx->pc = 0x1E7440u;
label_1e7440:
    // 0x1e7440: 0x8e030328  lw          $v1, 0x328($s0)
    ctx->pc = 0x1e7440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x1e7444: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E7444u;
    {
        const bool branch_taken_0x1e7444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7444u;
            // 0x1e7448: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7444) {
            ctx->pc = 0x1E7460u;
            goto label_1e7460;
        }
    }
    ctx->pc = 0x1E744Cu;
    // 0x1e744c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e744cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e7450: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1e7450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e7454: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1e7454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1e7458: 0x40f809  jalr        $v0
    ctx->pc = 0x1E7458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E7460u);
        ctx->pc = 0x1E745Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7458u;
            // 0x1e745c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E7460u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E73ECu: goto label_1e73ec;
            case 0x1E740Cu: goto label_1e740c;
            case 0x1E7424u: goto label_1e7424;
            case 0x1E7440u: goto label_1e7440;
            case 0x1E7460u: goto label_1e7460;
            case 0x1E7480u: goto label_1e7480;
            case 0x1E74B0u: goto label_1e74b0;
            case 0x1E7508u: goto label_1e7508;
            case 0x1E7538u: goto label_1e7538;
            case 0x1E7540u: goto label_1e7540;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E7460u; }
            if (ctx->pc != 0x1E7460u) { return; }
        }
        }
    }
    ctx->pc = 0x1E7460u;
label_1e7460:
    // 0x1e7460: 0x8e03033c  lw          $v1, 0x33C($s0)
    ctx->pc = 0x1e7460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 828)));
    // 0x1e7464: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E7464u;
    {
        const bool branch_taken_0x1e7464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7464u;
            // 0x1e7468: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7464) {
            ctx->pc = 0x1E7480u;
            goto label_1e7480;
        }
    }
    ctx->pc = 0x1E746Cu;
    // 0x1e746c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1e746cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1e7470: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1e7470u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e7474: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1e7474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1e7478: 0x40f809  jalr        $v0
    ctx->pc = 0x1E7478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E7480u);
        ctx->pc = 0x1E747Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7478u;
            // 0x1e747c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E7480u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E73ECu: goto label_1e73ec;
            case 0x1E740Cu: goto label_1e740c;
            case 0x1E7424u: goto label_1e7424;
            case 0x1E7440u: goto label_1e7440;
            case 0x1E7460u: goto label_1e7460;
            case 0x1E7480u: goto label_1e7480;
            case 0x1E74B0u: goto label_1e74b0;
            case 0x1E7508u: goto label_1e7508;
            case 0x1E7538u: goto label_1e7538;
            case 0x1E7540u: goto label_1e7540;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E7480u; }
            if (ctx->pc != 0x1E7480u) { return; }
        }
        }
    }
    ctx->pc = 0x1E7480u;
label_1e7480:
    // 0x1e7480: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1e7480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1e7484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7488: 0x2442a670  addiu       $v0, $v0, -0x5990
    ctx->pc = 0x1e7488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944368));
    // 0x1e748c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e748cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7490: 0xc077a14  jal         func_1DE850
    ctx->pc = 0x1E7490u;
    SET_GPR_U32(ctx, 31, 0x1E7498u);
    ctx->pc = 0x1E7494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7490u;
            // 0x1e7494: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE850u;
    if (runtime->hasFunction(0x1DE850u)) {
        auto targetFn = runtime->lookupFunction(0x1DE850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7498u; }
        if (ctx->pc != 0x1E7498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE850_0x1de850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7498u; }
        if (ctx->pc != 0x1E7498u) { return; }
    }
    ctx->pc = 0x1E7498u;
    // 0x1e7498: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1e7498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1e749c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E749Cu;
    {
        const bool branch_taken_0x1e749c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e749c) {
            ctx->pc = 0x1E74A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E749Cu;
            // 0x1e74a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E74B0u;
            goto label_1e74b0;
        }
    }
    ctx->pc = 0x1E74A4u;
    // 0x1e74a4: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E74A4u;
    SET_GPR_U32(ctx, 31, 0x1E74ACu);
    ctx->pc = 0x1E74A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E74A4u;
            // 0x1e74a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (runtime->hasFunction(0x1E6120u)) {
        auto targetFn = runtime->lookupFunction(0x1E6120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E74ACu; }
        if (ctx->pc != 0x1E74ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e6120_0x1e6148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E74ACu; }
        if (ctx->pc != 0x1E74ACu) { return; }
    }
    ctx->pc = 0x1E74ACu;
    // 0x1e74ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e74acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e74b0:
    // 0x1e74b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e74b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e74b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e74b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e74b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E74B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E74BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E74B8u;
            // 0x1e74bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E73ECu: goto label_1e73ec;
            case 0x1E740Cu: goto label_1e740c;
            case 0x1E7424u: goto label_1e7424;
            case 0x1E7440u: goto label_1e7440;
            case 0x1E7460u: goto label_1e7460;
            case 0x1E7480u: goto label_1e7480;
            case 0x1E74B0u: goto label_1e74b0;
            case 0x1E7508u: goto label_1e7508;
            case 0x1E7538u: goto label_1e7538;
            case 0x1E7540u: goto label_1e7540;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E74C0u;
    // 0x1e74c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e74c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e74c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e74c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e74c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e74c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e74cc: 0x84860350  lh          $a2, 0x350($a0)
    ctx->pc = 0x1e74ccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 848)));
    // 0x1e74d0: 0x10c20019  beq         $a2, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1E74D0u;
    {
        const bool branch_taken_0x1e74d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e74d0) {
            ctx->pc = 0x1E7538u;
            goto label_1e7538;
        }
    }
    ctx->pc = 0x1E74D8u;
    // 0x1e74d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e74d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e74dc: 0x8c450104  lw          $a1, 0x104($v0)
    ctx->pc = 0x1e74dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1e74e0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1e74e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1e74e4: 0xdc43bdf8  ld          $v1, -0x4208($v0)
    ctx->pc = 0x1e74e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1e74e8: 0xdca20040  ld          $v0, 0x40($a1)
    ctx->pc = 0x1e74e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1e74ec: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E74ECu;
    {
        const bool branch_taken_0x1e74ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e74ec) {
            ctx->pc = 0x1E74F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E74ECu;
            // 0x1e74f0: 0x8ca2008c  lw          $v0, 0x8C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7508u;
            goto label_1e7508;
        }
    }
    ctx->pc = 0x1E74F4u;
    // 0x1e74f4: 0xc04daf6  jal         func_136BD8
    ctx->pc = 0x1E74F4u;
    SET_GPR_U32(ctx, 31, 0x1E74FCu);
    ctx->pc = 0x1E74F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E74F4u;
            // 0x1e74f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136BD8u;
    if (runtime->hasFunction(0x136BD8u)) {
        auto targetFn = runtime->lookupFunction(0x136BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E74FCu; }
        if (ctx->pc != 0x1E74FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136BD8_0x136bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E74FCu; }
        if (ctx->pc != 0x1E74FCu) { return; }
    }
    ctx->pc = 0x1E74FCu;
    // 0x1e74fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E74FCu;
    {
        const bool branch_taken_0x1e74fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E74FCu;
            // 0x1e7500: 0x7ba20030  lq          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e74fc) {
            ctx->pc = 0x1E7540u;
            goto label_1e7540;
        }
    }
    ctx->pc = 0x1E7504u;
    // 0x1e7504: 0x0  nop
    ctx->pc = 0x1e7504u;
    // NOP
label_1e7508:
    // 0x1e7508: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x1e7508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x1e750c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e750cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7510: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1e7510u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e7514: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1e7514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1e7518: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1e7518u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e751c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1e751cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1e7520: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1e7520u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e7524: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1e7524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1e7528: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1e7528u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1e752c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1e752cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1e7530: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7530u;
    {
        const bool branch_taken_0x1e7530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7530u;
            // 0x1e7534: 0x7ba20030  lq          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7530) {
            ctx->pc = 0x1E7540u;
            goto label_1e7540;
        }
    }
    ctx->pc = 0x1E7538u;
label_1e7538:
    // 0x1e7538: 0xc07838a  jal         func_1E0E28
    ctx->pc = 0x1E7538u;
    SET_GPR_U32(ctx, 31, 0x1E7540u);
    ctx->pc = 0x1E0E28u;
    if (runtime->hasFunction(0x1E0E28u)) {
        auto targetFn = runtime->lookupFunction(0x1E0E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7540u; }
        if (ctx->pc != 0x1E7540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0E28_0x1e0e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7540u; }
        if (ctx->pc != 0x1E7540u) { return; }
    }
    ctx->pc = 0x1E7540u;
label_1e7540:
    // 0x1e7540: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e7540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7544: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7544u;
            // 0x1e7548: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E73ECu: goto label_1e73ec;
            case 0x1E740Cu: goto label_1e740c;
            case 0x1E7424u: goto label_1e7424;
            case 0x1E7440u: goto label_1e7440;
            case 0x1E7460u: goto label_1e7460;
            case 0x1E7480u: goto label_1e7480;
            case 0x1E74B0u: goto label_1e74b0;
            case 0x1E7508u: goto label_1e7508;
            case 0x1E7538u: goto label_1e7538;
            case 0x1E7540u: goto label_1e7540;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E754Cu;
    // 0x1e754c: 0x0  nop
    ctx->pc = 0x1e754cu;
    // NOP
}
