#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001769F8
// Address: 0x1769f8 - 0x176b28
void sub_001769F8_0x1769f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001769F8_0x1769f8");
#endif

    ctx->pc = 0x1769f8u;

    // 0x1769f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1769f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1769fc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1769fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x176a00: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x176a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x176a04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x176a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a08: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x176a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x176a0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x176a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x176a10: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x176a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176a14: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x176A14u;
    {
        const bool branch_taken_0x176a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176A14u;
            // 0x176a18: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176a14) {
            ctx->pc = 0x176A74u;
            goto label_176a74;
        }
    }
    ctx->pc = 0x176A1Cu;
    // 0x176a1c: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x176a1cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x176a20: 0x8e22c4b4  lw          $v0, -0x3B4C($s1)
    ctx->pc = 0x176a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952116)));
    // 0x176a24: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x176A24u;
    {
        const bool branch_taken_0x176a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176a24) {
            ctx->pc = 0x176A28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176A24u;
            // 0x176a28: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176A78u;
            goto label_176a78;
        }
    }
    ctx->pc = 0x176A2Cu;
    // 0x176a2c: 0xc05d762  jal         func_175D88
    ctx->pc = 0x176A2Cu;
    SET_GPR_U32(ctx, 31, 0x176A34u);
    ctx->pc = 0x176A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176A2Cu;
            // 0x176a30: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A34u; }
        if (ctx->pc != 0x176A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A34u; }
        if (ctx->pc != 0x176A34u) { return; }
    }
    ctx->pc = 0x176A34u;
    // 0x176a34: 0xc08e440  jal         func_239100
    ctx->pc = 0x176A34u;
    SET_GPR_U32(ctx, 31, 0x176A3Cu);
    ctx->pc = 0x176A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176A34u;
            // 0x176a38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A3Cu; }
        if (ctx->pc != 0x176A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A3Cu; }
        if (ctx->pc != 0x176A3Cu) { return; }
    }
    ctx->pc = 0x176A3Cu;
    // 0x176a3c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x176a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x176a40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a44: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x176a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x176a48: 0xae22c4b4  sw          $v0, -0x3B4C($s1)
    ctx->pc = 0x176a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952116), GPR_U32(ctx, 2));
    // 0x176a4c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x176a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176a50: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x176a50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x176a54: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x176a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x176a58: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x176a58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x176a5c: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x176a5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x176a60: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x176a60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x176a64: 0xc08e45a  jal         func_239168
    ctx->pc = 0x176A64u;
    SET_GPR_U32(ctx, 31, 0x176A6Cu);
    ctx->pc = 0x176A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176A64u;
            // 0x176a68: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A6Cu; }
        if (ctx->pc != 0x176A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A6Cu; }
        if (ctx->pc != 0x176A6Cu) { return; }
    }
    ctx->pc = 0x176A6Cu;
    // 0x176a6c: 0x8e22c4b4  lw          $v0, -0x3B4C($s1)
    ctx->pc = 0x176a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952116)));
    // 0x176a70: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x176a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_176a74:
    // 0x176a74: 0x0  nop
    ctx->pc = 0x176a74u;
    // NOP
label_176a78:
    // 0x176a78: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x176A78u;
    {
        const bool branch_taken_0x176a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176A78u;
            // 0x176a7c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176a78) {
            ctx->pc = 0x176AACu;
            goto label_176aac;
        }
    }
    ctx->pc = 0x176A80u;
label_176a80:
    // 0x176a80: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176A80u;
    {
        const bool branch_taken_0x176a80 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x176A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176A80u;
            // 0x176a84: 0x242102b  sltu        $v0, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x176a80) {
            ctx->pc = 0x176A90u;
            goto label_176a90;
        }
    }
    ctx->pc = 0x176A88u;
    // 0x176a88: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x176A88u;
    {
        const bool branch_taken_0x176a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176A88u;
            // 0x176a8c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176a88) {
            ctx->pc = 0x176B0Cu;
            goto label_176b0c;
        }
    }
    ctx->pc = 0x176A90u;
label_176a90:
    // 0x176a90: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x176A90u;
    {
        const bool branch_taken_0x176a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176a90) {
            ctx->pc = 0x176A94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176A90u;
            // 0x176a94: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176A9Cu;
            goto label_176a9c;
        }
    }
    ctx->pc = 0x176A98u;
    // 0x176a98: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x176a98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_176a9c:
    // 0x176a9c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x176a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x176aa0: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x176aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x176aa4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176aa8: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x176aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_176aac:
    // 0x176aac: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x176aacu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x176ab0: 0x8e22c4b4  lw          $v0, -0x3B4C($s1)
    ctx->pc = 0x176ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952116)));
    // 0x176ab4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x176AB4u;
    {
        const bool branch_taken_0x176ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176ab4) {
            ctx->pc = 0x176B00u;
            goto label_176b00;
        }
    }
    ctx->pc = 0x176ABCu;
    // 0x176abc: 0xc05d762  jal         func_175D88
    ctx->pc = 0x176ABCu;
    SET_GPR_U32(ctx, 31, 0x176AC4u);
    ctx->pc = 0x176AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176ABCu;
            // 0x176ac0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176AC4u; }
        if (ctx->pc != 0x176AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176AC4u; }
        if (ctx->pc != 0x176AC4u) { return; }
    }
    ctx->pc = 0x176AC4u;
    // 0x176ac4: 0xc08e440  jal         func_239100
    ctx->pc = 0x176AC4u;
    SET_GPR_U32(ctx, 31, 0x176ACCu);
    ctx->pc = 0x176AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176AC4u;
            // 0x176ac8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176ACCu; }
        if (ctx->pc != 0x176ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176ACCu; }
        if (ctx->pc != 0x176ACCu) { return; }
    }
    ctx->pc = 0x176ACCu;
    // 0x176acc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x176accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x176ad0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ad4: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x176ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x176ad8: 0xae22c4b4  sw          $v0, -0x3B4C($s1)
    ctx->pc = 0x176ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952116), GPR_U32(ctx, 2));
    // 0x176adc: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x176adcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176ae0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x176ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x176ae4: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x176ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x176ae8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x176ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x176aec: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x176aecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x176af0: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x176af0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x176af4: 0xc08e45a  jal         func_239168
    ctx->pc = 0x176AF4u;
    SET_GPR_U32(ctx, 31, 0x176AFCu);
    ctx->pc = 0x176AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176AF4u;
            // 0x176af8: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176AFCu; }
        if (ctx->pc != 0x176AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176AFCu; }
        if (ctx->pc != 0x176AFCu) { return; }
    }
    ctx->pc = 0x176AFCu;
    // 0x176afc: 0x8e22c4b4  lw          $v0, -0x3B4C($s1)
    ctx->pc = 0x176afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952116)));
label_176b00:
    // 0x176b00: 0x5602ffdf  bnel        $s0, $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x176B00u;
    {
        const bool branch_taken_0x176b00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x176b00) {
            ctx->pc = 0x176B04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176B00u;
            // 0x176b04: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176A80u;
            runtime->cooperativeGuestYield();
            goto label_176a80;
        }
    }
    ctx->pc = 0x176B08u;
    // 0x176b08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x176b08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176b0c:
    // 0x176b0c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x176b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176b10: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x176b10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176b14: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x176b14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x176b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x176B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176B1Cu;
            // 0x176b20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176A74u: goto label_176a74;
            case 0x176A78u: goto label_176a78;
            case 0x176A80u: goto label_176a80;
            case 0x176A90u: goto label_176a90;
            case 0x176A9Cu: goto label_176a9c;
            case 0x176AACu: goto label_176aac;
            case 0x176B00u: goto label_176b00;
            case 0x176B0Cu: goto label_176b0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x176B24u;
    // 0x176b24: 0x0  nop
    ctx->pc = 0x176b24u;
    // NOP
}
