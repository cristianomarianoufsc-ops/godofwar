#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001763E8
// Address: 0x1763e8 - 0x1769f8
void sub_001763E8_0x1763e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001763E8_0x1763e8");
#endif

    ctx->pc = 0x1763e8u;

    // 0x1763e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1763e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1763ec: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1763ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1763f0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1763f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1763f4: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1763f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1763f8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1763f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1763fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1763fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x176400: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x176400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x176404: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x176404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x176408: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x176408u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17640c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x17640cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x176410: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x176410u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x176414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x176414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x176418: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x176418u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17641c: 0x8ea5c4bc  lw          $a1, -0x3B44($s5)
    ctx->pc = 0x17641cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952124)));
    // 0x176420: 0x9682000a  lhu         $v0, 0xA($s4)
    ctx->pc = 0x176420u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x176424: 0x96830008  lhu         $v1, 0x8($s4)
    ctx->pc = 0x176424u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x176428: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17642c: 0x8e04c4b4  lw          $a0, -0x3B4C($s0)
    ctx->pc = 0x17642cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x176430: 0xa29821  addu        $s3, $a1, $v0
    ctx->pc = 0x176430u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x176434: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x176434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x176438: 0x9662000c  lhu         $v0, 0xC($s3)
    ctx->pc = 0x176438u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x17643c: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x17643cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x176440: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176444: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x176444u;
    {
        const bool branch_taken_0x176444 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x176448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176444u;
            // 0x176448: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176444) {
            ctx->pc = 0x176488u;
            goto label_176488;
        }
    }
    ctx->pc = 0x17644Cu;
    // 0x17644c: 0xc05d762  jal         func_175D88
    ctx->pc = 0x17644Cu;
    SET_GPR_U32(ctx, 31, 0x176454u);
    ctx->pc = 0x176450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17644Cu;
            // 0x176450: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176454u; }
        if (ctx->pc != 0x176454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176454u; }
        if (ctx->pc != 0x176454u) { return; }
    }
    ctx->pc = 0x176454u;
    // 0x176454: 0xc08e440  jal         func_239100
    ctx->pc = 0x176454u;
    SET_GPR_U32(ctx, 31, 0x17645Cu);
    ctx->pc = 0x176458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176454u;
            // 0x176458: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17645Cu; }
        if (ctx->pc != 0x17645Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17645Cu; }
        if (ctx->pc != 0x17645Cu) { return; }
    }
    ctx->pc = 0x17645Cu;
    // 0x17645c: 0x8ea3c4bc  lw          $v1, -0x3B44($s5)
    ctx->pc = 0x17645cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952124)));
    // 0x176460: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176464: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x176464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x176468: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x176468u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17646c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17646cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x176470: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x176470u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x176474: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x176474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x176478: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x176478u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x17647c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x17647cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x176480: 0xc08e45a  jal         func_239168
    ctx->pc = 0x176480u;
    SET_GPR_U32(ctx, 31, 0x176488u);
    ctx->pc = 0x176484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176480u;
            // 0x176484: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176488u; }
        if (ctx->pc != 0x176488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176488u; }
        if (ctx->pc != 0x176488u) { return; }
    }
    ctx->pc = 0x176488u;
label_176488:
    // 0x176488: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x176488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x17648c: 0x52820033  beql        $s4, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x17648Cu;
    {
        const bool branch_taken_0x17648c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x17648c) {
            ctx->pc = 0x176490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17648Cu;
            // 0x176490: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17655Cu;
            goto label_17655c;
        }
    }
    ctx->pc = 0x176494u;
    // 0x176494: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x176494u;
    {
        const bool branch_taken_0x176494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176494) {
            ctx->pc = 0x1764E0u;
            goto label_1764e0;
        }
    }
    ctx->pc = 0x17649Cu;
    // 0x17649c: 0xc05d762  jal         func_175D88
    ctx->pc = 0x17649Cu;
    SET_GPR_U32(ctx, 31, 0x1764A4u);
    ctx->pc = 0x1764A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17649Cu;
            // 0x1764a0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1764A4u; }
        if (ctx->pc != 0x1764A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1764A4u; }
        if (ctx->pc != 0x1764A4u) { return; }
    }
    ctx->pc = 0x1764A4u;
    // 0x1764a4: 0xc08e440  jal         func_239100
    ctx->pc = 0x1764A4u;
    SET_GPR_U32(ctx, 31, 0x1764ACu);
    ctx->pc = 0x1764A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1764A4u;
            // 0x1764a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1764ACu; }
        if (ctx->pc != 0x1764ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1764ACu; }
        if (ctx->pc != 0x1764ACu) { return; }
    }
    ctx->pc = 0x1764ACu;
    // 0x1764ac: 0x8ea3c4bc  lw          $v1, -0x3B44($s5)
    ctx->pc = 0x1764acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952124)));
    // 0x1764b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1764b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1764b4: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1764b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x1764b8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1764b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1764bc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1764bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1764c0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1764c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1764c4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1764c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1764c8: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1764c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1764cc: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x1764ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1764d0: 0xc08e45a  jal         func_239168
    ctx->pc = 0x1764D0u;
    SET_GPR_U32(ctx, 31, 0x1764D8u);
    ctx->pc = 0x1764D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1764D0u;
            // 0x1764d4: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1764D8u; }
        if (ctx->pc != 0x1764D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1764D8u; }
        if (ctx->pc != 0x1764D8u) { return; }
    }
    ctx->pc = 0x1764D8u;
    // 0x1764d8: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1764d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x1764dc: 0x0  nop
    ctx->pc = 0x1764dcu;
    // NOP
label_1764e0:
    // 0x1764e0: 0x52220019  beql        $s1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1764E0u;
    {
        const bool branch_taken_0x1764e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1764e0) {
            ctx->pc = 0x1764E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1764E0u;
            // 0x1764e4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176548u;
            goto label_176548;
        }
    }
    ctx->pc = 0x1764E8u;
    // 0x1764e8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1764E8u;
    {
        const bool branch_taken_0x1764e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1764ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1764E8u;
            // 0x1764ec: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1764e8) {
            ctx->pc = 0x176530u;
            goto label_176530;
        }
    }
    ctx->pc = 0x1764F0u;
    // 0x1764f0: 0xc05d762  jal         func_175D88
    ctx->pc = 0x1764F0u;
    SET_GPR_U32(ctx, 31, 0x1764F8u);
    ctx->pc = 0x1764F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1764F0u;
            // 0x1764f4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1764F8u; }
        if (ctx->pc != 0x1764F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1764F8u; }
        if (ctx->pc != 0x1764F8u) { return; }
    }
    ctx->pc = 0x1764F8u;
    // 0x1764f8: 0xc08e440  jal         func_239100
    ctx->pc = 0x1764F8u;
    SET_GPR_U32(ctx, 31, 0x176500u);
    ctx->pc = 0x1764FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1764F8u;
            // 0x1764fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176500u; }
        if (ctx->pc != 0x176500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176500u; }
        if (ctx->pc != 0x176500u) { return; }
    }
    ctx->pc = 0x176500u;
    // 0x176500: 0x8ea3c4bc  lw          $v1, -0x3B44($s5)
    ctx->pc = 0x176500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952124)));
    // 0x176504: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176508: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x176508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x17650c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x17650cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176510: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x176510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x176514: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x176514u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x176518: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x176518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17651c: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x17651cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x176520: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x176520u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x176524: 0xc08e45a  jal         func_239168
    ctx->pc = 0x176524u;
    SET_GPR_U32(ctx, 31, 0x17652Cu);
    ctx->pc = 0x176528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176524u;
            // 0x176528: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17652Cu; }
        if (ctx->pc != 0x17652Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17652Cu; }
        if (ctx->pc != 0x17652Cu) { return; }
    }
    ctx->pc = 0x17652Cu;
    // 0x17652c: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x17652cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_176530:
    // 0x176530: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x176530u;
    {
        const bool branch_taken_0x176530 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x176534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176530u;
            // 0x176534: 0x8ea2c4bc  lw          $v0, -0x3B44($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176530) {
            ctx->pc = 0x176544u;
            goto label_176544;
        }
    }
    ctx->pc = 0x176538u;
    // 0x176538: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x176538u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x17653c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x17653cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x176540: 0xa6220008  sh          $v0, 0x8($s1)
    ctx->pc = 0x176540u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
label_176544:
    // 0x176544: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x176544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_176548:
    // 0x176548: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x176548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x17654c: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x17654cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x176550: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x176550u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x176554: 0xa682000a  sh          $v0, 0xA($s4)
    ctx->pc = 0x176554u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x176558: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x176558u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
label_17655c:
    // 0x17655c: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x17655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x176560: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x176560u;
    {
        const bool branch_taken_0x176560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176560u;
            // 0x176564: 0x8e04c4b4  lw          $a0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176560) {
            ctx->pc = 0x1765ACu;
            goto label_1765ac;
        }
    }
    ctx->pc = 0x176568u;
    // 0x176568: 0xc05d762  jal         func_175D88
    ctx->pc = 0x176568u;
    SET_GPR_U32(ctx, 31, 0x176570u);
    ctx->pc = 0x17656Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176568u;
            // 0x17656c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176570u; }
        if (ctx->pc != 0x176570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176570u; }
        if (ctx->pc != 0x176570u) { return; }
    }
    ctx->pc = 0x176570u;
    // 0x176570: 0xc08e440  jal         func_239100
    ctx->pc = 0x176570u;
    SET_GPR_U32(ctx, 31, 0x176578u);
    ctx->pc = 0x176574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176570u;
            // 0x176574: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176578u; }
        if (ctx->pc != 0x176578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176578u; }
        if (ctx->pc != 0x176578u) { return; }
    }
    ctx->pc = 0x176578u;
    // 0x176578: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x176578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x17657c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17657cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176580: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x176580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x176584: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x176584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x176588: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x176588u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17658c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17658cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x176590: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x176590u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x176594: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x176594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x176598: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x176598u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x17659c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x17659cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1765a0: 0xc08e45a  jal         func_239168
    ctx->pc = 0x1765A0u;
    SET_GPR_U32(ctx, 31, 0x1765A8u);
    ctx->pc = 0x1765A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1765A0u;
            // 0x1765a4: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765A8u; }
        if (ctx->pc != 0x1765A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765A8u; }
        if (ctx->pc != 0x1765A8u) { return; }
    }
    ctx->pc = 0x1765A8u;
    // 0x1765a8: 0x8e04c4b4  lw          $a0, -0x3B4C($s0)
    ctx->pc = 0x1765a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_1765ac:
    // 0x1765ac: 0x1644002e  bne         $s2, $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1765ACu;
    {
        const bool branch_taken_0x1765ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        ctx->pc = 0x1765B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1765ACu;
            // 0x1765b0: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1765ac) {
            ctx->pc = 0x176668u;
            goto label_176668;
        }
    }
    ctx->pc = 0x1765B4u;
    // 0x1765b4: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1765B4u;
    {
        const bool branch_taken_0x1765b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1765B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1765B4u;
            // 0x1765b8: 0xaed30000  sw          $s3, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1765b4) {
            ctx->pc = 0x1765FCu;
            goto label_1765fc;
        }
    }
    ctx->pc = 0x1765BCu;
    // 0x1765bc: 0xc05d762  jal         func_175D88
    ctx->pc = 0x1765BCu;
    SET_GPR_U32(ctx, 31, 0x1765C4u);
    ctx->pc = 0x1765C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1765BCu;
            // 0x1765c0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765C4u; }
        if (ctx->pc != 0x1765C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765C4u; }
        if (ctx->pc != 0x1765C4u) { return; }
    }
    ctx->pc = 0x1765C4u;
    // 0x1765c4: 0xc08e440  jal         func_239100
    ctx->pc = 0x1765C4u;
    SET_GPR_U32(ctx, 31, 0x1765CCu);
    ctx->pc = 0x1765C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1765C4u;
            // 0x1765c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765CCu; }
        if (ctx->pc != 0x1765CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765CCu; }
        if (ctx->pc != 0x1765CCu) { return; }
    }
    ctx->pc = 0x1765CCu;
    // 0x1765cc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1765ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1765d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1765d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1765d4: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x1765d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x1765d8: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1765d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x1765dc: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1765dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1765e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1765e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1765e4: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1765e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1765e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1765e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1765ec: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1765ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1765f0: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x1765f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1765f4: 0xc08e45a  jal         func_239168
    ctx->pc = 0x1765F4u;
    SET_GPR_U32(ctx, 31, 0x1765FCu);
    ctx->pc = 0x1765F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1765F4u;
            // 0x1765f8: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765FCu; }
        if (ctx->pc != 0x1765FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765FCu; }
        if (ctx->pc != 0x1765FCu) { return; }
    }
    ctx->pc = 0x1765FCu;
label_1765fc:
    // 0x1765fc: 0x8e11c4b4  lw          $s1, -0x3B4C($s0)
    ctx->pc = 0x1765fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x176600: 0x16200011  bnez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x176600u;
    {
        const bool branch_taken_0x176600 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x176604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176600u;
            // 0x176604: 0x8ed20000  lw          $s2, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176600) {
            ctx->pc = 0x176648u;
            goto label_176648;
        }
    }
    ctx->pc = 0x176608u;
    // 0x176608: 0xc05d762  jal         func_175D88
    ctx->pc = 0x176608u;
    SET_GPR_U32(ctx, 31, 0x176610u);
    ctx->pc = 0x17660Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176608u;
            // 0x17660c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176610u; }
        if (ctx->pc != 0x176610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176610u; }
        if (ctx->pc != 0x176610u) { return; }
    }
    ctx->pc = 0x176610u;
    // 0x176610: 0xc08e440  jal         func_239100
    ctx->pc = 0x176610u;
    SET_GPR_U32(ctx, 31, 0x176618u);
    ctx->pc = 0x176614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176610u;
            // 0x176614: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176618u; }
        if (ctx->pc != 0x176618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176618u; }
        if (ctx->pc != 0x176618u) { return; }
    }
    ctx->pc = 0x176618u;
    // 0x176618: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x176618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x17661c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17661cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176620: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x176620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x176624: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x176624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x176628: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x176628u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17662c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17662cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x176630: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x176630u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x176634: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x176634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x176638: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x176638u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x17663c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x17663cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x176640: 0xc08e45a  jal         func_239168
    ctx->pc = 0x176640u;
    SET_GPR_U32(ctx, 31, 0x176648u);
    ctx->pc = 0x176644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176640u;
            // 0x176644: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176648u; }
        if (ctx->pc != 0x176648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176648u; }
        if (ctx->pc != 0x176648u) { return; }
    }
    ctx->pc = 0x176648u;
label_176648:
    // 0x176648: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x176648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x17664c: 0x12420096  beq         $s2, $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x17664Cu;
    {
        const bool branch_taken_0x17664c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x176650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17664Cu;
            // 0x176650: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17664c) {
            ctx->pc = 0x1768A8u;
            goto label_1768a8;
        }
    }
    ctx->pc = 0x176654u;
    // 0x176654: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x176654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x176658: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x176658u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17665c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x17665cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x176660: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x176660u;
    {
        const bool branch_taken_0x176660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176660u;
            // 0x176664: 0xa6420008  sh          $v0, 0x8($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176660) {
            ctx->pc = 0x1768A8u;
            goto label_1768a8;
        }
    }
    ctx->pc = 0x176668u;
label_176668:
    // 0x176668: 0x9642000c  lhu         $v0, 0xC($s2)
    ctx->pc = 0x176668u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x17666c: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x17666cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x176670: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176674: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x176674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x176678: 0x16830046  bne         $s4, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x176678u;
    {
        const bool branch_taken_0x176678 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x176678) {
            ctx->pc = 0x176794u;
            goto label_176794;
        }
    }
    ctx->pc = 0x176680u;
    // 0x176680: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x176680u;
    {
        const bool branch_taken_0x176680 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x176684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176680u;
            // 0x176684: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176680) {
            ctx->pc = 0x1766C8u;
            goto label_1766c8;
        }
    }
    ctx->pc = 0x176688u;
    // 0x176688: 0xc05d762  jal         func_175D88
    ctx->pc = 0x176688u;
    SET_GPR_U32(ctx, 31, 0x176690u);
    ctx->pc = 0x17668Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176688u;
            // 0x17668c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176690u; }
        if (ctx->pc != 0x176690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176690u; }
        if (ctx->pc != 0x176690u) { return; }
    }
    ctx->pc = 0x176690u;
    // 0x176690: 0xc08e440  jal         func_239100
    ctx->pc = 0x176690u;
    SET_GPR_U32(ctx, 31, 0x176698u);
    ctx->pc = 0x176694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176690u;
            // 0x176694: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176698u; }
        if (ctx->pc != 0x176698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176698u; }
        if (ctx->pc != 0x176698u) { return; }
    }
    ctx->pc = 0x176698u;
    // 0x176698: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x176698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x17669c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17669cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1766a0: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1766a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x1766a4: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1766a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1766a8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1766a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1766ac: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1766acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1766b0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1766b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1766b4: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1766b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1766b8: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x1766b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1766bc: 0xc08e45a  jal         func_239168
    ctx->pc = 0x1766BCu;
    SET_GPR_U32(ctx, 31, 0x1766C4u);
    ctx->pc = 0x1766C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1766BCu;
            // 0x1766c0: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1766C4u; }
        if (ctx->pc != 0x1766C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1766C4u; }
        if (ctx->pc != 0x1766C4u) { return; }
    }
    ctx->pc = 0x1766C4u;
    // 0x1766c4: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1766c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_1766c8:
    // 0x1766c8: 0x52420078  beql        $s2, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x1766C8u;
    {
        const bool branch_taken_0x1766c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1766c8) {
            ctx->pc = 0x1766CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1766C8u;
            // 0x1766cc: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1768ACu;
            goto label_1768ac;
        }
    }
    ctx->pc = 0x1766D0u;
    // 0x1766d0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1766D0u;
    {
        const bool branch_taken_0x1766d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1766D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1766D0u;
            // 0x1766d4: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1766d0) {
            ctx->pc = 0x176718u;
            goto label_176718;
        }
    }
    ctx->pc = 0x1766D8u;
    // 0x1766d8: 0xc05d762  jal         func_175D88
    ctx->pc = 0x1766D8u;
    SET_GPR_U32(ctx, 31, 0x1766E0u);
    ctx->pc = 0x1766DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1766D8u;
            // 0x1766dc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1766E0u; }
        if (ctx->pc != 0x1766E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1766E0u; }
        if (ctx->pc != 0x1766E0u) { return; }
    }
    ctx->pc = 0x1766E0u;
    // 0x1766e0: 0xc08e440  jal         func_239100
    ctx->pc = 0x1766E0u;
    SET_GPR_U32(ctx, 31, 0x1766E8u);
    ctx->pc = 0x1766E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1766E0u;
            // 0x1766e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1766E8u; }
        if (ctx->pc != 0x1766E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1766E8u; }
        if (ctx->pc != 0x1766E8u) { return; }
    }
    ctx->pc = 0x1766E8u;
    // 0x1766e8: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x1766e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x1766ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1766ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1766f0: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1766f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x1766f4: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1766f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1766f8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1766f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1766fc: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1766fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x176700: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x176700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x176704: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x176704u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x176708: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x176708u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x17670c: 0xc08e45a  jal         func_239168
    ctx->pc = 0x17670Cu;
    SET_GPR_U32(ctx, 31, 0x176714u);
    ctx->pc = 0x176710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17670Cu;
            // 0x176710: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176714u; }
        if (ctx->pc != 0x176714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176714u; }
        if (ctx->pc != 0x176714u) { return; }
    }
    ctx->pc = 0x176714u;
    // 0x176714: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x176714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_176718:
    // 0x176718: 0x52620019  beql        $s3, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x176718u;
    {
        const bool branch_taken_0x176718 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x176718) {
            ctx->pc = 0x17671Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176718u;
            // 0x17671c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176780u;
            goto label_176780;
        }
    }
    ctx->pc = 0x176720u;
    // 0x176720: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x176720u;
    {
        const bool branch_taken_0x176720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176720u;
            // 0x176724: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176720) {
            ctx->pc = 0x176768u;
            goto label_176768;
        }
    }
    ctx->pc = 0x176728u;
    // 0x176728: 0xc05d762  jal         func_175D88
    ctx->pc = 0x176728u;
    SET_GPR_U32(ctx, 31, 0x176730u);
    ctx->pc = 0x17672Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176728u;
            // 0x17672c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176730u; }
        if (ctx->pc != 0x176730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176730u; }
        if (ctx->pc != 0x176730u) { return; }
    }
    ctx->pc = 0x176730u;
    // 0x176730: 0xc08e440  jal         func_239100
    ctx->pc = 0x176730u;
    SET_GPR_U32(ctx, 31, 0x176738u);
    ctx->pc = 0x176734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176730u;
            // 0x176734: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176738u; }
        if (ctx->pc != 0x176738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176738u; }
        if (ctx->pc != 0x176738u) { return; }
    }
    ctx->pc = 0x176738u;
    // 0x176738: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x176738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x17673c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17673cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176740: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x176740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x176744: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x176744u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176748: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x176748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17674c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x17674cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x176750: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x176750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x176754: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x176754u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x176758: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x176758u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x17675c: 0xc08e45a  jal         func_239168
    ctx->pc = 0x17675Cu;
    SET_GPR_U32(ctx, 31, 0x176764u);
    ctx->pc = 0x176760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17675Cu;
            // 0x176760: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176764u; }
        if (ctx->pc != 0x176764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176764u; }
        if (ctx->pc != 0x176764u) { return; }
    }
    ctx->pc = 0x176764u;
    // 0x176764: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x176764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_176768:
    // 0x176768: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x176768u;
    {
        const bool branch_taken_0x176768 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x17676Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176768u;
            // 0x17676c: 0x8e22c4bc  lw          $v0, -0x3B44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176768) {
            ctx->pc = 0x17677Cu;
            goto label_17677c;
        }
    }
    ctx->pc = 0x176770u;
    // 0x176770: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x176770u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x176774: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x176774u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x176778: 0xa6620008  sh          $v0, 0x8($s3)
    ctx->pc = 0x176778u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 2));
label_17677c:
    // 0x17677c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17677cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_176780:
    // 0x176780: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x176780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x176784: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x176784u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x176788: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x176788u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x17678c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x17678Cu;
    {
        const bool branch_taken_0x17678c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17678Cu;
            // 0x176790: 0xa642000c  sh          $v0, 0xC($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17678c) {
            ctx->pc = 0x1768A8u;
            goto label_1768a8;
        }
    }
    ctx->pc = 0x176794u;
label_176794:
    // 0x176794: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x176794u;
    {
        const bool branch_taken_0x176794 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x176798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176794u;
            // 0x176798: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176794) {
            ctx->pc = 0x1767DCu;
            goto label_1767dc;
        }
    }
    ctx->pc = 0x17679Cu;
    // 0x17679c: 0xc05d762  jal         func_175D88
    ctx->pc = 0x17679Cu;
    SET_GPR_U32(ctx, 31, 0x1767A4u);
    ctx->pc = 0x1767A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17679Cu;
            // 0x1767a0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767A4u; }
        if (ctx->pc != 0x1767A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767A4u; }
        if (ctx->pc != 0x1767A4u) { return; }
    }
    ctx->pc = 0x1767A4u;
    // 0x1767a4: 0xc08e440  jal         func_239100
    ctx->pc = 0x1767A4u;
    SET_GPR_U32(ctx, 31, 0x1767ACu);
    ctx->pc = 0x1767A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1767A4u;
            // 0x1767a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767ACu; }
        if (ctx->pc != 0x1767ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767ACu; }
        if (ctx->pc != 0x1767ACu) { return; }
    }
    ctx->pc = 0x1767ACu;
    // 0x1767ac: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x1767acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x1767b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1767b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1767b4: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1767b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x1767b8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1767b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1767bc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1767bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1767c0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1767c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1767c4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1767c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1767c8: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1767c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1767cc: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x1767ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1767d0: 0xc08e45a  jal         func_239168
    ctx->pc = 0x1767D0u;
    SET_GPR_U32(ctx, 31, 0x1767D8u);
    ctx->pc = 0x1767D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1767D0u;
            // 0x1767d4: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767D8u; }
        if (ctx->pc != 0x1767D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767D8u; }
        if (ctx->pc != 0x1767D8u) { return; }
    }
    ctx->pc = 0x1767D8u;
    // 0x1767d8: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1767d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_1767dc:
    // 0x1767dc: 0x52420033  beql        $s2, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1767DCu;
    {
        const bool branch_taken_0x1767dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1767dc) {
            ctx->pc = 0x1767E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1767DCu;
            // 0x1767e0: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1768ACu;
            goto label_1768ac;
        }
    }
    ctx->pc = 0x1767E4u;
    // 0x1767e4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1767E4u;
    {
        const bool branch_taken_0x1767e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1767E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1767E4u;
            // 0x1767e8: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1767e4) {
            ctx->pc = 0x176830u;
            goto label_176830;
        }
    }
    ctx->pc = 0x1767ECu;
    // 0x1767ec: 0xc05d762  jal         func_175D88
    ctx->pc = 0x1767ECu;
    SET_GPR_U32(ctx, 31, 0x1767F4u);
    ctx->pc = 0x1767F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1767ECu;
            // 0x1767f0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767F4u; }
        if (ctx->pc != 0x1767F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767F4u; }
        if (ctx->pc != 0x1767F4u) { return; }
    }
    ctx->pc = 0x1767F4u;
    // 0x1767f4: 0xc08e440  jal         func_239100
    ctx->pc = 0x1767F4u;
    SET_GPR_U32(ctx, 31, 0x1767FCu);
    ctx->pc = 0x1767F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1767F4u;
            // 0x1767f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767FCu; }
        if (ctx->pc != 0x1767FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767FCu; }
        if (ctx->pc != 0x1767FCu) { return; }
    }
    ctx->pc = 0x1767FCu;
    // 0x1767fc: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x1767fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x176800: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176804: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x176804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x176808: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x176808u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17680c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17680cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x176810: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x176810u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x176814: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x176814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x176818: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x176818u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x17681c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x17681cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x176820: 0xc08e45a  jal         func_239168
    ctx->pc = 0x176820u;
    SET_GPR_U32(ctx, 31, 0x176828u);
    ctx->pc = 0x176824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176820u;
            // 0x176824: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176828u; }
        if (ctx->pc != 0x176828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176828u; }
        if (ctx->pc != 0x176828u) { return; }
    }
    ctx->pc = 0x176828u;
    // 0x176828: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x176828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x17682c: 0x0  nop
    ctx->pc = 0x17682cu;
    // NOP
label_176830:
    // 0x176830: 0x52620019  beql        $s3, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x176830u;
    {
        const bool branch_taken_0x176830 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x176830) {
            ctx->pc = 0x176834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176830u;
            // 0x176834: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176898u;
            goto label_176898;
        }
    }
    ctx->pc = 0x176838u;
    // 0x176838: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x176838u;
    {
        const bool branch_taken_0x176838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17683Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176838u;
            // 0x17683c: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176838) {
            ctx->pc = 0x176880u;
            goto label_176880;
        }
    }
    ctx->pc = 0x176840u;
    // 0x176840: 0xc05d762  jal         func_175D88
    ctx->pc = 0x176840u;
    SET_GPR_U32(ctx, 31, 0x176848u);
    ctx->pc = 0x176844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176840u;
            // 0x176844: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176848u; }
        if (ctx->pc != 0x176848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176848u; }
        if (ctx->pc != 0x176848u) { return; }
    }
    ctx->pc = 0x176848u;
    // 0x176848: 0xc08e440  jal         func_239100
    ctx->pc = 0x176848u;
    SET_GPR_U32(ctx, 31, 0x176850u);
    ctx->pc = 0x17684Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176848u;
            // 0x17684c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176850u; }
        if (ctx->pc != 0x176850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176850u; }
        if (ctx->pc != 0x176850u) { return; }
    }
    ctx->pc = 0x176850u;
    // 0x176850: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x176850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x176854: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176858: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x176858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x17685c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x17685cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176860: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x176860u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x176864: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x176864u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x176868: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x176868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17686c: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x17686cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x176870: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x176870u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x176874: 0xc08e45a  jal         func_239168
    ctx->pc = 0x176874u;
    SET_GPR_U32(ctx, 31, 0x17687Cu);
    ctx->pc = 0x176878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176874u;
            // 0x176878: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17687Cu; }
        if (ctx->pc != 0x17687Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17687Cu; }
        if (ctx->pc != 0x17687Cu) { return; }
    }
    ctx->pc = 0x17687Cu;
    // 0x17687c: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x17687cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_176880:
    // 0x176880: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x176880u;
    {
        const bool branch_taken_0x176880 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x176884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176880u;
            // 0x176884: 0x8e22c4bc  lw          $v0, -0x3B44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176880) {
            ctx->pc = 0x176894u;
            goto label_176894;
        }
    }
    ctx->pc = 0x176888u;
    // 0x176888: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x176888u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17688c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x17688cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x176890: 0xa6620008  sh          $v0, 0x8($s3)
    ctx->pc = 0x176890u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 2));
label_176894:
    // 0x176894: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x176894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_176898:
    // 0x176898: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x176898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x17689c: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x17689cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1768a0: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1768a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1768a4: 0xa642000a  sh          $v0, 0xA($s2)
    ctx->pc = 0x1768a4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 2));
label_1768a8:
    // 0x1768a8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1768a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
label_1768ac:
    // 0x1768ac: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1768acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x1768b0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1768B0u;
    {
        const bool branch_taken_0x1768b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1768b0) {
            ctx->pc = 0x1768FCu;
            goto label_1768fc;
        }
    }
    ctx->pc = 0x1768B8u;
    // 0x1768b8: 0xc05d762  jal         func_175D88
    ctx->pc = 0x1768B8u;
    SET_GPR_U32(ctx, 31, 0x1768C0u);
    ctx->pc = 0x1768BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1768B8u;
            // 0x1768bc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1768C0u; }
        if (ctx->pc != 0x1768C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1768C0u; }
        if (ctx->pc != 0x1768C0u) { return; }
    }
    ctx->pc = 0x1768C0u;
    // 0x1768c0: 0xc08e440  jal         func_239100
    ctx->pc = 0x1768C0u;
    SET_GPR_U32(ctx, 31, 0x1768C8u);
    ctx->pc = 0x1768C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1768C0u;
            // 0x1768c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1768C8u; }
        if (ctx->pc != 0x1768C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1768C8u; }
        if (ctx->pc != 0x1768C8u) { return; }
    }
    ctx->pc = 0x1768C8u;
    // 0x1768c8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1768c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1768cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1768ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1768d0: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x1768d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x1768d4: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1768d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x1768d8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1768d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1768dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1768dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1768e0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1768e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1768e4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1768e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1768e8: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1768e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1768ec: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x1768ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1768f0: 0xc08e45a  jal         func_239168
    ctx->pc = 0x1768F0u;
    SET_GPR_U32(ctx, 31, 0x1768F8u);
    ctx->pc = 0x1768F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1768F0u;
            // 0x1768f4: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1768F8u; }
        if (ctx->pc != 0x1768F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1768F8u; }
        if (ctx->pc != 0x1768F8u) { return; }
    }
    ctx->pc = 0x1768F8u;
    // 0x1768f8: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1768f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_1768fc:
    // 0x1768fc: 0x52620035  beql        $s3, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1768FCu;
    {
        const bool branch_taken_0x1768fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1768fc) {
            ctx->pc = 0x176900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1768FCu;
            // 0x176900: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1769D4u;
            goto label_1769d4;
        }
    }
    ctx->pc = 0x176904u;
    // 0x176904: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x176904u;
    {
        const bool branch_taken_0x176904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176904u;
            // 0x176908: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176904) {
            ctx->pc = 0x176950u;
            goto label_176950;
        }
    }
    ctx->pc = 0x17690Cu;
    // 0x17690c: 0xc05d762  jal         func_175D88
    ctx->pc = 0x17690Cu;
    SET_GPR_U32(ctx, 31, 0x176914u);
    ctx->pc = 0x176910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17690Cu;
            // 0x176910: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176914u; }
        if (ctx->pc != 0x176914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176914u; }
        if (ctx->pc != 0x176914u) { return; }
    }
    ctx->pc = 0x176914u;
    // 0x176914: 0xc08e440  jal         func_239100
    ctx->pc = 0x176914u;
    SET_GPR_U32(ctx, 31, 0x17691Cu);
    ctx->pc = 0x176918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176914u;
            // 0x176918: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17691Cu; }
        if (ctx->pc != 0x17691Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17691Cu; }
        if (ctx->pc != 0x17691Cu) { return; }
    }
    ctx->pc = 0x17691Cu;
    // 0x17691c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x17691cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x176920: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176924: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x176924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x176928: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x176928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x17692c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x17692cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176930: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x176930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x176934: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x176934u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x176938: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x176938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17693c: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x17693cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x176940: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x176940u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x176944: 0xc08e45a  jal         func_239168
    ctx->pc = 0x176944u;
    SET_GPR_U32(ctx, 31, 0x17694Cu);
    ctx->pc = 0x176948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176944u;
            // 0x176948: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17694Cu; }
        if (ctx->pc != 0x17694Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17694Cu; }
        if (ctx->pc != 0x17694Cu) { return; }
    }
    ctx->pc = 0x17694Cu;
    // 0x17694c: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x17694cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_176950:
    // 0x176950: 0x5282001b  beql        $s4, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x176950u;
    {
        const bool branch_taken_0x176950 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x176950) {
            ctx->pc = 0x176954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176950u;
            // 0x176954: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1769C0u;
            goto label_1769c0;
        }
    }
    ctx->pc = 0x176958u;
    // 0x176958: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x176958u;
    {
        const bool branch_taken_0x176958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17695Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176958u;
            // 0x17695c: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176958) {
            ctx->pc = 0x1769A4u;
            goto label_1769a4;
        }
    }
    ctx->pc = 0x176960u;
    // 0x176960: 0xc05d762  jal         func_175D88
    ctx->pc = 0x176960u;
    SET_GPR_U32(ctx, 31, 0x176968u);
    ctx->pc = 0x176964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176960u;
            // 0x176964: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176968u; }
        if (ctx->pc != 0x176968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176968u; }
        if (ctx->pc != 0x176968u) { return; }
    }
    ctx->pc = 0x176968u;
    // 0x176968: 0xc08e440  jal         func_239100
    ctx->pc = 0x176968u;
    SET_GPR_U32(ctx, 31, 0x176970u);
    ctx->pc = 0x17696Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176968u;
            // 0x17696c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176970u; }
        if (ctx->pc != 0x176970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176970u; }
        if (ctx->pc != 0x176970u) { return; }
    }
    ctx->pc = 0x176970u;
    // 0x176970: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x176970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x176974: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176978: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x176978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x17697c: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x17697cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x176980: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x176980u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176984: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x176984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x176988: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x176988u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17698c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17698cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x176990: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x176990u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x176994: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x176994u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x176998: 0xc08e45a  jal         func_239168
    ctx->pc = 0x176998u;
    SET_GPR_U32(ctx, 31, 0x1769A0u);
    ctx->pc = 0x17699Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176998u;
            // 0x17699c: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1769A0u; }
        if (ctx->pc != 0x1769A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1769A0u; }
        if (ctx->pc != 0x1769A0u) { return; }
    }
    ctx->pc = 0x1769A0u;
    // 0x1769a0: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1769a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_1769a4:
    // 0x1769a4: 0x12820005  beq         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1769A4u;
    {
        const bool branch_taken_0x1769a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1769A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1769A4u;
            // 0x1769a8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1769a4) {
            ctx->pc = 0x1769BCu;
            goto label_1769bc;
        }
    }
    ctx->pc = 0x1769ACu;
    // 0x1769ac: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x1769acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x1769b0: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x1769b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1769b4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1769b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1769b8: 0xa6820008  sh          $v0, 0x8($s4)
    ctx->pc = 0x1769b8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 2));
label_1769bc:
    // 0x1769bc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1769bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1769c0:
    // 0x1769c0: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x1769c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x1769c4: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x1769c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1769c8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1769c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1769cc: 0xa662000c  sh          $v0, 0xC($s3)
    ctx->pc = 0x1769ccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1769d0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1769d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1769d4:
    // 0x1769d4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1769d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1769d8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1769d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1769dc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1769dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1769e0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1769e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1769e4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1769e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1769e8: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1769e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1769ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1769ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1769f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1769F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1769F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1769F0u;
            // 0x1769f4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176488u: goto label_176488;
            case 0x1764E0u: goto label_1764e0;
            case 0x176530u: goto label_176530;
            case 0x176544u: goto label_176544;
            case 0x176548u: goto label_176548;
            case 0x17655Cu: goto label_17655c;
            case 0x1765ACu: goto label_1765ac;
            case 0x1765FCu: goto label_1765fc;
            case 0x176648u: goto label_176648;
            case 0x176668u: goto label_176668;
            case 0x1766C8u: goto label_1766c8;
            case 0x176718u: goto label_176718;
            case 0x176768u: goto label_176768;
            case 0x17677Cu: goto label_17677c;
            case 0x176780u: goto label_176780;
            case 0x176794u: goto label_176794;
            case 0x1767DCu: goto label_1767dc;
            case 0x176830u: goto label_176830;
            case 0x176880u: goto label_176880;
            case 0x176894u: goto label_176894;
            case 0x176898u: goto label_176898;
            case 0x1768A8u: goto label_1768a8;
            case 0x1768ACu: goto label_1768ac;
            case 0x1768FCu: goto label_1768fc;
            case 0x176950u: goto label_176950;
            case 0x1769A4u: goto label_1769a4;
            case 0x1769BCu: goto label_1769bc;
            case 0x1769C0u: goto label_1769c0;
            case 0x1769D4u: goto label_1769d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1769F8u;
}
