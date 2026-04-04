#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017E7A0
// Address: 0x17e7a0 - 0x17e958
void sub_0017E7A0_0x17e7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E7A0_0x17e7a0");
#endif

    ctx->pc = 0x17e7a0u;

    // 0x17e7a0: 0x27bdfb20  addiu       $sp, $sp, -0x4E0
    ctx->pc = 0x17e7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966048));
    // 0x17e7a4: 0x7fb70460  sq          $s7, 0x460($sp)
    ctx->pc = 0x17e7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 23));
    // 0x17e7a8: 0x7fb40490  sq          $s4, 0x490($sp)
    ctx->pc = 0x17e7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 20));
    // 0x17e7ac: 0x3c17002a  lui         $s7, 0x2A
    ctx->pc = 0x17e7acu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)42 << 16));
    // 0x17e7b0: 0x7fb50480  sq          $s5, 0x480($sp)
    ctx->pc = 0x17e7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 21));
    // 0x17e7b4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x17e7b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e7b8: 0x7fb104c0  sq          $s1, 0x4C0($sp)
    ctx->pc = 0x17e7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 17));
    // 0x17e7bc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x17e7bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e7c0: 0x7fb204b0  sq          $s2, 0x4B0($sp)
    ctx->pc = 0x17e7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 18));
    // 0x17e7c4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x17e7c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e7c8: 0x7fb004d0  sq          $s0, 0x4D0($sp)
    ctx->pc = 0x17e7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 16));
    // 0x17e7cc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x17e7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x17e7d0: 0x7fb304a0  sq          $s3, 0x4A0($sp)
    ctx->pc = 0x17e7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 19));
    // 0x17e7d4: 0x24a52ca8  addiu       $a1, $a1, 0x2CA8
    ctx->pc = 0x17e7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11432));
    // 0x17e7d8: 0xffbf0450  sd          $ra, 0x450($sp)
    ctx->pc = 0x17e7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 31));
    // 0x17e7dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17e7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e7e0: 0x8ee2c744  lw          $v0, -0x38BC($s7)
    ctx->pc = 0x17e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294952772)));
    // 0x17e7e4: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x17e7e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17e7e8: 0x7fb60470  sq          $s6, 0x470($sp)
    ctx->pc = 0x17e7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 22));
    // 0x17e7ec: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x17E7ECu;
    SET_GPR_U32(ctx, 31, 0x17E7F4u);
    ctx->pc = 0x17E7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E7ECu;
            // 0x17e7f0: 0x8c560004  lw          $s6, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7F4u; }
        if (ctx->pc != 0x17E7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7F4u; }
        if (ctx->pc != 0x17E7F4u) { return; }
    }
    ctx->pc = 0x17E7F4u;
    // 0x17e7f4: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x17e7f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e7f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17E7F8u;
    {
        const bool branch_taken_0x17e7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E7F8u;
            // 0x17e7fc: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e7f8) {
            ctx->pc = 0x17E804u;
            goto label_17e804;
        }
    }
    ctx->pc = 0x17E800u;
label_17e800:
    // 0x17e800: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x17e800u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_17e804:
    // 0x17e804: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E804u;
    {
        const bool branch_taken_0x17e804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E804u;
            // 0x17e808: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e804) {
            ctx->pc = 0x17E814u;
            goto label_17e814;
        }
    }
    ctx->pc = 0x17E80Cu;
    // 0x17e80c: 0x5462fffc  bnel        $v1, $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x17E80Cu;
    {
        const bool branch_taken_0x17e80c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17e80c) {
            ctx->pc = 0x17E810u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17E80Cu;
            // 0x17e810: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17E800u;
            runtime->cooperativeGuestYield();
            goto label_17e800;
        }
    }
    ctx->pc = 0x17E814u;
label_17e814:
    // 0x17e814: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x17e814u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e818: 0xc05e996  jal         func_17A658
    ctx->pc = 0x17E818u;
    SET_GPR_U32(ctx, 31, 0x17E820u);
    ctx->pc = 0x17E81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E818u;
            // 0x17e81c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E820u; }
        if (ctx->pc != 0x17E820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E820u; }
        if (ctx->pc != 0x17E820u) { return; }
    }
    ctx->pc = 0x17E820u;
    // 0x17e820: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17e820u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e824: 0x1240003c  beqz        $s2, . + 4 + (0x3C << 2)
    ctx->pc = 0x17E824u;
    {
        const bool branch_taken_0x17e824 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E824u;
            // 0x17e828: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e824) {
            ctx->pc = 0x17E918u;
            goto label_17e918;
        }
    }
    ctx->pc = 0x17E82Cu;
    // 0x17e82c: 0xc05e9ea  jal         func_17A7A8
    ctx->pc = 0x17E82Cu;
    SET_GPR_U32(ctx, 31, 0x17E834u);
    ctx->pc = 0x17E830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E82Cu;
            // 0x17e830: 0x26510004  addiu       $s1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A8u;
    if (runtime->hasFunction(0x17A7A8u)) {
        auto targetFn = runtime->lookupFunction(0x17A7A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E834u; }
        if (ctx->pc != 0x17E834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A7A8_0x17a7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E834u; }
        if (ctx->pc != 0x17E834u) { return; }
    }
    ctx->pc = 0x17E834u;
    // 0x17e834: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17e834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e838: 0xc06196a  jal         func_1865A8
    ctx->pc = 0x17E838u;
    SET_GPR_U32(ctx, 31, 0x17E840u);
    ctx->pc = 0x17E83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E838u;
            // 0x17e83c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1865A8u;
    if (runtime->hasFunction(0x1865A8u)) {
        auto targetFn = runtime->lookupFunction(0x1865A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E840u; }
        if (ctx->pc != 0x17E840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001865A8_0x1865a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E840u; }
        if (ctx->pc != 0x17E840u) { return; }
    }
    ctx->pc = 0x17E840u;
    // 0x17e840: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17e840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17e844: 0xc05eb30  jal         func_17ACC0
    ctx->pc = 0x17E844u;
    SET_GPR_U32(ctx, 31, 0x17E84Cu);
    ctx->pc = 0x17E848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E844u;
            // 0x17e848: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17ACC0u;
    if (runtime->hasFunction(0x17ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x17ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E84Cu; }
        if (ctx->pc != 0x17E84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17acc0_0x17ace0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E84Cu; }
        if (ctx->pc != 0x17E84Cu) { return; }
    }
    ctx->pc = 0x17E84Cu;
    // 0x17e84c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x17e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x17e850: 0x27b30240  addiu       $s3, $sp, 0x240
    ctx->pc = 0x17e850u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x17e854: 0x2442d8a8  addiu       $v0, $v0, -0x2758
    ctx->pc = 0x17e854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957224));
    // 0x17e858: 0xafb10038  sw          $s1, 0x38($sp)
    ctx->pc = 0x17e858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 17));
    // 0x17e85c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x17e85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x17e860: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17e860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e864: 0xafb00034  sw          $s0, 0x34($sp)
    ctx->pc = 0x17e864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 16));
    // 0x17e868: 0xc0a2644  jal         func_289910
    ctx->pc = 0x17E868u;
    SET_GPR_U32(ctx, 31, 0x17E870u);
    ctx->pc = 0x17E86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E868u;
            // 0x17e86c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E870u; }
        if (ctx->pc != 0x17E870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E870u; }
        if (ctx->pc != 0x17E870u) { return; }
    }
    ctx->pc = 0x17E870u;
    // 0x17e870: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x17E870u;
    SET_GPR_U32(ctx, 31, 0x17E878u);
    ctx->pc = 0x17E874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E870u;
            // 0x17e874: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E878u; }
        if (ctx->pc != 0x17E878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E878u; }
        if (ctx->pc != 0x17E878u) { return; }
    }
    ctx->pc = 0x17E878u;
    // 0x17e878: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x17e878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x17e87c: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x17e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x17e880: 0x8042ffff  lb          $v0, -0x1($v0)
    ctx->pc = 0x17e880u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x17e884: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17E884u;
    {
        const bool branch_taken_0x17e884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e884) {
            ctx->pc = 0x17E888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17E884u;
            // 0x17e888: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17E8A0u;
            goto label_17e8a0;
        }
    }
    ctx->pc = 0x17E88Cu;
    // 0x17e88c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x17e88cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x17e890: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17e890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e894: 0xc0a253d  jal         func_2894F4
    ctx->pc = 0x17E894u;
    SET_GPR_U32(ctx, 31, 0x17E89Cu);
    ctx->pc = 0x17E898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E894u;
            // 0x17e898: 0x24a51800  addiu       $a1, $a1, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2894F4u;
    if (runtime->hasFunction(0x2894F4u)) {
        auto targetFn = runtime->lookupFunction(0x2894F4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E89Cu; }
        if (ctx->pc != 0x17E89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002894F4_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E89Cu; }
        if (ctx->pc != 0x17E89Cu) { return; }
    }
    ctx->pc = 0x17E89Cu;
    // 0x17e89c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17e89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_17e8a0:
    // 0x17e8a0: 0xc0a2644  jal         func_289910
    ctx->pc = 0x17E8A0u;
    SET_GPR_U32(ctx, 31, 0x17E8A8u);
    ctx->pc = 0x17E8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E8A0u;
            // 0x17e8a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8A8u; }
        if (ctx->pc != 0x17E8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8A8u; }
        if (ctx->pc != 0x17E8A8u) { return; }
    }
    ctx->pc = 0x17E8A8u;
    // 0x17e8a8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x17e8a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x17e8ac: 0x27b10440  addiu       $s1, $sp, 0x440
    ctx->pc = 0x17e8acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    // 0x17e8b0: 0x8e05c740  lw          $a1, -0x38C0($s0)
    ctx->pc = 0x17e8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952768)));
    // 0x17e8b4: 0xafa00440  sw          $zero, 0x440($sp)
    ctx->pc = 0x17e8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 0));
    // 0x17e8b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17e8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8bc: 0xafa00444  sw          $zero, 0x444($sp)
    ctx->pc = 0x17e8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1092), GPR_U32(ctx, 0));
    // 0x17e8c0: 0xc060342  jal         func_180D08
    ctx->pc = 0x17E8C0u;
    SET_GPR_U32(ctx, 31, 0x17E8C8u);
    ctx->pc = 0x17E8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E8C0u;
            // 0x17e8c4: 0xafa00448  sw          $zero, 0x448($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1096), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180D08u;
    if (runtime->hasFunction(0x180D08u)) {
        auto targetFn = runtime->lookupFunction(0x180D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8C8u; }
        if (ctx->pc != 0x17E8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180D08_0x180d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8C8u; }
        if (ctx->pc != 0x17E8C8u) { return; }
    }
    ctx->pc = 0x17E8C8u;
    // 0x17e8c8: 0x8e05c740  lw          $a1, -0x38C0($s0)
    ctx->pc = 0x17e8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952768)));
    // 0x17e8cc: 0xc060336  jal         func_180CD8
    ctx->pc = 0x17E8CCu;
    SET_GPR_U32(ctx, 31, 0x17E8D4u);
    ctx->pc = 0x17E8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E8CCu;
            // 0x17e8d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD8u;
    if (runtime->hasFunction(0x180CD8u)) {
        auto targetFn = runtime->lookupFunction(0x180CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8D4u; }
        if (ctx->pc != 0x17E8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180CD8_0x180cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8D4u; }
        if (ctx->pc != 0x17E8D4u) { return; }
    }
    ctx->pc = 0x17E8D4u;
    // 0x17e8d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17e8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8d8: 0xc06037c  jal         func_180DF0
    ctx->pc = 0x17E8D8u;
    SET_GPR_U32(ctx, 31, 0x17E8E0u);
    ctx->pc = 0x17E8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E8D8u;
            // 0x17e8dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180DF0u;
    if (runtime->hasFunction(0x180DF0u)) {
        auto targetFn = runtime->lookupFunction(0x180DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8E0u; }
        if (ctx->pc != 0x17E8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_180df0_0x180e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8E0u; }
        if (ctx->pc != 0x17E8E0u) { return; }
    }
    ctx->pc = 0x17E8E0u;
    // 0x17e8e0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x17e8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17e8e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17e8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8e8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x17e8e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8ec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x17e8ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8f0: 0xc060024  jal         func_180090
    ctx->pc = 0x17E8F0u;
    SET_GPR_U32(ctx, 31, 0x17E8F8u);
    ctx->pc = 0x17E8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E8F0u;
            // 0x17e8f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180090u;
    if (runtime->hasFunction(0x180090u)) {
        auto targetFn = runtime->lookupFunction(0x180090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8F8u; }
        if (ctx->pc != 0x17E8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180090_0x180090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8F8u; }
        if (ctx->pc != 0x17E8F8u) { return; }
    }
    ctx->pc = 0x17E8F8u;
    // 0x17e8f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17e8f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8fc: 0xc05ebba  jal         func_17AEE8
    ctx->pc = 0x17E8FCu;
    SET_GPR_U32(ctx, 31, 0x17E904u);
    ctx->pc = 0x17E900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E8FCu;
            // 0x17e900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AEE8u;
    if (runtime->hasFunction(0x17AEE8u)) {
        auto targetFn = runtime->lookupFunction(0x17AEE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E904u; }
        if (ctx->pc != 0x17E904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017AEE8_0x17aee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E904u; }
        if (ctx->pc != 0x17E904u) { return; }
    }
    ctx->pc = 0x17E904u;
    // 0x17e904: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x17E904u;
    SET_GPR_U32(ctx, 31, 0x17E90Cu);
    ctx->pc = 0x17E908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E904u;
            // 0x17e908: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E90Cu; }
        if (ctx->pc != 0x17E90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E90Cu; }
        if (ctx->pc != 0x17E90Cu) { return; }
    }
    ctx->pc = 0x17E90Cu;
    // 0x17e90c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e910: 0xc08f5f4  jal         func_23D7D0
    ctx->pc = 0x17E910u;
    SET_GPR_U32(ctx, 31, 0x17E918u);
    ctx->pc = 0x17E914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E910u;
            // 0x17e914: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23D7D0u;
    if (runtime->hasFunction(0x23D7D0u)) {
        auto targetFn = runtime->lookupFunction(0x23D7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E918u; }
        if (ctx->pc != 0x17E918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23d7d0_0x23d800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E918u; }
        if (ctx->pc != 0x17E918u) { return; }
    }
    ctx->pc = 0x17E918u;
label_17e918:
    // 0x17e918: 0x8ee4c744  lw          $a0, -0x38BC($s7)
    ctx->pc = 0x17e918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294952772)));
    // 0x17e91c: 0xc060342  jal         func_180D08
    ctx->pc = 0x17E91Cu;
    SET_GPR_U32(ctx, 31, 0x17E924u);
    ctx->pc = 0x17E920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E91Cu;
            // 0x17e920: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180D08u;
    if (runtime->hasFunction(0x180D08u)) {
        auto targetFn = runtime->lookupFunction(0x180D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E924u; }
        if (ctx->pc != 0x17E924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180D08_0x180d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E924u; }
        if (ctx->pc != 0x17E924u) { return; }
    }
    ctx->pc = 0x17E924u;
    // 0x17e924: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17e924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e928: 0x7bb004d0  lq          $s0, 0x4D0($sp)
    ctx->pc = 0x17e928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x17e92c: 0x7bb104c0  lq          $s1, 0x4C0($sp)
    ctx->pc = 0x17e92cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x17e930: 0x7bb204b0  lq          $s2, 0x4B0($sp)
    ctx->pc = 0x17e930u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x17e934: 0x7bb304a0  lq          $s3, 0x4A0($sp)
    ctx->pc = 0x17e934u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x17e938: 0x7bb40490  lq          $s4, 0x490($sp)
    ctx->pc = 0x17e938u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x17e93c: 0x7bb50480  lq          $s5, 0x480($sp)
    ctx->pc = 0x17e93cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x17e940: 0x7bb60470  lq          $s6, 0x470($sp)
    ctx->pc = 0x17e940u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x17e944: 0x7bb70460  lq          $s7, 0x460($sp)
    ctx->pc = 0x17e944u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x17e948: 0xdfbf0450  ld          $ra, 0x450($sp)
    ctx->pc = 0x17e948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x17e94c: 0x3e00008  jr          $ra
    ctx->pc = 0x17E94Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E94Cu;
            // 0x17e950: 0x27bd04e0  addiu       $sp, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E800u: goto label_17e800;
            case 0x17E804u: goto label_17e804;
            case 0x17E814u: goto label_17e814;
            case 0x17E8A0u: goto label_17e8a0;
            case 0x17E918u: goto label_17e918;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E954u;
    // 0x17e954: 0x0  nop
    ctx->pc = 0x17e954u;
    // NOP
}
