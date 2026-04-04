#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00177B80
// Address: 0x177b80 - 0x1785f0
void sub_00177B80_0x177b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177B80_0x177b80");
#endif

    ctx->pc = 0x177b80u;

    // 0x177b80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x177b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x177b84: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x177b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x177b88: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x177b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x177b8c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x177b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x177b90: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x177b90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177b94: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x177b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x177b98: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x177b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x177b9c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x177b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x177ba0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x177ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x177ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177ba8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x177ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x177bac: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x177BACu;
    {
        const bool branch_taken_0x177bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177BACu;
            // 0x177bb0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177bac) {
            ctx->pc = 0x177C0Cu;
            goto label_177c0c;
        }
    }
    ctx->pc = 0x177BB4u;
    // 0x177bb4: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x177bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x177bb8: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x177bbc: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x177BBCu;
    {
        const bool branch_taken_0x177bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177bbc) {
            ctx->pc = 0x177BC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177BBCu;
            // 0x177bc0: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177C0Cu;
            goto label_177c0c;
        }
    }
    ctx->pc = 0x177BC4u;
    // 0x177bc4: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177BC4u;
    SET_GPR_U32(ctx, 31, 0x177BCCu);
    ctx->pc = 0x177BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177BC4u;
            // 0x177bc8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177BCCu; }
        if (ctx->pc != 0x177BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177BCCu; }
        if (ctx->pc != 0x177BCCu) { return; }
    }
    ctx->pc = 0x177BCCu;
    // 0x177bcc: 0xc08e440  jal         func_239100
    ctx->pc = 0x177BCCu;
    SET_GPR_U32(ctx, 31, 0x177BD4u);
    ctx->pc = 0x177BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177BCCu;
            // 0x177bd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177BD4u; }
        if (ctx->pc != 0x177BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177BD4u; }
        if (ctx->pc != 0x177BD4u) { return; }
    }
    ctx->pc = 0x177BD4u;
    // 0x177bd4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x177bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x177bd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177bdc: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x177bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x177be0: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x177be4: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177be8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177be8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177bec: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177becu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177bf0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x177bf4: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x177bf4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177bf8: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x177bf8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x177bfc: 0xc08e45a  jal         func_239168
    ctx->pc = 0x177BFCu;
    SET_GPR_U32(ctx, 31, 0x177C04u);
    ctx->pc = 0x177C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177BFCu;
            // 0x177c00: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C04u; }
        if (ctx->pc != 0x177C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C04u; }
        if (ctx->pc != 0x177C04u) { return; }
    }
    ctx->pc = 0x177C04u;
    // 0x177c04: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x177c08: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x177c08u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_177c0c:
    // 0x177c0c: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x177c0cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x177c10: 0x9662000a  lhu         $v0, 0xA($s3)
    ctx->pc = 0x177c10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x177c14: 0x8e24c4bc  lw          $a0, -0x3B44($s1)
    ctx->pc = 0x177c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x177c18: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x177c18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x177c1c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x177c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x177c20: 0x8e03c4b4  lw          $v1, -0x3B4C($s0)
    ctx->pc = 0x177c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x177c24: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x177C24u;
    {
        const bool branch_taken_0x177c24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x177C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177C24u;
            // 0x177c28: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c24) {
            ctx->pc = 0x177C68u;
            goto label_177c68;
        }
    }
    ctx->pc = 0x177C2Cu;
    // 0x177c2c: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177C2Cu;
    SET_GPR_U32(ctx, 31, 0x177C34u);
    ctx->pc = 0x177C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177C2Cu;
            // 0x177c30: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C34u; }
        if (ctx->pc != 0x177C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C34u; }
        if (ctx->pc != 0x177C34u) { return; }
    }
    ctx->pc = 0x177C34u;
    // 0x177c34: 0xc08e440  jal         func_239100
    ctx->pc = 0x177C34u;
    SET_GPR_U32(ctx, 31, 0x177C3Cu);
    ctx->pc = 0x177C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177C34u;
            // 0x177c38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C3Cu; }
        if (ctx->pc != 0x177C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C3Cu; }
        if (ctx->pc != 0x177C3Cu) { return; }
    }
    ctx->pc = 0x177C3Cu;
    // 0x177c3c: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x177c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x177c40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c44: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x177c48: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177c4c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177c50: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177c54: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177c54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x177c58: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x177c58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177c5c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x177c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x177c60: 0xc08e45a  jal         func_239168
    ctx->pc = 0x177C60u;
    SET_GPR_U32(ctx, 31, 0x177C68u);
    ctx->pc = 0x177C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177C60u;
            // 0x177c64: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C68u; }
        if (ctx->pc != 0x177C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C68u; }
        if (ctx->pc != 0x177C68u) { return; }
    }
    ctx->pc = 0x177C68u;
label_177c68:
    // 0x177c68: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x177c6c: 0x564200fe  bnel        $s2, $v0, . + 4 + (0xFE << 2)
    ctx->pc = 0x177C6Cu;
    {
        const bool branch_taken_0x177c6c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x177c6c) {
            ctx->pc = 0x177C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177C6Cu;
            // 0x177c70: 0x9662000a  lhu         $v0, 0xA($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178068u;
            goto label_178068;
        }
    }
    ctx->pc = 0x177C74u;
    // 0x177c74: 0x9662000c  lhu         $v0, 0xC($s3)
    ctx->pc = 0x177c74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x177c78: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x177c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x177c7c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x177c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x177c80: 0x16400010  bnez        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x177C80u;
    {
        const bool branch_taken_0x177c80 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x177C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177C80u;
            // 0x177c84: 0x62a821  addu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c80) {
            ctx->pc = 0x177CC4u;
            goto label_177cc4;
        }
    }
    ctx->pc = 0x177C88u;
    // 0x177c88: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177C88u;
    SET_GPR_U32(ctx, 31, 0x177C90u);
    ctx->pc = 0x177C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177C88u;
            // 0x177c8c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C90u; }
        if (ctx->pc != 0x177C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C90u; }
        if (ctx->pc != 0x177C90u) { return; }
    }
    ctx->pc = 0x177C90u;
    // 0x177c90: 0xc08e440  jal         func_239100
    ctx->pc = 0x177C90u;
    SET_GPR_U32(ctx, 31, 0x177C98u);
    ctx->pc = 0x177C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177C90u;
            // 0x177c94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C98u; }
        if (ctx->pc != 0x177C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C98u; }
        if (ctx->pc != 0x177C98u) { return; }
    }
    ctx->pc = 0x177C98u;
    // 0x177c98: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x177c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x177c9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ca0: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x177ca4: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177ca8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177cac: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177cb0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x177cb4: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x177cb4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177cb8: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x177cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x177cbc: 0xc08e45a  jal         func_239168
    ctx->pc = 0x177CBCu;
    SET_GPR_U32(ctx, 31, 0x177CC4u);
    ctx->pc = 0x177CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177CBCu;
            // 0x177cc0: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177CC4u; }
        if (ctx->pc != 0x177CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177CC4u; }
        if (ctx->pc != 0x177CC4u) { return; }
    }
    ctx->pc = 0x177CC4u;
label_177cc4:
    // 0x177cc4: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x177cc8: 0x56a200e7  bnel        $s5, $v0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x177CC8u;
    {
        const bool branch_taken_0x177cc8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x177cc8) {
            ctx->pc = 0x177CCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177CC8u;
            // 0x177ccc: 0x9662000a  lhu         $v0, 0xA($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178068u;
            goto label_178068;
        }
    }
    ctx->pc = 0x177CD0u;
    // 0x177cd0: 0x96620008  lhu         $v0, 0x8($s3)
    ctx->pc = 0x177cd0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x177cd4: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x177cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x177cd8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x177cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x177cdc: 0x16a00010  bnez        $s5, . + 4 + (0x10 << 2)
    ctx->pc = 0x177CDCu;
    {
        const bool branch_taken_0x177cdc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x177CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177CDCu;
            // 0x177ce0: 0x62a021  addu        $s4, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177cdc) {
            ctx->pc = 0x177D20u;
            goto label_177d20;
        }
    }
    ctx->pc = 0x177CE4u;
    // 0x177ce4: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177CE4u;
    SET_GPR_U32(ctx, 31, 0x177CECu);
    ctx->pc = 0x177CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177CE4u;
            // 0x177ce8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177CECu; }
        if (ctx->pc != 0x177CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177CECu; }
        if (ctx->pc != 0x177CECu) { return; }
    }
    ctx->pc = 0x177CECu;
    // 0x177cec: 0xc08e440  jal         func_239100
    ctx->pc = 0x177CECu;
    SET_GPR_U32(ctx, 31, 0x177CF4u);
    ctx->pc = 0x177CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177CECu;
            // 0x177cf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177CF4u; }
        if (ctx->pc != 0x177CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177CF4u; }
        if (ctx->pc != 0x177CF4u) { return; }
    }
    ctx->pc = 0x177CF4u;
    // 0x177cf4: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x177cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x177cf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177cfc: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x177d00: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177d04: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177d04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177d08: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177d0c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x177d10: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x177d10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177d14: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x177d14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x177d18: 0xc08e45a  jal         func_239168
    ctx->pc = 0x177D18u;
    SET_GPR_U32(ctx, 31, 0x177D20u);
    ctx->pc = 0x177D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177D18u;
            // 0x177d1c: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177D20u; }
        if (ctx->pc != 0x177D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177D20u; }
        if (ctx->pc != 0x177D20u) { return; }
    }
    ctx->pc = 0x177D20u;
label_177d20:
    // 0x177d20: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x177d24: 0x16820015  bne         $s4, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x177D24u;
    {
        const bool branch_taken_0x177d24 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x177D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177D24u;
            // 0x177d28: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177d24) {
            ctx->pc = 0x177D7Cu;
            goto label_177d7c;
        }
    }
    ctx->pc = 0x177D2Cu;
    // 0x177d2c: 0x568000ca  bnel        $s4, $zero, . + 4 + (0xCA << 2)
    ctx->pc = 0x177D2Cu;
    {
        const bool branch_taken_0x177d2c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x177d2c) {
            ctx->pc = 0x177D30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177D2Cu;
            // 0x177d30: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178058u;
            goto label_178058;
        }
    }
    ctx->pc = 0x177D34u;
    // 0x177d34: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177D34u;
    SET_GPR_U32(ctx, 31, 0x177D3Cu);
    ctx->pc = 0x177D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177D34u;
            // 0x177d38: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177D3Cu; }
        if (ctx->pc != 0x177D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177D3Cu; }
        if (ctx->pc != 0x177D3Cu) { return; }
    }
    ctx->pc = 0x177D3Cu;
    // 0x177d3c: 0xc08e440  jal         func_239100
    ctx->pc = 0x177D3Cu;
    SET_GPR_U32(ctx, 31, 0x177D44u);
    ctx->pc = 0x177D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177D3Cu;
            // 0x177d40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177D44u; }
        if (ctx->pc != 0x177D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177D44u; }
        if (ctx->pc != 0x177D44u) { return; }
    }
    ctx->pc = 0x177D44u;
    // 0x177d44: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x177d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x177d48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d4c: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x177d50: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177d54: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177d54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177d58: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177d58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177d5c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x177d60: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x177d60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177d64: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x177d64u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x177d68: 0xc08e45a  jal         func_239168
    ctx->pc = 0x177D68u;
    SET_GPR_U32(ctx, 31, 0x177D70u);
    ctx->pc = 0x177D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177D68u;
            // 0x177d6c: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177D70u; }
        if (ctx->pc != 0x177D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177D70u; }
        if (ctx->pc != 0x177D70u) { return; }
    }
    ctx->pc = 0x177D70u;
    // 0x177d70: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x177d74: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x177D74u;
    {
        const bool branch_taken_0x177d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177D74u;
            // 0x177d78: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177d74) {
            ctx->pc = 0x178058u;
            goto label_178058;
        }
    }
    ctx->pc = 0x177D7Cu;
label_177d7c:
    // 0x177d7c: 0xc05e17c  jal         func_1785F0
    ctx->pc = 0x177D7Cu;
    SET_GPR_U32(ctx, 31, 0x177D84u);
    ctx->pc = 0x177D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177D7Cu;
            // 0x177d80: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1785F0u;
    if (runtime->hasFunction(0x1785F0u)) {
        auto targetFn = runtime->lookupFunction(0x1785F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177D84u; }
        if (ctx->pc != 0x177D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001785F0_0x1785f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177D84u; }
        if (ctx->pc != 0x177D84u) { return; }
    }
    ctx->pc = 0x177D84u;
    // 0x177d84: 0x9682000a  lhu         $v0, 0xA($s4)
    ctx->pc = 0x177d84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x177d88: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x177d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x177d8c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x177d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x177d90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x177d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x177d94: 0x14730059  bne         $v1, $s3, . + 4 + (0x59 << 2)
    ctx->pc = 0x177D94u;
    {
        const bool branch_taken_0x177d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x177D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177D94u;
            // 0x177d98: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177d94) {
            ctx->pc = 0x177EFCu;
            goto label_177efc;
        }
    }
    ctx->pc = 0x177D9Cu;
    // 0x177d9c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x177D9Cu;
    {
        const bool branch_taken_0x177d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177D9Cu;
            // 0x177da0: 0x8e12c4b4  lw          $s2, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177d9c) {
            ctx->pc = 0x177DE4u;
            goto label_177de4;
        }
    }
    ctx->pc = 0x177DA4u;
    // 0x177da4: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177DA4u;
    SET_GPR_U32(ctx, 31, 0x177DACu);
    ctx->pc = 0x177DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177DA4u;
            // 0x177da8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177DACu; }
        if (ctx->pc != 0x177DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177DACu; }
        if (ctx->pc != 0x177DACu) { return; }
    }
    ctx->pc = 0x177DACu;
    // 0x177dac: 0xc08e440  jal         func_239100
    ctx->pc = 0x177DACu;
    SET_GPR_U32(ctx, 31, 0x177DB4u);
    ctx->pc = 0x177DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177DACu;
            // 0x177db0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177DB4u; }
        if (ctx->pc != 0x177DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177DB4u; }
        if (ctx->pc != 0x177DB4u) { return; }
    }
    ctx->pc = 0x177DB4u;
    // 0x177db4: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x177db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x177db8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177dbc: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x177dc0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177dc4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177dc8: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177dcc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177dccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x177dd0: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x177dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177dd4: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x177dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x177dd8: 0xc08e45a  jal         func_239168
    ctx->pc = 0x177DD8u;
    SET_GPR_U32(ctx, 31, 0x177DE0u);
    ctx->pc = 0x177DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177DD8u;
            // 0x177ddc: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177DE0u; }
        if (ctx->pc != 0x177DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177DE0u; }
        if (ctx->pc != 0x177DE0u) { return; }
    }
    ctx->pc = 0x177DE0u;
    // 0x177de0: 0x8e12c4b4  lw          $s2, -0x3B4C($s0)
    ctx->pc = 0x177de0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_177de4:
    // 0x177de4: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x177DE4u;
    {
        const bool branch_taken_0x177de4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x177DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177DE4u;
            // 0x177de8: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177de4) {
            ctx->pc = 0x177E2Cu;
            goto label_177e2c;
        }
    }
    ctx->pc = 0x177DECu;
    // 0x177dec: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177DECu;
    SET_GPR_U32(ctx, 31, 0x177DF4u);
    ctx->pc = 0x177DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177DECu;
            // 0x177df0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177DF4u; }
        if (ctx->pc != 0x177DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177DF4u; }
        if (ctx->pc != 0x177DF4u) { return; }
    }
    ctx->pc = 0x177DF4u;
    // 0x177df4: 0xc08e440  jal         func_239100
    ctx->pc = 0x177DF4u;
    SET_GPR_U32(ctx, 31, 0x177DFCu);
    ctx->pc = 0x177DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177DF4u;
            // 0x177df8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177DFCu; }
        if (ctx->pc != 0x177DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177DFCu; }
        if (ctx->pc != 0x177DFCu) { return; }
    }
    ctx->pc = 0x177DFCu;
    // 0x177dfc: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x177dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x177e00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e04: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x177e08: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177e0c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177e10: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177e14: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177e14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x177e18: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x177e18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177e1c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x177e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x177e20: 0xc08e45a  jal         func_239168
    ctx->pc = 0x177E20u;
    SET_GPR_U32(ctx, 31, 0x177E28u);
    ctx->pc = 0x177E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177E20u;
            // 0x177e24: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177E28u; }
        if (ctx->pc != 0x177E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177E28u; }
        if (ctx->pc != 0x177E28u) { return; }
    }
    ctx->pc = 0x177E28u;
    // 0x177e28: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_177e2c:
    // 0x177e2c: 0x1282008a  beq         $s4, $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x177E2Cu;
    {
        const bool branch_taken_0x177e2c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x177e2c) {
            ctx->pc = 0x178058u;
            goto label_178058;
        }
    }
    ctx->pc = 0x177E34u;
    // 0x177e34: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x177E34u;
    {
        const bool branch_taken_0x177e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177E34u;
            // 0x177e38: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177e34) {
            ctx->pc = 0x177E80u;
            goto label_177e80;
        }
    }
    ctx->pc = 0x177E3Cu;
    // 0x177e3c: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177E3Cu;
    SET_GPR_U32(ctx, 31, 0x177E44u);
    ctx->pc = 0x177E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177E3Cu;
            // 0x177e40: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177E44u; }
        if (ctx->pc != 0x177E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177E44u; }
        if (ctx->pc != 0x177E44u) { return; }
    }
    ctx->pc = 0x177E44u;
    // 0x177e44: 0xc08e440  jal         func_239100
    ctx->pc = 0x177E44u;
    SET_GPR_U32(ctx, 31, 0x177E4Cu);
    ctx->pc = 0x177E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177E44u;
            // 0x177e48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177E4Cu; }
        if (ctx->pc != 0x177E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177E4Cu; }
        if (ctx->pc != 0x177E4Cu) { return; }
    }
    ctx->pc = 0x177E4Cu;
    // 0x177e4c: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x177e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x177e50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e54: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x177e58: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177e58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177e5c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177e60: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177e64: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177e64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x177e68: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x177e68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177e6c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x177e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x177e70: 0xc08e45a  jal         func_239168
    ctx->pc = 0x177E70u;
    SET_GPR_U32(ctx, 31, 0x177E78u);
    ctx->pc = 0x177E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177E70u;
            // 0x177e74: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177E78u; }
        if (ctx->pc != 0x177E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177E78u; }
        if (ctx->pc != 0x177E78u) { return; }
    }
    ctx->pc = 0x177E78u;
    // 0x177e78: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x177e7c: 0x0  nop
    ctx->pc = 0x177e7cu;
    // NOP
label_177e80:
    // 0x177e80: 0x52420019  beql        $s2, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x177E80u;
    {
        const bool branch_taken_0x177e80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x177e80) {
            ctx->pc = 0x177E84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177E80u;
            // 0x177e84: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177EE8u;
            goto label_177ee8;
        }
    }
    ctx->pc = 0x177E88u;
    // 0x177e88: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x177E88u;
    {
        const bool branch_taken_0x177e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177E88u;
            // 0x177e8c: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177e88) {
            ctx->pc = 0x177ED0u;
            goto label_177ed0;
        }
    }
    ctx->pc = 0x177E90u;
    // 0x177e90: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177E90u;
    SET_GPR_U32(ctx, 31, 0x177E98u);
    ctx->pc = 0x177E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177E90u;
            // 0x177e94: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177E98u; }
        if (ctx->pc != 0x177E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177E98u; }
        if (ctx->pc != 0x177E98u) { return; }
    }
    ctx->pc = 0x177E98u;
    // 0x177e98: 0xc08e440  jal         func_239100
    ctx->pc = 0x177E98u;
    SET_GPR_U32(ctx, 31, 0x177EA0u);
    ctx->pc = 0x177E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177E98u;
            // 0x177e9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177EA0u; }
        if (ctx->pc != 0x177EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177EA0u; }
        if (ctx->pc != 0x177EA0u) { return; }
    }
    ctx->pc = 0x177EA0u;
    // 0x177ea0: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x177ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x177ea4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ea8: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x177eac: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177eb0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177eb4: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177eb8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x177ebc: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x177ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177ec0: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x177ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x177ec4: 0xc08e45a  jal         func_239168
    ctx->pc = 0x177EC4u;
    SET_GPR_U32(ctx, 31, 0x177ECCu);
    ctx->pc = 0x177EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177EC4u;
            // 0x177ec8: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177ECCu; }
        if (ctx->pc != 0x177ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177ECCu; }
        if (ctx->pc != 0x177ECCu) { return; }
    }
    ctx->pc = 0x177ECCu;
    // 0x177ecc: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_177ed0:
    // 0x177ed0: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x177ED0u;
    {
        const bool branch_taken_0x177ed0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x177ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177ED0u;
            // 0x177ed4: 0x8e22c4bc  lw          $v0, -0x3B44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177ed0) {
            ctx->pc = 0x177EE4u;
            goto label_177ee4;
        }
    }
    ctx->pc = 0x177ED8u;
    // 0x177ed8: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x177ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x177edc: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x177edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x177ee0: 0xa6420008  sh          $v0, 0x8($s2)
    ctx->pc = 0x177ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 2));
label_177ee4:
    // 0x177ee4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x177ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_177ee8:
    // 0x177ee8: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x177ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x177eec: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x177eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x177ef0: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x177ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x177ef4: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x177EF4u;
    {
        const bool branch_taken_0x177ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177EF4u;
            // 0x177ef8: 0xa682000a  sh          $v0, 0xA($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177ef4) {
            ctx->pc = 0x178058u;
            goto label_178058;
        }
    }
    ctx->pc = 0x177EFCu;
label_177efc:
    // 0x177efc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x177EFCu;
    {
        const bool branch_taken_0x177efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177EFCu;
            // 0x177f00: 0x8e12c4b4  lw          $s2, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177efc) {
            ctx->pc = 0x177F44u;
            goto label_177f44;
        }
    }
    ctx->pc = 0x177F04u;
    // 0x177f04: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177F04u;
    SET_GPR_U32(ctx, 31, 0x177F0Cu);
    ctx->pc = 0x177F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177F04u;
            // 0x177f08: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F0Cu; }
        if (ctx->pc != 0x177F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F0Cu; }
        if (ctx->pc != 0x177F0Cu) { return; }
    }
    ctx->pc = 0x177F0Cu;
    // 0x177f0c: 0xc08e440  jal         func_239100
    ctx->pc = 0x177F0Cu;
    SET_GPR_U32(ctx, 31, 0x177F14u);
    ctx->pc = 0x177F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177F0Cu;
            // 0x177f10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F14u; }
        if (ctx->pc != 0x177F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F14u; }
        if (ctx->pc != 0x177F14u) { return; }
    }
    ctx->pc = 0x177F14u;
    // 0x177f14: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x177f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x177f18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177f1c: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x177f20: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177f24: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177f24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177f28: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177f2c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x177f30: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x177f30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177f34: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x177f34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x177f38: 0xc08e45a  jal         func_239168
    ctx->pc = 0x177F38u;
    SET_GPR_U32(ctx, 31, 0x177F40u);
    ctx->pc = 0x177F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177F38u;
            // 0x177f3c: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F40u; }
        if (ctx->pc != 0x177F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F40u; }
        if (ctx->pc != 0x177F40u) { return; }
    }
    ctx->pc = 0x177F40u;
    // 0x177f40: 0x8e12c4b4  lw          $s2, -0x3B4C($s0)
    ctx->pc = 0x177f40u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_177f44:
    // 0x177f44: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x177F44u;
    {
        const bool branch_taken_0x177f44 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x177F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177F44u;
            // 0x177f48: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f44) {
            ctx->pc = 0x177F8Cu;
            goto label_177f8c;
        }
    }
    ctx->pc = 0x177F4Cu;
    // 0x177f4c: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177F4Cu;
    SET_GPR_U32(ctx, 31, 0x177F54u);
    ctx->pc = 0x177F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177F4Cu;
            // 0x177f50: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F54u; }
        if (ctx->pc != 0x177F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F54u; }
        if (ctx->pc != 0x177F54u) { return; }
    }
    ctx->pc = 0x177F54u;
    // 0x177f54: 0xc08e440  jal         func_239100
    ctx->pc = 0x177F54u;
    SET_GPR_U32(ctx, 31, 0x177F5Cu);
    ctx->pc = 0x177F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177F54u;
            // 0x177f58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F5Cu; }
        if (ctx->pc != 0x177F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F5Cu; }
        if (ctx->pc != 0x177F5Cu) { return; }
    }
    ctx->pc = 0x177F5Cu;
    // 0x177f5c: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x177f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x177f60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177f64: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x177f68: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177f6c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177f70: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177f74: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177f74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x177f78: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x177f78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177f7c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x177f7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x177f80: 0xc08e45a  jal         func_239168
    ctx->pc = 0x177F80u;
    SET_GPR_U32(ctx, 31, 0x177F88u);
    ctx->pc = 0x177F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177F80u;
            // 0x177f84: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F88u; }
        if (ctx->pc != 0x177F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F88u; }
        if (ctx->pc != 0x177F88u) { return; }
    }
    ctx->pc = 0x177F88u;
    // 0x177f88: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_177f8c:
    // 0x177f8c: 0x12820032  beq         $s4, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x177F8Cu;
    {
        const bool branch_taken_0x177f8c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x177f8c) {
            ctx->pc = 0x178058u;
            goto label_178058;
        }
    }
    ctx->pc = 0x177F94u;
    // 0x177f94: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x177F94u;
    {
        const bool branch_taken_0x177f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177F94u;
            // 0x177f98: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f94) {
            ctx->pc = 0x177FE0u;
            goto label_177fe0;
        }
    }
    ctx->pc = 0x177F9Cu;
    // 0x177f9c: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177F9Cu;
    SET_GPR_U32(ctx, 31, 0x177FA4u);
    ctx->pc = 0x177FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177F9Cu;
            // 0x177fa0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177FA4u; }
        if (ctx->pc != 0x177FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177FA4u; }
        if (ctx->pc != 0x177FA4u) { return; }
    }
    ctx->pc = 0x177FA4u;
    // 0x177fa4: 0xc08e440  jal         func_239100
    ctx->pc = 0x177FA4u;
    SET_GPR_U32(ctx, 31, 0x177FACu);
    ctx->pc = 0x177FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177FA4u;
            // 0x177fa8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177FACu; }
        if (ctx->pc != 0x177FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177FACu; }
        if (ctx->pc != 0x177FACu) { return; }
    }
    ctx->pc = 0x177FACu;
    // 0x177fac: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x177facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x177fb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177fb4: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x177fb8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177fbc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177fc0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x177fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x177fc4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x177fc8: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x177fc8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177fcc: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x177fccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x177fd0: 0xc08e45a  jal         func_239168
    ctx->pc = 0x177FD0u;
    SET_GPR_U32(ctx, 31, 0x177FD8u);
    ctx->pc = 0x177FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177FD0u;
            // 0x177fd4: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177FD8u; }
        if (ctx->pc != 0x177FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177FD8u; }
        if (ctx->pc != 0x177FD8u) { return; }
    }
    ctx->pc = 0x177FD8u;
    // 0x177fd8: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x177fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x177fdc: 0x0  nop
    ctx->pc = 0x177fdcu;
    // NOP
label_177fe0:
    // 0x177fe0: 0x52420019  beql        $s2, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x177FE0u;
    {
        const bool branch_taken_0x177fe0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x177fe0) {
            ctx->pc = 0x177FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177FE0u;
            // 0x177fe4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178048u;
            goto label_178048;
        }
    }
    ctx->pc = 0x177FE8u;
    // 0x177fe8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x177FE8u;
    {
        const bool branch_taken_0x177fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177FE8u;
            // 0x177fec: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177fe8) {
            ctx->pc = 0x178030u;
            goto label_178030;
        }
    }
    ctx->pc = 0x177FF0u;
    // 0x177ff0: 0xc05d762  jal         func_175D88
    ctx->pc = 0x177FF0u;
    SET_GPR_U32(ctx, 31, 0x177FF8u);
    ctx->pc = 0x177FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177FF0u;
            // 0x177ff4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177FF8u; }
        if (ctx->pc != 0x177FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177FF8u; }
        if (ctx->pc != 0x177FF8u) { return; }
    }
    ctx->pc = 0x177FF8u;
    // 0x177ff8: 0xc08e440  jal         func_239100
    ctx->pc = 0x177FF8u;
    SET_GPR_U32(ctx, 31, 0x178000u);
    ctx->pc = 0x177FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177FF8u;
            // 0x177ffc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178000u; }
        if (ctx->pc != 0x178000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178000u; }
        if (ctx->pc != 0x178000u) { return; }
    }
    ctx->pc = 0x178000u;
    // 0x178000: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x178000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x178004: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x178004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178008: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x178008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x17800c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x17800cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178010: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x178010u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x178014: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x178014u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x178018: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x178018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17801c: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x17801cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x178020: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x178020u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x178024: 0xc08e45a  jal         func_239168
    ctx->pc = 0x178024u;
    SET_GPR_U32(ctx, 31, 0x17802Cu);
    ctx->pc = 0x178028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178024u;
            // 0x178028: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17802Cu; }
        if (ctx->pc != 0x17802Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17802Cu; }
        if (ctx->pc != 0x17802Cu) { return; }
    }
    ctx->pc = 0x17802Cu;
    // 0x17802c: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x17802cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_178030:
    // 0x178030: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x178030u;
    {
        const bool branch_taken_0x178030 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x178034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178030u;
            // 0x178034: 0x8e22c4bc  lw          $v0, -0x3B44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178030) {
            ctx->pc = 0x178044u;
            goto label_178044;
        }
    }
    ctx->pc = 0x178038u;
    // 0x178038: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x178038u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x17803c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x17803cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x178040: 0xa6420008  sh          $v0, 0x8($s2)
    ctx->pc = 0x178040u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 2));
label_178044:
    // 0x178044: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x178044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_178048:
    // 0x178048: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x178048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x17804c: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x17804cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x178050: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x178050u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x178054: 0xa682000c  sh          $v0, 0xC($s4)
    ctx->pc = 0x178054u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 2));
label_178058:
    // 0x178058: 0xc05d76c  jal         func_175DB0
    ctx->pc = 0x178058u;
    SET_GPR_U32(ctx, 31, 0x178060u);
    ctx->pc = 0x17805Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178058u;
            // 0x17805c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175DB0u;
    if (runtime->hasFunction(0x175DB0u)) {
        auto targetFn = runtime->lookupFunction(0x175DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178060u; }
        if (ctx->pc != 0x178060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175db0_0x175dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178060u; }
        if (ctx->pc != 0x178060u) { return; }
    }
    ctx->pc = 0x178060u;
    // 0x178060: 0x1000015a  b           . + 4 + (0x15A << 2)
    ctx->pc = 0x178060u;
    {
        const bool branch_taken_0x178060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178060u;
            // 0x178064: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178060) {
            ctx->pc = 0x1785CCu;
            goto label_1785cc;
        }
    }
    ctx->pc = 0x178068u;
label_178068:
    // 0x178068: 0x8e24c4bc  lw          $a0, -0x3B44($s1)
    ctx->pc = 0x178068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x17806c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17806cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x178070: 0x8e03c4b4  lw          $v1, -0x3B4C($s0)
    ctx->pc = 0x178070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x178074: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x178074u;
    {
        const bool branch_taken_0x178074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x178078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178074u;
            // 0x178078: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178074) {
            ctx->pc = 0x1780B8u;
            goto label_1780b8;
        }
    }
    ctx->pc = 0x17807Cu;
    // 0x17807c: 0xc05d762  jal         func_175D88
    ctx->pc = 0x17807Cu;
    SET_GPR_U32(ctx, 31, 0x178084u);
    ctx->pc = 0x178080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17807Cu;
            // 0x178080: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178084u; }
        if (ctx->pc != 0x178084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178084u; }
        if (ctx->pc != 0x178084u) { return; }
    }
    ctx->pc = 0x178084u;
    // 0x178084: 0xc08e440  jal         func_239100
    ctx->pc = 0x178084u;
    SET_GPR_U32(ctx, 31, 0x17808Cu);
    ctx->pc = 0x178088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178084u;
            // 0x178088: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17808Cu; }
        if (ctx->pc != 0x17808Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17808Cu; }
        if (ctx->pc != 0x17808Cu) { return; }
    }
    ctx->pc = 0x17808Cu;
    // 0x17808c: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x17808cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x178090: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x178090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178094: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x178094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x178098: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x178098u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17809c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17809cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1780a0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1780a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1780a4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1780a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1780a8: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1780a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1780ac: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x1780acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1780b0: 0xc08e45a  jal         func_239168
    ctx->pc = 0x1780B0u;
    SET_GPR_U32(ctx, 31, 0x1780B8u);
    ctx->pc = 0x1780B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1780B0u;
            // 0x1780b4: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1780B8u; }
        if (ctx->pc != 0x1780B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1780B8u; }
        if (ctx->pc != 0x1780B8u) { return; }
    }
    ctx->pc = 0x1780B8u;
label_1780b8:
    // 0x1780b8: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1780b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x1780bc: 0x56420019  bnel        $s2, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1780BCu;
    {
        const bool branch_taken_0x1780bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1780bc) {
            ctx->pc = 0x1780C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1780BCu;
            // 0x1780c0: 0x9662000a  lhu         $v0, 0xA($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178124u;
            goto label_178124;
        }
    }
    ctx->pc = 0x1780C4u;
    // 0x1780c4: 0x9662000c  lhu         $v0, 0xC($s3)
    ctx->pc = 0x1780c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1780c8: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x1780c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x1780cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1780ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1780d0: 0x16400010  bnez        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1780D0u;
    {
        const bool branch_taken_0x1780d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1780D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1780D0u;
            // 0x1780d4: 0x62a021  addu        $s4, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1780d0) {
            ctx->pc = 0x178114u;
            goto label_178114;
        }
    }
    ctx->pc = 0x1780D8u;
    // 0x1780d8: 0xc05d762  jal         func_175D88
    ctx->pc = 0x1780D8u;
    SET_GPR_U32(ctx, 31, 0x1780E0u);
    ctx->pc = 0x1780DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1780D8u;
            // 0x1780dc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1780E0u; }
        if (ctx->pc != 0x1780E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1780E0u; }
        if (ctx->pc != 0x1780E0u) { return; }
    }
    ctx->pc = 0x1780E0u;
    // 0x1780e0: 0xc08e440  jal         func_239100
    ctx->pc = 0x1780E0u;
    SET_GPR_U32(ctx, 31, 0x1780E8u);
    ctx->pc = 0x1780E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1780E0u;
            // 0x1780e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1780E8u; }
        if (ctx->pc != 0x1780E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1780E8u; }
        if (ctx->pc != 0x1780E8u) { return; }
    }
    ctx->pc = 0x1780E8u;
    // 0x1780e8: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x1780e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x1780ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1780ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1780f0: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1780f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x1780f4: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1780f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1780f8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1780f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1780fc: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1780fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x178100: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x178100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x178104: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x178104u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x178108: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x178108u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x17810c: 0xc08e45a  jal         func_239168
    ctx->pc = 0x17810Cu;
    SET_GPR_U32(ctx, 31, 0x178114u);
    ctx->pc = 0x178110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17810Cu;
            // 0x178110: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178114u; }
        if (ctx->pc != 0x178114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178114u; }
        if (ctx->pc != 0x178114u) { return; }
    }
    ctx->pc = 0x178114u;
label_178114:
    // 0x178114: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x178114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x178118: 0x5282012c  beql        $s4, $v0, . + 4 + (0x12C << 2)
    ctx->pc = 0x178118u;
    {
        const bool branch_taken_0x178118 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x178118) {
            ctx->pc = 0x17811Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178118u;
            // 0x17811c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1785CCu;
            goto label_1785cc;
        }
    }
    ctx->pc = 0x178120u;
    // 0x178120: 0x9662000a  lhu         $v0, 0xA($s3)
    ctx->pc = 0x178120u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
label_178124:
    // 0x178124: 0x8e24c4bc  lw          $a0, -0x3B44($s1)
    ctx->pc = 0x178124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x178128: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x178128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17812c: 0x8e03c4b4  lw          $v1, -0x3B4C($s0)
    ctx->pc = 0x17812cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x178130: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x178130u;
    {
        const bool branch_taken_0x178130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x178134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178130u;
            // 0x178134: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178130) {
            ctx->pc = 0x178174u;
            goto label_178174;
        }
    }
    ctx->pc = 0x178138u;
    // 0x178138: 0xc05d762  jal         func_175D88
    ctx->pc = 0x178138u;
    SET_GPR_U32(ctx, 31, 0x178140u);
    ctx->pc = 0x17813Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178138u;
            // 0x17813c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178140u; }
        if (ctx->pc != 0x178140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178140u; }
        if (ctx->pc != 0x178140u) { return; }
    }
    ctx->pc = 0x178140u;
    // 0x178140: 0xc08e440  jal         func_239100
    ctx->pc = 0x178140u;
    SET_GPR_U32(ctx, 31, 0x178148u);
    ctx->pc = 0x178144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178140u;
            // 0x178144: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178148u; }
        if (ctx->pc != 0x178148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178148u; }
        if (ctx->pc != 0x178148u) { return; }
    }
    ctx->pc = 0x178148u;
    // 0x178148: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x178148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x17814c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17814cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178150: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x178150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x178154: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x178154u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178158: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x178158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17815c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x17815cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x178160: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x178160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x178164: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x178164u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x178168: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x178168u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x17816c: 0xc08e45a  jal         func_239168
    ctx->pc = 0x17816Cu;
    SET_GPR_U32(ctx, 31, 0x178174u);
    ctx->pc = 0x178170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17816Cu;
            // 0x178170: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178174u; }
        if (ctx->pc != 0x178174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178174u; }
        if (ctx->pc != 0x178174u) { return; }
    }
    ctx->pc = 0x178174u;
label_178174:
    // 0x178174: 0x8e04c4b4  lw          $a0, -0x3B4C($s0)
    ctx->pc = 0x178174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x178178: 0x12440036  beq         $s2, $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x178178u;
    {
        const bool branch_taken_0x178178 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        ctx->pc = 0x17817Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178178u;
            // 0x17817c: 0x8e23c4bc  lw          $v1, -0x3B44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178178) {
            ctx->pc = 0x178254u;
            goto label_178254;
        }
    }
    ctx->pc = 0x178180u;
    // 0x178180: 0x9662000c  lhu         $v0, 0xC($s3)
    ctx->pc = 0x178180u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x178184: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x178184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x178188: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x178188u;
    {
        const bool branch_taken_0x178188 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17818Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178188u;
            // 0x17818c: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178188) {
            ctx->pc = 0x1781CCu;
            goto label_1781cc;
        }
    }
    ctx->pc = 0x178190u;
    // 0x178190: 0xc05d762  jal         func_175D88
    ctx->pc = 0x178190u;
    SET_GPR_U32(ctx, 31, 0x178198u);
    ctx->pc = 0x178194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178190u;
            // 0x178194: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178198u; }
        if (ctx->pc != 0x178198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178198u; }
        if (ctx->pc != 0x178198u) { return; }
    }
    ctx->pc = 0x178198u;
    // 0x178198: 0xc08e440  jal         func_239100
    ctx->pc = 0x178198u;
    SET_GPR_U32(ctx, 31, 0x1781A0u);
    ctx->pc = 0x17819Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178198u;
            // 0x17819c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1781A0u; }
        if (ctx->pc != 0x1781A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1781A0u; }
        if (ctx->pc != 0x1781A0u) { return; }
    }
    ctx->pc = 0x1781A0u;
    // 0x1781a0: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x1781a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x1781a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1781a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781a8: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1781a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x1781ac: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1781acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1781b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1781b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1781b4: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1781b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1781b8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1781b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1781bc: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1781bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1781c0: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x1781c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1781c4: 0xc08e45a  jal         func_239168
    ctx->pc = 0x1781C4u;
    SET_GPR_U32(ctx, 31, 0x1781CCu);
    ctx->pc = 0x1781C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1781C4u;
            // 0x1781c8: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1781CCu; }
        if (ctx->pc != 0x1781CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1781CCu; }
        if (ctx->pc != 0x1781CCu) { return; }
    }
    ctx->pc = 0x1781CCu;
label_1781cc:
    // 0x1781cc: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1781ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x1781d0: 0x52420021  beql        $s2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1781D0u;
    {
        const bool branch_taken_0x1781d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1781d0) {
            ctx->pc = 0x1781D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1781D0u;
            // 0x1781d4: 0x9662000a  lhu         $v0, 0xA($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178258u;
            goto label_178258;
        }
    }
    ctx->pc = 0x1781D8u;
    // 0x1781d8: 0x9662000c  lhu         $v0, 0xC($s3)
    ctx->pc = 0x1781d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1781dc: 0x0  nop
    ctx->pc = 0x1781dcu;
    // NOP
label_1781e0:
    // 0x1781e0: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x1781e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x1781e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1781e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1781e8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1781e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1781ec: 0x9642000a  lhu         $v0, 0xA($s2)
    ctx->pc = 0x1781ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x1781f0: 0x8e24c4bc  lw          $a0, -0x3B44($s1)
    ctx->pc = 0x1781f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x1781f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1781f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1781f8: 0x8e03c4b4  lw          $v1, -0x3B4C($s0)
    ctx->pc = 0x1781f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x1781fc: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1781FCu;
    {
        const bool branch_taken_0x1781fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x178200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1781FCu;
            // 0x178200: 0x82a021  addu        $s4, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1781fc) {
            ctx->pc = 0x178240u;
            goto label_178240;
        }
    }
    ctx->pc = 0x178204u;
    // 0x178204: 0xc05d762  jal         func_175D88
    ctx->pc = 0x178204u;
    SET_GPR_U32(ctx, 31, 0x17820Cu);
    ctx->pc = 0x178208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178204u;
            // 0x178208: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17820Cu; }
        if (ctx->pc != 0x17820Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17820Cu; }
        if (ctx->pc != 0x17820Cu) { return; }
    }
    ctx->pc = 0x17820Cu;
    // 0x17820c: 0xc08e440  jal         func_239100
    ctx->pc = 0x17820Cu;
    SET_GPR_U32(ctx, 31, 0x178214u);
    ctx->pc = 0x178210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17820Cu;
            // 0x178210: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178214u; }
        if (ctx->pc != 0x178214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178214u; }
        if (ctx->pc != 0x178214u) { return; }
    }
    ctx->pc = 0x178214u;
    // 0x178214: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x178214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x178218: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x178218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17821c: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x17821cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x178220: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x178220u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178224: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x178224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x178228: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x178228u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17822c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17822cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x178230: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x178230u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x178234: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x178234u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x178238: 0xc08e45a  jal         func_239168
    ctx->pc = 0x178238u;
    SET_GPR_U32(ctx, 31, 0x178240u);
    ctx->pc = 0x17823Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178238u;
            // 0x17823c: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178240u; }
        if (ctx->pc != 0x178240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178240u; }
        if (ctx->pc != 0x178240u) { return; }
    }
    ctx->pc = 0x178240u;
label_178240:
    // 0x178240: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x178240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x178244: 0x5682ffe6  bnel        $s4, $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x178244u;
    {
        const bool branch_taken_0x178244 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x178244) {
            ctx->pc = 0x178248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178244u;
            // 0x178248: 0x9642000a  lhu         $v0, 0xA($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1781E0u;
            runtime->cooperativeGuestYield();
            goto label_1781e0;
        }
    }
    ctx->pc = 0x17824Cu;
    // 0x17824c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x17824Cu;
    {
        const bool branch_taken_0x17824c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17824Cu;
            // 0x178250: 0x8e460004  lw          $a2, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17824c) {
            ctx->pc = 0x1782C8u;
            goto label_1782c8;
        }
    }
    ctx->pc = 0x178254u;
label_178254:
    // 0x178254: 0x9662000a  lhu         $v0, 0xA($s3)
    ctx->pc = 0x178254u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
label_178258:
    // 0x178258: 0x8e24c4bc  lw          $a0, -0x3B44($s1)
    ctx->pc = 0x178258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x17825c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17825cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x178260: 0x8e03c4b4  lw          $v1, -0x3B4C($s0)
    ctx->pc = 0x178260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x178264: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x178264u;
    {
        const bool branch_taken_0x178264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x178268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178264u;
            // 0x178268: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178264) {
            ctx->pc = 0x1782A8u;
            goto label_1782a8;
        }
    }
    ctx->pc = 0x17826Cu;
    // 0x17826c: 0xc05d762  jal         func_175D88
    ctx->pc = 0x17826Cu;
    SET_GPR_U32(ctx, 31, 0x178274u);
    ctx->pc = 0x178270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17826Cu;
            // 0x178270: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178274u; }
        if (ctx->pc != 0x178274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178274u; }
        if (ctx->pc != 0x178274u) { return; }
    }
    ctx->pc = 0x178274u;
    // 0x178274: 0xc08e440  jal         func_239100
    ctx->pc = 0x178274u;
    SET_GPR_U32(ctx, 31, 0x17827Cu);
    ctx->pc = 0x178278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178274u;
            // 0x178278: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17827Cu; }
        if (ctx->pc != 0x17827Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17827Cu; }
        if (ctx->pc != 0x17827Cu) { return; }
    }
    ctx->pc = 0x17827Cu;
    // 0x17827c: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x17827cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x178280: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x178280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178284: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x178284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x178288: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x178288u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17828c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17828cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x178290: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x178290u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x178294: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x178294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x178298: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x178298u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x17829c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x17829cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1782a0: 0xc08e45a  jal         func_239168
    ctx->pc = 0x1782A0u;
    SET_GPR_U32(ctx, 31, 0x1782A8u);
    ctx->pc = 0x1782A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1782A0u;
            // 0x1782a4: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1782A8u; }
        if (ctx->pc != 0x1782A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1782A8u; }
        if (ctx->pc != 0x1782A8u) { return; }
    }
    ctx->pc = 0x1782A8u;
label_1782a8:
    // 0x1782a8: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1782a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x1782ac: 0x52420002  beql        $s2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1782ACu;
    {
        const bool branch_taken_0x1782ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1782ac) {
            ctx->pc = 0x1782B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1782ACu;
            // 0x1782b0: 0x9662000c  lhu         $v0, 0xC($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1782B8u;
            goto label_1782b8;
        }
    }
    ctx->pc = 0x1782B4u;
    // 0x1782b4: 0x9662000a  lhu         $v0, 0xA($s3)
    ctx->pc = 0x1782b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
label_1782b8:
    // 0x1782b8: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x1782b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x1782bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1782bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1782c0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1782c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1782c4: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1782c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1782c8:
    // 0x1782c8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1782c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1782cc: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1782ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1782d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1782d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1782d4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1782d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1782d8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1782d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1782dc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1782dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1782e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1782e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1782e4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1782e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1782e8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1782e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1782ec: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x1782ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
    // 0x1782f0: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x1782f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x1782f4: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1782f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1782f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1782f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1782fc: 0xc05e17c  jal         func_1785F0
    ctx->pc = 0x1782FCu;
    SET_GPR_U32(ctx, 31, 0x178304u);
    ctx->pc = 0x178300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1782FCu;
            // 0x178300: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1785F0u;
    if (runtime->hasFunction(0x1785F0u)) {
        auto targetFn = runtime->lookupFunction(0x1785F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178304u; }
        if (ctx->pc != 0x178304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001785F0_0x1785f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178304u; }
        if (ctx->pc != 0x178304u) { return; }
    }
    ctx->pc = 0x178304u;
    // 0x178304: 0x96430008  lhu         $v1, 0x8($s2)
    ctx->pc = 0x178304u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x178308: 0x9642000c  lhu         $v0, 0xC($s2)
    ctx->pc = 0x178308u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x17830c: 0x8e85c4bc  lw          $a1, -0x3B44($s4)
    ctx->pc = 0x17830cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952124)));
    // 0x178310: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x178310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x178314: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x178314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x178318: 0x8e04c4b4  lw          $a0, -0x3B4C($s0)
    ctx->pc = 0x178318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x17831c: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x17831cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x178320: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x178320u;
    {
        const bool branch_taken_0x178320 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x178324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178320u;
            // 0x178324: 0xa39821  addu        $s3, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178320) {
            ctx->pc = 0x178364u;
            goto label_178364;
        }
    }
    ctx->pc = 0x178328u;
    // 0x178328: 0xc05d762  jal         func_175D88
    ctx->pc = 0x178328u;
    SET_GPR_U32(ctx, 31, 0x178330u);
    ctx->pc = 0x17832Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178328u;
            // 0x17832c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178330u; }
        if (ctx->pc != 0x178330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178330u; }
        if (ctx->pc != 0x178330u) { return; }
    }
    ctx->pc = 0x178330u;
    // 0x178330: 0xc08e440  jal         func_239100
    ctx->pc = 0x178330u;
    SET_GPR_U32(ctx, 31, 0x178338u);
    ctx->pc = 0x178334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178330u;
            // 0x178334: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178338u; }
        if (ctx->pc != 0x178338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178338u; }
        if (ctx->pc != 0x178338u) { return; }
    }
    ctx->pc = 0x178338u;
    // 0x178338: 0x8e83c4bc  lw          $v1, -0x3B44($s4)
    ctx->pc = 0x178338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952124)));
    // 0x17833c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17833cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178340: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x178340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x178344: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x178344u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178348: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x178348u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17834c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x17834cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x178350: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x178350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x178354: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x178354u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x178358: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x178358u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x17835c: 0xc08e45a  jal         func_239168
    ctx->pc = 0x17835Cu;
    SET_GPR_U32(ctx, 31, 0x178364u);
    ctx->pc = 0x178360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17835Cu;
            // 0x178360: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178364u; }
        if (ctx->pc != 0x178364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178364u; }
        if (ctx->pc != 0x178364u) { return; }
    }
    ctx->pc = 0x178364u;
label_178364:
    // 0x178364: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x178364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x178368: 0x52220002  beql        $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x178368u;
    {
        const bool branch_taken_0x178368 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x178368) {
            ctx->pc = 0x17836Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178368u;
            // 0x17836c: 0x9642000a  lhu         $v0, 0xA($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178374u;
            goto label_178374;
        }
    }
    ctx->pc = 0x178370u;
    // 0x178370: 0x9642000c  lhu         $v0, 0xC($s2)
    ctx->pc = 0x178370u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
label_178374:
    // 0x178374: 0x8e83c4bc  lw          $v1, -0x3B44($s4)
    ctx->pc = 0x178374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952124)));
    // 0x178378: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x178378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17837c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x17837cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x178380: 0x9662000a  lhu         $v0, 0xA($s3)
    ctx->pc = 0x178380u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x178384: 0x8e83c4bc  lw          $v1, -0x3B44($s4)
    ctx->pc = 0x178384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952124)));
    // 0x178388: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x178388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17838c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17838cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x178390: 0x14720046  bne         $v1, $s2, . + 4 + (0x46 << 2)
    ctx->pc = 0x178390u;
    {
        const bool branch_taken_0x178390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x178394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178390u;
            // 0x178394: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178390) {
            ctx->pc = 0x1784ACu;
            goto label_1784ac;
        }
    }
    ctx->pc = 0x178398u;
    // 0x178398: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x178398u;
    {
        const bool branch_taken_0x178398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178398) {
            ctx->pc = 0x1783E0u;
            goto label_1783e0;
        }
    }
    ctx->pc = 0x1783A0u;
    // 0x1783a0: 0xc05d762  jal         func_175D88
    ctx->pc = 0x1783A0u;
    SET_GPR_U32(ctx, 31, 0x1783A8u);
    ctx->pc = 0x1783A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1783A0u;
            // 0x1783a4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1783A8u; }
        if (ctx->pc != 0x1783A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1783A8u; }
        if (ctx->pc != 0x1783A8u) { return; }
    }
    ctx->pc = 0x1783A8u;
    // 0x1783a8: 0xc08e440  jal         func_239100
    ctx->pc = 0x1783A8u;
    SET_GPR_U32(ctx, 31, 0x1783B0u);
    ctx->pc = 0x1783ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1783A8u;
            // 0x1783ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1783B0u; }
        if (ctx->pc != 0x1783B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1783B0u; }
        if (ctx->pc != 0x1783B0u) { return; }
    }
    ctx->pc = 0x1783B0u;
    // 0x1783b0: 0x8e83c4bc  lw          $v1, -0x3B44($s4)
    ctx->pc = 0x1783b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952124)));
    // 0x1783b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1783b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783b8: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1783b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x1783bc: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1783bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1783c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1783c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1783c4: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1783c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1783c8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1783c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1783cc: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1783ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1783d0: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x1783d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1783d4: 0xc08e45a  jal         func_239168
    ctx->pc = 0x1783D4u;
    SET_GPR_U32(ctx, 31, 0x1783DCu);
    ctx->pc = 0x1783D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1783D4u;
            // 0x1783d8: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1783DCu; }
        if (ctx->pc != 0x1783DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1783DCu; }
        if (ctx->pc != 0x1783DCu) { return; }
    }
    ctx->pc = 0x1783DCu;
    // 0x1783dc: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1783dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_1783e0:
    // 0x1783e0: 0x12620077  beq         $s3, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x1783E0u;
    {
        const bool branch_taken_0x1783e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1783e0) {
            ctx->pc = 0x1785C0u;
            goto label_1785c0;
        }
    }
    ctx->pc = 0x1783E8u;
    // 0x1783e8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1783E8u;
    {
        const bool branch_taken_0x1783e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1783ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1783E8u;
            // 0x1783ec: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1783e8) {
            ctx->pc = 0x178430u;
            goto label_178430;
        }
    }
    ctx->pc = 0x1783F0u;
    // 0x1783f0: 0xc05d762  jal         func_175D88
    ctx->pc = 0x1783F0u;
    SET_GPR_U32(ctx, 31, 0x1783F8u);
    ctx->pc = 0x1783F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1783F0u;
            // 0x1783f4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1783F8u; }
        if (ctx->pc != 0x1783F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1783F8u; }
        if (ctx->pc != 0x1783F8u) { return; }
    }
    ctx->pc = 0x1783F8u;
    // 0x1783f8: 0xc08e440  jal         func_239100
    ctx->pc = 0x1783F8u;
    SET_GPR_U32(ctx, 31, 0x178400u);
    ctx->pc = 0x1783FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1783F8u;
            // 0x1783fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178400u; }
        if (ctx->pc != 0x178400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178400u; }
        if (ctx->pc != 0x178400u) { return; }
    }
    ctx->pc = 0x178400u;
    // 0x178400: 0x8e83c4bc  lw          $v1, -0x3B44($s4)
    ctx->pc = 0x178400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952124)));
    // 0x178404: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x178404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178408: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x178408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x17840c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x17840cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178410: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x178410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x178414: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x178414u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x178418: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x178418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17841c: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x17841cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x178420: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x178420u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x178424: 0xc08e45a  jal         func_239168
    ctx->pc = 0x178424u;
    SET_GPR_U32(ctx, 31, 0x17842Cu);
    ctx->pc = 0x178428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178424u;
            // 0x178428: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17842Cu; }
        if (ctx->pc != 0x17842Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17842Cu; }
        if (ctx->pc != 0x17842Cu) { return; }
    }
    ctx->pc = 0x17842Cu;
    // 0x17842c: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x17842cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_178430:
    // 0x178430: 0x52220019  beql        $s1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x178430u;
    {
        const bool branch_taken_0x178430 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x178430) {
            ctx->pc = 0x178434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178430u;
            // 0x178434: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178498u;
            goto label_178498;
        }
    }
    ctx->pc = 0x178438u;
    // 0x178438: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x178438u;
    {
        const bool branch_taken_0x178438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17843Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178438u;
            // 0x17843c: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178438) {
            ctx->pc = 0x178480u;
            goto label_178480;
        }
    }
    ctx->pc = 0x178440u;
    // 0x178440: 0xc05d762  jal         func_175D88
    ctx->pc = 0x178440u;
    SET_GPR_U32(ctx, 31, 0x178448u);
    ctx->pc = 0x178444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178440u;
            // 0x178444: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178448u; }
        if (ctx->pc != 0x178448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178448u; }
        if (ctx->pc != 0x178448u) { return; }
    }
    ctx->pc = 0x178448u;
    // 0x178448: 0xc08e440  jal         func_239100
    ctx->pc = 0x178448u;
    SET_GPR_U32(ctx, 31, 0x178450u);
    ctx->pc = 0x17844Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178448u;
            // 0x17844c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178450u; }
        if (ctx->pc != 0x178450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178450u; }
        if (ctx->pc != 0x178450u) { return; }
    }
    ctx->pc = 0x178450u;
    // 0x178450: 0x8e83c4bc  lw          $v1, -0x3B44($s4)
    ctx->pc = 0x178450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952124)));
    // 0x178454: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x178454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178458: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x178458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x17845c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x17845cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178460: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x178460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x178464: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x178464u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x178468: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x178468u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17846c: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x17846cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x178470: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x178470u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x178474: 0xc08e45a  jal         func_239168
    ctx->pc = 0x178474u;
    SET_GPR_U32(ctx, 31, 0x17847Cu);
    ctx->pc = 0x178478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178474u;
            // 0x178478: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17847Cu; }
        if (ctx->pc != 0x17847Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17847Cu; }
        if (ctx->pc != 0x17847Cu) { return; }
    }
    ctx->pc = 0x17847Cu;
    // 0x17847c: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x17847cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_178480:
    // 0x178480: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x178480u;
    {
        const bool branch_taken_0x178480 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x178484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178480u;
            // 0x178484: 0x8e82c4bc  lw          $v0, -0x3B44($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178480) {
            ctx->pc = 0x178494u;
            goto label_178494;
        }
    }
    ctx->pc = 0x178488u;
    // 0x178488: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x178488u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x17848c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x17848cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x178490: 0xa6220008  sh          $v0, 0x8($s1)
    ctx->pc = 0x178490u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
label_178494:
    // 0x178494: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x178494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_178498:
    // 0x178498: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x178498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x17849c: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x17849cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1784a0: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1784a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1784a4: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1784A4u;
    {
        const bool branch_taken_0x1784a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1784A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1784A4u;
            // 0x1784a8: 0xa662000a  sh          $v0, 0xA($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1784a4) {
            ctx->pc = 0x1785C0u;
            goto label_1785c0;
        }
    }
    ctx->pc = 0x1784ACu;
label_1784ac:
    // 0x1784ac: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1784ACu;
    {
        const bool branch_taken_0x1784ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1784B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1784ACu;
            // 0x1784b0: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1784ac) {
            ctx->pc = 0x1784F4u;
            goto label_1784f4;
        }
    }
    ctx->pc = 0x1784B4u;
    // 0x1784b4: 0xc05d762  jal         func_175D88
    ctx->pc = 0x1784B4u;
    SET_GPR_U32(ctx, 31, 0x1784BCu);
    ctx->pc = 0x1784B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1784B4u;
            // 0x1784b8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1784BCu; }
        if (ctx->pc != 0x1784BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1784BCu; }
        if (ctx->pc != 0x1784BCu) { return; }
    }
    ctx->pc = 0x1784BCu;
    // 0x1784bc: 0xc08e440  jal         func_239100
    ctx->pc = 0x1784BCu;
    SET_GPR_U32(ctx, 31, 0x1784C4u);
    ctx->pc = 0x1784C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1784BCu;
            // 0x1784c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1784C4u; }
        if (ctx->pc != 0x1784C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1784C4u; }
        if (ctx->pc != 0x1784C4u) { return; }
    }
    ctx->pc = 0x1784C4u;
    // 0x1784c4: 0x8e83c4bc  lw          $v1, -0x3B44($s4)
    ctx->pc = 0x1784c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952124)));
    // 0x1784c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1784c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1784cc: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1784ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x1784d0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1784d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1784d4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1784d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1784d8: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1784d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1784dc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1784dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1784e0: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1784e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1784e4: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x1784e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1784e8: 0xc08e45a  jal         func_239168
    ctx->pc = 0x1784E8u;
    SET_GPR_U32(ctx, 31, 0x1784F0u);
    ctx->pc = 0x1784ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1784E8u;
            // 0x1784ec: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1784F0u; }
        if (ctx->pc != 0x1784F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1784F0u; }
        if (ctx->pc != 0x1784F0u) { return; }
    }
    ctx->pc = 0x1784F0u;
    // 0x1784f0: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1784f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_1784f4:
    // 0x1784f4: 0x12620032  beq         $s3, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1784F4u;
    {
        const bool branch_taken_0x1784f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1784f4) {
            ctx->pc = 0x1785C0u;
            goto label_1785c0;
        }
    }
    ctx->pc = 0x1784FCu;
    // 0x1784fc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1784FCu;
    {
        const bool branch_taken_0x1784fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1784FCu;
            // 0x178500: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1784fc) {
            ctx->pc = 0x178548u;
            goto label_178548;
        }
    }
    ctx->pc = 0x178504u;
    // 0x178504: 0xc05d762  jal         func_175D88
    ctx->pc = 0x178504u;
    SET_GPR_U32(ctx, 31, 0x17850Cu);
    ctx->pc = 0x178508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178504u;
            // 0x178508: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17850Cu; }
        if (ctx->pc != 0x17850Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17850Cu; }
        if (ctx->pc != 0x17850Cu) { return; }
    }
    ctx->pc = 0x17850Cu;
    // 0x17850c: 0xc08e440  jal         func_239100
    ctx->pc = 0x17850Cu;
    SET_GPR_U32(ctx, 31, 0x178514u);
    ctx->pc = 0x178510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17850Cu;
            // 0x178510: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178514u; }
        if (ctx->pc != 0x178514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178514u; }
        if (ctx->pc != 0x178514u) { return; }
    }
    ctx->pc = 0x178514u;
    // 0x178514: 0x8e83c4bc  lw          $v1, -0x3B44($s4)
    ctx->pc = 0x178514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952124)));
    // 0x178518: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x178518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17851c: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x17851cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x178520: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x178520u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178524: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x178524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x178528: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x178528u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17852c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17852cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x178530: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x178530u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x178534: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x178534u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x178538: 0xc08e45a  jal         func_239168
    ctx->pc = 0x178538u;
    SET_GPR_U32(ctx, 31, 0x178540u);
    ctx->pc = 0x17853Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178538u;
            // 0x17853c: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178540u; }
        if (ctx->pc != 0x178540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178540u; }
        if (ctx->pc != 0x178540u) { return; }
    }
    ctx->pc = 0x178540u;
    // 0x178540: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x178540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x178544: 0x0  nop
    ctx->pc = 0x178544u;
    // NOP
label_178548:
    // 0x178548: 0x52220019  beql        $s1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x178548u;
    {
        const bool branch_taken_0x178548 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x178548) {
            ctx->pc = 0x17854Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178548u;
            // 0x17854c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1785B0u;
            goto label_1785b0;
        }
    }
    ctx->pc = 0x178550u;
    // 0x178550: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x178550u;
    {
        const bool branch_taken_0x178550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178550u;
            // 0x178554: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178550) {
            ctx->pc = 0x178598u;
            goto label_178598;
        }
    }
    ctx->pc = 0x178558u;
    // 0x178558: 0xc05d762  jal         func_175D88
    ctx->pc = 0x178558u;
    SET_GPR_U32(ctx, 31, 0x178560u);
    ctx->pc = 0x17855Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178558u;
            // 0x17855c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178560u; }
        if (ctx->pc != 0x178560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178560u; }
        if (ctx->pc != 0x178560u) { return; }
    }
    ctx->pc = 0x178560u;
    // 0x178560: 0xc08e440  jal         func_239100
    ctx->pc = 0x178560u;
    SET_GPR_U32(ctx, 31, 0x178568u);
    ctx->pc = 0x178564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178560u;
            // 0x178564: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178568u; }
        if (ctx->pc != 0x178568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178568u; }
        if (ctx->pc != 0x178568u) { return; }
    }
    ctx->pc = 0x178568u;
    // 0x178568: 0x8e83c4bc  lw          $v1, -0x3B44($s4)
    ctx->pc = 0x178568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952124)));
    // 0x17856c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17856cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178570: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x178570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x178574: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x178574u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178578: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x178578u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17857c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x17857cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x178580: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x178580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x178584: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x178584u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x178588: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x178588u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x17858c: 0xc08e45a  jal         func_239168
    ctx->pc = 0x17858Cu;
    SET_GPR_U32(ctx, 31, 0x178594u);
    ctx->pc = 0x178590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17858Cu;
            // 0x178590: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178594u; }
        if (ctx->pc != 0x178594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178594u; }
        if (ctx->pc != 0x178594u) { return; }
    }
    ctx->pc = 0x178594u;
    // 0x178594: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x178594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_178598:
    // 0x178598: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x178598u;
    {
        const bool branch_taken_0x178598 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x17859Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178598u;
            // 0x17859c: 0x8e82c4bc  lw          $v0, -0x3B44($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178598) {
            ctx->pc = 0x1785ACu;
            goto label_1785ac;
        }
    }
    ctx->pc = 0x1785A0u;
    // 0x1785a0: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x1785a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1785a4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1785a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1785a8: 0xa6220008  sh          $v0, 0x8($s1)
    ctx->pc = 0x1785a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
label_1785ac:
    // 0x1785ac: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1785acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1785b0:
    // 0x1785b0: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x1785b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x1785b4: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x1785b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1785b8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1785b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1785bc: 0xa662000c  sh          $v0, 0xC($s3)
    ctx->pc = 0x1785bcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 2));
label_1785c0:
    // 0x1785c0: 0xc05d76c  jal         func_175DB0
    ctx->pc = 0x1785C0u;
    SET_GPR_U32(ctx, 31, 0x1785C8u);
    ctx->pc = 0x1785C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1785C0u;
            // 0x1785c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175DB0u;
    if (runtime->hasFunction(0x175DB0u)) {
        auto targetFn = runtime->lookupFunction(0x175DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1785C8u; }
        if (ctx->pc != 0x1785C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175db0_0x175dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1785C8u; }
        if (ctx->pc != 0x1785C8u) { return; }
    }
    ctx->pc = 0x1785C8u;
    // 0x1785c8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1785c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1785cc:
    // 0x1785cc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1785ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1785d0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1785d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1785d4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1785d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1785d8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1785d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1785dc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1785dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1785e0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1785e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1785e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1785e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1785e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1785E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1785ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1785E8u;
            // 0x1785ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177C0Cu: goto label_177c0c;
            case 0x177C68u: goto label_177c68;
            case 0x177CC4u: goto label_177cc4;
            case 0x177D20u: goto label_177d20;
            case 0x177D7Cu: goto label_177d7c;
            case 0x177DE4u: goto label_177de4;
            case 0x177E2Cu: goto label_177e2c;
            case 0x177E80u: goto label_177e80;
            case 0x177ED0u: goto label_177ed0;
            case 0x177EE4u: goto label_177ee4;
            case 0x177EE8u: goto label_177ee8;
            case 0x177EFCu: goto label_177efc;
            case 0x177F44u: goto label_177f44;
            case 0x177F8Cu: goto label_177f8c;
            case 0x177FE0u: goto label_177fe0;
            case 0x178030u: goto label_178030;
            case 0x178044u: goto label_178044;
            case 0x178048u: goto label_178048;
            case 0x178058u: goto label_178058;
            case 0x178068u: goto label_178068;
            case 0x1780B8u: goto label_1780b8;
            case 0x178114u: goto label_178114;
            case 0x178124u: goto label_178124;
            case 0x178174u: goto label_178174;
            case 0x1781CCu: goto label_1781cc;
            case 0x1781E0u: goto label_1781e0;
            case 0x178240u: goto label_178240;
            case 0x178254u: goto label_178254;
            case 0x178258u: goto label_178258;
            case 0x1782A8u: goto label_1782a8;
            case 0x1782B8u: goto label_1782b8;
            case 0x1782C8u: goto label_1782c8;
            case 0x178364u: goto label_178364;
            case 0x178374u: goto label_178374;
            case 0x1783E0u: goto label_1783e0;
            case 0x178430u: goto label_178430;
            case 0x178480u: goto label_178480;
            case 0x178494u: goto label_178494;
            case 0x178498u: goto label_178498;
            case 0x1784ACu: goto label_1784ac;
            case 0x1784F4u: goto label_1784f4;
            case 0x178548u: goto label_178548;
            case 0x178598u: goto label_178598;
            case 0x1785ACu: goto label_1785ac;
            case 0x1785B0u: goto label_1785b0;
            case 0x1785C0u: goto label_1785c0;
            case 0x1785CCu: goto label_1785cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1785F0u;
}
