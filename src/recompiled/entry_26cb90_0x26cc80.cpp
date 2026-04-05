#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26cb90
// Address: 0x26cb90 - 0x26cc80
void entry_26cb90_0x26cc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26cb90_0x26cc80");
#endif

    ctx->pc = 0x26cb90u;

    // 0x26cb90: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26cb94: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x26cb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x26cb98: 0x8c48a318  lw          $t0, -0x5CE8($v0)
    ctx->pc = 0x26cb98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943512)));
    // 0x26cb9c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26cb9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26cba0: 0x8467a322  lh          $a3, -0x5CDE($v1)
    ctx->pc = 0x26cba0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294943522)));
    // 0x26cba4: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26cba8: 0x8c4da30c  lw          $t5, -0x5CF4($v0)
    ctx->pc = 0x26cba8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943500)));
    // 0x26cbac: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x26cbacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x26cbb0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x26cbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x26cbb4: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26cbb8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x26cbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x26cbbc: 0x3c100031  lui         $s0, 0x31
    ctx->pc = 0x26cbbcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49 << 16));
    // 0x26cbc0: 0x8c6ca308  lw          $t4, -0x5CF8($v1)
    ctx->pc = 0x26cbc0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943496)));
    // 0x26cbc4: 0x3c110031  lui         $s1, 0x31
    ctx->pc = 0x26cbc4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)49 << 16));
    // 0x26cbc8: 0x8626a320  lh          $a2, -0x5CE0($s1)
    ctx->pc = 0x26cbc8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294943520)));
    // 0x26cbcc: 0x39080003  xori        $t0, $t0, 0x3
    ctx->pc = 0x26cbccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)3);
    // 0x26cbd0: 0x8e03a304  lw          $v1, -0x5CFC($s0)
    ctx->pc = 0x26cbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943492)));
    // 0x26cbd4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x26cbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26cbd8: 0x8c45a324  lw          $a1, -0x5CDC($v0)
    ctx->pc = 0x26cbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943524)));
    // 0x26cbdc: 0x8200a  movz        $a0, $zero, $t0
    ctx->pc = 0x26cbdcu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x26cbe0: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x26cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x26cbe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26cbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26cbe8: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x26cbe8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cbec: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x26cbecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x26cbf0: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x26cbf0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cbf4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x26cbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x26cbf8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26cbf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cbfc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x26cbfcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cc00: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x26cc00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
    // 0x26cc04: 0xc09b976  jal         func_26E5D8
    ctx->pc = 0x26CC04u;
    SET_GPR_U32(ctx, 31, 0x26CC0Cu);
    ctx->pc = 0x26CC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC04u;
            // 0x26cc08: 0xafad0018  sw          $t5, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26E5D8u;
    if (runtime->hasFunction(0x26E5D8u)) {
        auto targetFn = runtime->lookupFunction(0x26E5D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC0Cu; }
        if (ctx->pc != 0x26CC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026E5D8_0x26e5d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC0Cu; }
        if (ctx->pc != 0x26CC0Cu) { return; }
    }
    ctx->pc = 0x26CC0Cu;
    // 0x26cc0c: 0xc09baf8  jal         func_26EBE0
    ctx->pc = 0x26CC0Cu;
    SET_GPR_U32(ctx, 31, 0x26CC14u);
    ctx->pc = 0x26CC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC0Cu;
            // 0x26cc10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26EBE0u;
    if (runtime->hasFunction(0x26EBE0u)) {
        auto targetFn = runtime->lookupFunction(0x26EBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC14u; }
        if (ctx->pc != 0x26CC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ebe0_0x26ec10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC14u; }
        if (ctx->pc != 0x26CC14u) { return; }
    }
    ctx->pc = 0x26CC14u;
    // 0x26cc14: 0xc09baf2  jal         func_26EBC8
    ctx->pc = 0x26CC14u;
    SET_GPR_U32(ctx, 31, 0x26CC1Cu);
    ctx->pc = 0x26CC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC14u;
            // 0x26cc18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26EBC8u;
    if (runtime->hasFunction(0x26EBC8u)) {
        auto targetFn = runtime->lookupFunction(0x26EBC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC1Cu; }
        if (ctx->pc != 0x26CC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ebc8_0x26ebe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC1Cu; }
        if (ctx->pc != 0x26CC1Cu) { return; }
    }
    ctx->pc = 0x26CC1Cu;
    // 0x26cc1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26cc1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cc20: 0xc09e6b6  jal         func_279AD8
    ctx->pc = 0x26CC20u;
    SET_GPR_U32(ctx, 31, 0x26CC28u);
    ctx->pc = 0x26CC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC20u;
            // 0x26cc24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279AD8u;
    if (runtime->hasFunction(0x279AD8u)) {
        auto targetFn = runtime->lookupFunction(0x279AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC28u; }
        if (ctx->pc != 0x26CC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279AD8_0x279ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC28u; }
        if (ctx->pc != 0x26CC28u) { return; }
    }
    ctx->pc = 0x26CC28u;
    // 0x26cc28: 0xc09b9e6  jal         func_26E798
    ctx->pc = 0x26CC28u;
    SET_GPR_U32(ctx, 31, 0x26CC30u);
    ctx->pc = 0x26CC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC28u;
            // 0x26cc2c: 0x8e04a304  lw          $a0, -0x5CFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943492)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26E798u;
    if (runtime->hasFunction(0x26E798u)) {
        auto targetFn = runtime->lookupFunction(0x26E798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC30u; }
        if (ctx->pc != 0x26CC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026E798_0x26e798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC30u; }
        if (ctx->pc != 0x26CC30u) { return; }
    }
    ctx->pc = 0x26CC30u;
    // 0x26cc30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26cc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cc34: 0xc09e6b6  jal         func_279AD8
    ctx->pc = 0x26CC34u;
    SET_GPR_U32(ctx, 31, 0x26CC3Cu);
    ctx->pc = 0x26CC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC34u;
            // 0x26cc38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279AD8u;
    if (runtime->hasFunction(0x279AD8u)) {
        auto targetFn = runtime->lookupFunction(0x279AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC3Cu; }
        if (ctx->pc != 0x26CC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279AD8_0x279ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC3Cu; }
        if (ctx->pc != 0x26CC3Cu) { return; }
    }
    ctx->pc = 0x26CC3Cu;
    // 0x26cc3c: 0x8624a320  lh          $a0, -0x5CE0($s1)
    ctx->pc = 0x26cc3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294943520)));
    // 0x26cc40: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26cc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26cc44: 0x8e06a304  lw          $a2, -0x5CFC($s0)
    ctx->pc = 0x26cc44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943492)));
    // 0x26cc48: 0x3c051200  lui         $a1, 0x1200
    ctx->pc = 0x26cc48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4608 << 16));
    // 0x26cc4c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x26cc4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26cc50: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x26cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x26cc54: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x26cc54u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x26cc58: 0x34a50090  ori         $a1, $a1, 0x90
    ctx->pc = 0x26cc58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)144);
    // 0x26cc5c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x26cc5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x26cc60: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x26cc60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26cc64: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x26cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x26cc68: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x26cc68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26cc6c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x26cc6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x26cc70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26cc70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26cc74: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x26cc74u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x26cc78: 0x3e00008  jr          $ra
    ctx->pc = 0x26CC78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC78u;
            // 0x26cc7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26CC80u;
}
