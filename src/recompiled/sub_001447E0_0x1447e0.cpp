#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001447E0
// Address: 0x1447e0 - 0x1448a0
void sub_001447E0_0x1447e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001447E0_0x1447e0");
#endif

    ctx->pc = 0x1447e0u;

    // 0x1447e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1447e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1447e4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1447e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1447e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1447e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1447ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1447ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1447f0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1447f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1447f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1447f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1447f8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1447f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1447fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1447fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144800: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x144800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x144804: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x144804u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x144808: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x144808u;
    {
        const bool branch_taken_0x144808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14480Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144808u;
            // 0x14480c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144808) {
            ctx->pc = 0x144880u;
            goto label_144880;
        }
    }
    ctx->pc = 0x144810u;
    // 0x144810: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x144810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x144814: 0x0  nop
    ctx->pc = 0x144814u;
    // NOP
label_144818:
    // 0x144818: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x144818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x14481c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14481cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x144820: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x144820u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144824: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x144824u;
    {
        const bool branch_taken_0x144824 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x144824) {
            ctx->pc = 0x144828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144824u;
            // 0x144828: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14486Cu;
            goto label_14486c;
        }
    }
    ctx->pc = 0x14482Cu;
    // 0x14482c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x14482cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x144830: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x144830u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x144834: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x144834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x144838: 0x40f809  jalr        $v0
    ctx->pc = 0x144838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x144840u);
        ctx->pc = 0x14483Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144838u;
            // 0x14483c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x144840u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144818u: goto label_144818;
            case 0x14486Cu: goto label_14486c;
            case 0x144880u: goto label_144880;
            case 0x144884u: goto label_144884;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x144840u; }
            if (ctx->pc != 0x144840u) { return; }
        }
        }
    }
    ctx->pc = 0x144840u;
    // 0x144840: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x144840u;
    {
        const bool branch_taken_0x144840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144840) {
            ctx->pc = 0x144844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144840u;
            // 0x144844: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14486Cu;
            goto label_14486c;
        }
    }
    ctx->pc = 0x144848u;
    // 0x144848: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x144848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14484c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14484Cu;
    {
        const bool branch_taken_0x14484c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14484c) {
            ctx->pc = 0x144850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14484Cu;
            // 0x144850: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14486Cu;
            goto label_14486c;
        }
    }
    ctx->pc = 0x144854u;
    // 0x144854: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x144854u;
    SET_GPR_U32(ctx, 31, 0x14485Cu);
    ctx->pc = 0x144858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144854u;
            // 0x144858: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14485Cu; }
        if (ctx->pc != 0x14485Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14485Cu; }
        if (ctx->pc != 0x14485Cu) { return; }
    }
    ctx->pc = 0x14485Cu;
    // 0x14485c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14485Cu;
    {
        const bool branch_taken_0x14485c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14485c) {
            ctx->pc = 0x144860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14485Cu;
            // 0x144860: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14486Cu;
            goto label_14486c;
        }
    }
    ctx->pc = 0x144864u;
    // 0x144864: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x144864u;
    {
        const bool branch_taken_0x144864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144864u;
            // 0x144868: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144864) {
            ctx->pc = 0x144884u;
            goto label_144884;
        }
    }
    ctx->pc = 0x14486Cu;
label_14486c:
    // 0x14486c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14486cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x144870: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x144870u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x144874: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x144874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x144878: 0x5440ffe7  bnel        $v0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x144878u;
    {
        const bool branch_taken_0x144878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x144878) {
            ctx->pc = 0x14487Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144878u;
            // 0x14487c: 0x8e430028  lw          $v1, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x144818u;
            runtime->cooperativeGuestYield();
            goto label_144818;
        }
    }
    ctx->pc = 0x144880u;
label_144880:
    // 0x144880: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x144880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144884:
    // 0x144884: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x144884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144888: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x144888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14488c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14488cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144890: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x144890u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144898: 0x3e00008  jr          $ra
    ctx->pc = 0x144898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14489Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144898u;
            // 0x14489c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144818u: goto label_144818;
            case 0x14486Cu: goto label_14486c;
            case 0x144880u: goto label_144880;
            case 0x144884u: goto label_144884;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1448A0u;
}
