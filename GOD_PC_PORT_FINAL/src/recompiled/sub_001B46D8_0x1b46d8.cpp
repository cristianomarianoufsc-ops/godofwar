#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B46D8
// Address: 0x1b46d8 - 0x1b47e0
void sub_001B46D8_0x1b46d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B46D8_0x1b46d8");
#endif

    ctx->pc = 0x1b46d8u;

    // 0x1b46d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b46d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b46dc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1b46dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1b46e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b46e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b46e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b46e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b46e8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1b46e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1b46ec: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1b46ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b46f0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b46f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b46f4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1b46f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1b46f8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1b46f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1b46fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b46fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b4700: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b4700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b4704: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1b4704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1b4708: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b4708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b470c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b470cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b4710: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1b4710u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1b4714: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1b4714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1b4718: 0x40f809  jalr        $v0
    ctx->pc = 0x1B4718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B4720u);
        ctx->pc = 0x1B471Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4718u;
            // 0x1b471c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B4720u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4740u: goto label_1b4740;
            case 0x1B477Cu: goto label_1b477c;
            case 0x1B478Cu: goto label_1b478c;
            case 0x1B47B8u: goto label_1b47b8;
            case 0x1B47BCu: goto label_1b47bc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B4720u; }
            if (ctx->pc != 0x1B4720u) { return; }
        }
        }
    }
    ctx->pc = 0x1B4720u;
    // 0x1b4720: 0xc06cd0c  jal         func_1B3430
    ctx->pc = 0x1B4720u;
    SET_GPR_U32(ctx, 31, 0x1B4728u);
    ctx->pc = 0x1B4724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4720u;
            // 0x1b4724: 0x8c440088  lw          $a0, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3430u;
    if (runtime->hasFunction(0x1B3430u)) {
        auto targetFn = runtime->lookupFunction(0x1B3430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4728u; }
        if (ctx->pc != 0x1B4728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3430_0x1b3430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4728u; }
        if (ctx->pc != 0x1B4728u) { return; }
    }
    ctx->pc = 0x1B4728u;
    // 0x1b4728: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1B4728u;
    {
        const bool branch_taken_0x1b4728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B472Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4728u;
            // 0x1b472c: 0x24510050  addiu       $s1, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4728) {
            ctx->pc = 0x1B47B8u;
            goto label_1b47b8;
        }
    }
    ctx->pc = 0x1B4730u;
    // 0x1b4730: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1b4730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1b4734: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x1b4734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1b4738: 0x10510014  beq         $v0, $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B4738u;
    {
        const bool branch_taken_0x1b4738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1B473Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4738u;
            // 0x1b473c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4738) {
            ctx->pc = 0x1B478Cu;
            goto label_1b478c;
        }
    }
    ctx->pc = 0x1B4740u;
label_1b4740:
    // 0x1b4740: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x1b4740u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b4744: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b4744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4748: 0xc069548  jal         func_1A5520
    ctx->pc = 0x1B4748u;
    SET_GPR_U32(ctx, 31, 0x1B4750u);
    ctx->pc = 0x1B474Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4748u;
            // 0x1b474c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5520u;
    if (runtime->hasFunction(0x1A5520u)) {
        auto targetFn = runtime->lookupFunction(0x1A5520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4750u; }
        if (ctx->pc != 0x1B4750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a5520_0x1a55b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4750u; }
        if (ctx->pc != 0x1B4750u) { return; }
    }
    ctx->pc = 0x1B4750u;
    // 0x1b4750: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B4750u;
    {
        const bool branch_taken_0x1b4750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4750u;
            // 0x1b4754: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4750) {
            ctx->pc = 0x1B477Cu;
            goto label_1b477c;
        }
    }
    ctx->pc = 0x1B4758u;
    // 0x1b4758: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b4758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b475c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B475Cu;
    {
        const bool branch_taken_0x1b475c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B475Cu;
            // 0x1b4760: 0xae13000c  sw          $s3, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b475c) {
            ctx->pc = 0x1B47B8u;
            goto label_1b47b8;
        }
    }
    ctx->pc = 0x1B4764u;
    // 0x1b4764: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b4764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4768: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x1b4768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1b476c: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x1B476Cu;
    SET_GPR_U32(ctx, 31, 0x1B4774u);
    ctx->pc = 0x1B4770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B476Cu;
            // 0x1b4770: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4774u; }
        if (ctx->pc != 0x1B4774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4774u; }
        if (ctx->pc != 0x1B4774u) { return; }
    }
    ctx->pc = 0x1B4774u;
    // 0x1b4774: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B4774u;
    {
        const bool branch_taken_0x1b4774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4774u;
            // 0x1b4778: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4774) {
            ctx->pc = 0x1B47BCu;
            goto label_1b47bc;
        }
    }
    ctx->pc = 0x1B477Cu;
label_1b477c:
    // 0x1b477c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b477cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4780: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b4780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4784: 0x1443ffee  bne         $v0, $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1B4784u;
    {
        const bool branch_taken_0x1b4784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B4788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4784u;
            // 0x1b4788: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4784) {
            ctx->pc = 0x1B4740u;
            runtime->cooperativeGuestYield();
            goto label_1b4740;
        }
    }
    ctx->pc = 0x1B478Cu;
label_1b478c:
    // 0x1b478c: 0xc069586  jal         func_1A5618
    ctx->pc = 0x1B478Cu;
    SET_GPR_U32(ctx, 31, 0x1B4794u);
    ctx->pc = 0x1B4790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B478Cu;
            // 0x1b4790: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5618u;
    if (runtime->hasFunction(0x1A5618u)) {
        auto targetFn = runtime->lookupFunction(0x1A5618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4794u; }
        if (ctx->pc != 0x1B4794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5618_0x1a5618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4794u; }
        if (ctx->pc != 0x1B4794u) { return; }
    }
    ctx->pc = 0x1B4794u;
    // 0x1b4794: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b4794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4798: 0xc069524  jal         func_1A5490
    ctx->pc = 0x1B4798u;
    SET_GPR_U32(ctx, 31, 0x1B47A0u);
    ctx->pc = 0x1B479Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4798u;
            // 0x1b479c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5490u;
    if (runtime->hasFunction(0x1A5490u)) {
        auto targetFn = runtime->lookupFunction(0x1A5490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B47A0u; }
        if (ctx->pc != 0x1B47A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5490_0x1a5490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B47A0u; }
        if (ctx->pc != 0x1B47A0u) { return; }
    }
    ctx->pc = 0x1B47A0u;
    // 0x1b47a0: 0xac53000c  sw          $s3, 0xC($v0)
    ctx->pc = 0x1b47a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 19));
    // 0x1b47a4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1b47a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b47a8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1b47a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1b47ac: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1b47acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1b47b0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1b47b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1b47b4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b47b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1b47b8:
    // 0x1b47b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b47b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b47bc:
    // 0x1b47bc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1b47bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b47c0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1b47c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b47c4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b47c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b47c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b47c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b47cc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1b47ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b47d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b47d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b47d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B47D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B47D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B47D4u;
            // 0x1b47d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4740u: goto label_1b4740;
            case 0x1B477Cu: goto label_1b477c;
            case 0x1B478Cu: goto label_1b478c;
            case 0x1B47B8u: goto label_1b47b8;
            case 0x1B47BCu: goto label_1b47bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B47DCu;
    // 0x1b47dc: 0x0  nop
    ctx->pc = 0x1b47dcu;
    // NOP
}
