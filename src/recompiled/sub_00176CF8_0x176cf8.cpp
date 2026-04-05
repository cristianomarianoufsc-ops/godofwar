#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00176CF8
// Address: 0x176cf8 - 0x176fc8
void sub_00176CF8_0x176cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176CF8_0x176cf8");
#endif

    ctx->pc = 0x176cf8u;

    // 0x176cf8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x176cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x176cfc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x176cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x176d00: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x176d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x176d04: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x176d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x176d08: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x176d08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d0c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x176d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x176d10: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x176d10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d14: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x176d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x176d18: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x176d18u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x176d1c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x176d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x176d20: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x176d20u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x176d24: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x176d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x176d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x176d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x176d2c: 0x8e85c4bc  lw          $a1, -0x3B44($s4)
    ctx->pc = 0x176d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952124)));
    // 0x176d30: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x176d30u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x176d34: 0x8ea3c4b4  lw          $v1, -0x3B4C($s5)
    ctx->pc = 0x176d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952116)));
    // 0x176d38: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176d3c: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x176D3Cu;
    {
        const bool branch_taken_0x176d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x176D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176D3Cu;
            // 0x176d40: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176d3c) {
            ctx->pc = 0x176D80u;
            goto label_176d80;
        }
    }
    ctx->pc = 0x176D44u;
    // 0x176d44: 0xc05d762  jal         func_175D88
    ctx->pc = 0x176D44u;
    SET_GPR_U32(ctx, 31, 0x176D4Cu);
    ctx->pc = 0x176D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176D44u;
            // 0x176d48: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D4Cu; }
        if (ctx->pc != 0x176D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D4Cu; }
        if (ctx->pc != 0x176D4Cu) { return; }
    }
    ctx->pc = 0x176D4Cu;
    // 0x176d4c: 0xc08e440  jal         func_239100
    ctx->pc = 0x176D4Cu;
    SET_GPR_U32(ctx, 31, 0x176D54u);
    ctx->pc = 0x176D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176D4Cu;
            // 0x176d50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D54u; }
        if (ctx->pc != 0x176D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D54u; }
        if (ctx->pc != 0x176D54u) { return; }
    }
    ctx->pc = 0x176D54u;
    // 0x176d54: 0x8e83c4bc  lw          $v1, -0x3B44($s4)
    ctx->pc = 0x176d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952124)));
    // 0x176d58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d5c: 0xaea2c4b4  sw          $v0, -0x3B4C($s5)
    ctx->pc = 0x176d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294952116), GPR_U32(ctx, 2));
    // 0x176d60: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x176d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176d64: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x176d64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x176d68: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x176d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x176d6c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x176d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x176d70: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x176d70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x176d74: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x176d74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x176d78: 0xc08e45a  jal         func_239168
    ctx->pc = 0x176D78u;
    SET_GPR_U32(ctx, 31, 0x176D80u);
    ctx->pc = 0x176D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176D78u;
            // 0x176d7c: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D80u; }
        if (ctx->pc != 0x176D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D80u; }
        if (ctx->pc != 0x176D80u) { return; }
    }
    ctx->pc = 0x176D80u;
label_176d80:
    // 0x176d80: 0x8ea2c4b4  lw          $v0, -0x3B4C($s5)
    ctx->pc = 0x176d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952116)));
    // 0x176d84: 0x52220080  beql        $s1, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x176D84u;
    {
        const bool branch_taken_0x176d84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x176d84) {
            ctx->pc = 0x176D88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176D84u;
            // 0x176d88: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176F88u;
            goto label_176f88;
        }
    }
    ctx->pc = 0x176D8Cu;
    // 0x176d8c: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x176D8Cu;
    {
        const bool branch_taken_0x176d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176D8Cu;
            // 0x176d90: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176d8c) {
            ctx->pc = 0x176F70u;
            goto label_176f70;
        }
    }
    ctx->pc = 0x176D94u;
    // 0x176d94: 0x0  nop
    ctx->pc = 0x176d94u;
    // NOP
label_176d98:
    // 0x176d98: 0x8e84c4bc  lw          $a0, -0x3B44($s4)
    ctx->pc = 0x176d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952124)));
    // 0x176d9c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176da0: 0x8ea3c4b4  lw          $v1, -0x3B4C($s5)
    ctx->pc = 0x176da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952116)));
    // 0x176da4: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x176DA4u;
    {
        const bool branch_taken_0x176da4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x176DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176DA4u;
            // 0x176da8: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176da4) {
            ctx->pc = 0x176DE8u;
            goto label_176de8;
        }
    }
    ctx->pc = 0x176DACu;
    // 0x176dac: 0xc05d762  jal         func_175D88
    ctx->pc = 0x176DACu;
    SET_GPR_U32(ctx, 31, 0x176DB4u);
    ctx->pc = 0x176DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176DACu;
            // 0x176db0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176DB4u; }
        if (ctx->pc != 0x176DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176DB4u; }
        if (ctx->pc != 0x176DB4u) { return; }
    }
    ctx->pc = 0x176DB4u;
    // 0x176db4: 0xc08e440  jal         func_239100
    ctx->pc = 0x176DB4u;
    SET_GPR_U32(ctx, 31, 0x176DBCu);
    ctx->pc = 0x176DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176DB4u;
            // 0x176db8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (runtime->hasFunction(0x239100u)) {
        auto targetFn = runtime->lookupFunction(0x239100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176DBCu; }
        if (ctx->pc != 0x176DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239100_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176DBCu; }
        if (ctx->pc != 0x176DBCu) { return; }
    }
    ctx->pc = 0x176DBCu;
    // 0x176dbc: 0x8e83c4bc  lw          $v1, -0x3B44($s4)
    ctx->pc = 0x176dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952124)));
    // 0x176dc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176dc4: 0xaea2c4b4  sw          $v0, -0x3B4C($s5)
    ctx->pc = 0x176dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294952116), GPR_U32(ctx, 2));
    // 0x176dc8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x176dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176dcc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x176dccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x176dd0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x176dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x176dd4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x176dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x176dd8: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x176dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x176ddc: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x176ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x176de0: 0xc08e45a  jal         func_239168
    ctx->pc = 0x176DE0u;
    SET_GPR_U32(ctx, 31, 0x176DE8u);
    ctx->pc = 0x176DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176DE0u;
            // 0x176de4: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239168u;
    if (runtime->hasFunction(0x239168u)) {
        auto targetFn = runtime->lookupFunction(0x239168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176DE8u; }
        if (ctx->pc != 0x176DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239168_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176DE8u; }
        if (ctx->pc != 0x176DE8u) { return; }
    }
    ctx->pc = 0x176DE8u;
label_176de8:
    // 0x176de8: 0x8ea2c4b4  lw          $v0, -0x3B4C($s5)
    ctx->pc = 0x176de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952116)));
    // 0x176dec: 0x12020065  beq         $s0, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x176DECu;
    {
        const bool branch_taken_0x176dec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x176DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176DECu;
            // 0x176df0: 0x8e86c4bc  lw          $a2, -0x3B44($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176dec) {
            ctx->pc = 0x176F84u;
            goto label_176f84;
        }
    }
    ctx->pc = 0x176DF4u;
    // 0x176df4: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x176df4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x176df8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176dfc: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x176dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x176e00: 0x56250027  bnel        $s1, $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x176E00u;
    {
        const bool branch_taken_0x176e00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        if (branch_taken_0x176e00) {
            ctx->pc = 0x176E04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176E00u;
            // 0x176e04: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176EA0u;
            goto label_176ea0;
        }
    }
    ctx->pc = 0x176E08u;
    // 0x176e08: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x176e08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x176e0c: 0x3c168000  lui         $s6, 0x8000
    ctx->pc = 0x176e0cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32768 << 16));
    // 0x176e10: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176e14: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x176e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x176e18: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x176e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x176e1c: 0x4420024  bltzl       $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x176E1Cu;
    {
        const bool branch_taken_0x176e1c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x176e1c) {
            ctx->pc = 0x176E20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176E1Cu;
            // 0x176e20: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176EB0u;
            goto label_176eb0;
        }
    }
    ctx->pc = 0x176E24u;
    // 0x176e24: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x176e24u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x176e28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176e2c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x176e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x176e30: 0x5642000d  bnel        $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x176E30u;
    {
        const bool branch_taken_0x176e30 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x176e30) {
            ctx->pc = 0x176E34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176E30u;
            // 0x176e34: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176E68u;
            goto label_176e68;
        }
    }
    ctx->pc = 0x176E38u;
    // 0x176e38: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x176e38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176e3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x176e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176e40: 0xc05d776  jal         func_175DD8
    ctx->pc = 0x176E40u;
    SET_GPR_U32(ctx, 31, 0x176E48u);
    ctx->pc = 0x176E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176E40u;
            // 0x176e44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175DD8u;
    if (runtime->hasFunction(0x175DD8u)) {
        auto targetFn = runtime->lookupFunction(0x175DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E48u; }
        if (ctx->pc != 0x176E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175DD8_0x175dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E48u; }
        if (ctx->pc != 0x176E48u) { return; }
    }
    ctx->pc = 0x176E48u;
    // 0x176e48: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x176e48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x176e4c: 0x8e83c4bc  lw          $v1, -0x3B44($s4)
    ctx->pc = 0x176e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952124)));
    // 0x176e50: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176e54: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x176e54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x176e58: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x176e58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x176e5c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176e60: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x176e60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x176e64: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x176e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_176e68:
    // 0x176e68: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x176e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x176e6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x176e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x176e70: 0x8ea4c4b4  lw          $a0, -0x3B4C($s5)
    ctx->pc = 0x176e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952116)));
    // 0x176e74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x176e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x176e78: 0x12040004  beq         $s0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x176E78u;
    {
        const bool branch_taken_0x176e78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x176E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176E78u;
            // 0x176e7c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176e78) {
            ctx->pc = 0x176E8Cu;
            goto label_176e8c;
        }
    }
    ctx->pc = 0x176E80u;
    // 0x176e80: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x176e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x176e84: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x176e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x176e88: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x176e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_176e8c:
    // 0x176e8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x176e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176e90: 0xc05d8fa  jal         func_1763E8
    ctx->pc = 0x176E90u;
    SET_GPR_U32(ctx, 31, 0x176E98u);
    ctx->pc = 0x176E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176E90u;
            // 0x176e94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1763E8u;
    if (runtime->hasFunction(0x1763E8u)) {
        auto targetFn = runtime->lookupFunction(0x1763E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E98u; }
        if (ctx->pc != 0x176E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001763E8_0x1763e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E98u; }
        if (ctx->pc != 0x176E98u) { return; }
    }
    ctx->pc = 0x176E98u;
    // 0x176e98: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x176E98u;
    {
        const bool branch_taken_0x176e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176E98u;
            // 0x176e9c: 0x96420008  lhu         $v0, 0x8($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176e98) {
            ctx->pc = 0x176F60u;
            goto label_176f60;
        }
    }
    ctx->pc = 0x176EA0u;
label_176ea0:
    // 0x176ea0: 0x3c168000  lui         $s6, 0x8000
    ctx->pc = 0x176ea0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32768 << 16));
    // 0x176ea4: 0x4430011  bgezl       $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x176EA4u;
    {
        const bool branch_taken_0x176ea4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x176ea4) {
            ctx->pc = 0x176EA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176EA4u;
            // 0x176ea8: 0x9622000a  lhu         $v0, 0xA($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176EECu;
            goto label_176eec;
        }
    }
    ctx->pc = 0x176EACu;
    // 0x176eac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x176eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_176eb0:
    // 0x176eb0: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x176eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x176eb4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x176eb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x176eb8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x176eb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ebc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x176ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x176ec0: 0x96430008  lhu         $v1, 0x8($s2)
    ctx->pc = 0x176ec0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x176ec4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x176ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x176ec8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x176ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x176ecc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x176eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x176ed0: 0xc38821  addu        $s1, $a2, $v1
    ctx->pc = 0x176ed0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x176ed4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x176ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x176ed8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x176ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x176edc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x176edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x176ee0: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x176ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x176ee4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x176EE4u;
    {
        const bool branch_taken_0x176ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176EE4u;
            // 0x176ee8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176ee4) {
            ctx->pc = 0x176F6Cu;
            goto label_176f6c;
        }
    }
    ctx->pc = 0x176EECu;
label_176eec:
    // 0x176eec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176ef0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x176ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x176ef4: 0x5642000d  bnel        $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x176EF4u;
    {
        const bool branch_taken_0x176ef4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x176ef4) {
            ctx->pc = 0x176EF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176EF4u;
            // 0x176ef8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176F2Cu;
            goto label_176f2c;
        }
    }
    ctx->pc = 0x176EFCu;
    // 0x176efc: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x176efcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x176f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f04: 0xc05d8fa  jal         func_1763E8
    ctx->pc = 0x176F04u;
    SET_GPR_U32(ctx, 31, 0x176F0Cu);
    ctx->pc = 0x176F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176F04u;
            // 0x176f08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1763E8u;
    if (runtime->hasFunction(0x1763E8u)) {
        auto targetFn = runtime->lookupFunction(0x1763E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F0Cu; }
        if (ctx->pc != 0x176F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001763E8_0x1763e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F0Cu; }
        if (ctx->pc != 0x176F0Cu) { return; }
    }
    ctx->pc = 0x176F0Cu;
    // 0x176f0c: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x176f0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x176f10: 0x8e83c4bc  lw          $v1, -0x3B44($s4)
    ctx->pc = 0x176f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952124)));
    // 0x176f14: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176f18: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x176f18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x176f1c: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x176f1cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x176f20: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176f24: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x176f24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x176f28: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x176f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_176f2c:
    // 0x176f2c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x176f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x176f30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x176f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x176f34: 0x8ea4c4b4  lw          $a0, -0x3B4C($s5)
    ctx->pc = 0x176f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952116)));
    // 0x176f38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x176f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x176f3c: 0x12040004  beq         $s0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x176F3Cu;
    {
        const bool branch_taken_0x176f3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x176F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176F3Cu;
            // 0x176f40: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f3c) {
            ctx->pc = 0x176F50u;
            goto label_176f50;
        }
    }
    ctx->pc = 0x176F44u;
    // 0x176f44: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x176f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x176f48: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x176f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x176f4c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x176f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_176f50:
    // 0x176f50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x176f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f54: 0xc05d776  jal         func_175DD8
    ctx->pc = 0x176F54u;
    SET_GPR_U32(ctx, 31, 0x176F5Cu);
    ctx->pc = 0x176F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176F54u;
            // 0x176f58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175DD8u;
    if (runtime->hasFunction(0x175DD8u)) {
        auto targetFn = runtime->lookupFunction(0x175DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F5Cu; }
        if (ctx->pc != 0x176F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175DD8_0x175dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F5Cu; }
        if (ctx->pc != 0x176F5Cu) { return; }
    }
    ctx->pc = 0x176F5Cu;
    // 0x176f5c: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x176f5cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_176f60:
    // 0x176f60: 0x8e83c4bc  lw          $v1, -0x3B44($s4)
    ctx->pc = 0x176f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952124)));
    // 0x176f64: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176f68: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x176f68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_176f6c:
    // 0x176f6c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x176f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_176f70:
    // 0x176f70: 0x52420005  beql        $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x176F70u;
    {
        const bool branch_taken_0x176f70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x176f70) {
            ctx->pc = 0x176F74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176F70u;
            // 0x176f74: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176F88u;
            goto label_176f88;
        }
    }
    ctx->pc = 0x176F78u;
    // 0x176f78: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x176f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x176f7c: 0x442ff86  bltzl       $v0, . + 4 + (-0x7A << 2)
    ctx->pc = 0x176F7Cu;
    {
        const bool branch_taken_0x176f7c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x176f7c) {
            ctx->pc = 0x176F80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176F7Cu;
            // 0x176f80: 0x96220008  lhu         $v0, 0x8($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176D98u;
            runtime->cooperativeGuestYield();
            goto label_176d98;
        }
    }
    ctx->pc = 0x176F84u;
label_176f84:
    // 0x176f84: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x176f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_176f88:
    // 0x176f88: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x176f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x176f8c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x176f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x176f90: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x176f90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x176f94: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x176f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x176f98: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x176f98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x176f9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x176f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x176fa0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x176fa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x176fa4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x176fa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x176fa8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x176fa8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176fac: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x176facu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176fb0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x176fb0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176fb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x176fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176fb8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x176fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x176fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x176FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176FBCu;
            // 0x176fc0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176D80u: goto label_176d80;
            case 0x176D98u: goto label_176d98;
            case 0x176DE8u: goto label_176de8;
            case 0x176E68u: goto label_176e68;
            case 0x176E8Cu: goto label_176e8c;
            case 0x176EA0u: goto label_176ea0;
            case 0x176EB0u: goto label_176eb0;
            case 0x176EECu: goto label_176eec;
            case 0x176F2Cu: goto label_176f2c;
            case 0x176F50u: goto label_176f50;
            case 0x176F60u: goto label_176f60;
            case 0x176F6Cu: goto label_176f6c;
            case 0x176F70u: goto label_176f70;
            case 0x176F84u: goto label_176f84;
            case 0x176F88u: goto label_176f88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x176FC4u;
    // 0x176fc4: 0x0  nop
    ctx->pc = 0x176fc4u;
    // NOP
}
