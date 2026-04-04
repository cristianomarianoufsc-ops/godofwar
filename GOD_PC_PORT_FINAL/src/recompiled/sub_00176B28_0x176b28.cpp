#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00176B28
// Address: 0x176b28 - 0x176c58
void sub_00176B28_0x176b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176B28_0x176b28");
#endif

    ctx->pc = 0x176b28u;

label_176b28:
    // 0x176b28: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x176b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x176b2c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x176b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x176b30: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x176b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x176b34: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x176b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x176b38: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x176b38u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x176b3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x176b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x176b40: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x176b40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b44: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x176b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x176b48: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x176b48u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x176b4c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x176b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x176b50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x176b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x176b54: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x176b54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b58: 0x8e65c4bc  lw          $a1, -0x3B44($s3)
    ctx->pc = 0x176b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952124)));
    // 0x176b5c: 0x9643000a  lhu         $v1, 0xA($s2)
    ctx->pc = 0x176b5cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x176b60: 0x9642000c  lhu         $v0, 0xC($s2)
    ctx->pc = 0x176b60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x176b64: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x176b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x176b68: 0x8e24c4b4  lw          $a0, -0x3B4C($s1)
    ctx->pc = 0x176b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952116)));
    // 0x176b6c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176b70: 0xa38021  addu        $s0, $a1, $v1
    ctx->pc = 0x176b70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x176b74: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x176B74u;
    {
        const bool branch_taken_0x176b74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x176B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176B74u;
            // 0x176b78: 0xa2a021  addu        $s4, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176b74) {
            ctx->pc = 0x176BB8u;
            goto label_176bb8;
        }
    }
    ctx->pc = 0x176B7Cu;
    // 0x176b7c: 0xc05d762  jal         func_175D88
    ctx->pc = 0x176B7Cu;
    SET_GPR_U32(ctx, 31, 0x176B84u);
    ctx->pc = 0x176B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176B7Cu;
            // 0x176b80: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B84u; }
        if (ctx->pc != 0x176B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B84u; }
        if (ctx->pc != 0x176B84u) { return; }
    }
    ctx->pc = 0x176B84u;
    // 0x176b84: 0xc08e440  jal         func_239100
    ctx->pc = 0x176B84u;
    SET_GPR_U32(ctx, 31, 0x176B8Cu);
    ctx->pc = 0x176B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176B84u;
            // 0x176b88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B8Cu; }
        if (ctx->pc != 0x176B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B8Cu; }
        if (ctx->pc != 0x176B8Cu) { return; }
    }
    ctx->pc = 0x176B8Cu;
    // 0x176b8c: 0x8e63c4bc  lw          $v1, -0x3B44($s3)
    ctx->pc = 0x176b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952124)));
    // 0x176b90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b94: 0xae22c4b4  sw          $v0, -0x3B4C($s1)
    ctx->pc = 0x176b94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952116), GPR_U32(ctx, 2));
    // 0x176b98: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x176b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176b9c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x176b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x176ba0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x176ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x176ba4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x176ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x176ba8: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x176ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x176bac: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x176bacu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x176bb0: 0xc08e45a  jal         func_239168
    ctx->pc = 0x176BB0u;
    SET_GPR_U32(ctx, 31, 0x176BB8u);
    ctx->pc = 0x176BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176BB0u;
            // 0x176bb4: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176BB8u; }
        if (ctx->pc != 0x176BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176BB8u; }
        if (ctx->pc != 0x176BB8u) { return; }
    }
    ctx->pc = 0x176BB8u;
label_176bb8:
    // 0x176bb8: 0x8e22c4b4  lw          $v0, -0x3B4C($s1)
    ctx->pc = 0x176bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952116)));
    // 0x176bbc: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x176BBCu;
    {
        const bool branch_taken_0x176bbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x176BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176BBCu;
            // 0x176bc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176bbc) {
            ctx->pc = 0x176BD0u;
            goto label_176bd0;
        }
    }
    ctx->pc = 0x176BC4u;
    // 0x176bc4: 0xc05daca  jal         func_176B28
    ctx->pc = 0x176BC4u;
    SET_GPR_U32(ctx, 31, 0x176BCCu);
    ctx->pc = 0x176BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176BC4u;
            // 0x176bc8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176B28u;
    runtime->cooperativeGuestYield();
    goto label_176b28;
    ctx->pc = 0x176BCCu;
label_176bcc:
    // 0x176bcc: 0x8e22c4b4  lw          $v0, -0x3B4C($s1)
    ctx->pc = 0x176bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952116)));
label_176bd0:
    // 0x176bd0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x176BD0u;
    {
        const bool branch_taken_0x176bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176bd0) {
            ctx->pc = 0x176C18u;
            goto label_176c18;
        }
    }
    ctx->pc = 0x176BD8u;
    // 0x176bd8: 0xc05d762  jal         func_175D88
    ctx->pc = 0x176BD8u;
    SET_GPR_U32(ctx, 31, 0x176BE0u);
    ctx->pc = 0x176BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176BD8u;
            // 0x176bdc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176BE0u; }
        if (ctx->pc != 0x176BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176BE0u; }
        if (ctx->pc != 0x176BE0u) { return; }
    }
    ctx->pc = 0x176BE0u;
    // 0x176be0: 0xc08e440  jal         func_239100
    ctx->pc = 0x176BE0u;
    SET_GPR_U32(ctx, 31, 0x176BE8u);
    ctx->pc = 0x176BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176BE0u;
            // 0x176be4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176BE8u; }
        if (ctx->pc != 0x176BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176BE8u; }
        if (ctx->pc != 0x176BE8u) { return; }
    }
    ctx->pc = 0x176BE8u;
    // 0x176be8: 0x8e63c4bc  lw          $v1, -0x3B44($s3)
    ctx->pc = 0x176be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952124)));
    // 0x176bec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176bf0: 0xae22c4b4  sw          $v0, -0x3B4C($s1)
    ctx->pc = 0x176bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952116), GPR_U32(ctx, 2));
    // 0x176bf4: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x176bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176bf8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x176bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x176bfc: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x176bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x176c00: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x176c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x176c04: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x176c04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x176c08: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x176c08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x176c0c: 0xc08e45a  jal         func_239168
    ctx->pc = 0x176C0Cu;
    SET_GPR_U32(ctx, 31, 0x176C14u);
    ctx->pc = 0x176C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176C0Cu;
            // 0x176c10: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C14u; }
        if (ctx->pc != 0x176C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C14u; }
        if (ctx->pc != 0x176C14u) { return; }
    }
    ctx->pc = 0x176C14u;
    // 0x176c14: 0x8e22c4b4  lw          $v0, -0x3B4C($s1)
    ctx->pc = 0x176c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952116)));
label_176c18:
    // 0x176c18: 0x12820003  beq         $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176C18u;
    {
        const bool branch_taken_0x176c18 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x176C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176C18u;
            // 0x176c1c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176c18) {
            ctx->pc = 0x176C28u;
            goto label_176c28;
        }
    }
    ctx->pc = 0x176C20u;
    // 0x176c20: 0xc05daca  jal         func_176B28
    ctx->pc = 0x176C20u;
    SET_GPR_U32(ctx, 31, 0x176C28u);
    ctx->pc = 0x176C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176C20u;
            // 0x176c24: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176B28u;
    runtime->cooperativeGuestYield();
    goto label_176b28;
    ctx->pc = 0x176C28u;
label_176c28:
    // 0x176c28: 0xc05d76c  jal         func_175DB0
    ctx->pc = 0x176C28u;
    SET_GPR_U32(ctx, 31, 0x176C30u);
    ctx->pc = 0x176C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176C28u;
            // 0x176c2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175DB0u;
    if (runtime->hasFunction(0x175DB0u)) {
        auto targetFn = runtime->lookupFunction(0x175DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C30u; }
        if (ctx->pc != 0x176C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175db0_0x175dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C30u; }
        if (ctx->pc != 0x176C30u) { return; }
    }
    ctx->pc = 0x176C30u;
    // 0x176c30: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x176c30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x176c34: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x176c34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x176c38: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x176c38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x176c3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x176c3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176c40: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x176c40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176c44: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x176c44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176c48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x176c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x176C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176C4Cu;
            // 0x176c50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176B28u: goto label_176b28;
            case 0x176BB8u: goto label_176bb8;
            case 0x176BCCu: goto label_176bcc;
            case 0x176BD0u: goto label_176bd0;
            case 0x176C18u: goto label_176c18;
            case 0x176C28u: goto label_176c28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x176C54u;
    // 0x176c54: 0x0  nop
    ctx->pc = 0x176c54u;
    // NOP
}
