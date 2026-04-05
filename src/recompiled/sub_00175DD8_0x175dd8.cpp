#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175DD8
// Address: 0x175dd8 - 0x1763e8
void sub_00175DD8_0x175dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175DD8_0x175dd8");
#endif

    ctx->pc = 0x175dd8u;

    // 0x175dd8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x175dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x175ddc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x175ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x175de0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x175de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x175de4: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x175de4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x175de8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x175de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x175dec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x175decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x175df0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x175df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x175df4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x175df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x175df8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x175df8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175dfc: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x175dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x175e00: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x175e00u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x175e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175e08: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x175e08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175e0c: 0x8ea5c4bc  lw          $a1, -0x3B44($s5)
    ctx->pc = 0x175e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952124)));
    // 0x175e10: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x175e10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x175e14: 0x96830008  lhu         $v1, 0x8($s4)
    ctx->pc = 0x175e14u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x175e18: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x175e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175e1c: 0x8e04c4b4  lw          $a0, -0x3B4C($s0)
    ctx->pc = 0x175e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x175e20: 0xa29821  addu        $s3, $a1, $v0
    ctx->pc = 0x175e20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x175e24: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x175e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x175e28: 0x9662000a  lhu         $v0, 0xA($s3)
    ctx->pc = 0x175e28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x175e2c: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x175e2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x175e30: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x175e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175e34: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x175E34u;
    {
        const bool branch_taken_0x175e34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x175E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175E34u;
            // 0x175e38: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175e34) {
            ctx->pc = 0x175E78u;
            goto label_175e78;
        }
    }
    ctx->pc = 0x175E3Cu;
    // 0x175e3c: 0xc05d762  jal         func_175D88
    ctx->pc = 0x175E3Cu;
    SET_GPR_U32(ctx, 31, 0x175E44u);
    ctx->pc = 0x175E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175E3Cu;
            // 0x175e40: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E44u; }
        if (ctx->pc != 0x175E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E44u; }
        if (ctx->pc != 0x175E44u) { return; }
    }
    ctx->pc = 0x175E44u;
    // 0x175e44: 0xc08e440  jal         func_239100
    ctx->pc = 0x175E44u;
    SET_GPR_U32(ctx, 31, 0x175E4Cu);
    ctx->pc = 0x175E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175E44u;
            // 0x175e48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E4Cu; }
        if (ctx->pc != 0x175E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E4Cu; }
        if (ctx->pc != 0x175E4Cu) { return; }
    }
    ctx->pc = 0x175E4Cu;
    // 0x175e4c: 0x8ea3c4bc  lw          $v1, -0x3B44($s5)
    ctx->pc = 0x175e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952124)));
    // 0x175e50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x175e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175e54: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x175e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x175e58: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x175e58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175e5c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x175e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x175e60: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x175e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x175e64: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x175e64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x175e68: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x175e68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x175e6c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x175e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x175e70: 0xc08e45a  jal         func_239168
    ctx->pc = 0x175E70u;
    SET_GPR_U32(ctx, 31, 0x175E78u);
    ctx->pc = 0x175E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175E70u;
            // 0x175e74: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E78u; }
        if (ctx->pc != 0x175E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E78u; }
        if (ctx->pc != 0x175E78u) { return; }
    }
    ctx->pc = 0x175E78u;
label_175e78:
    // 0x175e78: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x175e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x175e7c: 0x52820033  beql        $s4, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x175E7Cu;
    {
        const bool branch_taken_0x175e7c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x175e7c) {
            ctx->pc = 0x175E80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175E7Cu;
            // 0x175e80: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x175F4Cu;
            goto label_175f4c;
        }
    }
    ctx->pc = 0x175E84u;
    // 0x175e84: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x175E84u;
    {
        const bool branch_taken_0x175e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175e84) {
            ctx->pc = 0x175ED0u;
            goto label_175ed0;
        }
    }
    ctx->pc = 0x175E8Cu;
    // 0x175e8c: 0xc05d762  jal         func_175D88
    ctx->pc = 0x175E8Cu;
    SET_GPR_U32(ctx, 31, 0x175E94u);
    ctx->pc = 0x175E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175E8Cu;
            // 0x175e90: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E94u; }
        if (ctx->pc != 0x175E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E94u; }
        if (ctx->pc != 0x175E94u) { return; }
    }
    ctx->pc = 0x175E94u;
    // 0x175e94: 0xc08e440  jal         func_239100
    ctx->pc = 0x175E94u;
    SET_GPR_U32(ctx, 31, 0x175E9Cu);
    ctx->pc = 0x175E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175E94u;
            // 0x175e98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E9Cu; }
        if (ctx->pc != 0x175E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E9Cu; }
        if (ctx->pc != 0x175E9Cu) { return; }
    }
    ctx->pc = 0x175E9Cu;
    // 0x175e9c: 0x8ea3c4bc  lw          $v1, -0x3B44($s5)
    ctx->pc = 0x175e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952124)));
    // 0x175ea0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x175ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ea4: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x175ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x175ea8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x175ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175eac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x175eacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x175eb0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x175eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x175eb4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x175eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x175eb8: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x175eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x175ebc: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x175ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x175ec0: 0xc08e45a  jal         func_239168
    ctx->pc = 0x175EC0u;
    SET_GPR_U32(ctx, 31, 0x175EC8u);
    ctx->pc = 0x175EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175EC0u;
            // 0x175ec4: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175EC8u; }
        if (ctx->pc != 0x175EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175EC8u; }
        if (ctx->pc != 0x175EC8u) { return; }
    }
    ctx->pc = 0x175EC8u;
    // 0x175ec8: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x175ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x175ecc: 0x0  nop
    ctx->pc = 0x175eccu;
    // NOP
label_175ed0:
    // 0x175ed0: 0x52220019  beql        $s1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x175ED0u;
    {
        const bool branch_taken_0x175ed0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x175ed0) {
            ctx->pc = 0x175ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175ED0u;
            // 0x175ed4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x175F38u;
            goto label_175f38;
        }
    }
    ctx->pc = 0x175ED8u;
    // 0x175ed8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x175ED8u;
    {
        const bool branch_taken_0x175ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175ED8u;
            // 0x175edc: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ed8) {
            ctx->pc = 0x175F20u;
            goto label_175f20;
        }
    }
    ctx->pc = 0x175EE0u;
    // 0x175ee0: 0xc05d762  jal         func_175D88
    ctx->pc = 0x175EE0u;
    SET_GPR_U32(ctx, 31, 0x175EE8u);
    ctx->pc = 0x175EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175EE0u;
            // 0x175ee4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175EE8u; }
        if (ctx->pc != 0x175EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175EE8u; }
        if (ctx->pc != 0x175EE8u) { return; }
    }
    ctx->pc = 0x175EE8u;
    // 0x175ee8: 0xc08e440  jal         func_239100
    ctx->pc = 0x175EE8u;
    SET_GPR_U32(ctx, 31, 0x175EF0u);
    ctx->pc = 0x175EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175EE8u;
            // 0x175eec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175EF0u; }
        if (ctx->pc != 0x175EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175EF0u; }
        if (ctx->pc != 0x175EF0u) { return; }
    }
    ctx->pc = 0x175EF0u;
    // 0x175ef0: 0x8ea3c4bc  lw          $v1, -0x3B44($s5)
    ctx->pc = 0x175ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952124)));
    // 0x175ef4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x175ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ef8: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x175ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x175efc: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x175efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175f00: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x175f00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x175f04: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x175f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x175f08: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x175f08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x175f0c: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x175f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x175f10: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x175f10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x175f14: 0xc08e45a  jal         func_239168
    ctx->pc = 0x175F14u;
    SET_GPR_U32(ctx, 31, 0x175F1Cu);
    ctx->pc = 0x175F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175F14u;
            // 0x175f18: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F1Cu; }
        if (ctx->pc != 0x175F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F1Cu; }
        if (ctx->pc != 0x175F1Cu) { return; }
    }
    ctx->pc = 0x175F1Cu;
    // 0x175f1c: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x175f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_175f20:
    // 0x175f20: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x175F20u;
    {
        const bool branch_taken_0x175f20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x175F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175F20u;
            // 0x175f24: 0x8ea2c4bc  lw          $v0, -0x3B44($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f20) {
            ctx->pc = 0x175F34u;
            goto label_175f34;
        }
    }
    ctx->pc = 0x175F28u;
    // 0x175f28: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x175f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x175f2c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x175f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x175f30: 0xa6220008  sh          $v0, 0x8($s1)
    ctx->pc = 0x175f30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
label_175f34:
    // 0x175f34: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x175f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_175f38:
    // 0x175f38: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x175f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x175f3c: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x175f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x175f40: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x175f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x175f44: 0xa682000c  sh          $v0, 0xC($s4)
    ctx->pc = 0x175f44u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x175f48: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x175f48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
label_175f4c:
    // 0x175f4c: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x175f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x175f50: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x175F50u;
    {
        const bool branch_taken_0x175f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175F50u;
            // 0x175f54: 0x8e04c4b4  lw          $a0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f50) {
            ctx->pc = 0x175F9Cu;
            goto label_175f9c;
        }
    }
    ctx->pc = 0x175F58u;
    // 0x175f58: 0xc05d762  jal         func_175D88
    ctx->pc = 0x175F58u;
    SET_GPR_U32(ctx, 31, 0x175F60u);
    ctx->pc = 0x175F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175F58u;
            // 0x175f5c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F60u; }
        if (ctx->pc != 0x175F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F60u; }
        if (ctx->pc != 0x175F60u) { return; }
    }
    ctx->pc = 0x175F60u;
    // 0x175f60: 0xc08e440  jal         func_239100
    ctx->pc = 0x175F60u;
    SET_GPR_U32(ctx, 31, 0x175F68u);
    ctx->pc = 0x175F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175F60u;
            // 0x175f64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F68u; }
        if (ctx->pc != 0x175F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F68u; }
        if (ctx->pc != 0x175F68u) { return; }
    }
    ctx->pc = 0x175F68u;
    // 0x175f68: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x175f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x175f6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x175f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175f70: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x175f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x175f74: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x175f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x175f78: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x175f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175f7c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x175f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x175f80: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x175f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x175f84: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x175f84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x175f88: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x175f88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x175f8c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x175f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x175f90: 0xc08e45a  jal         func_239168
    ctx->pc = 0x175F90u;
    SET_GPR_U32(ctx, 31, 0x175F98u);
    ctx->pc = 0x175F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175F90u;
            // 0x175f94: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F98u; }
        if (ctx->pc != 0x175F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F98u; }
        if (ctx->pc != 0x175F98u) { return; }
    }
    ctx->pc = 0x175F98u;
    // 0x175f98: 0x8e04c4b4  lw          $a0, -0x3B4C($s0)
    ctx->pc = 0x175f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_175f9c:
    // 0x175f9c: 0x1644002e  bne         $s2, $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x175F9Cu;
    {
        const bool branch_taken_0x175f9c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        ctx->pc = 0x175FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175F9Cu;
            // 0x175fa0: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f9c) {
            ctx->pc = 0x176058u;
            goto label_176058;
        }
    }
    ctx->pc = 0x175FA4u;
    // 0x175fa4: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x175FA4u;
    {
        const bool branch_taken_0x175fa4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x175FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175FA4u;
            // 0x175fa8: 0xaed30000  sw          $s3, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175fa4) {
            ctx->pc = 0x175FECu;
            goto label_175fec;
        }
    }
    ctx->pc = 0x175FACu;
    // 0x175fac: 0xc05d762  jal         func_175D88
    ctx->pc = 0x175FACu;
    SET_GPR_U32(ctx, 31, 0x175FB4u);
    ctx->pc = 0x175FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175FACu;
            // 0x175fb0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FB4u; }
        if (ctx->pc != 0x175FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FB4u; }
        if (ctx->pc != 0x175FB4u) { return; }
    }
    ctx->pc = 0x175FB4u;
    // 0x175fb4: 0xc08e440  jal         func_239100
    ctx->pc = 0x175FB4u;
    SET_GPR_U32(ctx, 31, 0x175FBCu);
    ctx->pc = 0x175FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175FB4u;
            // 0x175fb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FBCu; }
        if (ctx->pc != 0x175FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FBCu; }
        if (ctx->pc != 0x175FBCu) { return; }
    }
    ctx->pc = 0x175FBCu;
    // 0x175fbc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x175fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x175fc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x175fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175fc4: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x175fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x175fc8: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x175fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x175fcc: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x175fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175fd0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x175fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x175fd4: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x175fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x175fd8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x175fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x175fdc: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x175fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x175fe0: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x175fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x175fe4: 0xc08e45a  jal         func_239168
    ctx->pc = 0x175FE4u;
    SET_GPR_U32(ctx, 31, 0x175FECu);
    ctx->pc = 0x175FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175FE4u;
            // 0x175fe8: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FECu; }
        if (ctx->pc != 0x175FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FECu; }
        if (ctx->pc != 0x175FECu) { return; }
    }
    ctx->pc = 0x175FECu;
label_175fec:
    // 0x175fec: 0x8e11c4b4  lw          $s1, -0x3B4C($s0)
    ctx->pc = 0x175fecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x175ff0: 0x16200011  bnez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x175FF0u;
    {
        const bool branch_taken_0x175ff0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x175FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175FF0u;
            // 0x175ff4: 0x8ed20000  lw          $s2, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ff0) {
            ctx->pc = 0x176038u;
            goto label_176038;
        }
    }
    ctx->pc = 0x175FF8u;
    // 0x175ff8: 0xc05d762  jal         func_175D88
    ctx->pc = 0x175FF8u;
    SET_GPR_U32(ctx, 31, 0x176000u);
    ctx->pc = 0x175FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175FF8u;
            // 0x175ffc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176000u; }
        if (ctx->pc != 0x176000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176000u; }
        if (ctx->pc != 0x176000u) { return; }
    }
    ctx->pc = 0x176000u;
    // 0x176000: 0xc08e440  jal         func_239100
    ctx->pc = 0x176000u;
    SET_GPR_U32(ctx, 31, 0x176008u);
    ctx->pc = 0x176004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176000u;
            // 0x176004: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176008u; }
        if (ctx->pc != 0x176008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176008u; }
        if (ctx->pc != 0x176008u) { return; }
    }
    ctx->pc = 0x176008u;
    // 0x176008: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x176008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x17600c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17600cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176010: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x176010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x176014: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x176014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x176018: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x176018u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17601c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17601cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x176020: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x176020u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x176024: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x176024u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x176028: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x176028u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x17602c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x17602cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x176030: 0xc08e45a  jal         func_239168
    ctx->pc = 0x176030u;
    SET_GPR_U32(ctx, 31, 0x176038u);
    ctx->pc = 0x176034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176030u;
            // 0x176034: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176038u; }
        if (ctx->pc != 0x176038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176038u; }
        if (ctx->pc != 0x176038u) { return; }
    }
    ctx->pc = 0x176038u;
label_176038:
    // 0x176038: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x176038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x17603c: 0x12420096  beq         $s2, $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x17603Cu;
    {
        const bool branch_taken_0x17603c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x176040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17603Cu;
            // 0x176040: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17603c) {
            ctx->pc = 0x176298u;
            goto label_176298;
        }
    }
    ctx->pc = 0x176044u;
    // 0x176044: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x176044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x176048: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x176048u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17604c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x17604cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x176050: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x176050u;
    {
        const bool branch_taken_0x176050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176050u;
            // 0x176054: 0xa6420008  sh          $v0, 0x8($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176050) {
            ctx->pc = 0x176298u;
            goto label_176298;
        }
    }
    ctx->pc = 0x176058u;
label_176058:
    // 0x176058: 0x9642000a  lhu         $v0, 0xA($s2)
    ctx->pc = 0x176058u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x17605c: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x17605cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x176060: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176064: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x176064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x176068: 0x14740046  bne         $v1, $s4, . + 4 + (0x46 << 2)
    ctx->pc = 0x176068u;
    {
        const bool branch_taken_0x176068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x176068) {
            ctx->pc = 0x176184u;
            goto label_176184;
        }
    }
    ctx->pc = 0x176070u;
    // 0x176070: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x176070u;
    {
        const bool branch_taken_0x176070 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x176074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176070u;
            // 0x176074: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176070) {
            ctx->pc = 0x1760B8u;
            goto label_1760b8;
        }
    }
    ctx->pc = 0x176078u;
    // 0x176078: 0xc05d762  jal         func_175D88
    ctx->pc = 0x176078u;
    SET_GPR_U32(ctx, 31, 0x176080u);
    ctx->pc = 0x17607Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176078u;
            // 0x17607c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176080u; }
        if (ctx->pc != 0x176080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176080u; }
        if (ctx->pc != 0x176080u) { return; }
    }
    ctx->pc = 0x176080u;
    // 0x176080: 0xc08e440  jal         func_239100
    ctx->pc = 0x176080u;
    SET_GPR_U32(ctx, 31, 0x176088u);
    ctx->pc = 0x176084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176080u;
            // 0x176084: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176088u; }
        if (ctx->pc != 0x176088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176088u; }
        if (ctx->pc != 0x176088u) { return; }
    }
    ctx->pc = 0x176088u;
    // 0x176088: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x176088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x17608c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17608cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176090: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x176090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x176094: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x176094u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176098: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x176098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17609c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x17609cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1760a0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1760a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1760a4: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1760a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1760a8: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x1760a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1760ac: 0xc08e45a  jal         func_239168
    ctx->pc = 0x1760ACu;
    SET_GPR_U32(ctx, 31, 0x1760B4u);
    ctx->pc = 0x1760B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1760ACu;
            // 0x1760b0: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1760B4u; }
        if (ctx->pc != 0x1760B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1760B4u; }
        if (ctx->pc != 0x1760B4u) { return; }
    }
    ctx->pc = 0x1760B4u;
    // 0x1760b4: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1760b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_1760b8:
    // 0x1760b8: 0x52420078  beql        $s2, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x1760B8u;
    {
        const bool branch_taken_0x1760b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1760b8) {
            ctx->pc = 0x1760BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1760B8u;
            // 0x1760bc: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17629Cu;
            goto label_17629c;
        }
    }
    ctx->pc = 0x1760C0u;
    // 0x1760c0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1760C0u;
    {
        const bool branch_taken_0x1760c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1760C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1760C0u;
            // 0x1760c4: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1760c0) {
            ctx->pc = 0x176108u;
            goto label_176108;
        }
    }
    ctx->pc = 0x1760C8u;
    // 0x1760c8: 0xc05d762  jal         func_175D88
    ctx->pc = 0x1760C8u;
    SET_GPR_U32(ctx, 31, 0x1760D0u);
    ctx->pc = 0x1760CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1760C8u;
            // 0x1760cc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1760D0u; }
        if (ctx->pc != 0x1760D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1760D0u; }
        if (ctx->pc != 0x1760D0u) { return; }
    }
    ctx->pc = 0x1760D0u;
    // 0x1760d0: 0xc08e440  jal         func_239100
    ctx->pc = 0x1760D0u;
    SET_GPR_U32(ctx, 31, 0x1760D8u);
    ctx->pc = 0x1760D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1760D0u;
            // 0x1760d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1760D8u; }
        if (ctx->pc != 0x1760D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1760D8u; }
        if (ctx->pc != 0x1760D8u) { return; }
    }
    ctx->pc = 0x1760D8u;
    // 0x1760d8: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x1760d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x1760dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1760dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1760e0: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1760e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x1760e4: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1760e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1760e8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1760e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1760ec: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1760ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1760f0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1760f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1760f4: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1760f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1760f8: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x1760f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1760fc: 0xc08e45a  jal         func_239168
    ctx->pc = 0x1760FCu;
    SET_GPR_U32(ctx, 31, 0x176104u);
    ctx->pc = 0x176100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1760FCu;
            // 0x176100: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176104u; }
        if (ctx->pc != 0x176104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176104u; }
        if (ctx->pc != 0x176104u) { return; }
    }
    ctx->pc = 0x176104u;
    // 0x176104: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x176104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_176108:
    // 0x176108: 0x52620019  beql        $s3, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x176108u;
    {
        const bool branch_taken_0x176108 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x176108) {
            ctx->pc = 0x17610Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176108u;
            // 0x17610c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176170u;
            goto label_176170;
        }
    }
    ctx->pc = 0x176110u;
    // 0x176110: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x176110u;
    {
        const bool branch_taken_0x176110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176110u;
            // 0x176114: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176110) {
            ctx->pc = 0x176158u;
            goto label_176158;
        }
    }
    ctx->pc = 0x176118u;
    // 0x176118: 0xc05d762  jal         func_175D88
    ctx->pc = 0x176118u;
    SET_GPR_U32(ctx, 31, 0x176120u);
    ctx->pc = 0x17611Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176118u;
            // 0x17611c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176120u; }
        if (ctx->pc != 0x176120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176120u; }
        if (ctx->pc != 0x176120u) { return; }
    }
    ctx->pc = 0x176120u;
    // 0x176120: 0xc08e440  jal         func_239100
    ctx->pc = 0x176120u;
    SET_GPR_U32(ctx, 31, 0x176128u);
    ctx->pc = 0x176124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176120u;
            // 0x176124: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176128u; }
        if (ctx->pc != 0x176128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176128u; }
        if (ctx->pc != 0x176128u) { return; }
    }
    ctx->pc = 0x176128u;
    // 0x176128: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x176128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x17612c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17612cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176130: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x176130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x176134: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x176134u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176138: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x176138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17613c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x17613cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x176140: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x176140u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x176144: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x176144u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x176148: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x176148u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x17614c: 0xc08e45a  jal         func_239168
    ctx->pc = 0x17614Cu;
    SET_GPR_U32(ctx, 31, 0x176154u);
    ctx->pc = 0x176150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17614Cu;
            // 0x176150: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176154u; }
        if (ctx->pc != 0x176154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176154u; }
        if (ctx->pc != 0x176154u) { return; }
    }
    ctx->pc = 0x176154u;
    // 0x176154: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x176154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_176158:
    // 0x176158: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x176158u;
    {
        const bool branch_taken_0x176158 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x17615Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176158u;
            // 0x17615c: 0x8e22c4bc  lw          $v0, -0x3B44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176158) {
            ctx->pc = 0x17616Cu;
            goto label_17616c;
        }
    }
    ctx->pc = 0x176160u;
    // 0x176160: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x176160u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x176164: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x176164u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x176168: 0xa6620008  sh          $v0, 0x8($s3)
    ctx->pc = 0x176168u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 2));
label_17616c:
    // 0x17616c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17616cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_176170:
    // 0x176170: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x176170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x176174: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x176174u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x176178: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x176178u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x17617c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x17617Cu;
    {
        const bool branch_taken_0x17617c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17617Cu;
            // 0x176180: 0xa642000a  sh          $v0, 0xA($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17617c) {
            ctx->pc = 0x176298u;
            goto label_176298;
        }
    }
    ctx->pc = 0x176184u;
label_176184:
    // 0x176184: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x176184u;
    {
        const bool branch_taken_0x176184 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x176188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176184u;
            // 0x176188: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176184) {
            ctx->pc = 0x1761CCu;
            goto label_1761cc;
        }
    }
    ctx->pc = 0x17618Cu;
    // 0x17618c: 0xc05d762  jal         func_175D88
    ctx->pc = 0x17618Cu;
    SET_GPR_U32(ctx, 31, 0x176194u);
    ctx->pc = 0x176190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17618Cu;
            // 0x176190: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176194u; }
        if (ctx->pc != 0x176194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176194u; }
        if (ctx->pc != 0x176194u) { return; }
    }
    ctx->pc = 0x176194u;
    // 0x176194: 0xc08e440  jal         func_239100
    ctx->pc = 0x176194u;
    SET_GPR_U32(ctx, 31, 0x17619Cu);
    ctx->pc = 0x176198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176194u;
            // 0x176198: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17619Cu; }
        if (ctx->pc != 0x17619Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17619Cu; }
        if (ctx->pc != 0x17619Cu) { return; }
    }
    ctx->pc = 0x17619Cu;
    // 0x17619c: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x17619cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x1761a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1761a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1761a4: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1761a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x1761a8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1761a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1761ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1761acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1761b0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1761b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1761b4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1761b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1761b8: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1761b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1761bc: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x1761bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1761c0: 0xc08e45a  jal         func_239168
    ctx->pc = 0x1761C0u;
    SET_GPR_U32(ctx, 31, 0x1761C8u);
    ctx->pc = 0x1761C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1761C0u;
            // 0x1761c4: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1761C8u; }
        if (ctx->pc != 0x1761C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1761C8u; }
        if (ctx->pc != 0x1761C8u) { return; }
    }
    ctx->pc = 0x1761C8u;
    // 0x1761c8: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1761c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_1761cc:
    // 0x1761cc: 0x52420033  beql        $s2, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1761CCu;
    {
        const bool branch_taken_0x1761cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1761cc) {
            ctx->pc = 0x1761D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1761CCu;
            // 0x1761d0: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17629Cu;
            goto label_17629c;
        }
    }
    ctx->pc = 0x1761D4u;
    // 0x1761d4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1761D4u;
    {
        const bool branch_taken_0x1761d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1761D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1761D4u;
            // 0x1761d8: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1761d4) {
            ctx->pc = 0x176220u;
            goto label_176220;
        }
    }
    ctx->pc = 0x1761DCu;
    // 0x1761dc: 0xc05d762  jal         func_175D88
    ctx->pc = 0x1761DCu;
    SET_GPR_U32(ctx, 31, 0x1761E4u);
    ctx->pc = 0x1761E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1761DCu;
            // 0x1761e0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1761E4u; }
        if (ctx->pc != 0x1761E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1761E4u; }
        if (ctx->pc != 0x1761E4u) { return; }
    }
    ctx->pc = 0x1761E4u;
    // 0x1761e4: 0xc08e440  jal         func_239100
    ctx->pc = 0x1761E4u;
    SET_GPR_U32(ctx, 31, 0x1761ECu);
    ctx->pc = 0x1761E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1761E4u;
            // 0x1761e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1761ECu; }
        if (ctx->pc != 0x1761ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1761ECu; }
        if (ctx->pc != 0x1761ECu) { return; }
    }
    ctx->pc = 0x1761ECu;
    // 0x1761ec: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x1761ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x1761f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1761f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1761f4: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1761f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x1761f8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1761f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1761fc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1761fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x176200: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x176200u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x176204: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x176204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x176208: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x176208u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x17620c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x17620cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x176210: 0xc08e45a  jal         func_239168
    ctx->pc = 0x176210u;
    SET_GPR_U32(ctx, 31, 0x176218u);
    ctx->pc = 0x176214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176210u;
            // 0x176214: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176218u; }
        if (ctx->pc != 0x176218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176218u; }
        if (ctx->pc != 0x176218u) { return; }
    }
    ctx->pc = 0x176218u;
    // 0x176218: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x176218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x17621c: 0x0  nop
    ctx->pc = 0x17621cu;
    // NOP
label_176220:
    // 0x176220: 0x52620019  beql        $s3, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x176220u;
    {
        const bool branch_taken_0x176220 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x176220) {
            ctx->pc = 0x176224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176220u;
            // 0x176224: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176288u;
            goto label_176288;
        }
    }
    ctx->pc = 0x176228u;
    // 0x176228: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x176228u;
    {
        const bool branch_taken_0x176228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17622Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176228u;
            // 0x17622c: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176228) {
            ctx->pc = 0x176270u;
            goto label_176270;
        }
    }
    ctx->pc = 0x176230u;
    // 0x176230: 0xc05d762  jal         func_175D88
    ctx->pc = 0x176230u;
    SET_GPR_U32(ctx, 31, 0x176238u);
    ctx->pc = 0x176234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176230u;
            // 0x176234: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176238u; }
        if (ctx->pc != 0x176238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176238u; }
        if (ctx->pc != 0x176238u) { return; }
    }
    ctx->pc = 0x176238u;
    // 0x176238: 0xc08e440  jal         func_239100
    ctx->pc = 0x176238u;
    SET_GPR_U32(ctx, 31, 0x176240u);
    ctx->pc = 0x17623Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176238u;
            // 0x17623c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176240u; }
        if (ctx->pc != 0x176240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176240u; }
        if (ctx->pc != 0x176240u) { return; }
    }
    ctx->pc = 0x176240u;
    // 0x176240: 0x8e23c4bc  lw          $v1, -0x3B44($s1)
    ctx->pc = 0x176240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
    // 0x176244: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176248: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x176248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x17624c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x17624cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176250: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x176250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x176254: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x176254u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x176258: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x176258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17625c: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x17625cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x176260: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x176260u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x176264: 0xc08e45a  jal         func_239168
    ctx->pc = 0x176264u;
    SET_GPR_U32(ctx, 31, 0x17626Cu);
    ctx->pc = 0x176268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176264u;
            // 0x176268: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17626Cu; }
        if (ctx->pc != 0x17626Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17626Cu; }
        if (ctx->pc != 0x17626Cu) { return; }
    }
    ctx->pc = 0x17626Cu;
    // 0x17626c: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x17626cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_176270:
    // 0x176270: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x176270u;
    {
        const bool branch_taken_0x176270 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x176274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176270u;
            // 0x176274: 0x8e22c4bc  lw          $v0, -0x3B44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176270) {
            ctx->pc = 0x176284u;
            goto label_176284;
        }
    }
    ctx->pc = 0x176278u;
    // 0x176278: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x176278u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17627c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x17627cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x176280: 0xa6620008  sh          $v0, 0x8($s3)
    ctx->pc = 0x176280u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 2));
label_176284:
    // 0x176284: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x176284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_176288:
    // 0x176288: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x176288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x17628c: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x17628cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x176290: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x176290u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x176294: 0xa642000c  sh          $v0, 0xC($s2)
    ctx->pc = 0x176294u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 2));
label_176298:
    // 0x176298: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x176298u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
label_17629c:
    // 0x17629c: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x17629cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
    // 0x1762a0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1762A0u;
    {
        const bool branch_taken_0x1762a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1762a0) {
            ctx->pc = 0x1762ECu;
            goto label_1762ec;
        }
    }
    ctx->pc = 0x1762A8u;
    // 0x1762a8: 0xc05d762  jal         func_175D88
    ctx->pc = 0x1762A8u;
    SET_GPR_U32(ctx, 31, 0x1762B0u);
    ctx->pc = 0x1762ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1762A8u;
            // 0x1762ac: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1762B0u; }
        if (ctx->pc != 0x1762B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1762B0u; }
        if (ctx->pc != 0x1762B0u) { return; }
    }
    ctx->pc = 0x1762B0u;
    // 0x1762b0: 0xc08e440  jal         func_239100
    ctx->pc = 0x1762B0u;
    SET_GPR_U32(ctx, 31, 0x1762B8u);
    ctx->pc = 0x1762B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1762B0u;
            // 0x1762b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1762B8u; }
        if (ctx->pc != 0x1762B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1762B8u; }
        if (ctx->pc != 0x1762B8u) { return; }
    }
    ctx->pc = 0x1762B8u;
    // 0x1762b8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1762b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1762bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1762bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1762c0: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x1762c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x1762c4: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1762c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x1762c8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1762c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1762cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1762ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1762d0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1762d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1762d4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1762d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1762d8: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1762d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1762dc: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x1762dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1762e0: 0xc08e45a  jal         func_239168
    ctx->pc = 0x1762E0u;
    SET_GPR_U32(ctx, 31, 0x1762E8u);
    ctx->pc = 0x1762E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1762E0u;
            // 0x1762e4: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1762E8u; }
        if (ctx->pc != 0x1762E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1762E8u; }
        if (ctx->pc != 0x1762E8u) { return; }
    }
    ctx->pc = 0x1762E8u;
    // 0x1762e8: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x1762e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_1762ec:
    // 0x1762ec: 0x52620035  beql        $s3, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1762ECu;
    {
        const bool branch_taken_0x1762ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1762ec) {
            ctx->pc = 0x1762F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1762ECu;
            // 0x1762f0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1763C4u;
            goto label_1763c4;
        }
    }
    ctx->pc = 0x1762F4u;
    // 0x1762f4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1762F4u;
    {
        const bool branch_taken_0x1762f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1762F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1762F4u;
            // 0x1762f8: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1762f4) {
            ctx->pc = 0x176340u;
            goto label_176340;
        }
    }
    ctx->pc = 0x1762FCu;
    // 0x1762fc: 0xc05d762  jal         func_175D88
    ctx->pc = 0x1762FCu;
    SET_GPR_U32(ctx, 31, 0x176304u);
    ctx->pc = 0x176300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1762FCu;
            // 0x176300: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176304u; }
        if (ctx->pc != 0x176304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176304u; }
        if (ctx->pc != 0x176304u) { return; }
    }
    ctx->pc = 0x176304u;
    // 0x176304: 0xc08e440  jal         func_239100
    ctx->pc = 0x176304u;
    SET_GPR_U32(ctx, 31, 0x17630Cu);
    ctx->pc = 0x176308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176304u;
            // 0x176308: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17630Cu; }
        if (ctx->pc != 0x17630Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17630Cu; }
        if (ctx->pc != 0x17630Cu) { return; }
    }
    ctx->pc = 0x17630Cu;
    // 0x17630c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x17630cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x176310: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176314: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x176314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x176318: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x176318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x17631c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x17631cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176320: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x176320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x176324: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x176324u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x176328: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x176328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17632c: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x17632cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x176330: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x176330u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x176334: 0xc08e45a  jal         func_239168
    ctx->pc = 0x176334u;
    SET_GPR_U32(ctx, 31, 0x17633Cu);
    ctx->pc = 0x176338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176334u;
            // 0x176338: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17633Cu; }
        if (ctx->pc != 0x17633Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17633Cu; }
        if (ctx->pc != 0x17633Cu) { return; }
    }
    ctx->pc = 0x17633Cu;
    // 0x17633c: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x17633cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_176340:
    // 0x176340: 0x5282001b  beql        $s4, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x176340u;
    {
        const bool branch_taken_0x176340 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x176340) {
            ctx->pc = 0x176344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176340u;
            // 0x176344: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1763B0u;
            goto label_1763b0;
        }
    }
    ctx->pc = 0x176348u;
    // 0x176348: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x176348u;
    {
        const bool branch_taken_0x176348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17634Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176348u;
            // 0x17634c: 0x8e02c4b4  lw          $v0, -0x3B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176348) {
            ctx->pc = 0x176394u;
            goto label_176394;
        }
    }
    ctx->pc = 0x176350u;
    // 0x176350: 0xc05d762  jal         func_175D88
    ctx->pc = 0x176350u;
    SET_GPR_U32(ctx, 31, 0x176358u);
    ctx->pc = 0x176354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176350u;
            // 0x176354: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176358u; }
        if (ctx->pc != 0x176358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176358u; }
        if (ctx->pc != 0x176358u) { return; }
    }
    ctx->pc = 0x176358u;
    // 0x176358: 0xc08e440  jal         func_239100
    ctx->pc = 0x176358u;
    SET_GPR_U32(ctx, 31, 0x176360u);
    ctx->pc = 0x17635Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176358u;
            // 0x17635c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176360u; }
        if (ctx->pc != 0x176360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176360u; }
        if (ctx->pc != 0x176360u) { return; }
    }
    ctx->pc = 0x176360u;
    // 0x176360: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x176360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x176364: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176368: 0x8c63c4bc  lw          $v1, -0x3B44($v1)
    ctx->pc = 0x176368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952124)));
    // 0x17636c: 0xae02c4b4  sw          $v0, -0x3B4C($s0)
    ctx->pc = 0x17636cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952116), GPR_U32(ctx, 2));
    // 0x176370: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x176370u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176374: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x176374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x176378: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x176378u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17637c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17637cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x176380: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x176380u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x176384: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x176384u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x176388: 0xc08e45a  jal         func_239168
    ctx->pc = 0x176388u;
    SET_GPR_U32(ctx, 31, 0x176390u);
    ctx->pc = 0x17638Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176388u;
            // 0x17638c: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176390u; }
        if (ctx->pc != 0x176390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176390u; }
        if (ctx->pc != 0x176390u) { return; }
    }
    ctx->pc = 0x176390u;
    // 0x176390: 0x8e02c4b4  lw          $v0, -0x3B4C($s0)
    ctx->pc = 0x176390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952116)));
label_176394:
    // 0x176394: 0x12820005  beq         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x176394u;
    {
        const bool branch_taken_0x176394 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x176398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176394u;
            // 0x176398: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176394) {
            ctx->pc = 0x1763ACu;
            goto label_1763ac;
        }
    }
    ctx->pc = 0x17639Cu;
    // 0x17639c: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x17639cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x1763a0: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x1763a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1763a4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1763a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1763a8: 0xa6820008  sh          $v0, 0x8($s4)
    ctx->pc = 0x1763a8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 2));
label_1763ac:
    // 0x1763ac: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1763acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1763b0:
    // 0x1763b0: 0x8c42c4bc  lw          $v0, -0x3B44($v0)
    ctx->pc = 0x1763b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952124)));
    // 0x1763b4: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x1763b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1763b8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1763b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1763bc: 0xa662000a  sh          $v0, 0xA($s3)
    ctx->pc = 0x1763bcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x1763c0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1763c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1763c4:
    // 0x1763c4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1763c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1763c8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1763c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1763cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1763ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1763d0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1763d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1763d4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1763d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1763d8: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1763d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1763dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1763dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1763e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1763E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1763E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1763E0u;
            // 0x1763e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175E78u: goto label_175e78;
            case 0x175ED0u: goto label_175ed0;
            case 0x175F20u: goto label_175f20;
            case 0x175F34u: goto label_175f34;
            case 0x175F38u: goto label_175f38;
            case 0x175F4Cu: goto label_175f4c;
            case 0x175F9Cu: goto label_175f9c;
            case 0x175FECu: goto label_175fec;
            case 0x176038u: goto label_176038;
            case 0x176058u: goto label_176058;
            case 0x1760B8u: goto label_1760b8;
            case 0x176108u: goto label_176108;
            case 0x176158u: goto label_176158;
            case 0x17616Cu: goto label_17616c;
            case 0x176170u: goto label_176170;
            case 0x176184u: goto label_176184;
            case 0x1761CCu: goto label_1761cc;
            case 0x176220u: goto label_176220;
            case 0x176270u: goto label_176270;
            case 0x176284u: goto label_176284;
            case 0x176288u: goto label_176288;
            case 0x176298u: goto label_176298;
            case 0x17629Cu: goto label_17629c;
            case 0x1762ECu: goto label_1762ec;
            case 0x176340u: goto label_176340;
            case 0x176394u: goto label_176394;
            case 0x1763ACu: goto label_1763ac;
            case 0x1763B0u: goto label_1763b0;
            case 0x1763C4u: goto label_1763c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1763E8u;
}
