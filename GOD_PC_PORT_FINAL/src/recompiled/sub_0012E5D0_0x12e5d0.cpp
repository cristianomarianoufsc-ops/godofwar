#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012E5D0
// Address: 0x12e5d0 - 0x12e768
void sub_0012E5D0_0x12e5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E5D0_0x12e5d0");
#endif

    ctx->pc = 0x12e5d0u;

    // 0x12e5d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x12e5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x12e5d4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x12e5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x12e5d8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x12e5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x12e5dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12e5dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e5e0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x12e5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x12e5e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x12e5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x12e5e8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x12e5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x12e5ec: 0x26350178  addiu       $s5, $s1, 0x178
    ctx->pc = 0x12e5ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 376));
    // 0x12e5f0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x12e5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x12e5f4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x12e5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x12e5f8: 0x26250170  addiu       $a1, $s1, 0x170
    ctx->pc = 0x12e5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
    // 0x12e5fc: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x12e5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x12e600: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x12e600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x12e604: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x12e604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x12e608: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12e608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12e60c: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x12e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x12e610: 0x80420147  lb          $v0, 0x147($v0)
    ctx->pc = 0x12e610u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 327)));
    // 0x12e614: 0x2c540001  sltiu       $s4, $v0, 0x1
    ctx->pc = 0x12e614u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x12e618: 0x3a9e0001  xori        $fp, $s4, 0x1
    ctx->pc = 0x12e618u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1);
    // 0x12e61c: 0x1e9880  sll         $s3, $fp, 2
    ctx->pc = 0x12e61cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x12e620: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x12e620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x12e624: 0xb31821  addu        $v1, $a1, $s3
    ctx->pc = 0x12e624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x12e628: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x12e628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e62c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12e630: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E630u;
    {
        const bool branch_taken_0x12e630 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x12E634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E630u;
            // 0x12e634: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e630) {
            ctx->pc = 0x12E640u;
            goto label_12e640;
        }
    }
    ctx->pc = 0x12E638u;
    // 0x12e638: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x12E638u;
    {
        const bool branch_taken_0x12e638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E638u;
            // 0x12e63c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e638) {
            ctx->pc = 0x12E734u;
            goto label_12e734;
        }
    }
    ctx->pc = 0x12E640u;
label_12e640:
    // 0x12e640: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x12e640u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e644: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x12e644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x12e648: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x12e648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12e64c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x12e64cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12e650: 0x12040033  beq         $s0, $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x12E650u;
    {
        const bool branch_taken_0x12e650 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x12E654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E650u;
            // 0x12e654: 0x8c570000  lw          $s7, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e650) {
            ctx->pc = 0x12E720u;
            goto label_12e720;
        }
    }
    ctx->pc = 0x12E658u;
label_12e658:
    // 0x12e658: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x12e658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x12e65c: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x12e65cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e660: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12e660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e664: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x12e664u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12e668: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12E668u;
    {
        const bool branch_taken_0x12e668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e668) {
            ctx->pc = 0x12E66Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E668u;
            // 0x12e66c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E670u;
            goto label_12e670;
        }
    }
    ctx->pc = 0x12E670u;
label_12e670:
    // 0x12e670: 0x8e26013c  lw          $a2, 0x13C($s1)
    ctx->pc = 0x12e670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x12e674: 0x1810  mfhi        $v1
    ctx->pc = 0x12e674u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x12e678: 0x3812  mflo        $a3
    ctx->pc = 0x12e678u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x12e67c: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x12e67cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12e680: 0x3012  mflo        $a2
    ctx->pc = 0x12e680u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x12e684: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x12E684u;
    SET_GPR_U32(ctx, 31, 0x12E68Cu);
    ctx->pc = 0x12E688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E684u;
            // 0x12e688: 0x8e240184  lw          $a0, 0x184($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E68Cu; }
        if (ctx->pc != 0x12E68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E68Cu; }
        if (ctx->pc != 0x12E68Cu) { return; }
    }
    ctx->pc = 0x12E68Cu;
    // 0x12e68c: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x12e68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x12e690: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12e690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e694: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12e694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e698: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x12e698u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e69c: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x12e69cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12e6a0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12E6A0u;
    {
        const bool branch_taken_0x12e6a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e6a0) {
            ctx->pc = 0x12E6A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E6A0u;
            // 0x12e6a4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E6A8u;
            goto label_12e6a8;
        }
    }
    ctx->pc = 0x12E6A8u;
label_12e6a8:
    // 0x12e6a8: 0x8e26013c  lw          $a2, 0x13C($s1)
    ctx->pc = 0x12e6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x12e6ac: 0x3812  mflo        $a3
    ctx->pc = 0x12e6acu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x12e6b0: 0x1010  mfhi        $v0
    ctx->pc = 0x12e6b0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x12e6b4: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x12e6b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12e6b8: 0x3012  mflo        $a2
    ctx->pc = 0x12e6b8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x12e6bc: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x12E6BCu;
    SET_GPR_U32(ctx, 31, 0x12E6C4u);
    ctx->pc = 0x12E6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E6BCu;
            // 0x12e6c0: 0x8e240184  lw          $a0, 0x184($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E6C4u; }
        if (ctx->pc != 0x12E6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E6C4u; }
        if (ctx->pc != 0x12E6C4u) { return; }
    }
    ctx->pc = 0x12E6C4u;
    // 0x12e6c4: 0x8e23013c  lw          $v1, 0x13C($s1)
    ctx->pc = 0x12e6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x12e6c8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12E6C8u;
    {
        const bool branch_taken_0x12e6c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E6C8u;
            // 0x12e6cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6c8) {
            ctx->pc = 0x12E6ECu;
            goto label_12e6ec;
        }
    }
    ctx->pc = 0x12E6D0u;
label_12e6d0:
    // 0x12e6d0: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x12e6d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12e6d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12e6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12e6d8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x12e6d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x12e6dc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x12e6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x12e6e0: 0x0  nop
    ctx->pc = 0x12e6e0u;
    // NOP
    // 0x12e6e4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12E6E4u;
    {
        const bool branch_taken_0x12e6e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E6E4u;
            // 0x12e6e8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6e4) {
            ctx->pc = 0x12E6D0u;
            runtime->cooperativeGuestYield();
            goto label_12e6d0;
        }
    }
    ctx->pc = 0x12E6ECu;
label_12e6ec:
    // 0x12e6ec: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x12e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x12e6f0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x12e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x12e6f4: 0x2b32021  addu        $a0, $s5, $s3
    ctx->pc = 0x12e6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x12e6f8: 0x2172826  xor         $a1, $s0, $s7
    ctx->pc = 0x12e6f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 23));
    // 0x12e6fc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x12e6fcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12e700: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12E700u;
    {
        const bool branch_taken_0x12e700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e700) {
            ctx->pc = 0x12E704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E700u;
            // 0x12e704: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E708u;
            goto label_12e708;
        }
    }
    ctx->pc = 0x12E708u;
label_12e708:
    // 0x12e708: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12e708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e70c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x12e70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12e710: 0x3010  mfhi        $a2
    ctx->pc = 0x12e710u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x12e714: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x12e714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e718: 0x1603ffcf  bne         $s0, $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x12E718u;
    {
        const bool branch_taken_0x12e718 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x12E71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E718u;
            // 0x12e71c: 0x45b00a  movz        $s6, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e718) {
            ctx->pc = 0x12E658u;
            runtime->cooperativeGuestYield();
            goto label_12e658;
        }
    }
    ctx->pc = 0x12E720u;
label_12e720:
    // 0x12e720: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E720u;
    {
        const bool branch_taken_0x12e720 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E720u;
            // 0x12e724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e720) {
            ctx->pc = 0x12E730u;
            goto label_12e730;
        }
    }
    ctx->pc = 0x12E728u;
    // 0x12e728: 0x16170003  bne         $s0, $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E728u;
    {
        const bool branch_taken_0x12e728 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 23));
        ctx->pc = 0x12E72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E728u;
            // 0x12e72c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e728) {
            ctx->pc = 0x12E738u;
            goto label_12e738;
        }
    }
    ctx->pc = 0x12E730u;
label_12e730:
    // 0x12e730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12e730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12e734:
    // 0x12e734: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x12e734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_12e738:
    // 0x12e738: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x12e738u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e73c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x12e73cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12e740: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x12e740u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12e744: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x12e744u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12e748: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12e748u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12e74c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x12e74cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12e750: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x12e750u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12e754: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x12e754u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e758: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12e758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e75c: 0x3e00008  jr          $ra
    ctx->pc = 0x12E75Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E75Cu;
            // 0x12e760: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12E640u: goto label_12e640;
            case 0x12E658u: goto label_12e658;
            case 0x12E670u: goto label_12e670;
            case 0x12E6A8u: goto label_12e6a8;
            case 0x12E6D0u: goto label_12e6d0;
            case 0x12E6ECu: goto label_12e6ec;
            case 0x12E708u: goto label_12e708;
            case 0x12E720u: goto label_12e720;
            case 0x12E730u: goto label_12e730;
            case 0x12E734u: goto label_12e734;
            case 0x12E738u: goto label_12e738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12E764u;
    // 0x12e764: 0x0  nop
    ctx->pc = 0x12e764u;
    // NOP
}
