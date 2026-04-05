#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026E5D8
// Address: 0x26e5d8 - 0x26e798
void sub_0026E5D8_0x26e5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026E5D8_0x26e5d8");
#endif

    ctx->pc = 0x26e5d8u;

    // 0x26e5d8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x26e5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x26e5dc: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x26e5dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x26e5e0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x26e5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x26e5e4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x26e5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x26e5e8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x26e5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x26e5ec: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x26e5ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x26e5f0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x26e5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x26e5f4: 0x7a403  sra         $s4, $a3, 16
    ctx->pc = 0x26e5f4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 7), 16));
    // 0x26e5f8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x26e5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x26e5fc: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x26e5fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x26e600: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26e600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x26e604: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x26e604u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x26e608: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x26e608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x26e60c: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x26e60cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x26e610: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x26e610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x26e614: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x26e614u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x26e618: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x26e618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x26e61c: 0x69c03  sra         $s3, $a2, 16
    ctx->pc = 0x26e61cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 6), 16));
    // 0x26e620: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26e620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26e624: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26e624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e628: 0x8e2355c0  lw          $v1, 0x55C0($s1)
    ctx->pc = 0x26e628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 21952)));
    // 0x26e62c: 0x8ac03  sra         $s5, $t0, 16
    ctx->pc = 0x26e62cu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 8), 16));
    // 0x26e630: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x26e630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x26e634: 0x9b403  sra         $s6, $t1, 16
    ctx->pc = 0x26e634u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 9), 16));
    // 0x26e638: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26e638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26e63c: 0xabc03  sra         $s7, $t2, 16
    ctx->pc = 0x26e63cu;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 10), 16));
    // 0x26e640: 0xbf403  sra         $fp, $t3, 16
    ctx->pc = 0x26e640u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 11), 16));
    // 0x26e644: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26e644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e648: 0xac47a580  sw          $a3, -0x5A80($v0)
    ctx->pc = 0x26e648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294944128), GPR_U32(ctx, 7));
    // 0x26e64c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x26E64Cu;
    {
        const bool branch_taken_0x26e64c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E64Cu;
            // 0x26e650: 0x87b200b0  lh          $s2, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e64c) {
            ctx->pc = 0x26E684u;
            goto label_26e684;
        }
    }
    ctx->pc = 0x26E654u;
    // 0x26e654: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26e654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26e658: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x26e658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x26e65c: 0x2442a500  addiu       $v0, $v0, -0x5B00
    ctx->pc = 0x26e65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944000));
    // 0x26e660: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x26e660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26e664: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26e664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26e668: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x26e668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x26e66c: 0xac440064  sw          $a0, 0x64($v0)
    ctx->pc = 0x26e66cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 4));
    // 0x26e670: 0xac621430  sw          $v0, 0x1430($v1)
    ctx->pc = 0x26e670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5168), GPR_U32(ctx, 2));
    // 0x26e674: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x26e674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x26e678: 0xac440068  sw          $a0, 0x68($v0)
    ctx->pc = 0x26e678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 4));
    // 0x26e67c: 0xa4400054  sh          $zero, 0x54($v0)
    ctx->pc = 0x26e67cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 84), (uint16_t)GPR_U32(ctx, 0));
    // 0x26e680: 0xa4400056  sh          $zero, 0x56($v0)
    ctx->pc = 0x26e680u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 86), (uint16_t)GPR_U32(ctx, 0));
label_26e684:
    // 0x26e684: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26e684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26e688: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E688u;
    {
        const bool branch_taken_0x26e688 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x26E68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E688u;
            // 0x26e68c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e688) {
            ctx->pc = 0x26E69Cu;
            goto label_26e69c;
        }
    }
    ctx->pc = 0x26E690u;
    // 0x26e690: 0x8c421430  lw          $v0, 0x1430($v0)
    ctx->pc = 0x26e690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5168)));
    // 0x26e694: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26E694u;
    {
        const bool branch_taken_0x26e694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E694u;
            // 0x26e698: 0xac47007c  sw          $a3, 0x7C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e694) {
            ctx->pc = 0x26E6A4u;
            goto label_26e6a4;
        }
    }
    ctx->pc = 0x26E69Cu;
label_26e69c:
    // 0x26e69c: 0x8c421430  lw          $v0, 0x1430($v0)
    ctx->pc = 0x26e69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5168)));
    // 0x26e6a0: 0xac40007c  sw          $zero, 0x7C($v0)
    ctx->pc = 0x26e6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 0));
label_26e6a4:
    // 0x26e6a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x26e6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e6a8: 0xc09b89c  jal         func_26E270
    ctx->pc = 0x26E6A8u;
    SET_GPR_U32(ctx, 31, 0x26E6B0u);
    ctx->pc = 0x26E6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E6A8u;
            // 0x26e6ac: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26E270u;
    if (runtime->hasFunction(0x26E270u)) {
        auto targetFn = runtime->lookupFunction(0x26E270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E6B0u; }
        if (ctx->pc != 0x26E6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026E270_0x26e270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E6B0u; }
        if (ctx->pc != 0x26E6B0u) { return; }
    }
    ctx->pc = 0x26E6B0u;
    // 0x26e6b0: 0x8e2255c0  lw          $v0, 0x55C0($s1)
    ctx->pc = 0x26e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 21952)));
    // 0x26e6b4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x26E6B4u;
    {
        const bool branch_taken_0x26e6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E6B4u;
            // 0x26e6b8: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e6b4) {
            ctx->pc = 0x26E734u;
            goto label_26e734;
        }
    }
    ctx->pc = 0x26E6BCu;
    // 0x26e6bc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x26e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x26e6c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26e6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e6c4: 0x244413b8  addiu       $a0, $v0, 0x13B8
    ctx->pc = 0x26e6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5048));
label_26e6c8:
    // 0x26e6c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x26e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26e6cc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x26e6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x26e6d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26e6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x26e6d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26e6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26e6d8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x26e6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x26e6dc: 0x2ca3001e  sltiu       $v1, $a1, 0x1E
    ctx->pc = 0x26e6dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x26e6e0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x26E6E0u;
    {
        const bool branch_taken_0x26e6e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E6E0u;
            // 0x26e6e4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e6e0) {
            ctx->pc = 0x26E6C8u;
            runtime->cooperativeGuestYield();
            goto label_26e6c8;
        }
    }
    ctx->pc = 0x26E6E8u;
    // 0x26e6e8: 0xc09e676  jal         func_2799D8
    ctx->pc = 0x26E6E8u;
    SET_GPR_U32(ctx, 31, 0x26E6F0u);
    ctx->pc = 0x26E6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E6E8u;
            // 0x26e6ec: 0x3c100027  lui         $s0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2799D8u;
    if (runtime->hasFunction(0x2799D8u)) {
        auto targetFn = runtime->lookupFunction(0x2799D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E6F0u; }
        if (ctx->pc != 0x26E6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2799d8_0x279a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E6F0u; }
        if (ctx->pc != 0x26E6F0u) { return; }
    }
    ctx->pc = 0x26E6F0u;
    // 0x26e6f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x26e6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26e6f4: 0x2610e440  addiu       $s0, $s0, -0x1BC0
    ctx->pc = 0x26e6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960192));
    // 0x26e6f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26e6f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e6fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26e6fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e700: 0xc09b4d8  jal         func_26D360
    ctx->pc = 0x26E700u;
    SET_GPR_U32(ctx, 31, 0x26E708u);
    ctx->pc = 0x26E704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E700u;
            // 0x26e704: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D360u;
    if (runtime->hasFunction(0x26D360u)) {
        auto targetFn = runtime->lookupFunction(0x26D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E708u; }
        if (ctx->pc != 0x26E708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D360_0x26d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E708u; }
        if (ctx->pc != 0x26E708u) { return; }
    }
    ctx->pc = 0x26E708u;
    // 0x26e708: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x26e708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26e70c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26e70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e710: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26e710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e714: 0xc09b4d8  jal         func_26D360
    ctx->pc = 0x26E714u;
    SET_GPR_U32(ctx, 31, 0x26E71Cu);
    ctx->pc = 0x26E718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E714u;
            // 0x26e718: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D360u;
    if (runtime->hasFunction(0x26D360u)) {
        auto targetFn = runtime->lookupFunction(0x26D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E71Cu; }
        if (ctx->pc != 0x26E71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D360_0x26d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E71Cu; }
        if (ctx->pc != 0x26E71Cu) { return; }
    }
    ctx->pc = 0x26E71Cu;
    // 0x26e71c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26e71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e720: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x26e720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x26e724: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x26e724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x26e728: 0xae2355c0  sw          $v1, 0x55C0($s1)
    ctx->pc = 0x26e728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 21952), GPR_U32(ctx, 3));
    // 0x26e72c: 0xfc82a5c8  sd          $v0, -0x5A38($a0)
    ctx->pc = 0x26e72cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294944200), GPR_U64(ctx, 2));
    // 0x26e730: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x26e730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_26e734:
    // 0x26e734: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26e734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e738: 0x8fab00b8  lw          $t3, 0xB8($sp)
    ctx->pc = 0x26e738u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x26e73c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26e73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e740: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x26e740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x26e744: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x26e744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e748: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x26e748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x26e74c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x26e74cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e750: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x26e750u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e754: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x26e754u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e758: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x26e758u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e75c: 0xc09b8d8  jal         func_26E360
    ctx->pc = 0x26E75Cu;
    SET_GPR_U32(ctx, 31, 0x26E764u);
    ctx->pc = 0x26E760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E75Cu;
            // 0x26e760: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26E360u;
    if (runtime->hasFunction(0x26E360u)) {
        auto targetFn = runtime->lookupFunction(0x26E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E764u; }
        if (ctx->pc != 0x26E764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026E360_0x26e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E764u; }
        if (ctx->pc != 0x26E764u) { return; }
    }
    ctx->pc = 0x26E764u;
    // 0x26e764: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x26e764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26e768: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x26e768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26e76c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x26e76cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26e770: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x26e770u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26e774: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x26e774u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26e778: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26e778u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26e77c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x26e77cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e780: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x26e780u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26e784: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x26e784u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e788: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26e788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e78c: 0x3e00008  jr          $ra
    ctx->pc = 0x26E78Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E78Cu;
            // 0x26e790: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26E684u: goto label_26e684;
            case 0x26E69Cu: goto label_26e69c;
            case 0x26E6A4u: goto label_26e6a4;
            case 0x26E6C8u: goto label_26e6c8;
            case 0x26E734u: goto label_26e734;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26E794u;
    // 0x26e794: 0x0  nop
    ctx->pc = 0x26e794u;
    // NOP
}
