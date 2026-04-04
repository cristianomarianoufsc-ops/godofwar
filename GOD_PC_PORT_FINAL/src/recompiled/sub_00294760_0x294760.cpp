#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00294760
// Address: 0x294760 - 0x2948a0
void sub_00294760_0x294760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294760_0x294760");
#endif

    ctx->pc = 0x294760u;

    // 0x294760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x294760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x294764: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x294764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x294768: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x294768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29476c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29476cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294770: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294774: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x294774u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x294778: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x294778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x29477c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x29477cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x294780: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x294780u;
    {
        const bool branch_taken_0x294780 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x294780) {
            ctx->pc = 0x294790u;
            goto label_294790;
        }
    }
    ctx->pc = 0x294788u;
    // 0x294788: 0xc0a648c  jal         func_299230
    ctx->pc = 0x294788u;
    SET_GPR_U32(ctx, 31, 0x294790u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294790u; }
        if (ctx->pc != 0x294790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294790u; }
        if (ctx->pc != 0x294790u) { return; }
    }
    ctx->pc = 0x294790u;
label_294790:
    // 0x294790: 0xc0a4e60  jal         func_293980
    ctx->pc = 0x294790u;
    SET_GPR_U32(ctx, 31, 0x294798u);
    ctx->pc = 0x294794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294790u;
            // 0x294794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293980u;
    if (runtime->hasFunction(0x293980u)) {
        auto targetFn = runtime->lookupFunction(0x293980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294798u; }
        if (ctx->pc != 0x294798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293980_0x293990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294798u; }
        if (ctx->pc != 0x294798u) { return; }
    }
    ctx->pc = 0x294798u;
    // 0x294798: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x294798u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29479c: 0xf  sync
    ctx->pc = 0x29479cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2947a0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2947A0u;
    {
        const bool branch_taken_0x2947a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2947A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2947A0u;
            // 0x2947a4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2947a0) {
            ctx->pc = 0x2947B4u;
            goto label_2947b4;
        }
    }
    ctx->pc = 0x2947A8u;
    // 0x2947a8: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x2947A8u;
    SET_GPR_U32(ctx, 31, 0x2947B0u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2947B0u; }
        if (ctx->pc != 0x2947B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2947B0u; }
        if (ctx->pc != 0x2947B0u) { return; }
    }
    ctx->pc = 0x2947B0u;
    // 0x2947b0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2947b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2947b4:
    // 0x2947b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2947b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2947b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2947b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2947bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2947bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2947c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2947C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2947C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2947C0u;
            // 0x2947c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x294790u: goto label_294790;
            case 0x2947B4u: goto label_2947b4;
            case 0x294808u: goto label_294808;
            case 0x294850u: goto label_294850;
            case 0x294860u: goto label_294860;
            case 0x294870u: goto label_294870;
            case 0x294880u: goto label_294880;
            case 0x294890u: goto label_294890;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2947C8u;
    // 0x2947c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2947c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2947cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2947ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2947d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2947d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2947d4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2947d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2947d8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2947d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2947dc: 0x3c160032  lui         $s6, 0x32
    ctx->pc = 0x2947dcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)50 << 16));
    // 0x2947e0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2947e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2947e4: 0x3c15002c  lui         $s5, 0x2C
    ctx->pc = 0x2947e4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)44 << 16));
    // 0x2947e8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2947e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2947ec: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2947ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2947f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2947f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2947f4: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x2947f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2947f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2947f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2947fc: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x2947fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x294800: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x294800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x294804: 0x26300009  addiu       $s0, $s1, 0x9
    ctx->pc = 0x294804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
label_294808:
    // 0x294808: 0xc0a4f18  jal         func_293C60
    ctx->pc = 0x294808u;
    SET_GPR_U32(ctx, 31, 0x294810u);
    ctx->pc = 0x29480Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294808u;
            // 0x29480c: 0x8ec46f40  lw          $a0, 0x6F40($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28480)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294810u; }
        if (ctx->pc != 0x294810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294810u; }
        if (ctx->pc != 0x294810u) { return; }
    }
    ctx->pc = 0x294810u;
    // 0x294810: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x294810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x294814: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x294814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x294818: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x294818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29481c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x29481cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x294820: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x294820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x294824: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x294824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x294828: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x294828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x29482c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x29482cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x294830: 0x1054000f  beq         $v0, $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x294830u;
    {
        const bool branch_taken_0x294830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x294834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294830u;
            // 0x294834: 0x28450002  slti        $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x294830) {
            ctx->pc = 0x294870u;
            goto label_294870;
        }
    }
    ctx->pc = 0x294838u;
    // 0x294838: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x294838u;
    {
        const bool branch_taken_0x294838 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29483Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294838u;
            // 0x29483c: 0x26a467b0  addiu       $a0, $s5, 0x67B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 26544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294838) {
            ctx->pc = 0x294850u;
            goto label_294850;
        }
    }
    ctx->pc = 0x294840u;
    // 0x294840: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x294840u;
    {
        const bool branch_taken_0x294840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294840u;
            // 0x294844: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294840) {
            ctx->pc = 0x294860u;
            goto label_294860;
        }
    }
    ctx->pc = 0x294848u;
    // 0x294848: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x294848u;
    {
        const bool branch_taken_0x294848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294848) {
            ctx->pc = 0x294890u;
            goto label_294890;
        }
    }
    ctx->pc = 0x294850u;
label_294850:
    // 0x294850: 0x1053000b  beq         $v0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x294850u;
    {
        const bool branch_taken_0x294850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x294854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294850u;
            // 0x294854: 0x2031821  addu        $v1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294850) {
            ctx->pc = 0x294880u;
            goto label_294880;
        }
    }
    ctx->pc = 0x294858u;
    // 0x294858: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x294858u;
    {
        const bool branch_taken_0x294858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294858) {
            ctx->pc = 0x294890u;
            goto label_294890;
        }
    }
    ctx->pc = 0x294860u;
label_294860:
    // 0x294860: 0xc0a4ed4  jal         func_293B50
    ctx->pc = 0x294860u;
    SET_GPR_U32(ctx, 31, 0x294868u);
    ctx->pc = 0x294864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294860u;
            // 0x294864: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293B50u;
    if (runtime->hasFunction(0x293B50u)) {
        auto targetFn = runtime->lookupFunction(0x293B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294868u; }
        if (ctx->pc != 0x294868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293b50_0x293b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294868u; }
        if (ctx->pc != 0x294868u) { return; }
    }
    ctx->pc = 0x294868u;
    // 0x294868: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x294868u;
    {
        const bool branch_taken_0x294868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294868) {
            ctx->pc = 0x294808u;
            runtime->cooperativeGuestYield();
            goto label_294808;
        }
    }
    ctx->pc = 0x294870u;
label_294870:
    // 0x294870: 0xc0a4eb4  jal         func_293AD0
    ctx->pc = 0x294870u;
    SET_GPR_U32(ctx, 31, 0x294878u);
    ctx->pc = 0x294874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294870u;
            // 0x294874: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293AD0u;
    if (runtime->hasFunction(0x293AD0u)) {
        auto targetFn = runtime->lookupFunction(0x293AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294878u; }
        if (ctx->pc != 0x294878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293ad0_0x293b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294878u; }
        if (ctx->pc != 0x294878u) { return; }
    }
    ctx->pc = 0x294878u;
    // 0x294878: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x294878u;
    {
        const bool branch_taken_0x294878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294878) {
            ctx->pc = 0x294808u;
            runtime->cooperativeGuestYield();
            goto label_294808;
        }
    }
    ctx->pc = 0x294880u;
label_294880:
    // 0x294880: 0xc0a4ee4  jal         func_293B90
    ctx->pc = 0x294880u;
    SET_GPR_U32(ctx, 31, 0x294888u);
    ctx->pc = 0x294884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294880u;
            // 0x294884: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293B90u;
    if (runtime->hasFunction(0x293B90u)) {
        auto targetFn = runtime->lookupFunction(0x293B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294888u; }
        if (ctx->pc != 0x294888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293b90_0x293c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294888u; }
        if (ctx->pc != 0x294888u) { return; }
    }
    ctx->pc = 0x294888u;
    // 0x294888: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x294888u;
    {
        const bool branch_taken_0x294888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294888) {
            ctx->pc = 0x294808u;
            runtime->cooperativeGuestYield();
            goto label_294808;
        }
    }
    ctx->pc = 0x294890u;
label_294890:
    // 0x294890: 0xc0a5910  jal         func_296440
    ctx->pc = 0x294890u;
    SET_GPR_U32(ctx, 31, 0x294898u);
    ctx->pc = 0x296440u;
    if (runtime->hasFunction(0x296440u)) {
        auto targetFn = runtime->lookupFunction(0x296440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294898u; }
        if (ctx->pc != 0x294898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296440_0x296440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294898u; }
        if (ctx->pc != 0x294898u) { return; }
    }
    ctx->pc = 0x294898u;
    // 0x294898: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x294898u;
    {
        const bool branch_taken_0x294898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294898) {
            ctx->pc = 0x294808u;
            runtime->cooperativeGuestYield();
            goto label_294808;
        }
    }
    ctx->pc = 0x2948A0u;
}
