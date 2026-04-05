#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022D840
// Address: 0x22d840 - 0x22d968
void sub_0022D840_0x22d840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D840_0x22d840");
#endif

    ctx->pc = 0x22d840u;

    // 0x22d840: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22d840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22d844: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x22d844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x22d848: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22d848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22d84c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x22d84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x22d850: 0xac82bc60  sw          $v0, -0x43A0($a0)
    ctx->pc = 0x22d850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294949984), GPR_U32(ctx, 2));
    // 0x22d854: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x22d854u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x22d858: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x22d858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x22d85c: 0x2485bc60  addiu       $a1, $a0, -0x43A0
    ctx->pc = 0x22d85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949984));
    // 0x22d860: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22d860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x22d864: 0x2503bc68  addiu       $v1, $t0, -0x4398
    ctx->pc = 0x22d864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949992));
    // 0x22d868: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22d868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22d86c: 0x3c090036  lui         $t1, 0x36
    ctx->pc = 0x22d86cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)54 << 16));
    // 0x22d870: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x22d870u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x22d874: 0x2526bc70  addiu       $a2, $t1, -0x4390
    ctx->pc = 0x22d874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4294950000));
    // 0x22d878: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x22d878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x22d87c: 0x3c0a0036  lui         $t2, 0x36
    ctx->pc = 0x22d87cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)54 << 16));
    // 0x22d880: 0xad00bc68  sw          $zero, -0x4398($t0)
    ctx->pc = 0x22d880u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294949992), GPR_U32(ctx, 0));
    // 0x22d884: 0x2547bc78  addiu       $a3, $t2, -0x4388
    ctx->pc = 0x22d884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 4294950008));
    // 0x22d888: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x22d888u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x22d88c: 0xad20bc70  sw          $zero, -0x4390($t1)
    ctx->pc = 0x22d88cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294950000), GPR_U32(ctx, 0));
    // 0x22d890: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x22d890u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x22d894: 0xad40bc78  sw          $zero, -0x4388($t2)
    ctx->pc = 0x22d894u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294950008), GPR_U32(ctx, 0));
    // 0x22d898: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x22d898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x22d89c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x22d89cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x22d8a0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22d8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22d8a4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x22d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x22d8a8: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x22d8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x22d8ac: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x22d8acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x22d8b0: 0x24848318  addiu       $a0, $a0, -0x7CE8
    ctx->pc = 0x22d8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935320));
    // 0x22d8b4: 0xaca012b4  sw          $zero, 0x12B4($a1)
    ctx->pc = 0x22d8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4788), GPR_U32(ctx, 0));
    // 0x22d8b8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x22d8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22d8bc: 0xc05e996  jal         func_17A658
    ctx->pc = 0x22D8BCu;
    SET_GPR_U32(ctx, 31, 0x22D8C4u);
    ctx->pc = 0x22D8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D8BCu;
            // 0x22d8c0: 0xacc012b8  sw          $zero, 0x12B8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4792), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D8C4u; }
        if (ctx->pc != 0x22D8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D8C4u; }
        if (ctx->pc != 0x22D8C4u) { return; }
    }
    ctx->pc = 0x22D8C4u;
    // 0x22d8c4: 0xae021298  sw          $v0, 0x1298($s0)
    ctx->pc = 0x22d8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4760), GPR_U32(ctx, 2));
    // 0x22d8c8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22d8cc: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x22d8ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x22d8d0: 0xac4012d0  sw          $zero, 0x12D0($v0)
    ctx->pc = 0x22d8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4816), GPR_U32(ctx, 0));
    // 0x22d8d4: 0x8e421278  lw          $v0, 0x1278($s2)
    ctx->pc = 0x22d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4728)));
    // 0x22d8d8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22D8D8u;
    {
        const bool branch_taken_0x22d8d8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22D8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D8D8u;
            // 0x22d8dc: 0x26431278  addiu       $v1, $s2, 0x1278 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d8d8) {
            ctx->pc = 0x22D8F0u;
            goto label_22d8f0;
        }
    }
    ctx->pc = 0x22D8E0u;
    // 0x22d8e0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x22d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x22d8e4: 0x441001a  bgez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x22D8E4u;
    {
        const bool branch_taken_0x22d8e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x22D8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D8E4u;
            // 0x22d8e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d8e4) {
            ctx->pc = 0x22D950u;
            goto label_22d950;
        }
    }
    ctx->pc = 0x22D8ECu;
    // 0x22d8ec: 0x0  nop
    ctx->pc = 0x22d8ecu;
    // NOP
label_22d8f0:
    // 0x22d8f0: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x22d8f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22d8f4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x22d8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x22d8f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22d8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d8fc: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x22d8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x22d900: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x22d900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x22d904: 0x24a5bc80  addiu       $a1, $a1, -0x4380
    ctx->pc = 0x22d904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950016));
    // 0x22d908: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x22d908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x22d90c: 0xc09f0e0  jal         func_27C380
    ctx->pc = 0x22D90Cu;
    SET_GPR_U32(ctx, 31, 0x22D914u);
    ctx->pc = 0x22D910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D90Cu;
            // 0x22d910: 0x26511278  addiu       $s1, $s2, 0x1278 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27C380u;
    if (runtime->hasFunction(0x27C380u)) {
        auto targetFn = runtime->lookupFunction(0x27C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D914u; }
        if (ctx->pc != 0x22D914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027C380_0x27c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D914u; }
        if (ctx->pc != 0x22D914u) { return; }
    }
    ctx->pc = 0x22D914u;
    // 0x22d914: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x22d914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22d918: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x22d918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x22d91c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22d91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d920: 0x24a5bd80  addiu       $a1, $a1, -0x4280
    ctx->pc = 0x22d920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950272));
    // 0x22d924: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x22d924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x22d928: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x22d928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x22d92c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x22d92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x22d930: 0xc09f0e0  jal         func_27C380
    ctx->pc = 0x22D930u;
    SET_GPR_U32(ctx, 31, 0x22D938u);
    ctx->pc = 0x22D934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D930u;
            // 0x22d934: 0xae421278  sw          $v0, 0x1278($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27C380u;
    if (runtime->hasFunction(0x27C380u)) {
        auto targetFn = runtime->lookupFunction(0x27C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D938u; }
        if (ctx->pc != 0x22D938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027C380_0x27c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D938u; }
        if (ctx->pc != 0x22D938u) { return; }
    }
    ctx->pc = 0x22D938u;
    // 0x22d938: 0xc0a4ec4  jal         func_293B10
    ctx->pc = 0x22D938u;
    SET_GPR_U32(ctx, 31, 0x22D940u);
    ctx->pc = 0x22D93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D938u;
            // 0x22d93c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293B10u;
    if (runtime->hasFunction(0x293B10u)) {
        auto targetFn = runtime->lookupFunction(0x293B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D940u; }
        if (ctx->pc != 0x22D940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293b10_0x293b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D940u; }
        if (ctx->pc != 0x22D940u) { return; }
    }
    ctx->pc = 0x22D940u;
    // 0x22d940: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22d940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d944: 0xc0a4eac  jal         func_293AB0
    ctx->pc = 0x22D944u;
    SET_GPR_U32(ctx, 31, 0x22D94Cu);
    ctx->pc = 0x22D948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D944u;
            // 0x22d948: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293AB0u;
    if (runtime->hasFunction(0x293AB0u)) {
        auto targetFn = runtime->lookupFunction(0x293AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D94Cu; }
        if (ctx->pc != 0x22D94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293ab0_0x293ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D94Cu; }
        if (ctx->pc != 0x22D94Cu) { return; }
    }
    ctx->pc = 0x22D94Cu;
    // 0x22d94c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22d94cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d950:
    // 0x22d950: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x22d950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22d954: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x22d954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d958: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22d958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d95c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22d95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d960: 0x3e00008  jr          $ra
    ctx->pc = 0x22D960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D960u;
            // 0x22d964: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22D8F0u: goto label_22d8f0;
            case 0x22D950u: goto label_22d950;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22D968u;
}
