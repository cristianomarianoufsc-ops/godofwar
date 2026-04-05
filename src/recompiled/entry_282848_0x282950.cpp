#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_282848
// Address: 0x282848 - 0x282950
void entry_282848_0x282950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_282848_0x282950");
#endif

    ctx->pc = 0x282848u;

    // 0x282848: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x282848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x28284c: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x28284cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x282850: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x282850u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x282854: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x282854u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x282858: 0x24422748  addiu       $v0, $v0, 0x2748
    ctx->pc = 0x282858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10056));
    // 0x28285c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x28285cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x282860: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x282860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x282864: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x282864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x282868: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x282868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x28286c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x28286cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282870: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x282870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x282874: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x282874u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x282878: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x282878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x28287c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x28287cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x282880: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x282880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x282884: 0xc09ecae  jal         func_27B2B8
    ctx->pc = 0x282884u;
    SET_GPR_U32(ctx, 31, 0x28288Cu);
    ctx->pc = 0x282888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282884u;
            // 0x282888: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B2B8u;
    if (runtime->hasFunction(0x27B2B8u)) {
        auto targetFn = runtime->lookupFunction(0x27B2B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28288Cu; }
        if (ctx->pc != 0x28288Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B2B8_0x27b2b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28288Cu; }
        if (ctx->pc != 0x28288Cu) { return; }
    }
    ctx->pc = 0x28288Cu;
    // 0x28288c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x28288cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x282890: 0x1043001e  beq         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x282890u;
    {
        const bool branch_taken_0x282890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x282894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282890u;
            // 0x282894: 0x3c130032  lui         $s3, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282890) {
            ctx->pc = 0x28290Cu;
            goto label_28290c;
        }
    }
    ctx->pc = 0x282898u;
    // 0x282898: 0x24032080  addiu       $v1, $zero, 0x2080
    ctx->pc = 0x282898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8320));
    // 0x28289c: 0x266227c0  addiu       $v0, $s3, 0x27C0
    ctx->pc = 0x28289cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 10176));
    // 0x2828a0: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x2828a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x2828a4: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2828a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x2828a8: 0x24844840  addiu       $a0, $a0, 0x4840
    ctx->pc = 0x2828a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18496));
    // 0x2828ac: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2828acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2828b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2828b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2828b4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2828b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2828b8: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x2828B8u;
    SET_GPR_U32(ctx, 31, 0x2828C0u);
    ctx->pc = 0x2828BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2828B8u;
            // 0x2828bc: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2828C0u; }
        if (ctx->pc != 0x2828C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2828C0u; }
        if (ctx->pc != 0x2828C0u) { return; }
    }
    ctx->pc = 0x2828C0u;
    // 0x2828c0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x2828c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x2828c4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2828c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2828c8: 0x3c140028  lui         $s4, 0x28
    ctx->pc = 0x2828c8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)40 << 16));
    // 0x2828cc: 0xae023624  sw          $v0, 0x3624($s0)
    ctx->pc = 0x2828ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13860), GPR_U32(ctx, 2));
    // 0x2828d0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2828d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2828d4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2828d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2828d8:
    // 0x2828d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2828d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2828dc: 0x8e053624  lw          $a1, 0x3624($s0)
    ctx->pc = 0x2828dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13860)));
    // 0x2828e0: 0x266727c0  addiu       $a3, $s3, 0x27C0
    ctx->pc = 0x2828e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 10176));
    // 0x2828e4: 0xc09ed5a  jal         func_27B568
    ctx->pc = 0x2828E4u;
    SET_GPR_U32(ctx, 31, 0x2828ECu);
    ctx->pc = 0x2828E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2828E4u;
            // 0x2828e8: 0x26882118  addiu       $t0, $s4, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 8472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B568u;
    if (runtime->hasFunction(0x27B568u)) {
        auto targetFn = runtime->lookupFunction(0x27B568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2828ECu; }
        if (ctx->pc != 0x2828ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B568_0x27b568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2828ECu; }
        if (ctx->pc != 0x2828ECu) { return; }
    }
    ctx->pc = 0x2828ECu;
    // 0x2828ec: 0x5452fffa  bnel        $v0, $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2828ECu;
    {
        const bool branch_taken_0x2828ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2828ec) {
            ctx->pc = 0x2828F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2828ECu;
            // 0x2828f0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2828D8u;
            runtime->cooperativeGuestYield();
            goto label_2828d8;
        }
    }
    ctx->pc = 0x2828F4u;
    // 0x2828f4: 0xc0a07fc  jal         func_281FF0
    ctx->pc = 0x2828F4u;
    SET_GPR_U32(ctx, 31, 0x2828FCu);
    ctx->pc = 0x281FF0u;
    if (runtime->hasFunction(0x281FF0u)) {
        auto targetFn = runtime->lookupFunction(0x281FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2828FCu; }
        if (ctx->pc != 0x2828FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281FF0_0x281ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2828FCu; }
        if (ctx->pc != 0x2828FCu) { return; }
    }
    ctx->pc = 0x2828FCu;
    // 0x2828fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2828fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282900: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x282900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x282904: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x282904u;
    {
        const bool branch_taken_0x282904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282904) {
            ctx->pc = 0x282914u;
            goto label_282914;
        }
    }
    ctx->pc = 0x28290Cu;
label_28290c:
    // 0x28290c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28290Cu;
    {
        const bool branch_taken_0x28290c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28290Cu;
            // 0x282910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28290c) {
            ctx->pc = 0x282928u;
            goto label_282928;
        }
    }
    ctx->pc = 0x282914u;
label_282914:
    // 0x282914: 0x68620013  ldl         $v0, 0x13($v1)
    ctx->pc = 0x282914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x282918: 0x6c62000c  ldr         $v0, 0xC($v1)
    ctx->pc = 0x282918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x28291c: 0xb2a20007  sdl         $v0, 0x7($s5)
    ctx->pc = 0x28291cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x282920: 0xb6a20000  sdr         $v0, 0x0($s5)
    ctx->pc = 0x282920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x282924: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x282924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_282928:
    // 0x282928: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x282928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28292c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x28292cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x282930: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x282930u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x282934: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x282934u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x282938: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x282938u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28293c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x28293cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282940: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x282940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282944: 0x3e00008  jr          $ra
    ctx->pc = 0x282944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282944u;
            // 0x282948: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2828D8u: goto label_2828d8;
            case 0x28290Cu: goto label_28290c;
            case 0x282914u: goto label_282914;
            case 0x282928u: goto label_282928;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28294Cu;
    // 0x28294c: 0x0  nop
    ctx->pc = 0x28294cu;
    // NOP
}
