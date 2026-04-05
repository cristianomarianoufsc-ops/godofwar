#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00176FC8
// Address: 0x176fc8 - 0x177b80
void sub_00176FC8_0x176fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176FC8_0x176fc8");
#endif

    ctx->pc = 0x176fc8u;

    // 0x176fc8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x176fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x176fcc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x176fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x176fd0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x176fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x176fd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x176fd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176fd8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x176fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x176fdc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x176fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x176fe0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x176fe0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176fe4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x176fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x176fe8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x176fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x176fec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x176fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x176ff0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x176ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x176ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x176ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x176ff8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x176ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x176ffc: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x176FFCu;
    {
        const bool branch_taken_0x176ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176FFCu;
            // 0x177000: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176ffc) {
            ctx->pc = 0x17705Cu;
            goto label_17705c;
        }
    }
    ctx->pc = 0x177004u;
    // 0x177004: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x177004u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x177008: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x17700c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x17700Cu;
    {
        const bool branch_taken_0x17700c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17700c) {
            ctx->pc = 0x177010u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17700Cu;
            // 0x177010: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177060u;
            goto label_177060;
        }
    }
    ctx->pc = 0x177014u;
    // 0x177014: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177014u;
    SET_GPR_U32(ctx, 31, 0x17701Cu);
    ctx->pc = 0x177018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177014u;
            // 0x177018: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17701Cu; }
        if (ctx->pc != 0x17701Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17701Cu; }
        if (ctx->pc != 0x17701Cu) { return; }
    }
    ctx->pc = 0x17701Cu;
    // 0x17701c: 0xc08e440  jal         func_239100
    ctx->pc = 0x17701Cu;
    SET_GPR_U32(ctx, 31, 0x177024u);
    ctx->pc = 0x177020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17701Cu;
            // 0x177020: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177024u; }
        if (ctx->pc != 0x177024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177024u; }
        if (ctx->pc != 0x177024u) { return; }
    }
    ctx->pc = 0x177024u;
    // 0x177024: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x177024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x177028: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17702c: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x17702cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x177030: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x177034: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177034u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177038: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17703c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x17703cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177040: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x177044: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x177044u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177048: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x177048u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x17704c: 0xc08e45a  jal         func_239168
    ctx->pc = 0x17704Cu;
    SET_GPR_U32(ctx, 31, 0x177054u);
    ctx->pc = 0x177050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17704Cu;
            // 0x177050: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177054u; }
        if (ctx->pc != 0x177054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177054u; }
        if (ctx->pc != 0x177054u) { return; }
    }
    ctx->pc = 0x177054u;
    // 0x177054: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x177058: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x177058u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_17705c:
    // 0x17705c: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x17705cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
label_177060:
    // 0x177060: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x177064: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x177064u;
    {
        const bool branch_taken_0x177064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177064u;
            // 0x177068: 0x8ed40000  lw          $s4, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177064) {
            ctx->pc = 0x1770ACu;
            goto label_1770ac;
        }
    }
    ctx->pc = 0x17706Cu;
    // 0x17706c: 0xc05d762  jal         func_175D88
    ctx->pc = 0x17706Cu;
    SET_GPR_U32(ctx, 31, 0x177074u);
    ctx->pc = 0x177070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17706Cu;
            // 0x177070: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177074u; }
        if (ctx->pc != 0x177074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177074u; }
        if (ctx->pc != 0x177074u) { return; }
    }
    ctx->pc = 0x177074u;
    // 0x177074: 0xc08e440  jal         func_239100
    ctx->pc = 0x177074u;
    SET_GPR_U32(ctx, 31, 0x17707Cu);
    ctx->pc = 0x177078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177074u;
            // 0x177078: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17707Cu; }
        if (ctx->pc != 0x17707Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17707Cu; }
        if (ctx->pc != 0x17707Cu) { return; }
    }
    ctx->pc = 0x17707Cu;
    // 0x17707c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x17707cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x177080: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177084: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x177084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x177088: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x17708c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x17708cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177090: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177090u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177094: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177094u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177098: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17709c: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x17709cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1770a0: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x1770a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1770a4: 0xc08e45a  jal         func_239168
    ctx->pc = 0x1770A4u;
    SET_GPR_U32(ctx, 31, 0x1770ACu);
    ctx->pc = 0x1770A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1770A4u;
            // 0x1770a8: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1770ACu; }
        if (ctx->pc != 0x1770ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1770ACu; }
        if (ctx->pc != 0x1770ACu) { return; }
    }
    ctx->pc = 0x1770ACu;
label_1770ac:
    // 0x1770ac: 0x8e13c4b4  lw          $s3, -0x3B4C($s0)
    ctx->pc = 0x1770acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x1770b0: 0x16600012  bnez        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1770B0u;
    {
        const bool branch_taken_0x1770b0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1770B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1770B0u;
            // 0x1770b4: 0x8e12c4b4  lw          $s2, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1770b0) {
            ctx->pc = 0x1770FCu;
            goto label_1770fc;
        }
    }
    ctx->pc = 0x1770B8u;
    // 0x1770b8: 0xc05d762  jal         func_175D88
    ctx->pc = 0x1770B8u;
    SET_GPR_U32(ctx, 31, 0x1770C0u);
    ctx->pc = 0x1770BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1770B8u;
            // 0x1770bc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1770C0u; }
        if (ctx->pc != 0x1770C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1770C0u; }
        if (ctx->pc != 0x1770C0u) { return; }
    }
    ctx->pc = 0x1770C0u;
    // 0x1770c0: 0xc08e440  jal         func_239100
    ctx->pc = 0x1770C0u;
    SET_GPR_U32(ctx, 31, 0x1770C8u);
    ctx->pc = 0x1770C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1770C0u;
            // 0x1770c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1770C8u; }
        if (ctx->pc != 0x1770C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1770C8u; }
        if (ctx->pc != 0x1770C8u) { return; }
    }
    ctx->pc = 0x1770C8u;
    // 0x1770c8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1770c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1770cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1770ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1770d0: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x1770d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x1770d4: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1770d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x1770d8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1770d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1770dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1770dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1770e0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1770e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1770e4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1770e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1770e8: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1770e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1770ec: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x1770ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1770f0: 0xc08e45a  jal         func_239168
    ctx->pc = 0x1770F0u;
    SET_GPR_U32(ctx, 31, 0x1770F8u);
    ctx->pc = 0x1770F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1770F0u;
            // 0x1770f4: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1770F8u; }
        if (ctx->pc != 0x1770F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1770F8u; }
        if (ctx->pc != 0x1770F8u) { return; }
    }
    ctx->pc = 0x1770F8u;
    // 0x1770f8: 0x8e12c4b4  lw          $s2, -0x3B4C($s0)
    ctx->pc = 0x1770f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_1770fc:
    // 0x1770fc: 0x16400012  bnez        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1770FCu;
    {
        const bool branch_taken_0x1770fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x177100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1770FCu;
            // 0x177100: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1770fc) {
            ctx->pc = 0x177148u;
            goto label_177148;
        }
    }
    ctx->pc = 0x177104u;
    // 0x177104: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177104u;
    SET_GPR_U32(ctx, 31, 0x17710Cu);
    ctx->pc = 0x177108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177104u;
            // 0x177108: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17710Cu; }
        if (ctx->pc != 0x17710Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17710Cu; }
        if (ctx->pc != 0x17710Cu) { return; }
    }
    ctx->pc = 0x17710Cu;
    // 0x17710c: 0xc08e440  jal         func_239100
    ctx->pc = 0x17710Cu;
    SET_GPR_U32(ctx, 31, 0x177114u);
    ctx->pc = 0x177110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17710Cu;
            // 0x177110: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177114u; }
        if (ctx->pc != 0x177114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177114u; }
        if (ctx->pc != 0x177114u) { return; }
    }
    ctx->pc = 0x177114u;
    // 0x177114: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x177114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x177118: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17711c: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x17711cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x177120: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x177124: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177124u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177128: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17712c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x17712cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177130: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x177134: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x177134u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177138: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x177138u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x17713c: 0xc08e45a  jal         func_239168
    ctx->pc = 0x17713Cu;
    SET_GPR_U32(ctx, 31, 0x177144u);
    ctx->pc = 0x177140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17713Cu;
            // 0x177140: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177144u; }
        if (ctx->pc != 0x177144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177144u; }
        if (ctx->pc != 0x177144u) { return; }
    }
    ctx->pc = 0x177144u;
    // 0x177144: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_177148:
    // 0x177148: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177148u;
    {
        const bool branch_taken_0x177148 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x17714Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177148u;
            // 0x17714c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177148) {
            ctx->pc = 0x177160u;
            goto label_177160;
        }
    }
    ctx->pc = 0x177150u;
    // 0x177150: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x177150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x177154: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x177154u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x177158: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x177158u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x17715c: 0xa6220008  sh          $v0, 0x8($s1)
    ctx->pc = 0x17715cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
label_177160:
    // 0x177160: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x177164: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x177164u;
    {
        const bool branch_taken_0x177164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177164u;
            // 0x177168: 0x8e12c4b4  lw          $s2, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177164) {
            ctx->pc = 0x1771B0u;
            goto label_1771b0;
        }
    }
    ctx->pc = 0x17716Cu;
    // 0x17716c: 0xc05d762  jal         func_175D88
    ctx->pc = 0x17716Cu;
    SET_GPR_U32(ctx, 31, 0x177174u);
    ctx->pc = 0x177170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17716Cu;
            // 0x177170: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177174u; }
        if (ctx->pc != 0x177174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177174u; }
        if (ctx->pc != 0x177174u) { return; }
    }
    ctx->pc = 0x177174u;
    // 0x177174: 0xc08e440  jal         func_239100
    ctx->pc = 0x177174u;
    SET_GPR_U32(ctx, 31, 0x17717Cu);
    ctx->pc = 0x177178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177174u;
            // 0x177178: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17717Cu; }
        if (ctx->pc != 0x17717Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17717Cu; }
        if (ctx->pc != 0x17717Cu) { return; }
    }
    ctx->pc = 0x17717Cu;
    // 0x17717c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x17717cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x177180: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177184: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x177184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x177188: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x17718c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x17718cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177190: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177194: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177194u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177198: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17719c: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x17719cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1771a0: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x1771a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1771a4: 0xc08e45a  jal         func_239168
    ctx->pc = 0x1771A4u;
    SET_GPR_U32(ctx, 31, 0x1771ACu);
    ctx->pc = 0x1771A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1771A4u;
            // 0x1771a8: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1771ACu; }
        if (ctx->pc != 0x1771ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1771ACu; }
        if (ctx->pc != 0x1771ACu) { return; }
    }
    ctx->pc = 0x1771ACu;
    // 0x1771ac: 0x8e12c4b4  lw          $s2, -0x3B4C($s0)
    ctx->pc = 0x1771acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_1771b0:
    // 0x1771b0: 0x16400012  bnez        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1771B0u;
    {
        const bool branch_taken_0x1771b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1771B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1771B0u;
            // 0x1771b4: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1771b0) {
            ctx->pc = 0x1771FCu;
            goto label_1771fc;
        }
    }
    ctx->pc = 0x1771B8u;
    // 0x1771b8: 0xc05d762  jal         func_175D88
    ctx->pc = 0x1771B8u;
    SET_GPR_U32(ctx, 31, 0x1771C0u);
    ctx->pc = 0x1771BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1771B8u;
            // 0x1771bc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1771C0u; }
        if (ctx->pc != 0x1771C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1771C0u; }
        if (ctx->pc != 0x1771C0u) { return; }
    }
    ctx->pc = 0x1771C0u;
    // 0x1771c0: 0xc08e440  jal         func_239100
    ctx->pc = 0x1771C0u;
    SET_GPR_U32(ctx, 31, 0x1771C8u);
    ctx->pc = 0x1771C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1771C0u;
            // 0x1771c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1771C8u; }
        if (ctx->pc != 0x1771C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1771C8u; }
        if (ctx->pc != 0x1771C8u) { return; }
    }
    ctx->pc = 0x1771C8u;
    // 0x1771c8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1771c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1771cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1771ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1771d0: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x1771d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x1771d4: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1771d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x1771d8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1771d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1771dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1771dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1771e0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1771e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1771e4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1771e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1771e8: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1771e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1771ec: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x1771ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1771f0: 0xc08e45a  jal         func_239168
    ctx->pc = 0x1771F0u;
    SET_GPR_U32(ctx, 31, 0x1771F8u);
    ctx->pc = 0x1771F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1771F0u;
            // 0x1771f4: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1771F8u; }
        if (ctx->pc != 0x1771F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1771F8u; }
        if (ctx->pc != 0x1771F8u) { return; }
    }
    ctx->pc = 0x1771F8u;
    // 0x1771f8: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1771f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_1771fc:
    // 0x1771fc: 0x52220035  beql        $s1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1771FCu;
    {
        const bool branch_taken_0x1771fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1771fc) {
            ctx->pc = 0x177200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1771FCu;
            // 0x177200: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1772D4u;
            goto label_1772d4;
        }
    }
    ctx->pc = 0x177204u;
    // 0x177204: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x177204u;
    {
        const bool branch_taken_0x177204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177204u;
            // 0x177208: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177204) {
            ctx->pc = 0x177250u;
            goto label_177250;
        }
    }
    ctx->pc = 0x17720Cu;
    // 0x17720c: 0xc05d762  jal         func_175D88
    ctx->pc = 0x17720Cu;
    SET_GPR_U32(ctx, 31, 0x177214u);
    ctx->pc = 0x177210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17720Cu;
            // 0x177210: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177214u; }
        if (ctx->pc != 0x177214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177214u; }
        if (ctx->pc != 0x177214u) { return; }
    }
    ctx->pc = 0x177214u;
    // 0x177214: 0xc08e440  jal         func_239100
    ctx->pc = 0x177214u;
    SET_GPR_U32(ctx, 31, 0x17721Cu);
    ctx->pc = 0x177218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177214u;
            // 0x177218: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17721Cu; }
        if (ctx->pc != 0x17721Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17721Cu; }
        if (ctx->pc != 0x17721Cu) { return; }
    }
    ctx->pc = 0x17721Cu;
    // 0x17721c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x17721cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x177220: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177224: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x177224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x177228: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x17722c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x17722cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177230: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177234: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177234u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177238: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17723c: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x17723cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177240: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x177240u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x177244: 0xc08e45a  jal         func_239168
    ctx->pc = 0x177244u;
    SET_GPR_U32(ctx, 31, 0x17724Cu);
    ctx->pc = 0x177248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177244u;
            // 0x177248: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17724Cu; }
        if (ctx->pc != 0x17724Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17724Cu; }
        if (ctx->pc != 0x17724Cu) { return; }
    }
    ctx->pc = 0x17724Cu;
    // 0x17724c: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x17724cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_177250:
    // 0x177250: 0x5242001b  beql        $s2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x177250u;
    {
        const bool branch_taken_0x177250 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x177250) {
            ctx->pc = 0x177254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177250u;
            // 0x177254: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1772C0u;
            goto label_1772c0;
        }
    }
    ctx->pc = 0x177258u;
    // 0x177258: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x177258u;
    {
        const bool branch_taken_0x177258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17725Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177258u;
            // 0x17725c: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177258) {
            ctx->pc = 0x1772A4u;
            goto label_1772a4;
        }
    }
    ctx->pc = 0x177260u;
    // 0x177260: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177260u;
    SET_GPR_U32(ctx, 31, 0x177268u);
    ctx->pc = 0x177264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177260u;
            // 0x177264: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177268u; }
        if (ctx->pc != 0x177268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177268u; }
        if (ctx->pc != 0x177268u) { return; }
    }
    ctx->pc = 0x177268u;
    // 0x177268: 0xc08e440  jal         func_239100
    ctx->pc = 0x177268u;
    SET_GPR_U32(ctx, 31, 0x177270u);
    ctx->pc = 0x17726Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177268u;
            // 0x17726c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177270u; }
        if (ctx->pc != 0x177270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177270u; }
        if (ctx->pc != 0x177270u) { return; }
    }
    ctx->pc = 0x177270u;
    // 0x177270: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x177270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x177274: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177278: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x177278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x17727c: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x17727cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x177280: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177280u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177284: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177288: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177288u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17728c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17728cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x177290: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x177290u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177294: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x177294u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x177298: 0xc08e45a  jal         func_239168
    ctx->pc = 0x177298u;
    SET_GPR_U32(ctx, 31, 0x1772A0u);
    ctx->pc = 0x17729Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177298u;
            // 0x17729c: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1772A0u; }
        if (ctx->pc != 0x1772A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1772A0u; }
        if (ctx->pc != 0x1772A0u) { return; }
    }
    ctx->pc = 0x1772A0u;
    // 0x1772a0: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1772a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_1772a4:
    // 0x1772a4: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1772A4u;
    {
        const bool branch_taken_0x1772a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1772A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1772A4u;
            // 0x1772a8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1772a4) {
            ctx->pc = 0x1772BCu;
            goto label_1772bc;
        }
    }
    ctx->pc = 0x1772ACu;
    // 0x1772ac: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x1772acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x1772b0: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x1772b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1772b4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1772b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1772b8: 0xa6420008  sh          $v0, 0x8($s2)
    ctx->pc = 0x1772b8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 2));
label_1772bc:
    // 0x1772bc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1772bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1772c0:
    // 0x1772c0: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x1772c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x1772c4: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x1772c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1772c8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1772c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1772cc: 0xa622000a  sh          $v0, 0xA($s1)
    ctx->pc = 0x1772ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x1772d0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1772d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
label_1772d4:
    // 0x1772d4: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1772d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x1772d8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1772D8u;
    {
        const bool branch_taken_0x1772d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1772DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1772D8u;
            // 0x1772dc: 0x8e12c4b4  lw          $s2, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1772d8) {
            ctx->pc = 0x177324u;
            goto label_177324;
        }
    }
    ctx->pc = 0x1772E0u;
    // 0x1772e0: 0xc05d762  jal         func_175D88
    ctx->pc = 0x1772E0u;
    SET_GPR_U32(ctx, 31, 0x1772E8u);
    ctx->pc = 0x1772E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1772E0u;
            // 0x1772e4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1772E8u; }
        if (ctx->pc != 0x1772E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1772E8u; }
        if (ctx->pc != 0x1772E8u) { return; }
    }
    ctx->pc = 0x1772E8u;
    // 0x1772e8: 0xc08e440  jal         func_239100
    ctx->pc = 0x1772E8u;
    SET_GPR_U32(ctx, 31, 0x1772F0u);
    ctx->pc = 0x1772ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1772E8u;
            // 0x1772ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1772F0u; }
        if (ctx->pc != 0x1772F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1772F0u; }
        if (ctx->pc != 0x1772F0u) { return; }
    }
    ctx->pc = 0x1772F0u;
    // 0x1772f0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1772f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1772f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1772f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1772f8: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x1772f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x1772fc: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1772fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x177300: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177300u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177304: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177308: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177308u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17730c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17730cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x177310: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x177310u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177314: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x177314u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x177318: 0xc08e45a  jal         func_239168
    ctx->pc = 0x177318u;
    SET_GPR_U32(ctx, 31, 0x177320u);
    ctx->pc = 0x17731Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177318u;
            // 0x17731c: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177320u; }
        if (ctx->pc != 0x177320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177320u; }
        if (ctx->pc != 0x177320u) { return; }
    }
    ctx->pc = 0x177320u;
    // 0x177320: 0x8e12c4b4  lw          $s2, -0x3B4C($s0)
    ctx->pc = 0x177320u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_177324:
    // 0x177324: 0x16400012  bnez        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x177324u;
    {
        const bool branch_taken_0x177324 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x177328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177324u;
            // 0x177328: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177324) {
            ctx->pc = 0x177370u;
            goto label_177370;
        }
    }
    ctx->pc = 0x17732Cu;
    // 0x17732c: 0xc05d762  jal         func_175D88
    ctx->pc = 0x17732Cu;
    SET_GPR_U32(ctx, 31, 0x177334u);
    ctx->pc = 0x177330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17732Cu;
            // 0x177330: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177334u; }
        if (ctx->pc != 0x177334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177334u; }
        if (ctx->pc != 0x177334u) { return; }
    }
    ctx->pc = 0x177334u;
    // 0x177334: 0xc08e440  jal         func_239100
    ctx->pc = 0x177334u;
    SET_GPR_U32(ctx, 31, 0x17733Cu);
    ctx->pc = 0x177338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177334u;
            // 0x177338: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17733Cu; }
        if (ctx->pc != 0x17733Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17733Cu; }
        if (ctx->pc != 0x17733Cu) { return; }
    }
    ctx->pc = 0x17733Cu;
    // 0x17733c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x17733cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x177340: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177344: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x177344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x177348: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x17734c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x17734cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177350: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177354: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177354u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177358: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177358u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17735c: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x17735cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177360: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x177360u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x177364: 0xc08e45a  jal         func_239168
    ctx->pc = 0x177364u;
    SET_GPR_U32(ctx, 31, 0x17736Cu);
    ctx->pc = 0x177368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177364u;
            // 0x177368: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17736Cu; }
        if (ctx->pc != 0x17736Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17736Cu; }
        if (ctx->pc != 0x17736Cu) { return; }
    }
    ctx->pc = 0x17736Cu;
    // 0x17736c: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x17736cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_177370:
    // 0x177370: 0x52220036  beql        $s1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x177370u;
    {
        const bool branch_taken_0x177370 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x177370) {
            ctx->pc = 0x177374u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177370u;
            // 0x177374: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17744Cu;
            goto label_17744c;
        }
    }
    ctx->pc = 0x177378u;
    // 0x177378: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x177378u;
    {
        const bool branch_taken_0x177378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17737Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177378u;
            // 0x17737c: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177378) {
            ctx->pc = 0x1773C8u;
            goto label_1773c8;
        }
    }
    ctx->pc = 0x177380u;
    // 0x177380: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177380u;
    SET_GPR_U32(ctx, 31, 0x177388u);
    ctx->pc = 0x177384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177380u;
            // 0x177384: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177388u; }
        if (ctx->pc != 0x177388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177388u; }
        if (ctx->pc != 0x177388u) { return; }
    }
    ctx->pc = 0x177388u;
    // 0x177388: 0xc08e440  jal         func_239100
    ctx->pc = 0x177388u;
    SET_GPR_U32(ctx, 31, 0x177390u);
    ctx->pc = 0x17738Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177388u;
            // 0x17738c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177390u; }
        if (ctx->pc != 0x177390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177390u; }
        if (ctx->pc != 0x177390u) { return; }
    }
    ctx->pc = 0x177390u;
    // 0x177390: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x177390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x177394: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177398: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x177398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x17739c: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x17739cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x1773a0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1773a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1773a4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1773a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1773a8: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1773a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1773ac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1773acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1773b0: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1773b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1773b4: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x1773b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1773b8: 0xc08e45a  jal         func_239168
    ctx->pc = 0x1773B8u;
    SET_GPR_U32(ctx, 31, 0x1773C0u);
    ctx->pc = 0x1773BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1773B8u;
            // 0x1773bc: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773C0u; }
        if (ctx->pc != 0x1773C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773C0u; }
        if (ctx->pc != 0x1773C0u) { return; }
    }
    ctx->pc = 0x1773C0u;
    // 0x1773c0: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1773c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x1773c4: 0x0  nop
    ctx->pc = 0x1773c4u;
    // NOP
label_1773c8:
    // 0x1773c8: 0x5242001b  beql        $s2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1773C8u;
    {
        const bool branch_taken_0x1773c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1773c8) {
            ctx->pc = 0x1773CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1773C8u;
            // 0x1773cc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177438u;
            goto label_177438;
        }
    }
    ctx->pc = 0x1773D0u;
    // 0x1773d0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1773D0u;
    {
        const bool branch_taken_0x1773d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1773D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1773D0u;
            // 0x1773d4: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1773d0) {
            ctx->pc = 0x17741Cu;
            goto label_17741c;
        }
    }
    ctx->pc = 0x1773D8u;
    // 0x1773d8: 0xc05d762  jal         func_175D88
    ctx->pc = 0x1773D8u;
    SET_GPR_U32(ctx, 31, 0x1773E0u);
    ctx->pc = 0x1773DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1773D8u;
            // 0x1773dc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773E0u; }
        if (ctx->pc != 0x1773E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773E0u; }
        if (ctx->pc != 0x1773E0u) { return; }
    }
    ctx->pc = 0x1773E0u;
    // 0x1773e0: 0xc08e440  jal         func_239100
    ctx->pc = 0x1773E0u;
    SET_GPR_U32(ctx, 31, 0x1773E8u);
    ctx->pc = 0x1773E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1773E0u;
            // 0x1773e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773E8u; }
        if (ctx->pc != 0x1773E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773E8u; }
        if (ctx->pc != 0x1773E8u) { return; }
    }
    ctx->pc = 0x1773E8u;
    // 0x1773e8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1773e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1773ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1773ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1773f0: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x1773f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x1773f4: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1773f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x1773f8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1773f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1773fc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1773fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177400: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177400u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177404: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x177408: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x177408u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x17740c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x17740cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x177410: 0xc08e45a  jal         func_239168
    ctx->pc = 0x177410u;
    SET_GPR_U32(ctx, 31, 0x177418u);
    ctx->pc = 0x177414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177410u;
            // 0x177414: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177418u; }
        if (ctx->pc != 0x177418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177418u; }
        if (ctx->pc != 0x177418u) { return; }
    }
    ctx->pc = 0x177418u;
    // 0x177418: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_17741c:
    // 0x17741c: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17741Cu;
    {
        const bool branch_taken_0x17741c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x177420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17741Cu;
            // 0x177420: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17741c) {
            ctx->pc = 0x177434u;
            goto label_177434;
        }
    }
    ctx->pc = 0x177424u;
    // 0x177424: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x177424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x177428: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x177428u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17742c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x17742cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x177430: 0xa6420008  sh          $v0, 0x8($s2)
    ctx->pc = 0x177430u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 2));
label_177434:
    // 0x177434: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x177434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_177438:
    // 0x177438: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x177438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x17743c: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x17743cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x177440: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x177440u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x177444: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x177444u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x177448: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x177448u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
label_17744c:
    // 0x17744c: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x17744cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x177450: 0x52220014  beql        $s1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x177450u;
    {
        const bool branch_taken_0x177450 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x177450) {
            ctx->pc = 0x177454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177450u;
            // 0x177454: 0xae350000  sw          $s5, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1774A4u;
            goto label_1774a4;
        }
    }
    ctx->pc = 0x177458u;
    // 0x177458: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x177458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17745c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x17745cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x177460: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x177460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x177464: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x177464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x177468: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x177468u;
    {
        const bool branch_taken_0x177468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17746Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177468u;
            // 0x17746c: 0xae350000  sw          $s5, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177468) {
            ctx->pc = 0x1774A4u;
            goto label_1774a4;
        }
    }
    ctx->pc = 0x177470u;
label_177470:
    // 0x177470: 0x12a201b8  beq         $s5, $v0, . + 4 + (0x1B8 << 2)
    ctx->pc = 0x177470u;
    {
        const bool branch_taken_0x177470 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x177474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177470u;
            // 0x177474: 0x2a2102b  sltu        $v0, $s5, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x177470) {
            ctx->pc = 0x177B54u;
            goto label_177b54;
        }
    }
    ctx->pc = 0x177478u;
    // 0x177478: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177478u;
    {
        const bool branch_taken_0x177478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17747Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177478u;
            // 0x17747c: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177478) {
            ctx->pc = 0x177490u;
            goto label_177490;
        }
    }
    ctx->pc = 0x177480u;
    // 0x177480: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x177480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x177484: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x177484u;
    {
        const bool branch_taken_0x177484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177484u;
            // 0x177488: 0x9663000a  lhu         $v1, 0xA($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177484) {
            ctx->pc = 0x177498u;
            goto label_177498;
        }
    }
    ctx->pc = 0x17748Cu;
    // 0x17748c: 0x0  nop
    ctx->pc = 0x17748cu;
    // NOP
label_177490:
    // 0x177490: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x177490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x177494: 0x9663000c  lhu         $v1, 0xC($s3)
    ctx->pc = 0x177494u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
label_177498:
    // 0x177498: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x177498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x17749c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17749cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1774a0: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x1774a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1774a4:
    // 0x1774a4: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1774a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x1774a8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1774A8u;
    {
        const bool branch_taken_0x1774a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1774a8) {
            ctx->pc = 0x1774F4u;
            goto label_1774f4;
        }
    }
    ctx->pc = 0x1774B0u;
    // 0x1774b0: 0xc05d762  jal         func_175D88
    ctx->pc = 0x1774B0u;
    SET_GPR_U32(ctx, 31, 0x1774B8u);
    ctx->pc = 0x1774B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1774B0u;
            // 0x1774b4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1774B8u; }
        if (ctx->pc != 0x1774B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1774B8u; }
        if (ctx->pc != 0x1774B8u) { return; }
    }
    ctx->pc = 0x1774B8u;
    // 0x1774b8: 0xc08e440  jal         func_239100
    ctx->pc = 0x1774B8u;
    SET_GPR_U32(ctx, 31, 0x1774C0u);
    ctx->pc = 0x1774BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1774B8u;
            // 0x1774bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1774C0u; }
        if (ctx->pc != 0x1774C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1774C0u; }
        if (ctx->pc != 0x1774C0u) { return; }
    }
    ctx->pc = 0x1774C0u;
    // 0x1774c0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1774c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1774c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1774c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1774c8: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x1774c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x1774cc: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1774ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x1774d0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1774d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1774d4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1774d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1774d8: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1774d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1774dc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1774dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1774e0: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1774e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1774e4: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x1774e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1774e8: 0xc08e45a  jal         func_239168
    ctx->pc = 0x1774E8u;
    SET_GPR_U32(ctx, 31, 0x1774F0u);
    ctx->pc = 0x1774ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1774E8u;
            // 0x1774ec: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1774F0u; }
        if (ctx->pc != 0x1774F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1774F0u; }
        if (ctx->pc != 0x1774F0u) { return; }
    }
    ctx->pc = 0x1774F0u;
    // 0x1774f0: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1774f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_1774f4:
    // 0x1774f4: 0x5682ffde  bnel        $s4, $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1774F4u;
    {
        const bool branch_taken_0x1774f4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1774f4) {
            ctx->pc = 0x1774F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1774F4u;
            // 0x1774f8: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177470u;
            runtime->cooperativeGuestYield();
            goto label_177470;
        }
    }
    ctx->pc = 0x1774FCu;
    // 0x1774fc: 0x16800011  bnez        $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x1774FCu;
    {
        const bool branch_taken_0x1774fc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x177500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1774FCu;
            // 0x177500: 0x2617c4b4  addiu       $s7, $s0, -0x3B4C (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1774fc) {
            ctx->pc = 0x177544u;
            goto label_177544;
        }
    }
    ctx->pc = 0x177504u;
    // 0x177504: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177504u;
    SET_GPR_U32(ctx, 31, 0x17750Cu);
    ctx->pc = 0x177508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177504u;
            // 0x177508: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17750Cu; }
        if (ctx->pc != 0x17750Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17750Cu; }
        if (ctx->pc != 0x17750Cu) { return; }
    }
    ctx->pc = 0x17750Cu;
    // 0x17750c: 0xc08e440  jal         func_239100
    ctx->pc = 0x17750Cu;
    SET_GPR_U32(ctx, 31, 0x177514u);
    ctx->pc = 0x177510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17750Cu;
            // 0x177510: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177514u; }
        if (ctx->pc != 0x177514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177514u; }
        if (ctx->pc != 0x177514u) { return; }
    }
    ctx->pc = 0x177514u;
    // 0x177514: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x177514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x177518: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17751c: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x17751cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x177520: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x177524: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177524u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177528: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17752c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x17752cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177530: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177530u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x177534: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x177534u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177538: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x177538u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x17753c: 0xc08e45a  jal         func_239168
    ctx->pc = 0x17753Cu;
    SET_GPR_U32(ctx, 31, 0x177544u);
    ctx->pc = 0x177540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17753Cu;
            // 0x177540: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177544u; }
        if (ctx->pc != 0x177544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177544u; }
        if (ctx->pc != 0x177544u) { return; }
    }
    ctx->pc = 0x177544u;
label_177544:
    // 0x177544: 0x8e03c4b4  lw          $v1, -0x3B4C($s0)
    ctx->pc = 0x177544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x177548: 0x566300e9  bnel        $s3, $v1, . + 4 + (0xE9 << 2)
    ctx->pc = 0x177548u;
    {
        const bool branch_taken_0x177548 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x177548) {
            ctx->pc = 0x17754Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177548u;
            // 0x17754c: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1778F0u;
            goto label_1778f0;
        }
    }
    ctx->pc = 0x177550u;
    // 0x177550: 0x16600012  bnez        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x177550u;
    {
        const bool branch_taken_0x177550 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x177554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177550u;
            // 0x177554: 0x8e12c4b4  lw          $s2, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177550) {
            ctx->pc = 0x17759Cu;
            goto label_17759c;
        }
    }
    ctx->pc = 0x177558u;
    // 0x177558: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177558u;
    SET_GPR_U32(ctx, 31, 0x177560u);
    ctx->pc = 0x17755Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177558u;
            // 0x17755c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177560u; }
        if (ctx->pc != 0x177560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177560u; }
        if (ctx->pc != 0x177560u) { return; }
    }
    ctx->pc = 0x177560u;
    // 0x177560: 0xc08e440  jal         func_239100
    ctx->pc = 0x177560u;
    SET_GPR_U32(ctx, 31, 0x177568u);
    ctx->pc = 0x177564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177560u;
            // 0x177564: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177568u; }
        if (ctx->pc != 0x177568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177568u; }
        if (ctx->pc != 0x177568u) { return; }
    }
    ctx->pc = 0x177568u;
    // 0x177568: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x177568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x17756c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17756cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177570: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x177570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x177574: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x177578: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177578u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17757c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17757cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177580: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177580u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177584: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x177588: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x177588u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x17758c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x17758cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x177590: 0xc08e45a  jal         func_239168
    ctx->pc = 0x177590u;
    SET_GPR_U32(ctx, 31, 0x177598u);
    ctx->pc = 0x177594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177590u;
            // 0x177594: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177598u; }
        if (ctx->pc != 0x177598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177598u; }
        if (ctx->pc != 0x177598u) { return; }
    }
    ctx->pc = 0x177598u;
    // 0x177598: 0x8e12c4b4  lw          $s2, -0x3B4C($s0)
    ctx->pc = 0x177598u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_17759c:
    // 0x17759c: 0x16400012  bnez        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x17759Cu;
    {
        const bool branch_taken_0x17759c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1775A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17759Cu;
            // 0x1775a0: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17759c) {
            ctx->pc = 0x1775E8u;
            goto label_1775e8;
        }
    }
    ctx->pc = 0x1775A4u;
    // 0x1775a4: 0xc05d762  jal         func_175D88
    ctx->pc = 0x1775A4u;
    SET_GPR_U32(ctx, 31, 0x1775ACu);
    ctx->pc = 0x1775A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1775A4u;
            // 0x1775a8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775ACu; }
        if (ctx->pc != 0x1775ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775ACu; }
        if (ctx->pc != 0x1775ACu) { return; }
    }
    ctx->pc = 0x1775ACu;
    // 0x1775ac: 0xc08e440  jal         func_239100
    ctx->pc = 0x1775ACu;
    SET_GPR_U32(ctx, 31, 0x1775B4u);
    ctx->pc = 0x1775B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1775ACu;
            // 0x1775b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775B4u; }
        if (ctx->pc != 0x1775B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775B4u; }
        if (ctx->pc != 0x1775B4u) { return; }
    }
    ctx->pc = 0x1775B4u;
    // 0x1775b4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1775b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1775b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1775b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775bc: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x1775bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x1775c0: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1775c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x1775c4: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1775c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1775c8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1775c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1775cc: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1775ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1775d0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1775d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1775d4: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1775d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1775d8: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x1775d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1775dc: 0xc08e45a  jal         func_239168
    ctx->pc = 0x1775DCu;
    SET_GPR_U32(ctx, 31, 0x1775E4u);
    ctx->pc = 0x1775E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1775DCu;
            // 0x1775e0: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775E4u; }
        if (ctx->pc != 0x1775E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775E4u; }
        if (ctx->pc != 0x1775E4u) { return; }
    }
    ctx->pc = 0x1775E4u;
    // 0x1775e4: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1775e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_1775e8:
    // 0x1775e8: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1775E8u;
    {
        const bool branch_taken_0x1775e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1775ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1775E8u;
            // 0x1775ec: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1775e8) {
            ctx->pc = 0x177600u;
            goto label_177600;
        }
    }
    ctx->pc = 0x1775F0u;
    // 0x1775f0: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x1775f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x1775f4: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x1775f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1775f8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1775f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1775fc: 0xa6220008  sh          $v0, 0x8($s1)
    ctx->pc = 0x1775fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
label_177600:
    // 0x177600: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x177604: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x177604u;
    {
        const bool branch_taken_0x177604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177604u;
            // 0x177608: 0x8e12c4b4  lw          $s2, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177604) {
            ctx->pc = 0x177650u;
            goto label_177650;
        }
    }
    ctx->pc = 0x17760Cu;
    // 0x17760c: 0xc05d762  jal         func_175D88
    ctx->pc = 0x17760Cu;
    SET_GPR_U32(ctx, 31, 0x177614u);
    ctx->pc = 0x177610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17760Cu;
            // 0x177610: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177614u; }
        if (ctx->pc != 0x177614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177614u; }
        if (ctx->pc != 0x177614u) { return; }
    }
    ctx->pc = 0x177614u;
    // 0x177614: 0xc08e440  jal         func_239100
    ctx->pc = 0x177614u;
    SET_GPR_U32(ctx, 31, 0x17761Cu);
    ctx->pc = 0x177618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177614u;
            // 0x177618: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17761Cu; }
        if (ctx->pc != 0x17761Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17761Cu; }
        if (ctx->pc != 0x17761Cu) { return; }
    }
    ctx->pc = 0x17761Cu;
    // 0x17761c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x17761cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x177620: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177624: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x177624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x177628: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x17762c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x17762cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177630: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177634: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177634u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177638: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17763c: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x17763cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177640: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x177640u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x177644: 0xc08e45a  jal         func_239168
    ctx->pc = 0x177644u;
    SET_GPR_U32(ctx, 31, 0x17764Cu);
    ctx->pc = 0x177648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177644u;
            // 0x177648: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17764Cu; }
        if (ctx->pc != 0x17764Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17764Cu; }
        if (ctx->pc != 0x17764Cu) { return; }
    }
    ctx->pc = 0x17764Cu;
    // 0x17764c: 0x8e12c4b4  lw          $s2, -0x3B4C($s0)
    ctx->pc = 0x17764cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_177650:
    // 0x177650: 0x16400012  bnez        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x177650u;
    {
        const bool branch_taken_0x177650 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x177654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177650u;
            // 0x177654: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177650) {
            ctx->pc = 0x17769Cu;
            goto label_17769c;
        }
    }
    ctx->pc = 0x177658u;
    // 0x177658: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177658u;
    SET_GPR_U32(ctx, 31, 0x177660u);
    ctx->pc = 0x17765Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177658u;
            // 0x17765c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177660u; }
        if (ctx->pc != 0x177660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177660u; }
        if (ctx->pc != 0x177660u) { return; }
    }
    ctx->pc = 0x177660u;
    // 0x177660: 0xc08e440  jal         func_239100
    ctx->pc = 0x177660u;
    SET_GPR_U32(ctx, 31, 0x177668u);
    ctx->pc = 0x177664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177660u;
            // 0x177664: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177668u; }
        if (ctx->pc != 0x177668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177668u; }
        if (ctx->pc != 0x177668u) { return; }
    }
    ctx->pc = 0x177668u;
    // 0x177668: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x177668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x17766c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17766cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177670: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x177670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x177674: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x177678: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177678u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17767c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17767cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177680: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177680u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177684: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x177688: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x177688u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x17768c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x17768cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x177690: 0xc08e45a  jal         func_239168
    ctx->pc = 0x177690u;
    SET_GPR_U32(ctx, 31, 0x177698u);
    ctx->pc = 0x177694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177690u;
            // 0x177694: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177698u; }
        if (ctx->pc != 0x177698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177698u; }
        if (ctx->pc != 0x177698u) { return; }
    }
    ctx->pc = 0x177698u;
    // 0x177698: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_17769c:
    // 0x17769c: 0x52220035  beql        $s1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x17769Cu;
    {
        const bool branch_taken_0x17769c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x17769c) {
            ctx->pc = 0x1776A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17769Cu;
            // 0x1776a0: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177774u;
            goto label_177774;
        }
    }
    ctx->pc = 0x1776A4u;
    // 0x1776a4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1776A4u;
    {
        const bool branch_taken_0x1776a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1776A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1776A4u;
            // 0x1776a8: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1776a4) {
            ctx->pc = 0x1776F0u;
            goto label_1776f0;
        }
    }
    ctx->pc = 0x1776ACu;
    // 0x1776ac: 0xc05d762  jal         func_175D88
    ctx->pc = 0x1776ACu;
    SET_GPR_U32(ctx, 31, 0x1776B4u);
    ctx->pc = 0x1776B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1776ACu;
            // 0x1776b0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1776B4u; }
        if (ctx->pc != 0x1776B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1776B4u; }
        if (ctx->pc != 0x1776B4u) { return; }
    }
    ctx->pc = 0x1776B4u;
    // 0x1776b4: 0xc08e440  jal         func_239100
    ctx->pc = 0x1776B4u;
    SET_GPR_U32(ctx, 31, 0x1776BCu);
    ctx->pc = 0x1776B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1776B4u;
            // 0x1776b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1776BCu; }
        if (ctx->pc != 0x1776BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1776BCu; }
        if (ctx->pc != 0x1776BCu) { return; }
    }
    ctx->pc = 0x1776BCu;
    // 0x1776bc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1776bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1776c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1776c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1776c4: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x1776c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x1776c8: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1776c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x1776cc: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1776ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1776d0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1776d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1776d4: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1776d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1776d8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1776d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1776dc: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1776dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1776e0: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x1776e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1776e4: 0xc08e45a  jal         func_239168
    ctx->pc = 0x1776E4u;
    SET_GPR_U32(ctx, 31, 0x1776ECu);
    ctx->pc = 0x1776E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1776E4u;
            // 0x1776e8: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1776ECu; }
        if (ctx->pc != 0x1776ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1776ECu; }
        if (ctx->pc != 0x1776ECu) { return; }
    }
    ctx->pc = 0x1776ECu;
    // 0x1776ec: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1776ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_1776f0:
    // 0x1776f0: 0x5242001b  beql        $s2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1776F0u;
    {
        const bool branch_taken_0x1776f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1776f0) {
            ctx->pc = 0x1776F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1776F0u;
            // 0x1776f4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177760u;
            goto label_177760;
        }
    }
    ctx->pc = 0x1776F8u;
    // 0x1776f8: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1776F8u;
    {
        const bool branch_taken_0x1776f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1776f8) {
            ctx->pc = 0x1776FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1776F8u;
            // 0x1776fc: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177744u;
            goto label_177744;
        }
    }
    ctx->pc = 0x177700u;
    // 0x177700: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177700u;
    SET_GPR_U32(ctx, 31, 0x177708u);
    ctx->pc = 0x177704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177700u;
            // 0x177704: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177708u; }
        if (ctx->pc != 0x177708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177708u; }
        if (ctx->pc != 0x177708u) { return; }
    }
    ctx->pc = 0x177708u;
    // 0x177708: 0xc08e440  jal         func_239100
    ctx->pc = 0x177708u;
    SET_GPR_U32(ctx, 31, 0x177710u);
    ctx->pc = 0x17770Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177708u;
            // 0x17770c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177710u; }
        if (ctx->pc != 0x177710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177710u; }
        if (ctx->pc != 0x177710u) { return; }
    }
    ctx->pc = 0x177710u;
    // 0x177710: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x177710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x177714: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177718: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x177718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x17771c: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x17771cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x177720: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177720u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177724: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177728: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177728u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17772c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17772cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x177730: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x177730u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177734: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x177734u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x177738: 0xc08e45a  jal         func_239168
    ctx->pc = 0x177738u;
    SET_GPR_U32(ctx, 31, 0x177740u);
    ctx->pc = 0x17773Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177738u;
            // 0x17773c: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177740u; }
        if (ctx->pc != 0x177740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177740u; }
        if (ctx->pc != 0x177740u) { return; }
    }
    ctx->pc = 0x177740u;
    // 0x177740: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x177740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_177744:
    // 0x177744: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177744u;
    {
        const bool branch_taken_0x177744 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x177748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177744u;
            // 0x177748: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177744) {
            ctx->pc = 0x17775Cu;
            goto label_17775c;
        }
    }
    ctx->pc = 0x17774Cu;
    // 0x17774c: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x17774cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x177750: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x177750u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x177754: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x177754u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x177758: 0xa6420008  sh          $v0, 0x8($s2)
    ctx->pc = 0x177758u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 2));
label_17775c:
    // 0x17775c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17775cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_177760:
    // 0x177760: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x177760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x177764: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x177764u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x177768: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x177768u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x17776c: 0xa622000a  sh          $v0, 0xA($s1)
    ctx->pc = 0x17776cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x177770: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x177770u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
label_177774:
    // 0x177774: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x177778: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x177778u;
    {
        const bool branch_taken_0x177778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17777Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177778u;
            // 0x17777c: 0x8e12c4b4  lw          $s2, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177778) {
            ctx->pc = 0x1777C4u;
            goto label_1777c4;
        }
    }
    ctx->pc = 0x177780u;
    // 0x177780: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177780u;
    SET_GPR_U32(ctx, 31, 0x177788u);
    ctx->pc = 0x177784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177780u;
            // 0x177784: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177788u; }
        if (ctx->pc != 0x177788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177788u; }
        if (ctx->pc != 0x177788u) { return; }
    }
    ctx->pc = 0x177788u;
    // 0x177788: 0xc08e440  jal         func_239100
    ctx->pc = 0x177788u;
    SET_GPR_U32(ctx, 31, 0x177790u);
    ctx->pc = 0x17778Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177788u;
            // 0x17778c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177790u; }
        if (ctx->pc != 0x177790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177790u; }
        if (ctx->pc != 0x177790u) { return; }
    }
    ctx->pc = 0x177790u;
    // 0x177790: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x177790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x177794: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177798: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x177798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x17779c: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x17779cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x1777a0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1777a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1777a4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1777a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1777a8: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1777a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1777ac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1777acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1777b0: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1777b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1777b4: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x1777b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1777b8: 0xc08e45a  jal         func_239168
    ctx->pc = 0x1777B8u;
    SET_GPR_U32(ctx, 31, 0x1777C0u);
    ctx->pc = 0x1777BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1777B8u;
            // 0x1777bc: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1777C0u; }
        if (ctx->pc != 0x1777C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1777C0u; }
        if (ctx->pc != 0x1777C0u) { return; }
    }
    ctx->pc = 0x1777C0u;
    // 0x1777c0: 0x8e12c4b4  lw          $s2, -0x3B4C($s0)
    ctx->pc = 0x1777c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_1777c4:
    // 0x1777c4: 0x16400012  bnez        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1777C4u;
    {
        const bool branch_taken_0x1777c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1777C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1777C4u;
            // 0x1777c8: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1777c4) {
            ctx->pc = 0x177810u;
            goto label_177810;
        }
    }
    ctx->pc = 0x1777CCu;
    // 0x1777cc: 0xc05d762  jal         func_175D88
    ctx->pc = 0x1777CCu;
    SET_GPR_U32(ctx, 31, 0x1777D4u);
    ctx->pc = 0x1777D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1777CCu;
            // 0x1777d0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1777D4u; }
        if (ctx->pc != 0x1777D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1777D4u; }
        if (ctx->pc != 0x1777D4u) { return; }
    }
    ctx->pc = 0x1777D4u;
    // 0x1777d4: 0xc08e440  jal         func_239100
    ctx->pc = 0x1777D4u;
    SET_GPR_U32(ctx, 31, 0x1777DCu);
    ctx->pc = 0x1777D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1777D4u;
            // 0x1777d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1777DCu; }
        if (ctx->pc != 0x1777DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1777DCu; }
        if (ctx->pc != 0x1777DCu) { return; }
    }
    ctx->pc = 0x1777DCu;
    // 0x1777dc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1777dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1777e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1777e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1777e4: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x1777e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x1777e8: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1777e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x1777ec: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1777ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1777f0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1777f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1777f4: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1777f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1777f8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1777f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1777fc: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1777fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177800: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x177800u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x177804: 0xc08e45a  jal         func_239168
    ctx->pc = 0x177804u;
    SET_GPR_U32(ctx, 31, 0x17780Cu);
    ctx->pc = 0x177808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177804u;
            // 0x177808: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17780Cu; }
        if (ctx->pc != 0x17780Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17780Cu; }
        if (ctx->pc != 0x17780Cu) { return; }
    }
    ctx->pc = 0x17780Cu;
    // 0x17780c: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x17780cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_177810:
    // 0x177810: 0x522200d0  beql        $s1, $v0, . + 4 + (0xD0 << 2)
    ctx->pc = 0x177810u;
    {
        const bool branch_taken_0x177810 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x177810) {
            ctx->pc = 0x177814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177810u;
            // 0x177814: 0xaed10000  sw          $s1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177B54u;
            goto label_177b54;
        }
    }
    ctx->pc = 0x177818u;
    // 0x177818: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x177818u;
    {
        const bool branch_taken_0x177818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17781Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177818u;
            // 0x17781c: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177818) {
            ctx->pc = 0x177868u;
            goto label_177868;
        }
    }
    ctx->pc = 0x177820u;
    // 0x177820: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177820u;
    SET_GPR_U32(ctx, 31, 0x177828u);
    ctx->pc = 0x177824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177820u;
            // 0x177824: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177828u; }
        if (ctx->pc != 0x177828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177828u; }
        if (ctx->pc != 0x177828u) { return; }
    }
    ctx->pc = 0x177828u;
    // 0x177828: 0xc08e440  jal         func_239100
    ctx->pc = 0x177828u;
    SET_GPR_U32(ctx, 31, 0x177830u);
    ctx->pc = 0x17782Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177828u;
            // 0x17782c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177830u; }
        if (ctx->pc != 0x177830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177830u; }
        if (ctx->pc != 0x177830u) { return; }
    }
    ctx->pc = 0x177830u;
    // 0x177830: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x177830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x177834: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177838: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x177838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x17783c: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x17783cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x177840: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177840u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177844: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177848: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177848u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17784c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17784cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x177850: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x177850u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177854: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x177854u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x177858: 0xc08e45a  jal         func_239168
    ctx->pc = 0x177858u;
    SET_GPR_U32(ctx, 31, 0x177860u);
    ctx->pc = 0x17785Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177858u;
            // 0x17785c: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177860u; }
        if (ctx->pc != 0x177860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177860u; }
        if (ctx->pc != 0x177860u) { return; }
    }
    ctx->pc = 0x177860u;
    // 0x177860: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x177864: 0x0  nop
    ctx->pc = 0x177864u;
    // NOP
label_177868:
    // 0x177868: 0x5242001b  beql        $s2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x177868u;
    {
        const bool branch_taken_0x177868 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x177868) {
            ctx->pc = 0x17786Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177868u;
            // 0x17786c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1778D8u;
            goto label_1778d8;
        }
    }
    ctx->pc = 0x177870u;
    // 0x177870: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x177870u;
    {
        const bool branch_taken_0x177870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177870u;
            // 0x177874: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177870) {
            ctx->pc = 0x1778BCu;
            goto label_1778bc;
        }
    }
    ctx->pc = 0x177878u;
    // 0x177878: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177878u;
    SET_GPR_U32(ctx, 31, 0x177880u);
    ctx->pc = 0x17787Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177878u;
            // 0x17787c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177880u; }
        if (ctx->pc != 0x177880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177880u; }
        if (ctx->pc != 0x177880u) { return; }
    }
    ctx->pc = 0x177880u;
    // 0x177880: 0xc08e440  jal         func_239100
    ctx->pc = 0x177880u;
    SET_GPR_U32(ctx, 31, 0x177888u);
    ctx->pc = 0x177884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177880u;
            // 0x177884: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177888u; }
        if (ctx->pc != 0x177888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177888u; }
        if (ctx->pc != 0x177888u) { return; }
    }
    ctx->pc = 0x177888u;
    // 0x177888: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x177888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x17788c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17788cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177890: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x177890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x177894: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x177898: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177898u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17789c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17789cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1778a0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1778a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1778a4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1778a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1778a8: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1778a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1778ac: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x1778acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1778b0: 0xc08e45a  jal         func_239168
    ctx->pc = 0x1778B0u;
    SET_GPR_U32(ctx, 31, 0x1778B8u);
    ctx->pc = 0x1778B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1778B0u;
            // 0x1778b4: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1778B8u; }
        if (ctx->pc != 0x1778B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1778B8u; }
        if (ctx->pc != 0x1778B8u) { return; }
    }
    ctx->pc = 0x1778B8u;
    // 0x1778b8: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1778b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_1778bc:
    // 0x1778bc: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1778BCu;
    {
        const bool branch_taken_0x1778bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1778C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1778BCu;
            // 0x1778c0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1778bc) {
            ctx->pc = 0x1778D4u;
            goto label_1778d4;
        }
    }
    ctx->pc = 0x1778C4u;
    // 0x1778c4: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x1778c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x1778c8: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x1778c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1778cc: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1778ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1778d0: 0xa6420008  sh          $v0, 0x8($s2)
    ctx->pc = 0x1778d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 2));
label_1778d4:
    // 0x1778d4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1778d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1778d8:
    // 0x1778d8: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x1778d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x1778dc: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x1778dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1778e0: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1778e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1778e4: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x1778e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1778e8: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1778E8u;
    {
        const bool branch_taken_0x1778e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1778ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1778E8u;
            // 0x1778ec: 0xaed10000  sw          $s1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1778e8) {
            ctx->pc = 0x177B54u;
            goto label_177b54;
        }
    }
    ctx->pc = 0x1778F0u;
label_1778f0:
    // 0x1778f0: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x1778f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1778f4: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1778F4u;
    {
        const bool branch_taken_0x1778f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1778f4) {
            ctx->pc = 0x177A24u;
            goto label_177a24;
        }
    }
    ctx->pc = 0x1778FCu;
    // 0x1778fc: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1778FCu;
    {
        const bool branch_taken_0x1778fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x177900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1778FCu;
            // 0x177900: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1778fc) {
            ctx->pc = 0x177948u;
            goto label_177948;
        }
    }
    ctx->pc = 0x177904u;
    // 0x177904: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177904u;
    SET_GPR_U32(ctx, 31, 0x17790Cu);
    ctx->pc = 0x177908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177904u;
            // 0x177908: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17790Cu; }
        if (ctx->pc != 0x17790Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17790Cu; }
        if (ctx->pc != 0x17790Cu) { return; }
    }
    ctx->pc = 0x17790Cu;
    // 0x17790c: 0xc08e440  jal         func_239100
    ctx->pc = 0x17790Cu;
    SET_GPR_U32(ctx, 31, 0x177914u);
    ctx->pc = 0x177910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17790Cu;
            // 0x177910: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177914u; }
        if (ctx->pc != 0x177914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177914u; }
        if (ctx->pc != 0x177914u) { return; }
    }
    ctx->pc = 0x177914u;
    // 0x177914: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x177914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x177918: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17791c: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x17791cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x177920: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x177924: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177924u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177928: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17792c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x17792cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177930: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x177934: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x177934u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177938: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x177938u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x17793c: 0xc08e45a  jal         func_239168
    ctx->pc = 0x17793Cu;
    SET_GPR_U32(ctx, 31, 0x177944u);
    ctx->pc = 0x177940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17793Cu;
            // 0x177940: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177944u; }
        if (ctx->pc != 0x177944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177944u; }
        if (ctx->pc != 0x177944u) { return; }
    }
    ctx->pc = 0x177944u;
    // 0x177944: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_177948:
    // 0x177948: 0x12620080  beq         $s3, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x177948u;
    {
        const bool branch_taken_0x177948 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x17794Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177948u;
            // 0x17794c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177948) {
            ctx->pc = 0x177B4Cu;
            goto label_177b4c;
        }
    }
    ctx->pc = 0x177950u;
    // 0x177950: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x177950u;
    {
        const bool branch_taken_0x177950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177950u;
            // 0x177954: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177950) {
            ctx->pc = 0x1779A0u;
            goto label_1779a0;
        }
    }
    ctx->pc = 0x177958u;
    // 0x177958: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177958u;
    SET_GPR_U32(ctx, 31, 0x177960u);
    ctx->pc = 0x17795Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177958u;
            // 0x17795c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177960u; }
        if (ctx->pc != 0x177960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177960u; }
        if (ctx->pc != 0x177960u) { return; }
    }
    ctx->pc = 0x177960u;
    // 0x177960: 0xc08e440  jal         func_239100
    ctx->pc = 0x177960u;
    SET_GPR_U32(ctx, 31, 0x177968u);
    ctx->pc = 0x177964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177960u;
            // 0x177964: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177968u; }
        if (ctx->pc != 0x177968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177968u; }
        if (ctx->pc != 0x177968u) { return; }
    }
    ctx->pc = 0x177968u;
    // 0x177968: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x177968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x17796c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17796cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177970: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x177970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x177974: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x177978: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177978u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17797c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17797cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177980: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177980u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177984: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x177988: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x177988u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x17798c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x17798cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x177990: 0xc08e45a  jal         func_239168
    ctx->pc = 0x177990u;
    SET_GPR_U32(ctx, 31, 0x177998u);
    ctx->pc = 0x177994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177990u;
            // 0x177994: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177998u; }
        if (ctx->pc != 0x177998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177998u; }
        if (ctx->pc != 0x177998u) { return; }
    }
    ctx->pc = 0x177998u;
    // 0x177998: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x17799c: 0x0  nop
    ctx->pc = 0x17799cu;
    // NOP
label_1779a0:
    // 0x1779a0: 0x5222001b  beql        $s1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1779A0u;
    {
        const bool branch_taken_0x1779a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1779a0) {
            ctx->pc = 0x1779A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1779A0u;
            // 0x1779a4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177A10u;
            goto label_177a10;
        }
    }
    ctx->pc = 0x1779A8u;
    // 0x1779a8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1779A8u;
    {
        const bool branch_taken_0x1779a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1779ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1779A8u;
            // 0x1779ac: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1779a8) {
            ctx->pc = 0x1779F4u;
            goto label_1779f4;
        }
    }
    ctx->pc = 0x1779B0u;
    // 0x1779b0: 0xc05d762  jal         func_175D88
    ctx->pc = 0x1779B0u;
    SET_GPR_U32(ctx, 31, 0x1779B8u);
    ctx->pc = 0x1779B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1779B0u;
            // 0x1779b4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1779B8u; }
        if (ctx->pc != 0x1779B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1779B8u; }
        if (ctx->pc != 0x1779B8u) { return; }
    }
    ctx->pc = 0x1779B8u;
    // 0x1779b8: 0xc08e440  jal         func_239100
    ctx->pc = 0x1779B8u;
    SET_GPR_U32(ctx, 31, 0x1779C0u);
    ctx->pc = 0x1779BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1779B8u;
            // 0x1779bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1779C0u; }
        if (ctx->pc != 0x1779C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1779C0u; }
        if (ctx->pc != 0x1779C0u) { return; }
    }
    ctx->pc = 0x1779C0u;
    // 0x1779c0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1779c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1779c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1779c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1779c8: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x1779c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x1779cc: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1779ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x1779d0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1779d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1779d4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1779d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1779d8: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1779d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1779dc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1779dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1779e0: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1779e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1779e4: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x1779e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1779e8: 0xc08e45a  jal         func_239168
    ctx->pc = 0x1779E8u;
    SET_GPR_U32(ctx, 31, 0x1779F0u);
    ctx->pc = 0x1779ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1779E8u;
            // 0x1779ec: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1779F0u; }
        if (ctx->pc != 0x1779F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1779F0u; }
        if (ctx->pc != 0x1779F0u) { return; }
    }
    ctx->pc = 0x1779F0u;
    // 0x1779f0: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1779f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_1779f4:
    // 0x1779f4: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1779F4u;
    {
        const bool branch_taken_0x1779f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1779F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1779F4u;
            // 0x1779f8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1779f4) {
            ctx->pc = 0x177A0Cu;
            goto label_177a0c;
        }
    }
    ctx->pc = 0x1779FCu;
    // 0x1779fc: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x1779fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x177a00: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x177a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x177a04: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x177a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x177a08: 0xa6220008  sh          $v0, 0x8($s1)
    ctx->pc = 0x177a08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
label_177a0c:
    // 0x177a0c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x177a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_177a10:
    // 0x177a10: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x177a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x177a14: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x177a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x177a18: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x177a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x177a1c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x177A1Cu;
    {
        const bool branch_taken_0x177a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177A1Cu;
            // 0x177a20: 0xa662000a  sh          $v0, 0xA($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177a1c) {
            ctx->pc = 0x177B48u;
            goto label_177b48;
        }
    }
    ctx->pc = 0x177A24u;
label_177a24:
    // 0x177a24: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x177A24u;
    {
        const bool branch_taken_0x177a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x177A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177A24u;
            // 0x177a28: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177a24) {
            ctx->pc = 0x177A70u;
            goto label_177a70;
        }
    }
    ctx->pc = 0x177A2Cu;
    // 0x177a2c: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177A2Cu;
    SET_GPR_U32(ctx, 31, 0x177A34u);
    ctx->pc = 0x177A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177A2Cu;
            // 0x177a30: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A34u; }
        if (ctx->pc != 0x177A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A34u; }
        if (ctx->pc != 0x177A34u) { return; }
    }
    ctx->pc = 0x177A34u;
    // 0x177a34: 0xc08e440  jal         func_239100
    ctx->pc = 0x177A34u;
    SET_GPR_U32(ctx, 31, 0x177A3Cu);
    ctx->pc = 0x177A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177A34u;
            // 0x177a38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A3Cu; }
        if (ctx->pc != 0x177A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A3Cu; }
        if (ctx->pc != 0x177A3Cu) { return; }
    }
    ctx->pc = 0x177A3Cu;
    // 0x177a3c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x177a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x177a40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a44: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x177a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x177a48: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x177a4c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177a50: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177a50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177a54: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177a58: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177a58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x177a5c: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x177a5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177a60: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x177a60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x177a64: 0xc08e45a  jal         func_239168
    ctx->pc = 0x177A64u;
    SET_GPR_U32(ctx, 31, 0x177A6Cu);
    ctx->pc = 0x177A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177A64u;
            // 0x177a68: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A6Cu; }
        if (ctx->pc != 0x177A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A6Cu; }
        if (ctx->pc != 0x177A6Cu) { return; }
    }
    ctx->pc = 0x177A6Cu;
    // 0x177a6c: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_177a70:
    // 0x177a70: 0x12620036  beq         $s3, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x177A70u;
    {
        const bool branch_taken_0x177a70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x177A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177A70u;
            // 0x177a74: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177a70) {
            ctx->pc = 0x177B4Cu;
            goto label_177b4c;
        }
    }
    ctx->pc = 0x177A78u;
    // 0x177a78: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x177A78u;
    {
        const bool branch_taken_0x177a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177A78u;
            // 0x177a7c: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177a78) {
            ctx->pc = 0x177AC8u;
            goto label_177ac8;
        }
    }
    ctx->pc = 0x177A80u;
    // 0x177a80: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177A80u;
    SET_GPR_U32(ctx, 31, 0x177A88u);
    ctx->pc = 0x177A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177A80u;
            // 0x177a84: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A88u; }
        if (ctx->pc != 0x177A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A88u; }
        if (ctx->pc != 0x177A88u) { return; }
    }
    ctx->pc = 0x177A88u;
    // 0x177a88: 0xc08e440  jal         func_239100
    ctx->pc = 0x177A88u;
    SET_GPR_U32(ctx, 31, 0x177A90u);
    ctx->pc = 0x177A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177A88u;
            // 0x177a8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A90u; }
        if (ctx->pc != 0x177A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A90u; }
        if (ctx->pc != 0x177A90u) { return; }
    }
    ctx->pc = 0x177A90u;
    // 0x177a90: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x177a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x177a94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a98: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x177a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x177a9c: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x177aa0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177aa4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177aa8: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177aac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177aacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x177ab0: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x177ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177ab4: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x177ab4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x177ab8: 0xc08e45a  jal         func_239168
    ctx->pc = 0x177AB8u;
    SET_GPR_U32(ctx, 31, 0x177AC0u);
    ctx->pc = 0x177ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177AB8u;
            // 0x177abc: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177AC0u; }
        if (ctx->pc != 0x177AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177AC0u; }
        if (ctx->pc != 0x177AC0u) { return; }
    }
    ctx->pc = 0x177AC0u;
    // 0x177ac0: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x177ac4: 0x0  nop
    ctx->pc = 0x177ac4u;
    // NOP
label_177ac8:
    // 0x177ac8: 0x5222001b  beql        $s1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x177AC8u;
    {
        const bool branch_taken_0x177ac8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x177ac8) {
            ctx->pc = 0x177ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177AC8u;
            // 0x177acc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177B38u;
            goto label_177b38;
        }
    }
    ctx->pc = 0x177AD0u;
    // 0x177ad0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x177AD0u;
    {
        const bool branch_taken_0x177ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177AD0u;
            // 0x177ad4: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177ad0) {
            ctx->pc = 0x177B1Cu;
            goto label_177b1c;
        }
    }
    ctx->pc = 0x177AD8u;
    // 0x177ad8: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177AD8u;
    SET_GPR_U32(ctx, 31, 0x177AE0u);
    ctx->pc = 0x177ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177AD8u;
            // 0x177adc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177AE0u; }
        if (ctx->pc != 0x177AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177AE0u; }
        if (ctx->pc != 0x177AE0u) { return; }
    }
    ctx->pc = 0x177AE0u;
    // 0x177ae0: 0xc08e440  jal         func_239100
    ctx->pc = 0x177AE0u;
    SET_GPR_U32(ctx, 31, 0x177AE8u);
    ctx->pc = 0x177AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177AE0u;
            // 0x177ae4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177AE8u; }
        if (ctx->pc != 0x177AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177AE8u; }
        if (ctx->pc != 0x177AE8u) { return; }
    }
    ctx->pc = 0x177AE8u;
    // 0x177ae8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x177ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x177aec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177af0: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x177af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x177af4: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x177af8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177afc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177afcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177b00: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177b04: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x177b08: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x177b08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177b0c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x177b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x177b10: 0xc08e45a  jal         func_239168
    ctx->pc = 0x177B10u;
    SET_GPR_U32(ctx, 31, 0x177B18u);
    ctx->pc = 0x177B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177B10u;
            // 0x177b14: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177B18u; }
        if (ctx->pc != 0x177B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177B18u; }
        if (ctx->pc != 0x177B18u) { return; }
    }
    ctx->pc = 0x177B18u;
    // 0x177b18: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_177b1c:
    // 0x177b1c: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177B1Cu;
    {
        const bool branch_taken_0x177b1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x177B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177B1Cu;
            // 0x177b20: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177b1c) {
            ctx->pc = 0x177B34u;
            goto label_177b34;
        }
    }
    ctx->pc = 0x177B24u;
    // 0x177b24: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x177b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x177b28: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x177b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x177b2c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x177b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x177b30: 0xa6220008  sh          $v0, 0x8($s1)
    ctx->pc = 0x177b30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
label_177b34:
    // 0x177b34: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x177b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_177b38:
    // 0x177b38: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x177b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x177b3c: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x177b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x177b40: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x177b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x177b44: 0xa662000c  sh          $v0, 0xC($s3)
    ctx->pc = 0x177b44u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 2));
label_177b48:
    // 0x177b48: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x177b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_177b4c:
    // 0x177b4c: 0xc05db3e  jal         func_176CF8
    ctx->pc = 0x177B4Cu;
    SET_GPR_U32(ctx, 31, 0x177B54u);
    ctx->pc = 0x177B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177B4Cu;
            // 0x177b50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176CF8u;
    if (runtime->hasFunction(0x176CF8u)) {
        auto targetFn = runtime->lookupFunction(0x176CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177B54u; }
        if (ctx->pc != 0x177B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176CF8_0x176cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177B54u; }
        if (ctx->pc != 0x177B54u) { return; }
    }
    ctx->pc = 0x177B54u;
label_177b54:
    // 0x177b54: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x177b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x177b58: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x177b58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x177b5c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x177b5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x177b60: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x177b60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x177b64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x177b64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177b68: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x177b68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177b6c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x177b6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177b70: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x177b70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177b74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177b78: 0x3e00008  jr          $ra
    ctx->pc = 0x177B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177B78u;
            // 0x177b7c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17705Cu: goto label_17705c;
            case 0x177060u: goto label_177060;
            case 0x1770ACu: goto label_1770ac;
            case 0x1770FCu: goto label_1770fc;
            case 0x177148u: goto label_177148;
            case 0x177160u: goto label_177160;
            case 0x1771B0u: goto label_1771b0;
            case 0x1771FCu: goto label_1771fc;
            case 0x177250u: goto label_177250;
            case 0x1772A4u: goto label_1772a4;
            case 0x1772BCu: goto label_1772bc;
            case 0x1772C0u: goto label_1772c0;
            case 0x1772D4u: goto label_1772d4;
            case 0x177324u: goto label_177324;
            case 0x177370u: goto label_177370;
            case 0x1773C8u: goto label_1773c8;
            case 0x17741Cu: goto label_17741c;
            case 0x177434u: goto label_177434;
            case 0x177438u: goto label_177438;
            case 0x17744Cu: goto label_17744c;
            case 0x177470u: goto label_177470;
            case 0x177490u: goto label_177490;
            case 0x177498u: goto label_177498;
            case 0x1774A4u: goto label_1774a4;
            case 0x1774F4u: goto label_1774f4;
            case 0x177544u: goto label_177544;
            case 0x17759Cu: goto label_17759c;
            case 0x1775E8u: goto label_1775e8;
            case 0x177600u: goto label_177600;
            case 0x177650u: goto label_177650;
            case 0x17769Cu: goto label_17769c;
            case 0x1776F0u: goto label_1776f0;
            case 0x177744u: goto label_177744;
            case 0x17775Cu: goto label_17775c;
            case 0x177760u: goto label_177760;
            case 0x177774u: goto label_177774;
            case 0x1777C4u: goto label_1777c4;
            case 0x177810u: goto label_177810;
            case 0x177868u: goto label_177868;
            case 0x1778BCu: goto label_1778bc;
            case 0x1778D4u: goto label_1778d4;
            case 0x1778D8u: goto label_1778d8;
            case 0x1778F0u: goto label_1778f0;
            case 0x177948u: goto label_177948;
            case 0x1779A0u: goto label_1779a0;
            case 0x1779F4u: goto label_1779f4;
            case 0x177A0Cu: goto label_177a0c;
            case 0x177A10u: goto label_177a10;
            case 0x177A24u: goto label_177a24;
            case 0x177A70u: goto label_177a70;
            case 0x177AC8u: goto label_177ac8;
            case 0x177B1Cu: goto label_177b1c;
            case 0x177B34u: goto label_177b34;
            case 0x177B38u: goto label_177b38;
            case 0x177B48u: goto label_177b48;
            case 0x177B4Cu: goto label_177b4c;
            case 0x177B54u: goto label_177b54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x177B80u;
}
