#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022E800
// Address: 0x22e800 - 0x22e908
void sub_0022E800_0x22e800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E800_0x22e800");
#endif

    ctx->pc = 0x22e800u;

    // 0x22e800: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22e800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22e804: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x22e804u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e808: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x22e808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x22e80c: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x22e80cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x22e810: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x22e810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x22e814: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22e814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x22e818: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22e818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e81c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x22e81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x22e820: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22e820u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e824: 0x8e821280  lw          $v0, 0x1280($s4)
    ctx->pc = 0x22e824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4736)));
    // 0x22e828: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x22e828u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e82c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x22e82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x22e830: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x22E830u;
    {
        const bool branch_taken_0x22e830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E830u;
            // 0x22e834: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e830) {
            ctx->pc = 0x22E898u;
            goto label_22e898;
        }
    }
    ctx->pc = 0x22E838u;
    // 0x22e838: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22e838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22e83c: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x22e83cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
    // 0x22e840: 0x8c461298  lw          $a2, 0x1298($v0)
    ctx->pc = 0x22e840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x22e844: 0x2610c150  addiu       $s0, $s0, -0x3EB0
    ctx->pc = 0x22e844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951248));
    // 0x22e848: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x22e848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x22e84c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x22e84cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e850: 0x24a583d0  addiu       $a1, $a1, -0x7C30
    ctx->pc = 0x22e850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935504));
    // 0x22e854: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x22e854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x22e858: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x22E858u;
    SET_GPR_U32(ctx, 31, 0x22E860u);
    ctx->pc = 0x22E85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E858u;
            // 0x22e85c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E860u; }
        if (ctx->pc != 0x22E860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E860u; }
        if (ctx->pc != 0x22E860u) { return; }
    }
    ctx->pc = 0x22E860u;
    // 0x22e860: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22e860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22e864: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x22e864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x22e868: 0x24421278  addiu       $v0, $v0, 0x1278
    ctx->pc = 0x22e868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4728));
    // 0x22e86c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22e86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e870: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22e870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22e874: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22e874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e878: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22e878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e87c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x22e87cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e880: 0xc09f1a8  jal         func_27C6A0
    ctx->pc = 0x22E880u;
    SET_GPR_U32(ctx, 31, 0x22E888u);
    ctx->pc = 0x22E884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E880u;
            // 0x22e884: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27C6A0u;
    if (runtime->hasFunction(0x27C6A0u)) {
        auto targetFn = runtime->lookupFunction(0x27C6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E888u; }
        if (ctx->pc != 0x22E888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027C6A0_0x27c6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E888u; }
        if (ctx->pc != 0x22E888u) { return; }
    }
    ctx->pc = 0x22E888u;
    // 0x22e888: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x22e888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x22e88c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x22E88Cu;
    {
        const bool branch_taken_0x22e88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E88Cu;
            // 0x22e890: 0xae821280  sw          $v0, 0x1280($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e88c) {
            ctx->pc = 0x22E8E0u;
            goto label_22e8e0;
        }
    }
    ctx->pc = 0x22E894u;
    // 0x22e894: 0x0  nop
    ctx->pc = 0x22e894u;
    // NOP
label_22e898:
    // 0x22e898: 0xc08b826  jal         func_22E098
    ctx->pc = 0x22E898u;
    SET_GPR_U32(ctx, 31, 0x22E8A0u);
    ctx->pc = 0x22E89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E898u;
            // 0x22e89c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E098u;
    if (runtime->hasFunction(0x22E098u)) {
        auto targetFn = runtime->lookupFunction(0x22E098u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E8A0u; }
        if (ctx->pc != 0x22E8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E098_0x22e098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E8A0u; }
        if (ctx->pc != 0x22E8A0u) { return; }
    }
    ctx->pc = 0x22E8A0u;
    // 0x22e8a0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22E8A0u;
    {
        const bool branch_taken_0x22e8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E8A0u;
            // 0x22e8a4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e8a0) {
            ctx->pc = 0x22E8E0u;
            goto label_22e8e0;
        }
    }
    ctx->pc = 0x22E8A8u;
    // 0x22e8a8: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x22e8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x22e8ac: 0x8c451284  lw          $a1, 0x1284($v0)
    ctx->pc = 0x22e8acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4740)));
    // 0x22e8b0: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22E8B0u;
    {
        const bool branch_taken_0x22e8b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x22E8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E8B0u;
            // 0x22e8b4: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e8b0) {
            ctx->pc = 0x22E8C8u;
            goto label_22e8c8;
        }
    }
    ctx->pc = 0x22E8B8u;
    // 0x22e8b8: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x22e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x22e8bc: 0x54a20009  bnel        $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22E8BCu;
    {
        const bool branch_taken_0x22e8bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x22e8bc) {
            ctx->pc = 0x22E8C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E8BCu;
            // 0x22e8c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E8E4u;
            goto label_22e8e4;
        }
    }
    ctx->pc = 0x22E8C4u;
    // 0x22e8c4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_22e8c8:
    // 0x22e8c8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x22e8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x22e8cc: 0x2442bc68  addiu       $v0, $v0, -0x4398
    ctx->pc = 0x22e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949992));
    // 0x22e8d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22e8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22e8d4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x22e8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x22e8d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22E8D8u;
    {
        const bool branch_taken_0x22e8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E8D8u;
            // 0x22e8dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e8d8) {
            ctx->pc = 0x22E8E4u;
            goto label_22e8e4;
        }
    }
    ctx->pc = 0x22E8E0u;
label_22e8e0:
    // 0x22e8e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22e8e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e8e4:
    // 0x22e8e4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x22e8e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22e8e8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x22e8e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22e8ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22e8ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e8f0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x22e8f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e8f4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x22e8f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e8f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22e8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x22E8FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E8FCu;
            // 0x22e900: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22E898u: goto label_22e898;
            case 0x22E8C8u: goto label_22e8c8;
            case 0x22E8E0u: goto label_22e8e0;
            case 0x22E8E4u: goto label_22e8e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22E904u;
    // 0x22e904: 0x0  nop
    ctx->pc = 0x22e904u;
    // NOP
}
