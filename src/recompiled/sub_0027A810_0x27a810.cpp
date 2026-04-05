#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027A810
// Address: 0x27a810 - 0x27ab00
void sub_0027A810_0x27a810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A810_0x27a810");
#endif

    ctx->pc = 0x27a810u;

    // 0x27a810: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x27a810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x27a814: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x27a814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x27a818: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27a818u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a81c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x27a81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x27a820: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x27a820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x27a824: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27a824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a828: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x27a828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x27a82c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x27a82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x27a830: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x27a830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x27a834: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x27a834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x27a838: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27a838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27a83c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27a83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27a840: 0xc09e992  jal         func_27A648
    ctx->pc = 0x27A840u;
    SET_GPR_U32(ctx, 31, 0x27A848u);
    ctx->pc = 0x27A844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A840u;
            // 0x27a844: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A648u;
    if (runtime->hasFunction(0x27A648u)) {
        auto targetFn = runtime->lookupFunction(0x27A648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A848u; }
        if (ctx->pc != 0x27A848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A648_0x27a648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A848u; }
        if (ctx->pc != 0x27A848u) { return; }
    }
    ctx->pc = 0x27A848u;
    // 0x27a848: 0x1440009f  bnez        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x27A848u;
    {
        const bool branch_taken_0x27a848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A848u;
            // 0x27a84c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a848) {
            ctx->pc = 0x27AAC8u;
            goto label_27aac8;
        }
    }
    ctx->pc = 0x27A850u;
    // 0x27a850: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27a850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a854: 0xc0a5b12  jal         func_296C48
    ctx->pc = 0x27A854u;
    SET_GPR_U32(ctx, 31, 0x27A85Cu);
    ctx->pc = 0x27A858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A854u;
            // 0x27a858: 0x3c15002a  lui         $s5, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296C48u;
    if (runtime->hasFunction(0x296C48u)) {
        auto targetFn = runtime->lookupFunction(0x296C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A85Cu; }
        if (ctx->pc != 0x27A85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296c48_0x296de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A85Cu; }
        if (ctx->pc != 0x27A85Cu) { return; }
    }
    ctx->pc = 0x27A85Cu;
    // 0x27a85c: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x27a85cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x27a860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27a860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a864: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x27a864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x27a868: 0xac621724  sw          $v0, 0x1724($v1)
    ctx->pc = 0x27a868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5924), GPR_U32(ctx, 2));
    // 0x27a86c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x27a86cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x27a870: 0x8ea4175c  lw          $a0, 0x175C($s5)
    ctx->pc = 0x27a870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 5980)));
    // 0x27a874: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x27a874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27a878: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27a878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27a87c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x27a87cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x27a880: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x27a880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27a884: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x27a884u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x27a888: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x27a888u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
    // 0x27a88c: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x27a88cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x27a890: 0xac431748  sw          $v1, 0x1748($v0)
    ctx->pc = 0x27a890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5960), GPR_U32(ctx, 3));
    // 0x27a894: 0x3c100031  lui         $s0, 0x31
    ctx->pc = 0x27a894u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49 << 16));
    // 0x27a898: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x27a898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x27a89c: 0xaca3174c  sw          $v1, 0x174C($a1)
    ctx->pc = 0x27a89cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 5964), GPR_U32(ctx, 3));
    // 0x27a8a0: 0xacc3173c  sw          $v1, 0x173C($a2)
    ctx->pc = 0x27a8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5948), GPR_U32(ctx, 3));
    // 0x27a8a4: 0x2451aaa8  addiu       $s1, $v0, -0x5558
    ctx->pc = 0x27a8a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945448));
    // 0x27a8a8: 0xace31754  sw          $v1, 0x1754($a3)
    ctx->pc = 0x27a8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 5972), GPR_U32(ctx, 3));
    // 0x27a8ac: 0x2612ab00  addiu       $s2, $s0, -0x5500
    ctx->pc = 0x27a8acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945536));
    // 0x27a8b0: 0xad231750  sw          $v1, 0x1750($t1)
    ctx->pc = 0x27a8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 5968), GPR_U32(ctx, 3));
    // 0x27a8b4: 0x3c1e002a  lui         $fp, 0x2A
    ctx->pc = 0x27a8b4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)42 << 16));
    // 0x27a8b8: 0xad001738  sw          $zero, 0x1738($t0)
    ctx->pc = 0x27a8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5944), GPR_U32(ctx, 0));
    // 0x27a8bc: 0x3c17002a  lui         $s7, 0x2A
    ctx->pc = 0x27a8bcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)42 << 16));
    // 0x27a8c0: 0xaea4175c  sw          $a0, 0x175C($s5)
    ctx->pc = 0x27a8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 5980), GPR_U32(ctx, 4));
    // 0x27a8c4: 0x3c16002c  lui         $s6, 0x2C
    ctx->pc = 0x27a8c4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)44 << 16));
    // 0x27a8c8: 0xae831758  sw          $v1, 0x1758($s4)
    ctx->pc = 0x27a8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 5976), GPR_U32(ctx, 3));
    // 0x27a8cc: 0x0  nop
    ctx->pc = 0x27a8ccu;
    // NOP
label_27a8d0:
    // 0x27a8d0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x27a8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x27a8d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27a8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a8d8: 0x34a50592  ori         $a1, $a1, 0x592
    ctx->pc = 0x27a8d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1426);
    // 0x27a8dc: 0xc0a5ca4  jal         func_297290
    ctx->pc = 0x27A8DCu;
    SET_GPR_U32(ctx, 31, 0x27A8E4u);
    ctx->pc = 0x27A8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A8DCu;
            // 0x27a8e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297290u;
    if (runtime->hasFunction(0x297290u)) {
        auto targetFn = runtime->lookupFunction(0x297290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A8E4u; }
        if (ctx->pc != 0x27A8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297290_0x297290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A8E4u; }
        if (ctx->pc != 0x27A8E4u) { return; }
    }
    ctx->pc = 0x27A8E4u;
    // 0x27a8e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27a8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a8e8: 0x4a30012  bgezl       $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x27A8E8u;
    {
        const bool branch_taken_0x27a8e8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x27a8e8) {
            ctx->pc = 0x27A8ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27A8E8u;
            // 0x27a8ec: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27A934u;
            goto label_27a934;
        }
    }
    ctx->pc = 0x27A8F0u;
    // 0x27a8f0: 0x8ee21710  lw          $v0, 0x1710($s7)
    ctx->pc = 0x27a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 5904)));
    // 0x27a8f4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A8F4u;
    {
        const bool branch_taken_0x27a8f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27A8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A8F4u;
            // 0x27a8f8: 0x8ea6175c  lw          $a2, 0x175C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 5980)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a8f4) {
            ctx->pc = 0x27A904u;
            goto label_27a904;
        }
    }
    ctx->pc = 0x27A8FCu;
    // 0x27a8fc: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x27A8FCu;
    SET_GPR_U32(ctx, 31, 0x27A904u);
    ctx->pc = 0x27A900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A8FCu;
            // 0x27a900: 0x26c44c20  addiu       $a0, $s6, 0x4C20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 19488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A904u; }
        if (ctx->pc != 0x27A904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A904u; }
        if (ctx->pc != 0x27A904u) { return; }
    }
    ctx->pc = 0x27A904u;
label_27a904:
    // 0x27a904: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x27a904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x27a908: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x27a908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27a90c: 0x0  nop
    ctx->pc = 0x27a90cu;
    // NOP
label_27a910:
    // 0x27a910: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27a910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27a914: 0x0  nop
    ctx->pc = 0x27a914u;
    // NOP
    // 0x27a918: 0x0  nop
    ctx->pc = 0x27a918u;
    // NOP
    // 0x27a91c: 0x0  nop
    ctx->pc = 0x27a91cu;
    // NOP
    // 0x27a920: 0x0  nop
    ctx->pc = 0x27a920u;
    // NOP
    // 0x27a924: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27A924u;
    {
        const bool branch_taken_0x27a924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27a924) {
            ctx->pc = 0x27A910u;
            runtime->cooperativeGuestYield();
            goto label_27a910;
        }
    }
    ctx->pc = 0x27A92Cu;
    // 0x27a92c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x27A92Cu;
    {
        const bool branch_taken_0x27a92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a92c) {
            ctx->pc = 0x27A8D0u;
            runtime->cooperativeGuestYield();
            goto label_27a8d0;
        }
    }
    ctx->pc = 0x27A934u;
label_27a934:
    // 0x27a934: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x27A934u;
    {
        const bool branch_taken_0x27a934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A934u;
            // 0x27a938: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a934) {
            ctx->pc = 0x27A98Cu;
            goto label_27a98c;
        }
    }
    ctx->pc = 0x27A93Cu;
    // 0x27a93c: 0xae13ab00  sw          $s3, -0x5500($s0)
    ctx->pc = 0x27a93cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294945536), GPR_U32(ctx, 19));
    // 0x27a940: 0xae801758  sw          $zero, 0x1758($s4)
    ctx->pc = 0x27a940u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 5976), GPR_U32(ctx, 0));
    // 0x27a944: 0xc0a5ae6  jal         func_296B98
    ctx->pc = 0x27A944u;
    SET_GPR_U32(ctx, 31, 0x27A94Cu);
    ctx->pc = 0x27A948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A944u;
            // 0x27a948: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296B98u;
    if (runtime->hasFunction(0x296B98u)) {
        auto targetFn = runtime->lookupFunction(0x296B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A94Cu; }
        if (ctx->pc != 0x27A94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296b98_0x296c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A94Cu; }
        if (ctx->pc != 0x27A94Cu) { return; }
    }
    ctx->pc = 0x27A94Cu;
    // 0x27a94c: 0x27d02900  addiu       $s0, $fp, 0x2900
    ctx->pc = 0x27a94cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 10496));
    // 0x27a950: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27a950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a954: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x27a954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a958: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x27a958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x27a95c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27a95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a960: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27a960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a964: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x27a964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27a968: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x27a968u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a96c: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x27a96cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x27a970: 0xc0a5d1c  jal         func_297470
    ctx->pc = 0x27A970u;
    SET_GPR_U32(ctx, 31, 0x27A978u);
    ctx->pc = 0x27A974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A970u;
            // 0x27a974: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297470u;
    if (runtime->hasFunction(0x297470u)) {
        auto targetFn = runtime->lookupFunction(0x297470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A978u; }
        if (ctx->pc != 0x27A978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297470_0x297470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A978u; }
        if (ctx->pc != 0x27A978u) { return; }
    }
    ctx->pc = 0x27A978u;
    // 0x27a978: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x27A978u;
    {
        const bool branch_taken_0x27a978 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x27A97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A978u;
            // 0x27a97c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a978) {
            ctx->pc = 0x27A9BCu;
            goto label_27a9bc;
        }
    }
    ctx->pc = 0x27A980u;
    // 0x27a980: 0xac401724  sw          $zero, 0x1724($v0)
    ctx->pc = 0x27a980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5924), GPR_U32(ctx, 0));
    // 0x27a984: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x27A984u;
    {
        const bool branch_taken_0x27a984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A984u;
            // 0x27a988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a984) {
            ctx->pc = 0x27AAC8u;
            goto label_27aac8;
        }
    }
    ctx->pc = 0x27A98Cu;
label_27a98c:
    // 0x27a98c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x27a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x27a990: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x27a990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27a994: 0x0  nop
    ctx->pc = 0x27a994u;
    // NOP
label_27a998:
    // 0x27a998: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27a998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27a99c: 0x0  nop
    ctx->pc = 0x27a99cu;
    // NOP
    // 0x27a9a0: 0x0  nop
    ctx->pc = 0x27a9a0u;
    // NOP
    // 0x27a9a4: 0x0  nop
    ctx->pc = 0x27a9a4u;
    // NOP
    // 0x27a9a8: 0x0  nop
    ctx->pc = 0x27a9a8u;
    // NOP
    // 0x27a9ac: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27A9ACu;
    {
        const bool branch_taken_0x27a9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27a9ac) {
            ctx->pc = 0x27A998u;
            runtime->cooperativeGuestYield();
            goto label_27a998;
        }
    }
    ctx->pc = 0x27A9B4u;
    // 0x27a9b4: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
    ctx->pc = 0x27A9B4u;
    {
        const bool branch_taken_0x27a9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a9b4) {
            ctx->pc = 0x27A8D0u;
            runtime->cooperativeGuestYield();
            goto label_27a8d0;
        }
    }
    ctx->pc = 0x27A9BCu;
label_27a9bc:
    // 0x27a9bc: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x27a9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x27a9c0: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x27a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x27a9c4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x27a9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x27a9c8: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x27a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x27a9cc: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x27a9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x27a9d0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x27a9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27a9d4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x27a9d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x27a9d8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x27a9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x27a9dc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x27a9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27a9e0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x27a9e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a9e4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x27a9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27a9e8: 0x10c20016  beq         $a2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27A9E8u;
    {
        const bool branch_taken_0x27a9e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x27A9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A9E8u;
            // 0x27a9ec: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a9e8) {
            ctx->pc = 0x27AA44u;
            goto label_27aa44;
        }
    }
    ctx->pc = 0x27A9F0u;
    // 0x27a9f0: 0x240200fe  addiu       $v0, $zero, 0xFE
    ctx->pc = 0x27a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x27a9f4: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A9F4u;
    {
        const bool branch_taken_0x27a9f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x27A9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A9F4u;
            // 0x27a9f8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a9f4) {
            ctx->pc = 0x27AA08u;
            goto label_27aa08;
        }
    }
    ctx->pc = 0x27A9FCu;
    // 0x27a9fc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27aa00: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27AA00u;
    {
        const bool branch_taken_0x27aa00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AA00u;
            // 0x27aa04: 0xac501710  sw          $s0, 0x1710($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 5904), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aa00) {
            ctx->pc = 0x27AA44u;
            goto label_27aa44;
        }
    }
    ctx->pc = 0x27AA08u;
label_27aa08:
    // 0x27aa08: 0x24a200ff  addiu       $v0, $a1, 0xFF
    ctx->pc = 0x27aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 255));
    // 0x27aa0c: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x27aa0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x27aa10: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x27aa10u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x27aa14: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x27aa14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x27aa18: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x27aa18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27aa1c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x27AA1Cu;
    {
        const bool branch_taken_0x27aa1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27aa1c) {
            ctx->pc = 0x27AA20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27AA1Cu;
            // 0x27aa20: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27AA44u;
            goto label_27aa44;
        }
    }
    ctx->pc = 0x27AA24u;
    // 0x27aa24: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x27aa24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x27aa28: 0x248200ff  addiu       $v0, $a0, 0xFF
    ctx->pc = 0x27aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x27aa2c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x27aa2cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x27aa30: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x27aa30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x27aa34: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x27aa34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27aa38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27AA38u;
    {
        const bool branch_taken_0x27aa38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AA38u;
            // 0x27aa3c: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aa38) {
            ctx->pc = 0x27AA48u;
            goto label_27aa48;
        }
    }
    ctx->pc = 0x27AA40u;
    // 0x27aa40: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x27aa40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27aa44:
    // 0x27aa44: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x27aa44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_27aa48:
    // 0x27aa48: 0xac601724  sw          $zero, 0x1724($v1)
    ctx->pc = 0x27aa48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5924), GPR_U32(ctx, 0));
    // 0x27aa4c: 0x6600016  bltz        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x27AA4Cu;
    {
        const bool branch_taken_0x27aa4c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x27AA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AA4Cu;
            // 0x27aa50: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aa4c) {
            ctx->pc = 0x27AAA8u;
            goto label_27aaa8;
        }
    }
    ctx->pc = 0x27AA54u;
    // 0x27aa54: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x27AA54u;
    {
        const bool branch_taken_0x27aa54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AA54u;
            // 0x27aa58: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aa54) {
            ctx->pc = 0x27AAA8u;
            goto label_27aaa8;
        }
    }
    ctx->pc = 0x27AA5Cu;
    // 0x27aa5c: 0x16620012  bne         $s3, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27AA5Cu;
    {
        const bool branch_taken_0x27aa5c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x27AA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AA5Cu;
            // 0x27aa60: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aa5c) {
            ctx->pc = 0x27AAA8u;
            goto label_27aaa8;
        }
    }
    ctx->pc = 0x27AA64u;
    // 0x27aa64: 0x8c431710  lw          $v1, 0x1710($v0)
    ctx->pc = 0x27aa64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5904)));
    // 0x27aa68: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27AA68u;
    {
        const bool branch_taken_0x27aa68 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27AA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AA68u;
            // 0x27aa6c: 0x3c04002c  lui         $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aa68) {
            ctx->pc = 0x27AA78u;
            goto label_27aa78;
        }
    }
    ctx->pc = 0x27AA70u;
    // 0x27aa70: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x27AA70u;
    SET_GPR_U32(ctx, 31, 0x27AA78u);
    ctx->pc = 0x27AA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AA70u;
            // 0x27aa74: 0x24844c40  addiu       $a0, $a0, 0x4C40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AA78u; }
        if (ctx->pc != 0x27AA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AA78u; }
        if (ctx->pc != 0x27AA78u) { return; }
    }
    ctx->pc = 0x27AA78u;
label_27aa78:
    // 0x27aa78: 0xc09e90a  jal         func_27A428
    ctx->pc = 0x27AA78u;
    SET_GPR_U32(ctx, 31, 0x27AA80u);
    ctx->pc = 0x27A428u;
    if (runtime->hasFunction(0x27A428u)) {
        auto targetFn = runtime->lookupFunction(0x27A428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AA80u; }
        if (ctx->pc != 0x27AA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A428_0x27a428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AA80u; }
        if (ctx->pc != 0x27AA80u) { return; }
    }
    ctx->pc = 0x27AA80u;
    // 0x27aa80: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x27aa80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27aa84: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27aa88: 0xac441728  sw          $a0, 0x1728($v0)
    ctx->pc = 0x27aa88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5928), GPR_U32(ctx, 4));
    // 0x27aa8c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x27aa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x27aa90: 0xac64172c  sw          $a0, 0x172C($v1)
    ctx->pc = 0x27aa90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5932), GPR_U32(ctx, 4));
    // 0x27aa94: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27aa98: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x27aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x27aa9c: 0xac441720  sw          $a0, 0x1720($v0)
    ctx->pc = 0x27aa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5920), GPR_U32(ctx, 4));
    // 0x27aaa0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27AAA0u;
    {
        const bool branch_taken_0x27aaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AAA0u;
            // 0x27aaa4: 0xac601744  sw          $zero, 0x1744($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5956), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aaa0) {
            ctx->pc = 0x27AAC4u;
            goto label_27aac4;
        }
    }
    ctx->pc = 0x27AAA8u;
label_27aaa8:
    // 0x27aaa8: 0xc09e8d0  jal         func_27A340
    ctx->pc = 0x27AAA8u;
    SET_GPR_U32(ctx, 31, 0x27AAB0u);
    ctx->pc = 0x27A340u;
    if (runtime->hasFunction(0x27A340u)) {
        auto targetFn = runtime->lookupFunction(0x27A340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AAB0u; }
        if (ctx->pc != 0x27AAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27a340_0x27a428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AAB0u; }
        if (ctx->pc != 0x27AAB0u) { return; }
    }
    ctx->pc = 0x27AAB0u;
    // 0x27aab0: 0xc09e948  jal         func_27A520
    ctx->pc = 0x27AAB0u;
    SET_GPR_U32(ctx, 31, 0x27AAB8u);
    ctx->pc = 0x27A520u;
    if (runtime->hasFunction(0x27A520u)) {
        auto targetFn = runtime->lookupFunction(0x27A520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AAB8u; }
        if (ctx->pc != 0x27AAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A520_0x27a520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AAB8u; }
        if (ctx->pc != 0x27AAB8u) { return; }
    }
    ctx->pc = 0x27AAB8u;
    // 0x27aab8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x27aab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x27aabc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27aac0: 0xac621744  sw          $v0, 0x1744($v1)
    ctx->pc = 0x27aac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5956), GPR_U32(ctx, 2));
label_27aac4:
    // 0x27aac4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27aac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27aac8:
    // 0x27aac8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x27aac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27aacc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x27aaccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27aad0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x27aad0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27aad4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x27aad4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27aad8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x27aad8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27aadc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x27aadcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27aae0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x27aae0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27aae4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27aae4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27aae8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27aae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27aaec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27aaecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27aaf0: 0x3e00008  jr          $ra
    ctx->pc = 0x27AAF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AAF0u;
            // 0x27aaf4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27A8D0u: goto label_27a8d0;
            case 0x27A904u: goto label_27a904;
            case 0x27A910u: goto label_27a910;
            case 0x27A934u: goto label_27a934;
            case 0x27A98Cu: goto label_27a98c;
            case 0x27A998u: goto label_27a998;
            case 0x27A9BCu: goto label_27a9bc;
            case 0x27AA08u: goto label_27aa08;
            case 0x27AA44u: goto label_27aa44;
            case 0x27AA48u: goto label_27aa48;
            case 0x27AA78u: goto label_27aa78;
            case 0x27AAA8u: goto label_27aaa8;
            case 0x27AAC4u: goto label_27aac4;
            case 0x27AAC8u: goto label_27aac8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27AAF8u;
    // 0x27aaf8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x27aaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27aafc: 0x0  nop
    ctx->pc = 0x27aafcu;
    // NOP
}
