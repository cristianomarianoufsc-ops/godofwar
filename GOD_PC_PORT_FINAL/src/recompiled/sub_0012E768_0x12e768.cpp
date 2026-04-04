#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012E768
// Address: 0x12e768 - 0x12e8f0
void sub_0012E768_0x12e768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E768_0x12e768");
#endif

    ctx->pc = 0x12e768u;

    // 0x12e768: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12e768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12e76c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12e76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12e770: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x12e770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x12e774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12e774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12e778: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12e778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e77c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x12e77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x12e780: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x12e780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x12e784: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12e784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12e788: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12e788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12e78c: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x12e78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x12e790: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x12e790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x12e794: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x12e794u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x12e798: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x12e798u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x12e79c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12e79cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e7a0: 0x70c71389  pcpyld      $v0, $a2, $a3
    ctx->pc = 0x12e7a0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x12e7a4: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x12e7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
    // 0x12e7a8: 0x8e060148  lw          $a2, 0x148($s0)
    ctx->pc = 0x12e7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x12e7ac: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x12e7acu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12e7b0: 0x8e05013c  lw          $a1, 0x13C($s0)
    ctx->pc = 0x12e7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x12e7b4: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x12e7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x12e7b8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x12e7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x12e7bc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x12e7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x12e7c0: 0xc04bb40  jal         func_12ED00
    ctx->pc = 0x12E7C0u;
    SET_GPR_U32(ctx, 31, 0x12E7C8u);
    ctx->pc = 0x12E7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E7C0u;
            // 0x12e7c4: 0xc59818  mult        $s3, $a2, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ED00u;
    if (runtime->hasFunction(0x12ED00u)) {
        auto targetFn = runtime->lookupFunction(0x12ED00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E7C8u; }
        if (ctx->pc != 0x12E7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_12ed00_0x12ed78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E7C8u; }
        if (ctx->pc != 0x12E7C8u) { return; }
    }
    ctx->pc = 0x12E7C8u;
    // 0x12e7c8: 0xc04bcd2  jal         func_12F348
    ctx->pc = 0x12E7C8u;
    SET_GPR_U32(ctx, 31, 0x12E7D0u);
    ctx->pc = 0x12E7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E7C8u;
            // 0x12e7cc: 0x26040120  addiu       $a0, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F348u;
    if (runtime->hasFunction(0x12F348u)) {
        auto targetFn = runtime->lookupFunction(0x12F348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E7D0u; }
        if (ctx->pc != 0x12E7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_12f348_0x12f398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E7D0u; }
        if (ctx->pc != 0x12E7D0u) { return; }
    }
    ctx->pc = 0x12E7D0u;
    // 0x12e7d0: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x12e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x12e7d4: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x12e7d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12e7d8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x12e7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x12e7dc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x12E7DCu;
    {
        const bool branch_taken_0x12e7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E7DCu;
            // 0x12e7e0: 0x8e020140  lw          $v0, 0x140($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e7dc) {
            ctx->pc = 0x12E858u;
            goto label_12e858;
        }
    }
    ctx->pc = 0x12E7E4u;
    // 0x12e7e4: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x12E7E4u;
    {
        const bool branch_taken_0x12e7e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12E7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E7E4u;
            // 0x12e7e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e7e4) {
            ctx->pc = 0x12E848u;
            goto label_12e848;
        }
    }
    ctx->pc = 0x12E7ECu;
    // 0x12e7ec: 0x8e040184  lw          $a0, 0x184($s0)
    ctx->pc = 0x12e7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_12e7f0:
    // 0x12e7f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12e7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e7f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12e7f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e7f8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x12e7f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e7fc: 0x80880147  lb          $t0, 0x147($a0)
    ctx->pc = 0x12e7fcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 327)));
    // 0x12e800: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x12E800u;
    SET_GPR_U32(ctx, 31, 0x12E808u);
    ctx->pc = 0x12E804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E800u;
            // 0x12e804: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E808u; }
        if (ctx->pc != 0x12E808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E808u; }
        if (ctx->pc != 0x12E808u) { return; }
    }
    ctx->pc = 0x12E808u;
    // 0x12e808: 0x1a60000a  blez        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x12E808u;
    {
        const bool branch_taken_0x12e808 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x12E80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E808u;
            // 0x12e80c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e808) {
            ctx->pc = 0x12E834u;
            goto label_12e834;
        }
    }
    ctx->pc = 0x12E810u;
    // 0x12e810: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x12e810u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e814: 0x0  nop
    ctx->pc = 0x12e814u;
    // NOP
label_12e818:
    // 0x12e818: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x12e818u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e81c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12e81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12e820: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x12e820u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x12e824: 0x0  nop
    ctx->pc = 0x12e824u;
    // NOP
    // 0x12e828: 0x0  nop
    ctx->pc = 0x12e828u;
    // NOP
    // 0x12e82c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12E82Cu;
    {
        const bool branch_taken_0x12e82c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E82Cu;
            // 0x12e830: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e82c) {
            ctx->pc = 0x12E818u;
            runtime->cooperativeGuestYield();
            goto label_12e818;
        }
    }
    ctx->pc = 0x12E834u;
label_12e834:
    // 0x12e834: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x12e834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x12e838: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12e838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x12e83c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x12e83cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12e840: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12E840u;
    {
        const bool branch_taken_0x12e840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e840) {
            ctx->pc = 0x12E844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E840u;
            // 0x12e844: 0x8e040184  lw          $a0, 0x184($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E7F0u;
            runtime->cooperativeGuestYield();
            goto label_12e7f0;
        }
    }
    ctx->pc = 0x12E848u;
label_12e848:
    // 0x12e848: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x12e848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x12e84c: 0x80420147  lb          $v0, 0x147($v0)
    ctx->pc = 0x12e84cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 327)));
    // 0x12e850: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x12E850u;
    {
        const bool branch_taken_0x12e850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E850u;
            // 0x12e854: 0xae02014c  sw          $v0, 0x14C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e850) {
            ctx->pc = 0x12E8D0u;
            goto label_12e8d0;
        }
    }
    ctx->pc = 0x12E858u;
label_12e858:
    // 0x12e858: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x12E858u;
    {
        const bool branch_taken_0x12e858 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12E85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E858u;
            // 0x12e85c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e858) {
            ctx->pc = 0x12E8D0u;
            goto label_12e8d0;
        }
    }
    ctx->pc = 0x12E860u;
    // 0x12e860: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12e860u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e864: 0x0  nop
    ctx->pc = 0x12e864u;
    // NOP
label_12e868:
    // 0x12e868: 0x8e040184  lw          $a0, 0x184($s0)
    ctx->pc = 0x12e868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_12e86c:
    // 0x12e86c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12e86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e870: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12e870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e874: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x12e874u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e878: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x12E878u;
    SET_GPR_U32(ctx, 31, 0x12E880u);
    ctx->pc = 0x12E87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E878u;
            // 0x12e87c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E880u; }
        if (ctx->pc != 0x12E880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E880u; }
        if (ctx->pc != 0x12E880u) { return; }
    }
    ctx->pc = 0x12E880u;
    // 0x12e880: 0x1a60000a  blez        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x12E880u;
    {
        const bool branch_taken_0x12e880 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x12E884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E880u;
            // 0x12e884: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e880) {
            ctx->pc = 0x12E8ACu;
            goto label_12e8ac;
        }
    }
    ctx->pc = 0x12E888u;
    // 0x12e888: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x12e888u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e88c: 0x0  nop
    ctx->pc = 0x12e88cu;
    // NOP
label_12e890:
    // 0x12e890: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x12e890u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e894: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12e894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12e898: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x12e898u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x12e89c: 0x0  nop
    ctx->pc = 0x12e89cu;
    // NOP
    // 0x12e8a0: 0x0  nop
    ctx->pc = 0x12e8a0u;
    // NOP
    // 0x12e8a4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12E8A4u;
    {
        const bool branch_taken_0x12e8a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E8A4u;
            // 0x12e8a8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8a4) {
            ctx->pc = 0x12E890u;
            runtime->cooperativeGuestYield();
            goto label_12e890;
        }
    }
    ctx->pc = 0x12E8ACu;
label_12e8ac:
    // 0x12e8ac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12e8acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x12e8b0: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x12e8b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12e8b4: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x12E8B4u;
    {
        const bool branch_taken_0x12e8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e8b4) {
            ctx->pc = 0x12E8B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E8B4u;
            // 0x12e8b8: 0x8e040184  lw          $a0, 0x184($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E86Cu;
            runtime->cooperativeGuestYield();
            goto label_12e86c;
        }
    }
    ctx->pc = 0x12E8BCu;
    // 0x12e8bc: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x12e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x12e8c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12e8c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x12e8c4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x12e8c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12e8c8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x12E8C8u;
    {
        const bool branch_taken_0x12e8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E8C8u;
            // 0x12e8cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8c8) {
            ctx->pc = 0x12E868u;
            runtime->cooperativeGuestYield();
            goto label_12e868;
        }
    }
    ctx->pc = 0x12E8D0u;
label_12e8d0:
    // 0x12e8d0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x12e8d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12e8d4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x12e8d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12e8d8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x12e8d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12e8dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12e8dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12e8e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12e8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x12E8E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E8E4u;
            // 0x12e8e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12E7F0u: goto label_12e7f0;
            case 0x12E818u: goto label_12e818;
            case 0x12E834u: goto label_12e834;
            case 0x12E848u: goto label_12e848;
            case 0x12E858u: goto label_12e858;
            case 0x12E868u: goto label_12e868;
            case 0x12E86Cu: goto label_12e86c;
            case 0x12E890u: goto label_12e890;
            case 0x12E8ACu: goto label_12e8ac;
            case 0x12E8D0u: goto label_12e8d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12E8ECu;
    // 0x12e8ec: 0x0  nop
    ctx->pc = 0x12e8ecu;
    // NOP
}
