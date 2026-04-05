#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014F5F0
// Address: 0x14f5f0 - 0x14f8d8
void sub_0014F5F0_0x14f5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F5F0_0x14f5f0");
#endif

    ctx->pc = 0x14f5f0u;

    // 0x14f5f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14f5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14f5f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14f5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14f5f8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x14f5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x14f5fc: 0x30b20003  andi        $s2, $a1, 0x3
    ctx->pc = 0x14f5fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x14f600: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x14f600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x14f604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14f604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14f608: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x14f608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x14f60c: 0x8c910024  lw          $s1, 0x24($a0)
    ctx->pc = 0x14f60cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x14f610: 0x1220003b  beqz        $s1, . + 4 + (0x3B << 2)
    ctx->pc = 0x14F610u;
    {
        const bool branch_taken_0x14f610 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F610u;
            // 0x14f614: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f610) {
            ctx->pc = 0x14F700u;
            goto label_14f700;
        }
    }
    ctx->pc = 0x14F618u;
    // 0x14f618: 0x2622fff8  addiu       $v0, $s1, -0x8
    ctx->pc = 0x14f618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x14f61c: 0x0  nop
    ctx->pc = 0x14f61cu;
    // NOP
label_14f620:
    // 0x14f620: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14f620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f624: 0x51800b  movn        $s0, $v0, $s1
    ctx->pc = 0x14f624u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x14f628: 0x92020031  lbu         $v0, 0x31($s0)
    ctx->pc = 0x14f628u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
    // 0x14f62c: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x14f62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x14f630: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x14F630u;
    {
        const bool branch_taken_0x14f630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f630) {
            ctx->pc = 0x14F634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14F630u;
            // 0x14f634: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14F6F8u;
            goto label_14f6f8;
        }
    }
    ctx->pc = 0x14F638u;
    // 0x14f638: 0x92020030  lbu         $v0, 0x30($s0)
    ctx->pc = 0x14f638u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x14f63c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14f63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14f640: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x14F640u;
    {
        const bool branch_taken_0x14f640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f640) {
            ctx->pc = 0x14F644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14F640u;
            // 0x14f644: 0x96030026  lhu         $v1, 0x26($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14F6D8u;
            goto label_14f6d8;
        }
    }
    ctx->pc = 0x14F648u;
    // 0x14f648: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x14f648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x14f64c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14F64Cu;
    {
        const bool branch_taken_0x14f64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F64Cu;
            // 0x14f650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f64c) {
            ctx->pc = 0x14F678u;
            goto label_14f678;
        }
    }
    ctx->pc = 0x14F654u;
    // 0x14f654: 0x52600028  beql        $s3, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x14F654u;
    {
        const bool branch_taken_0x14f654 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f654) {
            ctx->pc = 0x14F658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14F654u;
            // 0x14f658: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14F6F8u;
            goto label_14f6f8;
        }
    }
    ctx->pc = 0x14F65Cu;
    // 0x14f65c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14f65cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f660: 0x9607001e  lhu         $a3, 0x1E($s0)
    ctx->pc = 0x14f660u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x14f664: 0x86050014  lh          $a1, 0x14($s0)
    ctx->pc = 0x14f664u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x14f668: 0xc053a3c  jal         func_14E8F0
    ctx->pc = 0x14F668u;
    SET_GPR_U32(ctx, 31, 0x14F670u);
    ctx->pc = 0x14F66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F668u;
            // 0x14f66c: 0x8606001a  lh          $a2, 0x1A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E8F0u;
    if (runtime->hasFunction(0x14E8F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F670u; }
        if (ctx->pc != 0x14F670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E8F0_0x14e8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F670u; }
        if (ctx->pc != 0x14F670u) { return; }
    }
    ctx->pc = 0x14F670u;
    // 0x14f670: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x14F670u;
    {
        const bool branch_taken_0x14f670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F670u;
            // 0x14f674: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f670) {
            ctx->pc = 0x14F6F8u;
            goto label_14f6f8;
        }
    }
    ctx->pc = 0x14F678u;
label_14f678:
    // 0x14f678: 0xc053b86  jal         func_14EE18
    ctx->pc = 0x14F678u;
    SET_GPR_U32(ctx, 31, 0x14F680u);
    ctx->pc = 0x14F67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F678u;
            // 0x14f67c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EE18u;
    if (runtime->hasFunction(0x14EE18u)) {
        auto targetFn = runtime->lookupFunction(0x14EE18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F680u; }
        if (ctx->pc != 0x14F680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014EE18_0x14ee18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F680u; }
        if (ctx->pc != 0x14F680u) { return; }
    }
    ctx->pc = 0x14F680u;
    // 0x14f680: 0x92030030  lbu         $v1, 0x30($s0)
    ctx->pc = 0x14f680u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x14f684: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x14f684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x14f688: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x14F688u;
    {
        const bool branch_taken_0x14f688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F688u;
            // 0x14f68c: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f688) {
            ctx->pc = 0x14F6F4u;
            goto label_14f6f4;
        }
    }
    ctx->pc = 0x14F690u;
    // 0x14f690: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14f690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14f694: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14f694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f698: 0x8c42382c  lw          $v0, 0x382C($v0)
    ctx->pc = 0x14f698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14380)));
    // 0x14f69c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x14f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x14f6a0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x14f6a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14f6a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14F6A4u;
    {
        const bool branch_taken_0x14f6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F6A4u;
            // 0x14f6a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f6a4) {
            ctx->pc = 0x14F6C8u;
            goto label_14f6c8;
        }
    }
    ctx->pc = 0x14F6ACu;
    // 0x14f6ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14f6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f6b0: 0xc05337e  jal         func_14CDF8
    ctx->pc = 0x14F6B0u;
    SET_GPR_U32(ctx, 31, 0x14F6B8u);
    ctx->pc = 0x14F6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F6B0u;
            // 0x14f6b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14CDF8u;
    if (runtime->hasFunction(0x14CDF8u)) {
        auto targetFn = runtime->lookupFunction(0x14CDF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F6B8u; }
        if (ctx->pc != 0x14F6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014CDF8_0x14cdf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F6B8u; }
        if (ctx->pc != 0x14F6B8u) { return; }
    }
    ctx->pc = 0x14F6B8u;
    // 0x14f6b8: 0xc0533f2  jal         func_14CFC8
    ctx->pc = 0x14F6B8u;
    SET_GPR_U32(ctx, 31, 0x14F6C0u);
    ctx->pc = 0x14F6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F6B8u;
            // 0x14f6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14CFC8u;
    if (runtime->hasFunction(0x14CFC8u)) {
        auto targetFn = runtime->lookupFunction(0x14CFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F6C0u; }
        if (ctx->pc != 0x14F6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14cfc8_0x14d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F6C0u; }
        if (ctx->pc != 0x14F6C0u) { return; }
    }
    ctx->pc = 0x14F6C0u;
    // 0x14f6c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14F6C0u;
    {
        const bool branch_taken_0x14f6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F6C0u;
            // 0x14f6c4: 0x96030026  lhu         $v1, 0x26($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f6c0) {
            ctx->pc = 0x14F6D8u;
            goto label_14f6d8;
        }
    }
    ctx->pc = 0x14F6C8u;
label_14f6c8:
    // 0x14f6c8: 0xc0532ba  jal         func_14CAE8
    ctx->pc = 0x14F6C8u;
    SET_GPR_U32(ctx, 31, 0x14F6D0u);
    ctx->pc = 0x14F6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F6C8u;
            // 0x14f6cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14CAE8u;
    if (runtime->hasFunction(0x14CAE8u)) {
        auto targetFn = runtime->lookupFunction(0x14CAE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F6D0u; }
        if (ctx->pc != 0x14F6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014CAE8_0x14cae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F6D0u; }
        if (ctx->pc != 0x14F6D0u) { return; }
    }
    ctx->pc = 0x14F6D0u;
    // 0x14f6d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14F6D0u;
    {
        const bool branch_taken_0x14f6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F6D0u;
            // 0x14f6d4: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f6d0) {
            ctx->pc = 0x14F6F8u;
            goto label_14f6f8;
        }
    }
    ctx->pc = 0x14F6D8u;
label_14f6d8:
    // 0x14f6d8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14f6dc: 0x24421700  addiu       $v0, $v0, 0x1700
    ctx->pc = 0x14f6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5888));
    // 0x14f6e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14f6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14f6e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14f6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14f6e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f6ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14f6f0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x14f6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_14f6f4:
    // 0x14f6f4: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x14f6f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_14f6f8:
    // 0x14f6f8: 0x1620ffc9  bnez        $s1, . + 4 + (-0x37 << 2)
    ctx->pc = 0x14F6F8u;
    {
        const bool branch_taken_0x14f6f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F6F8u;
            // 0x14f6fc: 0x2622fff8  addiu       $v0, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f6f8) {
            ctx->pc = 0x14F620u;
            runtime->cooperativeGuestYield();
            goto label_14f620;
        }
    }
    ctx->pc = 0x14F700u;
label_14f700:
    // 0x14f700: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x14f700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14f704: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x14f704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14f708: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14f708u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14f70c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x14f70cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f710: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14f710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f714: 0x3e00008  jr          $ra
    ctx->pc = 0x14F714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F714u;
            // 0x14f718: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F620u: goto label_14f620;
            case 0x14F678u: goto label_14f678;
            case 0x14F6C8u: goto label_14f6c8;
            case 0x14F6D8u: goto label_14f6d8;
            case 0x14F6F4u: goto label_14f6f4;
            case 0x14F6F8u: goto label_14f6f8;
            case 0x14F700u: goto label_14f700;
            case 0x14F750u: goto label_14f750;
            case 0x14F7D8u: goto label_14f7d8;
            case 0x14F7F4u: goto label_14f7f4;
            case 0x14F808u: goto label_14f808;
            case 0x14F830u: goto label_14f830;
            case 0x14F878u: goto label_14f878;
            case 0x14F8B8u: goto label_14f8b8;
            case 0x14F8C4u: goto label_14f8c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14F71Cu;
    // 0x14f71c: 0x0  nop
    ctx->pc = 0x14f71cu;
    // NOP
    // 0x14f720: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14f720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14f724: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x14f724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x14f728: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x14f728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x14f72c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14f72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14f730: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x14f730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x14f734: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14f734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14f738: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x14f738u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x14f73c: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x14f73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x14f740: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F740u;
    {
        const bool branch_taken_0x14f740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F740u;
            // 0x14f744: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f740) {
            ctx->pc = 0x14F750u;
            goto label_14f750;
        }
    }
    ctx->pc = 0x14F748u;
    // 0x14f748: 0x34621000  ori         $v0, $v1, 0x1000
    ctx->pc = 0x14f748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x14f74c: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x14f74cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
label_14f750:
    // 0x14f750: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x14f750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x14f754: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x14f754u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x14f758: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x14f758u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x14f75c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x14f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x14f760: 0x40f809  jalr        $v0
    ctx->pc = 0x14F760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14F768u);
        ctx->pc = 0x14F764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F760u;
            // 0x14f764: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x14F768u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F620u: goto label_14f620;
            case 0x14F678u: goto label_14f678;
            case 0x14F6C8u: goto label_14f6c8;
            case 0x14F6D8u: goto label_14f6d8;
            case 0x14F6F4u: goto label_14f6f4;
            case 0x14F6F8u: goto label_14f6f8;
            case 0x14F700u: goto label_14f700;
            case 0x14F750u: goto label_14f750;
            case 0x14F7D8u: goto label_14f7d8;
            case 0x14F7F4u: goto label_14f7f4;
            case 0x14F808u: goto label_14f808;
            case 0x14F830u: goto label_14f830;
            case 0x14F878u: goto label_14f878;
            case 0x14F8B8u: goto label_14f8b8;
            case 0x14F8C4u: goto label_14f8c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14F768u; }
            if (ctx->pc != 0x14F768u) { return; }
        }
        }
    }
    ctx->pc = 0x14F768u;
    // 0x14f768: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14f768u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f76c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14f76cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f770: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x14f770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x14f774: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14f774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f778: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x14f778u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x14f77c: 0x8c4200b4  lw          $v0, 0xB4($v0)
    ctx->pc = 0x14f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x14f780: 0x40f809  jalr        $v0
    ctx->pc = 0x14F780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14F788u);
        ctx->pc = 0x14F784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F780u;
            // 0x14f784: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x14F788u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F620u: goto label_14f620;
            case 0x14F678u: goto label_14f678;
            case 0x14F6C8u: goto label_14f6c8;
            case 0x14F6D8u: goto label_14f6d8;
            case 0x14F6F4u: goto label_14f6f4;
            case 0x14F6F8u: goto label_14f6f8;
            case 0x14F700u: goto label_14f700;
            case 0x14F750u: goto label_14f750;
            case 0x14F7D8u: goto label_14f7d8;
            case 0x14F7F4u: goto label_14f7f4;
            case 0x14F808u: goto label_14f808;
            case 0x14F830u: goto label_14f830;
            case 0x14F878u: goto label_14f878;
            case 0x14F8B8u: goto label_14f8b8;
            case 0x14F8C4u: goto label_14f8c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14F788u; }
            if (ctx->pc != 0x14F788u) { return; }
        }
        }
    }
    ctx->pc = 0x14F788u;
    // 0x14f788: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x14f788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x14f78c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14f78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f790: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x14f790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x14f794: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x14f794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x14f798: 0x40f809  jalr        $v0
    ctx->pc = 0x14F798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14F7A0u);
        ctx->pc = 0x14F79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F798u;
            // 0x14f79c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x14F7A0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F620u: goto label_14f620;
            case 0x14F678u: goto label_14f678;
            case 0x14F6C8u: goto label_14f6c8;
            case 0x14F6D8u: goto label_14f6d8;
            case 0x14F6F4u: goto label_14f6f4;
            case 0x14F6F8u: goto label_14f6f8;
            case 0x14F700u: goto label_14f700;
            case 0x14F750u: goto label_14f750;
            case 0x14F7D8u: goto label_14f7d8;
            case 0x14F7F4u: goto label_14f7f4;
            case 0x14F808u: goto label_14f808;
            case 0x14F830u: goto label_14f830;
            case 0x14F878u: goto label_14f878;
            case 0x14F8B8u: goto label_14f8b8;
            case 0x14F8C4u: goto label_14f8c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14F7A0u; }
            if (ctx->pc != 0x14F7A0u) { return; }
        }
        }
    }
    ctx->pc = 0x14F7A0u;
    // 0x14f7a0: 0x8e623830  lw          $v0, 0x3830($s3)
    ctx->pc = 0x14f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 14384)));
    // 0x14f7a4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x14F7A4u;
    {
        const bool branch_taken_0x14f7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F7A4u;
            // 0x14f7a8: 0x2611004c  addiu       $s1, $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f7a4) {
            ctx->pc = 0x14F830u;
            goto label_14f830;
        }
    }
    ctx->pc = 0x14F7ACu;
    // 0x14f7ac: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x14f7acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14f7b0: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x14F7B0u;
    {
        const bool branch_taken_0x14f7b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F7B0u;
            // 0x14f7b4: 0xae320008  sw          $s2, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f7b0) {
            ctx->pc = 0x14F808u;
            goto label_14f808;
        }
    }
    ctx->pc = 0x14F7B8u;
    // 0x14f7b8: 0xc05e394  jal         func_178E50
    ctx->pc = 0x14F7B8u;
    SET_GPR_U32(ctx, 31, 0x14F7C0u);
    ctx->pc = 0x14F7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F7B8u;
            // 0x14f7bc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178E50u;
    if (runtime->hasFunction(0x178E50u)) {
        auto targetFn = runtime->lookupFunction(0x178E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F7C0u; }
        if (ctx->pc != 0x14F7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_178e50_0x178e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F7C0u; }
        if (ctx->pc != 0x14F7C0u) { return; }
    }
    ctx->pc = 0x14F7C0u;
    // 0x14f7c0: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x14f7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x14f7c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14f7c8: 0x1050000a  beq         $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x14F7C8u;
    {
        const bool branch_taken_0x14f7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x14F7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F7C8u;
            // 0x14f7cc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f7c8) {
            ctx->pc = 0x14F7F4u;
            goto label_14f7f4;
        }
    }
    ctx->pc = 0x14F7D0u;
    // 0x14f7d0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x14f7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14f7d4: 0x0  nop
    ctx->pc = 0x14f7d4u;
    // NOP
label_14f7d8:
    // 0x14f7d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14f7dc: 0xc05e374  jal         func_178DD0
    ctx->pc = 0x14F7DCu;
    SET_GPR_U32(ctx, 31, 0x14F7E4u);
    ctx->pc = 0x14F7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F7DCu;
            // 0x14f7e0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178DD0u;
    if (runtime->hasFunction(0x178DD0u)) {
        auto targetFn = runtime->lookupFunction(0x178DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F7E4u; }
        if (ctx->pc != 0x14F7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_178dd0_0x178df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F7E4u; }
        if (ctx->pc != 0x14F7E4u) { return; }
    }
    ctx->pc = 0x14F7E4u;
    // 0x14f7e4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x14f7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14f7e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f7ec: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14F7ECu;
    {
        const bool branch_taken_0x14f7ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14F7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F7ECu;
            // 0x14f7f0: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f7ec) {
            ctx->pc = 0x14F7D8u;
            runtime->cooperativeGuestYield();
            goto label_14f7d8;
        }
    }
    ctx->pc = 0x14F7F4u;
label_14f7f4:
    // 0x14f7f4: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x14f7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x14f7f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f7fc: 0xc08e204  jal         func_238810
    ctx->pc = 0x14F7FCu;
    SET_GPR_U32(ctx, 31, 0x14F804u);
    ctx->pc = 0x14F800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F7FCu;
            // 0x14f800: 0xae100004  sw          $s0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238810u;
    if (runtime->hasFunction(0x238810u)) {
        auto targetFn = runtime->lookupFunction(0x238810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F804u; }
        if (ctx->pc != 0x14F804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238810_0x238810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F804u; }
        if (ctx->pc != 0x14F804u) { return; }
    }
    ctx->pc = 0x14F804u;
    // 0x14f804: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x14f804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_14f808:
    // 0x14f808: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x14f808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x14f80c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x14f80cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x14f810: 0x8ca33834  lw          $v1, 0x3834($a1)
    ctx->pc = 0x14f810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 14388)));
    // 0x14f814: 0x24843838  addiu       $a0, $a0, 0x3838
    ctx->pc = 0x14f814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14392));
    // 0x14f818: 0xae603830  sw          $zero, 0x3830($s3)
    ctx->pc = 0x14f818u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 14384), GPR_U32(ctx, 0));
    // 0x14f81c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14f81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14f820: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x14f820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14f824: 0xaca33834  sw          $v1, 0x3834($a1)
    ctx->pc = 0x14f824u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 14388), GPR_U32(ctx, 3));
    // 0x14f828: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14f828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14f82c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x14f82cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_14f830:
    // 0x14f830: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x14f830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f834: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x14f834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14f838: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x14f838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14f83c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14f83cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14f840: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x14f840u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f844: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14f844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f848: 0x3e00008  jr          $ra
    ctx->pc = 0x14F848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F848u;
            // 0x14f84c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F620u: goto label_14f620;
            case 0x14F678u: goto label_14f678;
            case 0x14F6C8u: goto label_14f6c8;
            case 0x14F6D8u: goto label_14f6d8;
            case 0x14F6F4u: goto label_14f6f4;
            case 0x14F6F8u: goto label_14f6f8;
            case 0x14F700u: goto label_14f700;
            case 0x14F750u: goto label_14f750;
            case 0x14F7D8u: goto label_14f7d8;
            case 0x14F7F4u: goto label_14f7f4;
            case 0x14F808u: goto label_14f808;
            case 0x14F830u: goto label_14f830;
            case 0x14F878u: goto label_14f878;
            case 0x14F8B8u: goto label_14f8b8;
            case 0x14F8C4u: goto label_14f8c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14F850u;
    // 0x14f850: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14f850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14f854: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14f854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14f858: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14f858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14f85c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14f85cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14f860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14f864: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14f864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14f868: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x14f868u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x14f86c: 0x52000015  beql        $s0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x14F86Cu;
    {
        const bool branch_taken_0x14f86c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f86c) {
            ctx->pc = 0x14F870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14F86Cu;
            // 0x14f870: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14F8C4u;
            goto label_14f8c4;
        }
    }
    ctx->pc = 0x14F874u;
    // 0x14f874: 0x2602fff8  addiu       $v0, $s0, -0x8
    ctx->pc = 0x14f874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_14f878:
    // 0x14f878: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x14f878u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14f87c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14f87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f880: 0x50280b  movn        $a1, $v0, $s0
    ctx->pc = 0x14f880u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x14f884: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x14f884u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14f888: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x14f888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x14f88c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14F88Cu;
    {
        const bool branch_taken_0x14f88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F88Cu;
            // 0x14f890: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f88c) {
            ctx->pc = 0x14F8B8u;
            goto label_14f8b8;
        }
    }
    ctx->pc = 0x14F894u;
    // 0x14f894: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x14f894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x14f898: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14F898u;
    {
        const bool branch_taken_0x14f898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f898) {
            ctx->pc = 0x14F8B8u;
            goto label_14f8b8;
        }
    }
    ctx->pc = 0x14F8A0u;
    // 0x14f8a0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x14f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x14f8a4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x14f8a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x14f8a8: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x14f8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x14f8ac: 0x40f809  jalr        $v0
    ctx->pc = 0x14F8ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14F8B4u);
        ctx->pc = 0x14F8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F8ACu;
            // 0x14f8b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x14F8B4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F620u: goto label_14f620;
            case 0x14F678u: goto label_14f678;
            case 0x14F6C8u: goto label_14f6c8;
            case 0x14F6D8u: goto label_14f6d8;
            case 0x14F6F4u: goto label_14f6f4;
            case 0x14F6F8u: goto label_14f6f8;
            case 0x14F700u: goto label_14f700;
            case 0x14F750u: goto label_14f750;
            case 0x14F7D8u: goto label_14f7d8;
            case 0x14F7F4u: goto label_14f7f4;
            case 0x14F808u: goto label_14f808;
            case 0x14F830u: goto label_14f830;
            case 0x14F878u: goto label_14f878;
            case 0x14F8B8u: goto label_14f8b8;
            case 0x14F8C4u: goto label_14f8c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14F8B4u; }
            if (ctx->pc != 0x14F8B4u) { return; }
        }
        }
    }
    ctx->pc = 0x14F8B4u;
    // 0x14f8b4: 0x0  nop
    ctx->pc = 0x14f8b4u;
    // NOP
label_14f8b8:
    // 0x14f8b8: 0x1640ffef  bnez        $s2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x14F8B8u;
    {
        const bool branch_taken_0x14f8b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F8B8u;
            // 0x14f8bc: 0x2602fff8  addiu       $v0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f8b8) {
            ctx->pc = 0x14F878u;
            runtime->cooperativeGuestYield();
            goto label_14f878;
        }
    }
    ctx->pc = 0x14F8C0u;
    // 0x14f8c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14f8c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14f8c4:
    // 0x14f8c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14f8c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f8c8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14f8c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f8cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14f8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x14F8D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F8D0u;
            // 0x14f8d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F620u: goto label_14f620;
            case 0x14F678u: goto label_14f678;
            case 0x14F6C8u: goto label_14f6c8;
            case 0x14F6D8u: goto label_14f6d8;
            case 0x14F6F4u: goto label_14f6f4;
            case 0x14F6F8u: goto label_14f6f8;
            case 0x14F700u: goto label_14f700;
            case 0x14F750u: goto label_14f750;
            case 0x14F7D8u: goto label_14f7d8;
            case 0x14F7F4u: goto label_14f7f4;
            case 0x14F808u: goto label_14f808;
            case 0x14F830u: goto label_14f830;
            case 0x14F878u: goto label_14f878;
            case 0x14F8B8u: goto label_14f8b8;
            case 0x14F8C4u: goto label_14f8c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14F8D8u;
}
