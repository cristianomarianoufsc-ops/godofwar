#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9358
// Address: 0x1b9358 - 0x1b9718
void sub_001B9358_0x1b9358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9358_0x1b9358");
#endif

    ctx->pc = 0x1b9358u;

    // 0x1b9358: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b9358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b935c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b935cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b9360: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1b9360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1b9364: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b9364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9368: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1b9368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1b936c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1b936cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1b9370: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b9370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b9374: 0x8e421528  lw          $v0, 0x1528($s2)
    ctx->pc = 0x1b9374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5416)));
    // 0x1b9378: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B9378u;
    {
        const bool branch_taken_0x1b9378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B937Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9378u;
            // 0x1b937c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9378) {
            ctx->pc = 0x1B93A4u;
            goto label_1b93a4;
        }
    }
    ctx->pc = 0x1B9380u;
    // 0x1b9380: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B9380u;
    SET_GPR_U32(ctx, 31, 0x1B9388u);
    ctx->pc = 0x1B9384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9380u;
            // 0x1b9384: 0xae400204  sw          $zero, 0x204($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 516), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9388u; }
        if (ctx->pc != 0x1B9388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9388u; }
        if (ctx->pc != 0x1B9388u) { return; }
    }
    ctx->pc = 0x1B9388u;
    // 0x1b9388: 0xc06e4ce  jal         func_1B9338
    ctx->pc = 0x1B9388u;
    SET_GPR_U32(ctx, 31, 0x1B9390u);
    ctx->pc = 0x1B938Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9388u;
            // 0x1b938c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9338u;
    if (runtime->hasFunction(0x1B9338u)) {
        auto targetFn = runtime->lookupFunction(0x1B9338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9390u; }
        if (ctx->pc != 0x1B9390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9338_0x1b9338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9390u; }
        if (ctx->pc != 0x1B9390u) { return; }
    }
    ctx->pc = 0x1B9390u;
    // 0x1b9390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b9390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9394: 0xae401528  sw          $zero, 0x1528($s2)
    ctx->pc = 0x1b9394u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5416), GPR_U32(ctx, 0));
    // 0x1b9398: 0xae4201bc  sw          $v0, 0x1BC($s2)
    ctx->pc = 0x1b9398u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 2));
    // 0x1b939c: 0xae401548  sw          $zero, 0x1548($s2)
    ctx->pc = 0x1b939cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5448), GPR_U32(ctx, 0));
    // 0x1b93a0: 0xae401540  sw          $zero, 0x1540($s2)
    ctx->pc = 0x1b93a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5440), GPR_U32(ctx, 0));
label_1b93a4:
    // 0x1b93a4: 0x8e42152c  lw          $v0, 0x152C($s2)
    ctx->pc = 0x1b93a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5420)));
    // 0x1b93a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B93A8u;
    {
        const bool branch_taken_0x1b93a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B93ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B93A8u;
            // 0x1b93ac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b93a8) {
            ctx->pc = 0x1B93C8u;
            goto label_1b93c8;
        }
    }
    ctx->pc = 0x1B93B0u;
    // 0x1b93b0: 0xae400208  sw          $zero, 0x208($s2)
    ctx->pc = 0x1b93b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 520), GPR_U32(ctx, 0));
    // 0x1b93b4: 0xae500278  sw          $s0, 0x278($s2)
    ctx->pc = 0x1b93b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 632), GPR_U32(ctx, 16));
    // 0x1b93b8: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B93B8u;
    SET_GPR_U32(ctx, 31, 0x1B93C0u);
    ctx->pc = 0x1B93BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B93B8u;
            // 0x1b93bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B93C0u; }
        if (ctx->pc != 0x1B93C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B93C0u; }
        if (ctx->pc != 0x1B93C0u) { return; }
    }
    ctx->pc = 0x1B93C0u;
    // 0x1b93c0: 0xae5001bc  sw          $s0, 0x1BC($s2)
    ctx->pc = 0x1b93c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 16));
    // 0x1b93c4: 0xae40152c  sw          $zero, 0x152C($s2)
    ctx->pc = 0x1b93c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5420), GPR_U32(ctx, 0));
label_1b93c8:
    // 0x1b93c8: 0x8e421530  lw          $v0, 0x1530($s2)
    ctx->pc = 0x1b93c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5424)));
    // 0x1b93cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B93CCu;
    {
        const bool branch_taken_0x1b93cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B93D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B93CCu;
            // 0x1b93d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b93cc) {
            ctx->pc = 0x1B93E4u;
            goto label_1b93e4;
        }
    }
    ctx->pc = 0x1B93D4u;
    // 0x1b93d4: 0xae401530  sw          $zero, 0x1530($s2)
    ctx->pc = 0x1b93d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5424), GPR_U32(ctx, 0));
    // 0x1b93d8: 0xae400228  sw          $zero, 0x228($s2)
    ctx->pc = 0x1b93d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 552), GPR_U32(ctx, 0));
    // 0x1b93dc: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B93DCu;
    SET_GPR_U32(ctx, 31, 0x1B93E4u);
    ctx->pc = 0x1B93E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B93DCu;
            // 0x1b93e0: 0xae40005c  sw          $zero, 0x5C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B93E4u; }
        if (ctx->pc != 0x1B93E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B93E4u; }
        if (ctx->pc != 0x1B93E4u) { return; }
    }
    ctx->pc = 0x1B93E4u;
label_1b93e4:
    // 0x1b93e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b93e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b93e8: 0xc06e338  jal         func_1B8CE0
    ctx->pc = 0x1B93E8u;
    SET_GPR_U32(ctx, 31, 0x1B93F0u);
    ctx->pc = 0x1B93ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B93E8u;
            // 0x1b93ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8CE0u;
    if (runtime->hasFunction(0x1B8CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B93F0u; }
        if (ctx->pc != 0x1B93F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8CE0_0x1b8ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B93F0u; }
        if (ctx->pc != 0x1B93F0u) { return; }
    }
    ctx->pc = 0x1B93F0u;
    // 0x1b93f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b93f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b93f4: 0x10a000a0  beqz        $a1, . + 4 + (0xA0 << 2)
    ctx->pc = 0x1B93F4u;
    {
        const bool branch_taken_0x1b93f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B93F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B93F4u;
            // 0x1b93f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b93f4) {
            ctx->pc = 0x1B9678u;
            goto label_1b9678;
        }
    }
    ctx->pc = 0x1B93FCu;
    // 0x1b93fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b93fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9400: 0x18a0001b  blez        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B9400u;
    {
        const bool branch_taken_0x1b9400 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1B9404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9400u;
            // 0x1b9404: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9400) {
            ctx->pc = 0x1B9470u;
            goto label_1b9470;
        }
    }
    ctx->pc = 0x1B9408u;
    // 0x1b9408: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x1b9408u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b940c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b940cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_1b9410:
    // 0x1b9410: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x1b9410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x1b9414: 0x8c63cba4  lw          $v1, -0x345C($v1)
    ctx->pc = 0x1b9414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953892)));
    // 0x1b9418: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b9418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b941c: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x1b941cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1b9420: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b9420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b9424: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b9424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9428: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1b9428u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b942c: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B942Cu;
    {
        const bool branch_taken_0x1b942c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B9430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B942Cu;
            // 0x1b9430: 0x90460000  lbu         $a2, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b942c) {
            ctx->pc = 0x1B9448u;
            goto label_1b9448;
        }
    }
    ctx->pc = 0x1B9434u;
    // 0x1b9434: 0x80420001  lb          $v0, 0x1($v0)
    ctx->pc = 0x1b9434u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1b9438: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9438u;
    {
        const bool branch_taken_0x1b9438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b9438) {
            ctx->pc = 0x1B9448u;
            goto label_1b9448;
        }
    }
    ctx->pc = 0x1B9440u;
    // 0x1b9440: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9440u;
    {
        const bool branch_taken_0x1b9440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9440u;
            // 0x1b9444: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9440) {
            ctx->pc = 0x1B9460u;
            goto label_1b9460;
        }
    }
    ctx->pc = 0x1B9448u;
label_1b9448:
    // 0x1b9448: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9448u;
    {
        const bool branch_taken_0x1b9448 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B944Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9448u;
            // 0x1b944c: 0x61600  sll         $v0, $a2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9448) {
            ctx->pc = 0x1B9460u;
            goto label_1b9460;
        }
    }
    ctx->pc = 0x1B9450u;
    // 0x1b9450: 0xf01823  subu        $v1, $a3, $s0
    ctx->pc = 0x1b9450u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x1b9454: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1b9454u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1b9458: 0x3842002a  xori        $v0, $v0, 0x2A
    ctx->pc = 0x1b9458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)42);
    // 0x1b945c: 0x62400a  movz        $t0, $v1, $v0
    ctx->pc = 0x1b945cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_1b9460:
    // 0x1b9460: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1b9460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1b9464: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x1b9464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1b9468: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1B9468u;
    {
        const bool branch_taken_0x1b9468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B946Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9468u;
            // 0x1b946c: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9468) {
            ctx->pc = 0x1B9410u;
            runtime->cooperativeGuestYield();
            goto label_1b9410;
        }
    }
    ctx->pc = 0x1B9470u;
label_1b9470:
    // 0x1b9470: 0xb01023  subu        $v0, $a1, $s0
    ctx->pc = 0x1b9470u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1b9474: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B9474u;
    {
        const bool branch_taken_0x1b9474 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1B9478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9474u;
            // 0x1b9478: 0x2444ffff  addiu       $a0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9474) {
            ctx->pc = 0x1B9498u;
            goto label_1b9498;
        }
    }
    ctx->pc = 0x1B947Cu;
    // 0x1b947c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9480: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b9480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b9484: 0x8c63cba4  lw          $v1, -0x345C($v1)
    ctx->pc = 0x1b9484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953892)));
    // 0x1b9488: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b9488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b948c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b948cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b9490: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b9490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9494: 0xae4200a0  sw          $v0, 0xA0($s2)
    ctx->pc = 0x1b9494u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
label_1b9498:
    // 0x1b9498: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1b9498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b949c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B949Cu;
    {
        const bool branch_taken_0x1b949c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B94A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B949Cu;
            // 0x1b94a0: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b949c) {
            ctx->pc = 0x1B94C4u;
            goto label_1b94c4;
        }
    }
    ctx->pc = 0x1B94A4u;
    // 0x1b94a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b94a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b94a8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b94a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b94ac: 0x8c63cba4  lw          $v1, -0x345C($v1)
    ctx->pc = 0x1b94acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953892)));
    // 0x1b94b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b94b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b94b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b94b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b94b8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1b94b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b94bc: 0xae4200a4  sw          $v0, 0xA4($s2)
    ctx->pc = 0x1b94bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 2));
    // 0x1b94c0: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x1b94c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_1b94c4:
    // 0x1b94c4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B94C4u;
    {
        const bool branch_taken_0x1b94c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B94C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B94C4u;
            // 0x1b94c8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b94c4) {
            ctx->pc = 0x1B94E4u;
            goto label_1b94e4;
        }
    }
    ctx->pc = 0x1B94CCu;
    // 0x1b94cc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b94ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b94d0: 0x8c63cba4  lw          $v1, -0x345C($v1)
    ctx->pc = 0x1b94d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953892)));
    // 0x1b94d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b94d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b94d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b94d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b94dc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1b94dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b94e0: 0xae4200a8  sw          $v0, 0xA8($s2)
    ctx->pc = 0x1b94e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 2));
label_1b94e4:
    // 0x1b94e4: 0x18800008  blez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B94E4u;
    {
        const bool branch_taken_0x1b94e4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1B94E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B94E4u;
            // 0x1b94e8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b94e4) {
            ctx->pc = 0x1B9508u;
            goto label_1b9508;
        }
    }
    ctx->pc = 0x1B94ECu;
    // 0x1b94ec: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b94ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b94f0: 0x8c63cba4  lw          $v1, -0x345C($v1)
    ctx->pc = 0x1b94f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953892)));
    // 0x1b94f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b94f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b94f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b94f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b94fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b94fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b9500: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1b9500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b9504: 0xae4200ac  sw          $v0, 0xAC($s2)
    ctx->pc = 0x1b9504u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 2));
label_1b9508:
    // 0x1b9508: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1b9508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b950c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B950Cu;
    {
        const bool branch_taken_0x1b950c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B950Cu;
            // 0x1b9510: 0x28820003  slti        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b950c) {
            ctx->pc = 0x1B9538u;
            goto label_1b9538;
        }
    }
    ctx->pc = 0x1B9514u;
    // 0x1b9514: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b9514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9518: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b9518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b951c: 0x8c63cba4  lw          $v1, -0x345C($v1)
    ctx->pc = 0x1b951cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953892)));
    // 0x1b9520: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b9520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b9524: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b9524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b9528: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b9528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b952c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1b952cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b9530: 0xae4200b0  sw          $v0, 0xB0($s2)
    ctx->pc = 0x1b9530u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
    // 0x1b9534: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x1b9534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_1b9538:
    // 0x1b9538: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B9538u;
    {
        const bool branch_taken_0x1b9538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B953Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9538u;
            // 0x1b953c: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9538) {
            ctx->pc = 0x1B9564u;
            goto label_1b9564;
        }
    }
    ctx->pc = 0x1B9540u;
    // 0x1b9540: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b9540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9544: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b9544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b9548: 0x8c63cba4  lw          $v1, -0x345C($v1)
    ctx->pc = 0x1b9548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953892)));
    // 0x1b954c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b954cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b9550: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b9550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b9554: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b9554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b9558: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1b9558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b955c: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x1b955cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
    // 0x1b9560: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1b9560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_1b9564:
    // 0x1b9564: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B9564u;
    {
        const bool branch_taken_0x1b9564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9564u;
            // 0x1b9568: 0x28820005  slti        $v0, $a0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9564) {
            ctx->pc = 0x1B9590u;
            goto label_1b9590;
        }
    }
    ctx->pc = 0x1B956Cu;
    // 0x1b956c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b956cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9570: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b9570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b9574: 0x8c63cba4  lw          $v1, -0x345C($v1)
    ctx->pc = 0x1b9574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953892)));
    // 0x1b9578: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b9578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b957c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b957cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b9580: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b9580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b9584: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1b9584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b9588: 0xae4200b8  sw          $v0, 0xB8($s2)
    ctx->pc = 0x1b9588u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 2));
    // 0x1b958c: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x1b958cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
label_1b9590:
    // 0x1b9590: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B9590u;
    {
        const bool branch_taken_0x1b9590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9590u;
            // 0x1b9594: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9590) {
            ctx->pc = 0x1B95B4u;
            goto label_1b95b4;
        }
    }
    ctx->pc = 0x1B9598u;
    // 0x1b9598: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b9598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b959c: 0x8c63cba4  lw          $v1, -0x345C($v1)
    ctx->pc = 0x1b959cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953892)));
    // 0x1b95a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b95a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b95a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b95a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b95a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b95a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b95ac: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1b95acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1b95b0: 0xae4200bc  sw          $v0, 0xBC($s2)
    ctx->pc = 0x1b95b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 2));
label_1b95b4:
    // 0x1b95b4: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B95B4u;
    {
        const bool branch_taken_0x1b95b4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B95B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B95B4u;
            // 0x1b95b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b95b4) {
            ctx->pc = 0x1B95C4u;
            goto label_1b95c4;
        }
    }
    ctx->pc = 0x1B95BCu;
    // 0x1b95bc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1B95BCu;
    {
        const bool branch_taken_0x1b95bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B95C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B95BCu;
            // 0x1b95c0: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b95bc) {
            ctx->pc = 0x1B9638u;
            goto label_1b9638;
        }
    }
    ctx->pc = 0x1B95C4u;
label_1b95c4:
    // 0x1b95c4: 0x15020005  bne         $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B95C4u;
    {
        const bool branch_taken_0x1b95c4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B95C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B95C4u;
            // 0x1b95c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b95c4) {
            ctx->pc = 0x1B95DCu;
            goto label_1b95dc;
        }
    }
    ctx->pc = 0x1B95CCu;
    // 0x1b95cc: 0x8e4200ac  lw          $v0, 0xAC($s2)
    ctx->pc = 0x1b95ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x1b95d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b95d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b95d4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B95D4u;
    {
        const bool branch_taken_0x1b95d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B95D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B95D4u;
            // 0x1b95d8: 0xae4200ac  sw          $v0, 0xAC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b95d4) {
            ctx->pc = 0x1B9638u;
            goto label_1b9638;
        }
    }
    ctx->pc = 0x1B95DCu;
label_1b95dc:
    // 0x1b95dc: 0x15020005  bne         $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B95DCu;
    {
        const bool branch_taken_0x1b95dc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B95E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B95DCu;
            // 0x1b95e0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b95dc) {
            ctx->pc = 0x1B95F4u;
            goto label_1b95f4;
        }
    }
    ctx->pc = 0x1B95E4u;
    // 0x1b95e4: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x1b95e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x1b95e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b95e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b95ec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B95ECu;
    {
        const bool branch_taken_0x1b95ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B95F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B95ECu;
            // 0x1b95f0: 0xae4200b0  sw          $v0, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b95ec) {
            ctx->pc = 0x1B9638u;
            goto label_1b9638;
        }
    }
    ctx->pc = 0x1B95F4u;
label_1b95f4:
    // 0x1b95f4: 0x15020005  bne         $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B95F4u;
    {
        const bool branch_taken_0x1b95f4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B95F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B95F4u;
            // 0x1b95f8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b95f4) {
            ctx->pc = 0x1B960Cu;
            goto label_1b960c;
        }
    }
    ctx->pc = 0x1B95FCu;
    // 0x1b95fc: 0x8e4200b4  lw          $v0, 0xB4($s2)
    ctx->pc = 0x1b95fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1b9600: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b9600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b9604: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B9604u;
    {
        const bool branch_taken_0x1b9604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9604u;
            // 0x1b9608: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9604) {
            ctx->pc = 0x1B9638u;
            goto label_1b9638;
        }
    }
    ctx->pc = 0x1B960Cu;
label_1b960c:
    // 0x1b960c: 0x15020005  bne         $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B960Cu;
    {
        const bool branch_taken_0x1b960c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B9610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B960Cu;
            // 0x1b9610: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b960c) {
            ctx->pc = 0x1B9624u;
            goto label_1b9624;
        }
    }
    ctx->pc = 0x1B9614u;
    // 0x1b9614: 0x8e4200b8  lw          $v0, 0xB8($s2)
    ctx->pc = 0x1b9614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x1b9618: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b9618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b961c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B961Cu;
    {
        const bool branch_taken_0x1b961c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B961Cu;
            // 0x1b9620: 0xae4200b8  sw          $v0, 0xB8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b961c) {
            ctx->pc = 0x1B9638u;
            goto label_1b9638;
        }
    }
    ctx->pc = 0x1B9624u;
label_1b9624:
    // 0x1b9624: 0x15020005  bne         $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9624u;
    {
        const bool branch_taken_0x1b9624 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B9628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9624u;
            // 0x1b9628: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9624) {
            ctx->pc = 0x1B963Cu;
            goto label_1b963c;
        }
    }
    ctx->pc = 0x1B962Cu;
    // 0x1b962c: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x1b962cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x1b9630: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b9630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b9634: 0xae4200bc  sw          $v0, 0xBC($s2)
    ctx->pc = 0x1b9634u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 2));
label_1b9638:
    // 0x1b9638: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b9638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b963c:
    // 0x1b963c: 0xae480278  sw          $t0, 0x278($s2)
    ctx->pc = 0x1b963cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 632), GPR_U32(ctx, 8));
    // 0x1b9640: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x1b9640u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b9644: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1b9644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b9648: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b9648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b964c: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B964Cu;
    SET_GPR_U32(ctx, 31, 0x1B9654u);
    ctx->pc = 0x1B9650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B964Cu;
            // 0x1b9650: 0xae420208  sw          $v0, 0x208($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9654u; }
        if (ctx->pc != 0x1B9654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9654u; }
        if (ctx->pc != 0x1B9654u) { return; }
    }
    ctx->pc = 0x1B9654u;
    // 0x1b9654: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9654u;
    {
        const bool branch_taken_0x1b9654 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9654u;
            // 0x1b9658: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9654) {
            ctx->pc = 0x1B9664u;
            goto label_1b9664;
        }
    }
    ctx->pc = 0x1B965Cu;
    // 0x1b965c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B965Cu;
    {
        const bool branch_taken_0x1b965c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B965Cu;
            // 0x1b9660: 0xae40152c  sw          $zero, 0x152C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5420), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b965c) {
            ctx->pc = 0x1B966Cu;
            goto label_1b966c;
        }
    }
    ctx->pc = 0x1B9664u;
label_1b9664:
    // 0x1b9664: 0xc06e642  jal         func_1B9908
    ctx->pc = 0x1B9664u;
    SET_GPR_U32(ctx, 31, 0x1B966Cu);
    ctx->pc = 0x1B9668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9664u;
            // 0x1b9668: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9908u;
    if (runtime->hasFunction(0x1B9908u)) {
        auto targetFn = runtime->lookupFunction(0x1B9908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B966Cu; }
        if (ctx->pc != 0x1B966Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9908_0x1b9908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B966Cu; }
        if (ctx->pc != 0x1B966Cu) { return; }
    }
    ctx->pc = 0x1B966Cu;
label_1b966c:
    // 0x1b966c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b966cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9670: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1B9670u;
    {
        const bool branch_taken_0x1b9670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9670u;
            // 0x1b9674: 0xae4201bc  sw          $v0, 0x1BC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9670) {
            ctx->pc = 0x1B96D8u;
            goto label_1b96d8;
        }
    }
    ctx->pc = 0x1B9678u;
label_1b9678:
    // 0x1b9678: 0x3c10002c  lui         $s0, 0x2C
    ctx->pc = 0x1b9678u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)44 << 16));
    // 0x1b967c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1b967cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1b9680: 0x261074b8  addiu       $s0, $s0, 0x74B8
    ctx->pc = 0x1b9680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29880));
    // 0x1b9684: 0x24a556d8  addiu       $a1, $a1, 0x56D8
    ctx->pc = 0x1b9684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22232));
    // 0x1b9688: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1b9688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b968c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1B968Cu;
    SET_GPR_U32(ctx, 31, 0x1B9694u);
    ctx->pc = 0x1B9690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B968Cu;
            // 0x1b9690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9694u; }
        if (ctx->pc != 0x1B9694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9694u; }
        if (ctx->pc != 0x1B9694u) { return; }
    }
    ctx->pc = 0x1B9694u;
    // 0x1b9694: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b9694u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9698: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1b9698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1b969c: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1b969cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x1b96a0: 0x244256e0  addiu       $v0, $v0, 0x56E0
    ctx->pc = 0x1b96a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22240));
    // 0x1b96a4: 0x246356e8  addiu       $v1, $v1, 0x56E8
    ctx->pc = 0x1b96a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22248));
    // 0x1b96a8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1b96a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b96ac: 0xae5000a0  sw          $s0, 0xA0($s2)
    ctx->pc = 0x1b96acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 16));
    // 0x1b96b0: 0xae510278  sw          $s1, 0x278($s2)
    ctx->pc = 0x1b96b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 632), GPR_U32(ctx, 17));
    // 0x1b96b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b96b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b96b8: 0xae4200ac  sw          $v0, 0xAC($s2)
    ctx->pc = 0x1b96b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 2));
    // 0x1b96bc: 0xae4300b0  sw          $v1, 0xB0($s2)
    ctx->pc = 0x1b96bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 3));
    // 0x1b96c0: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B96C0u;
    SET_GPR_U32(ctx, 31, 0x1B96C8u);
    ctx->pc = 0x1B96C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B96C0u;
            // 0x1b96c4: 0xae450208  sw          $a1, 0x208($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 520), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B96C8u; }
        if (ctx->pc != 0x1B96C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B96C8u; }
        if (ctx->pc != 0x1B96C8u) { return; }
    }
    ctx->pc = 0x1B96C8u;
    // 0x1b96c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b96c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b96cc: 0xc06e642  jal         func_1B9908
    ctx->pc = 0x1B96CCu;
    SET_GPR_U32(ctx, 31, 0x1B96D4u);
    ctx->pc = 0x1B96D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B96CCu;
            // 0x1b96d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9908u;
    if (runtime->hasFunction(0x1B9908u)) {
        auto targetFn = runtime->lookupFunction(0x1B9908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B96D4u; }
        if (ctx->pc != 0x1B96D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9908_0x1b9908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B96D4u; }
        if (ctx->pc != 0x1B96D4u) { return; }
    }
    ctx->pc = 0x1B96D4u;
    // 0x1b96d4: 0xae5101bc  sw          $s1, 0x1BC($s2)
    ctx->pc = 0x1b96d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 17));
label_1b96d8:
    // 0x1b96d8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1b96d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1b96dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b96dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b96e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b96e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b96e4: 0xae53152c  sw          $s3, 0x152C($s2)
    ctx->pc = 0x1b96e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5420), GPR_U32(ctx, 19));
    // 0x1b96e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b96e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b96ec: 0xae40027c  sw          $zero, 0x27C($s2)
    ctx->pc = 0x1b96ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 636), GPR_U32(ctx, 0));
    // 0x1b96f0: 0xc06e5c6  jal         func_1B9718
    ctx->pc = 0x1B96F0u;
    SET_GPR_U32(ctx, 31, 0x1B96F8u);
    ctx->pc = 0x1B96F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B96F0u;
            // 0x1b96f4: 0xe640153c  swc1        $f0, 0x153C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5436), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9718u;
    if (runtime->hasFunction(0x1B9718u)) {
        auto targetFn = runtime->lookupFunction(0x1B9718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B96F8u; }
        if (ctx->pc != 0x1B96F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9718_0x1b9718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B96F8u; }
        if (ctx->pc != 0x1B96F8u) { return; }
    }
    ctx->pc = 0x1B96F8u;
    // 0x1b96f8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1b96f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b96fc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1b96fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b9700: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b9700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b9704: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1b9704u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9708: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b970c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B970Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B970Cu;
            // 0x1b9710: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B93A4u: goto label_1b93a4;
            case 0x1B93C8u: goto label_1b93c8;
            case 0x1B93E4u: goto label_1b93e4;
            case 0x1B9410u: goto label_1b9410;
            case 0x1B9448u: goto label_1b9448;
            case 0x1B9460u: goto label_1b9460;
            case 0x1B9470u: goto label_1b9470;
            case 0x1B9498u: goto label_1b9498;
            case 0x1B94C4u: goto label_1b94c4;
            case 0x1B94E4u: goto label_1b94e4;
            case 0x1B9508u: goto label_1b9508;
            case 0x1B9538u: goto label_1b9538;
            case 0x1B9564u: goto label_1b9564;
            case 0x1B9590u: goto label_1b9590;
            case 0x1B95B4u: goto label_1b95b4;
            case 0x1B95C4u: goto label_1b95c4;
            case 0x1B95DCu: goto label_1b95dc;
            case 0x1B95F4u: goto label_1b95f4;
            case 0x1B960Cu: goto label_1b960c;
            case 0x1B9624u: goto label_1b9624;
            case 0x1B9638u: goto label_1b9638;
            case 0x1B963Cu: goto label_1b963c;
            case 0x1B9664u: goto label_1b9664;
            case 0x1B966Cu: goto label_1b966c;
            case 0x1B9678u: goto label_1b9678;
            case 0x1B96D8u: goto label_1b96d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B9714u;
    // 0x1b9714: 0x0  nop
    ctx->pc = 0x1b9714u;
    // NOP
}
