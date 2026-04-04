#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00182A10
// Address: 0x182a10 - 0x182bb0
void sub_00182A10_0x182a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182A10_0x182a10");
#endif

    ctx->pc = 0x182a10u;

label_182a10:
    // 0x182a10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x182a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x182a14: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x182a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x182a18: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x182a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x182a1c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x182a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x182a20: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x182a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x182a24: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x182a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x182a28: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x182a28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182a2c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x182a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x182a30: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x182a30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182a34: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x182a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x182a38: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x182a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x182a3c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x182a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x182a40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182a44: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x182a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x182a48: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x182a48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x182a4c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x182A4Cu;
    {
        const bool branch_taken_0x182a4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x182A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182A4Cu;
            // 0x182a50: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a4c) {
            ctx->pc = 0x182A74u;
            goto label_182a74;
        }
    }
    ctx->pc = 0x182A54u;
    // 0x182a54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x182a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182a58: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x182A58u;
    SET_GPR_U32(ctx, 31, 0x182A60u);
    ctx->pc = 0x182A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182A58u;
            // 0x182a5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A60u; }
        if (ctx->pc != 0x182A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A60u; }
        if (ctx->pc != 0x182A60u) { return; }
    }
    ctx->pc = 0x182A60u;
    // 0x182a60: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x182a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x182a64: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x182A64u;
    {
        const bool branch_taken_0x182a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x182A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182A64u;
            // 0x182a68: 0x3c14002a  lui         $s4, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a64) {
            ctx->pc = 0x182A78u;
            goto label_182a78;
        }
    }
    ctx->pc = 0x182A6Cu;
    // 0x182a6c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x182A6Cu;
    {
        const bool branch_taken_0x182a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182A6Cu;
            // 0x182a70: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a6c) {
            ctx->pc = 0x182B84u;
            goto label_182b84;
        }
    }
    ctx->pc = 0x182A74u;
label_182a74:
    // 0x182a74: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x182a74u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
label_182a78:
    // 0x182a78: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x182a78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x182a7c: 0x8e84c4bc  lw          $a0, -0x3B44($s4)
    ctx->pc = 0x182a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952124)));
    // 0x182a80: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x182a80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x182a84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x182a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x182a88: 0x8e03c4b4  lw          $v1, -0x3B4C($s0)
    ctx->pc = 0x182a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x182a8c: 0x82a821  addu        $s5, $a0, $v0
    ctx->pc = 0x182a8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x182a90: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x182A90u;
    {
        const bool branch_taken_0x182a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x182A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182A90u;
            // 0x182a94: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a90) {
            ctx->pc = 0x182AD4u;
            goto label_182ad4;
        }
    }
    ctx->pc = 0x182A98u;
    // 0x182a98: 0xc05d762  jal         func_175D88
    ctx->pc = 0x182A98u;
    SET_GPR_U32(ctx, 31, 0x182AA0u);
    ctx->pc = 0x182A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182A98u;
            // 0x182a9c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182AA0u; }
        if (ctx->pc != 0x182AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182AA0u; }
        if (ctx->pc != 0x182AA0u) { return; }
    }
    ctx->pc = 0x182AA0u;
    // 0x182aa0: 0xc08e440  jal         func_239100
    ctx->pc = 0x182AA0u;
    SET_GPR_U32(ctx, 31, 0x182AA8u);
    ctx->pc = 0x182AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182AA0u;
            // 0x182aa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182AA8u; }
        if (ctx->pc != 0x182AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182AA8u; }
        if (ctx->pc != 0x182AA8u) { return; }
    }
    ctx->pc = 0x182AA8u;
    // 0x182aa8: 0x8e83c4bc  lw          $v1, -0x3B44($s4)
    ctx->pc = 0x182aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952124)));
    // 0x182aac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x182aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ab0: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x182ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x182ab4: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x182ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182ab8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x182ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x182abc: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x182abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x182ac0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x182ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x182ac4: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x182ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x182ac8: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x182ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x182acc: 0xc08e45a  jal         func_239168
    ctx->pc = 0x182ACCu;
    SET_GPR_U32(ctx, 31, 0x182AD4u);
    ctx->pc = 0x182AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182ACCu;
            // 0x182ad0: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182AD4u; }
        if (ctx->pc != 0x182AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182AD4u; }
        if (ctx->pc != 0x182AD4u) { return; }
    }
    ctx->pc = 0x182AD4u;
label_182ad4:
    // 0x182ad4: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x182ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x182ad8: 0x12a20008  beq         $s5, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x182AD8u;
    {
        const bool branch_taken_0x182ad8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x182ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182AD8u;
            // 0x182adc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ad8) {
            ctx->pc = 0x182AFCu;
            goto label_182afc;
        }
    }
    ctx->pc = 0x182AE0u;
    // 0x182ae0: 0x9626000a  lhu         $a2, 0xA($s1)
    ctx->pc = 0x182ae0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x182ae4: 0x8e82c4bc  lw          $v0, -0x3B44($s4)
    ctx->pc = 0x182ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952124)));
    // 0x182ae8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x182ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182aec: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x182aecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x182af0: 0xc060a84  jal         func_182A10
    ctx->pc = 0x182AF0u;
    SET_GPR_U32(ctx, 31, 0x182AF8u);
    ctx->pc = 0x182AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182AF0u;
            // 0x182af4: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182A10u;
    runtime->cooperativeGuestYield();
    goto label_182a10;
    ctx->pc = 0x182AF8u;
label_182af8:
    // 0x182af8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x182af8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_182afc:
    // 0x182afc: 0x16400021  bnez        $s2, . + 4 + (0x21 << 2)
    ctx->pc = 0x182AFCu;
    {
        const bool branch_taken_0x182afc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x182B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182AFCu;
            // 0x182b00: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182afc) {
            ctx->pc = 0x182B84u;
            goto label_182b84;
        }
    }
    ctx->pc = 0x182B04u;
    // 0x182b04: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x182b04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x182b08: 0x8e84c4bc  lw          $a0, -0x3B44($s4)
    ctx->pc = 0x182b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952124)));
    // 0x182b0c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x182b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x182b10: 0x8e03c4b4  lw          $v1, -0x3B4C($s0)
    ctx->pc = 0x182b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x182b14: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x182B14u;
    {
        const bool branch_taken_0x182b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x182B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182B14u;
            // 0x182b18: 0x82a821  addu        $s5, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b14) {
            ctx->pc = 0x182B58u;
            goto label_182b58;
        }
    }
    ctx->pc = 0x182B1Cu;
    // 0x182b1c: 0xc05d762  jal         func_175D88
    ctx->pc = 0x182B1Cu;
    SET_GPR_U32(ctx, 31, 0x182B24u);
    ctx->pc = 0x182B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182B1Cu;
            // 0x182b20: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182B24u; }
        if (ctx->pc != 0x182B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182B24u; }
        if (ctx->pc != 0x182B24u) { return; }
    }
    ctx->pc = 0x182B24u;
    // 0x182b24: 0xc08e440  jal         func_239100
    ctx->pc = 0x182B24u;
    SET_GPR_U32(ctx, 31, 0x182B2Cu);
    ctx->pc = 0x182B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182B24u;
            // 0x182b28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182B2Cu; }
        if (ctx->pc != 0x182B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182B2Cu; }
        if (ctx->pc != 0x182B2Cu) { return; }
    }
    ctx->pc = 0x182B2Cu;
    // 0x182b2c: 0x8e83c4bc  lw          $v1, -0x3B44($s4)
    ctx->pc = 0x182b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952124)));
    // 0x182b30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x182b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182b34: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x182b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x182b38: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x182b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182b3c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x182b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x182b40: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x182b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x182b44: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x182b44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x182b48: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x182b48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x182b4c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x182b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x182b50: 0xc08e45a  jal         func_239168
    ctx->pc = 0x182B50u;
    SET_GPR_U32(ctx, 31, 0x182B58u);
    ctx->pc = 0x182B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182B50u;
            // 0x182b54: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182B58u; }
        if (ctx->pc != 0x182B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182B58u; }
        if (ctx->pc != 0x182B58u) { return; }
    }
    ctx->pc = 0x182B58u;
label_182b58:
    // 0x182b58: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x182b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x182b5c: 0x12a20008  beq         $s5, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x182B5Cu;
    {
        const bool branch_taken_0x182b5c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x182B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182B5Cu;
            // 0x182b60: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b5c) {
            ctx->pc = 0x182B80u;
            goto label_182b80;
        }
    }
    ctx->pc = 0x182B64u;
    // 0x182b64: 0x9626000c  lhu         $a2, 0xC($s1)
    ctx->pc = 0x182b64u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x182b68: 0x8e82c4bc  lw          $v0, -0x3B44($s4)
    ctx->pc = 0x182b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952124)));
    // 0x182b6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x182b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182b70: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x182b70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x182b74: 0xc060a84  jal         func_182A10
    ctx->pc = 0x182B74u;
    SET_GPR_U32(ctx, 31, 0x182B7Cu);
    ctx->pc = 0x182B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182B74u;
            // 0x182b78: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182A10u;
    runtime->cooperativeGuestYield();
    goto label_182a10;
    ctx->pc = 0x182B7Cu;
label_182b7c:
    // 0x182b7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x182b7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_182b80:
    // 0x182b80: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x182b80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_182b84:
    // 0x182b84: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x182b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x182b88: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x182b88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x182b8c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x182b8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x182b90: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x182b90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182b94: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x182b94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182b98: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x182b98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182b9c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x182b9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x182BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182BA4u;
            // 0x182ba8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182A10u: goto label_182a10;
            case 0x182A74u: goto label_182a74;
            case 0x182A78u: goto label_182a78;
            case 0x182AD4u: goto label_182ad4;
            case 0x182AF8u: goto label_182af8;
            case 0x182AFCu: goto label_182afc;
            case 0x182B58u: goto label_182b58;
            case 0x182B7Cu: goto label_182b7c;
            case 0x182B80u: goto label_182b80;
            case 0x182B84u: goto label_182b84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182BACu;
    // 0x182bac: 0x0  nop
    ctx->pc = 0x182bacu;
    // NOP
}
