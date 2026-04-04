#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00278330
// Address: 0x278330 - 0x2785e0
void sub_00278330_0x278330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278330_0x278330");
#endif

    ctx->pc = 0x278330u;

    // 0x278330: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x278330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x278334: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x278334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x278338: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x278338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x27833c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27833cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278340: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x278340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x278344: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x278344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x278348: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x278348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x27834c: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x27834Cu;
    SET_GPR_U32(ctx, 31, 0x278354u);
    ctx->pc = 0x278350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27834Cu;
            // 0x278350: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278354u; }
        if (ctx->pc != 0x278354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278354u; }
        if (ctx->pc != 0x278354u) { return; }
    }
    ctx->pc = 0x278354u;
    // 0x278354: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x278354u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278358: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x278358u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x27835c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x27835cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x278360: 0x31d02  srl         $v1, $v1, 20
    ctx->pc = 0x278360u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 20));
    // 0x278364: 0xae230134  sw          $v1, 0x134($s1)
    ctx->pc = 0x278364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 3));
    // 0x278368: 0x28440af1  slti        $a0, $v0, 0xAF1
    ctx->pc = 0x278368u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2801) ? 1 : 0);
    // 0x27836c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27836Cu;
    {
        const bool branch_taken_0x27836c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x278370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27836Cu;
            // 0x278370: 0xae220138  sw          $v0, 0x138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27836c) {
            ctx->pc = 0x278384u;
            goto label_278384;
        }
    }
    ctx->pc = 0x278374u;
    // 0x278374: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x278374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x278378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27837c: 0xc09d0e6  jal         func_274398
    ctx->pc = 0x27837Cu;
    SET_GPR_U32(ctx, 31, 0x278384u);
    ctx->pc = 0x278380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27837Cu;
            // 0x278380: 0x24a546e8  addiu       $a1, $a1, 0x46E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274398u;
    if (runtime->hasFunction(0x274398u)) {
        auto targetFn = runtime->lookupFunction(0x274398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278384u; }
        if (ctx->pc != 0x278384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274398_0x274398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278384u; }
        if (ctx->pc != 0x278384u) { return; }
    }
    ctx->pc = 0x278384u;
label_278384:
    // 0x278384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278388: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278388u;
    SET_GPR_U32(ctx, 31, 0x278390u);
    ctx->pc = 0x27838Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278388u;
            // 0x27838c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278390u; }
        if (ctx->pc != 0x278390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278390u; }
        if (ctx->pc != 0x278390u) { return; }
    }
    ctx->pc = 0x278390u;
    // 0x278390: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x278390u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278398: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x278398u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x27839c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27839cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2783a0: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x2783a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x2783a4: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x2783a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x2783a8: 0xae230144  sw          $v1, 0x144($s1)
    ctx->pc = 0x2783a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 3));
    // 0x2783ac: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x2783ACu;
    SET_GPR_U32(ctx, 31, 0x2783B4u);
    ctx->pc = 0x2783B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2783ACu;
            // 0x2783b0: 0xae220148  sw          $v0, 0x148($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2783B4u; }
        if (ctx->pc != 0x2783B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2783B4u; }
        if (ctx->pc != 0x2783B4u) { return; }
    }
    ctx->pc = 0x2783B4u;
    // 0x2783b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2783B4u;
    {
        const bool branch_taken_0x2783b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2783B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2783B4u;
            // 0x2783b8: 0xae220850  sw          $v0, 0x850($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2783b4) {
            ctx->pc = 0x2783F0u;
            goto label_2783f0;
        }
    }
    ctx->pc = 0x2783BCu;
    // 0x2783bc: 0xc09e37a  jal         func_278DE8
    ctx->pc = 0x2783BCu;
    SET_GPR_U32(ctx, 31, 0x2783C4u);
    ctx->pc = 0x2783C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2783BCu;
            // 0x2783c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278DE8u;
    if (runtime->hasFunction(0x278DE8u)) {
        auto targetFn = runtime->lookupFunction(0x278DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2783C4u; }
        if (ctx->pc != 0x2783C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278de8_0x278e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2783C4u; }
        if (ctx->pc != 0x2783C4u) { return; }
    }
    ctx->pc = 0x2783C4u;
    // 0x2783c4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2783c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2783c8: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x2783c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x2783cc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2783ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2783d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2783d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2783d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2783d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2783d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2783d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2783dc: 0xae23082c  sw          $v1, 0x82C($s1)
    ctx->pc = 0x2783dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 3));
    // 0x2783e0: 0xc09e37a  jal         func_278DE8
    ctx->pc = 0x2783E0u;
    SET_GPR_U32(ctx, 31, 0x2783E8u);
    ctx->pc = 0x2783E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2783E0u;
            // 0x2783e4: 0xae250828  sw          $a1, 0x828($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278DE8u;
    if (runtime->hasFunction(0x278DE8u)) {
        auto targetFn = runtime->lookupFunction(0x278DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2783E8u; }
        if (ctx->pc != 0x2783E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278de8_0x278e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2783E8u; }
        if (ctx->pc != 0x2783E8u) { return; }
    }
    ctx->pc = 0x2783E8u;
    // 0x2783e8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2783E8u;
    {
        const bool branch_taken_0x2783e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2783ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2783E8u;
            // 0x2783ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2783e8) {
            ctx->pc = 0x2784ACu;
            goto label_2784ac;
        }
    }
    ctx->pc = 0x2783F0u;
label_2783f0:
    // 0x2783f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2783f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2783f4: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x2783f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x2783f8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x2783f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x2783fc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2783fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x278400: 0x26101580  addiu       $s0, $s0, 0x1580
    ctx->pc = 0x278400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5504));
    // 0x278404: 0xc09bff4  jal         func_26FFD0
    ctx->pc = 0x278404u;
    SET_GPR_U32(ctx, 31, 0x27840Cu);
    ctx->pc = 0x278408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278404u;
            // 0x278408: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26FFD0u;
    if (runtime->hasFunction(0x26FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x26FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27840Cu; }
        if (ctx->pc != 0x27840Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ffd0_0x270048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27840Cu; }
        if (ctx->pc != 0x27840Cu) { return; }
    }
    ctx->pc = 0x27840Cu;
    // 0x27840c: 0x3c125000  lui         $s2, 0x5000
    ctx->pc = 0x27840cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)20480 << 16));
    // 0x278410: 0xc09e37a  jal         func_278DE8
    ctx->pc = 0x278410u;
    SET_GPR_U32(ctx, 31, 0x278418u);
    ctx->pc = 0x278414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278410u;
            // 0x278414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278DE8u;
    if (runtime->hasFunction(0x278DE8u)) {
        auto targetFn = runtime->lookupFunction(0x278DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278418u; }
        if (ctx->pc != 0x278418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278de8_0x278e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278418u; }
        if (ctx->pc != 0x278418u) { return; }
    }
    ctx->pc = 0x278418u;
    // 0x278418: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x278418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x27841c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27841cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278420: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x278420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x278424: 0xc09e37a  jal         func_278DE8
    ctx->pc = 0x278424u;
    SET_GPR_U32(ctx, 31, 0x27842Cu);
    ctx->pc = 0x278428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278424u;
            // 0x278428: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278DE8u;
    if (runtime->hasFunction(0x278DE8u)) {
        auto targetFn = runtime->lookupFunction(0x278DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27842Cu; }
        if (ctx->pc != 0x27842Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278de8_0x278e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27842Cu; }
        if (ctx->pc != 0x27842Cu) { return; }
    }
    ctx->pc = 0x27842Cu;
    // 0x27842c: 0xc0a648c  jal         func_299230
    ctx->pc = 0x27842Cu;
    SET_GPR_U32(ctx, 31, 0x278434u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278434u; }
        if (ctx->pc != 0x278434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278434u; }
        if (ctx->pc != 0x278434u) { return; }
    }
    ctx->pc = 0x278434u;
    // 0x278434: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x278434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x278438: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x278438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x27843c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x27843cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x278440: 0x3484b410  ori         $a0, $a0, 0xB410
    ctx->pc = 0x278440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46096);
    // 0x278444: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x278444u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x278448: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x278448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x27844c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x27844cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x278450: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x278450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
    // 0x278454: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x278454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x278458: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x278458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x27845c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x27845cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x278460: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x278460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x278464: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x278464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x278468: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x278468u;
    {
        const bool branch_taken_0x278468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27846Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278468u;
            // 0x27846c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278468) {
            ctx->pc = 0x278478u;
            goto label_278478;
        }
    }
    ctx->pc = 0x278470u;
    // 0x278470: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x278470u;
    SET_GPR_U32(ctx, 31, 0x278478u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278478u; }
        if (ctx->pc != 0x278478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278478u; }
        if (ctx->pc != 0x278478u) { return; }
    }
    ctx->pc = 0x278478u;
label_278478:
    // 0x278478: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x278478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x27847c: 0xac322000  sw          $s2, 0x2000($at)
    ctx->pc = 0x27847cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8192), GPR_U32(ctx, 18));
    // 0x278480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278484: 0xae32082c  sw          $s2, 0x82C($s1)
    ctx->pc = 0x278484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 18));
    // 0x278488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27848c: 0xc09e37a  jal         func_278DE8
    ctx->pc = 0x27848Cu;
    SET_GPR_U32(ctx, 31, 0x278494u);
    ctx->pc = 0x278490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27848Cu;
            // 0x278490: 0xae220828  sw          $v0, 0x828($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278DE8u;
    if (runtime->hasFunction(0x278DE8u)) {
        auto targetFn = runtime->lookupFunction(0x278DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278494u; }
        if (ctx->pc != 0x278494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278de8_0x278e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278494u; }
        if (ctx->pc != 0x278494u) { return; }
    }
    ctx->pc = 0x278494u;
    // 0x278494: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x278494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x278498: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x278498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x27849c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x27849cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2784a0: 0xc09bff4  jal         func_26FFD0
    ctx->pc = 0x2784A0u;
    SET_GPR_U32(ctx, 31, 0x2784A8u);
    ctx->pc = 0x2784A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2784A0u;
            // 0x2784a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26FFD0u;
    if (runtime->hasFunction(0x26FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x26FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2784A8u; }
        if (ctx->pc != 0x2784A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ffd0_0x270048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2784A8u; }
        if (ctx->pc != 0x2784A8u) { return; }
    }
    ctx->pc = 0x2784A8u;
    // 0x2784a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2784a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2784ac:
    // 0x2784ac: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x2784ACu;
    SET_GPR_U32(ctx, 31, 0x2784B4u);
    ctx->pc = 0x2784B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2784ACu;
            // 0x2784b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2784B4u; }
        if (ctx->pc != 0x2784B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2784B4u; }
        if (ctx->pc != 0x2784B4u) { return; }
    }
    ctx->pc = 0x2784B4u;
    // 0x2784b4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2784B4u;
    {
        const bool branch_taken_0x2784b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2784B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2784B4u;
            // 0x2784b8: 0xae220854  sw          $v0, 0x854($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2784b4) {
            ctx->pc = 0x2784F4u;
            goto label_2784f4;
        }
    }
    ctx->pc = 0x2784BCu;
    // 0x2784bc: 0xc09e37a  jal         func_278DE8
    ctx->pc = 0x2784BCu;
    SET_GPR_U32(ctx, 31, 0x2784C4u);
    ctx->pc = 0x2784C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2784BCu;
            // 0x2784c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278DE8u;
    if (runtime->hasFunction(0x278DE8u)) {
        auto targetFn = runtime->lookupFunction(0x278DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2784C4u; }
        if (ctx->pc != 0x2784C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278de8_0x278e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2784C4u; }
        if (ctx->pc != 0x2784C4u) { return; }
    }
    ctx->pc = 0x2784C4u;
    // 0x2784c4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2784c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2784c8: 0x3c035800  lui         $v1, 0x5800
    ctx->pc = 0x2784c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22528 << 16));
    // 0x2784cc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2784ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2784d0: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x2784d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x2784d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2784d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2784d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2784d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2784dc: 0xae24082c  sw          $a0, 0x82C($s1)
    ctx->pc = 0x2784dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 4));
    // 0x2784e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2784e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2784e4: 0xc09e37a  jal         func_278DE8
    ctx->pc = 0x2784E4u;
    SET_GPR_U32(ctx, 31, 0x2784ECu);
    ctx->pc = 0x2784E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2784E4u;
            // 0x2784e8: 0xae250828  sw          $a1, 0x828($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278DE8u;
    if (runtime->hasFunction(0x278DE8u)) {
        auto targetFn = runtime->lookupFunction(0x278DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2784ECu; }
        if (ctx->pc != 0x2784ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278de8_0x278e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2784ECu; }
        if (ctx->pc != 0x2784ECu) { return; }
    }
    ctx->pc = 0x2784ECu;
    // 0x2784ec: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2784ECu;
    {
        const bool branch_taken_0x2784ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2784ec) {
            ctx->pc = 0x2785B4u;
            goto label_2785b4;
        }
    }
    ctx->pc = 0x2784F4u;
label_2784f4:
    // 0x2784f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2784f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2784f8: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x2784f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x2784fc: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x2784fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x278500: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x278500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x278504: 0x261015c0  addiu       $s0, $s0, 0x15C0
    ctx->pc = 0x278504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5568));
    // 0x278508: 0xc09bff4  jal         func_26FFD0
    ctx->pc = 0x278508u;
    SET_GPR_U32(ctx, 31, 0x278510u);
    ctx->pc = 0x27850Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278508u;
            // 0x27850c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26FFD0u;
    if (runtime->hasFunction(0x26FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x26FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278510u; }
        if (ctx->pc != 0x278510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ffd0_0x270048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278510u; }
        if (ctx->pc != 0x278510u) { return; }
    }
    ctx->pc = 0x278510u;
    // 0x278510: 0xc09e37a  jal         func_278DE8
    ctx->pc = 0x278510u;
    SET_GPR_U32(ctx, 31, 0x278518u);
    ctx->pc = 0x278514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278510u;
            // 0x278514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278DE8u;
    if (runtime->hasFunction(0x278DE8u)) {
        auto targetFn = runtime->lookupFunction(0x278DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278518u; }
        if (ctx->pc != 0x278518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278de8_0x278e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278518u; }
        if (ctx->pc != 0x278518u) { return; }
    }
    ctx->pc = 0x278518u;
    // 0x278518: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x278518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x27851c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27851cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278520: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x278520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x278524: 0xc09e37a  jal         func_278DE8
    ctx->pc = 0x278524u;
    SET_GPR_U32(ctx, 31, 0x27852Cu);
    ctx->pc = 0x278528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278524u;
            // 0x278528: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278DE8u;
    if (runtime->hasFunction(0x278DE8u)) {
        auto targetFn = runtime->lookupFunction(0x278DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27852Cu; }
        if (ctx->pc != 0x27852Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278de8_0x278e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27852Cu; }
        if (ctx->pc != 0x27852Cu) { return; }
    }
    ctx->pc = 0x27852Cu;
    // 0x27852c: 0xc0a648c  jal         func_299230
    ctx->pc = 0x27852Cu;
    SET_GPR_U32(ctx, 31, 0x278534u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278534u; }
        if (ctx->pc != 0x278534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278534u; }
        if (ctx->pc != 0x278534u) { return; }
    }
    ctx->pc = 0x278534u;
    // 0x278534: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x278534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x278538: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x278538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x27853c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x27853cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x278540: 0x3484b410  ori         $a0, $a0, 0xB410
    ctx->pc = 0x278540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46096);
    // 0x278544: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x278544u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x278548: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x278548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x27854c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x27854cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x278550: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x278550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
    // 0x278554: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x278554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x278558: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x278558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x27855c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x27855cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x278560: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x278560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x278564: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x278564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x278568: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x278568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x27856c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27856Cu;
    {
        const bool branch_taken_0x27856c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27856Cu;
            // 0x278570: 0x3c025800  lui         $v0, 0x5800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22528 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27856c) {
            ctx->pc = 0x278580u;
            goto label_278580;
        }
    }
    ctx->pc = 0x278574u;
    // 0x278574: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x278574u;
    SET_GPR_U32(ctx, 31, 0x27857Cu);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27857Cu; }
        if (ctx->pc != 0x27857Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27857Cu; }
        if (ctx->pc != 0x27857Cu) { return; }
    }
    ctx->pc = 0x27857Cu;
    // 0x27857c: 0x3c025800  lui         $v0, 0x5800
    ctx->pc = 0x27857cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22528 << 16));
label_278580:
    // 0x278580: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x278580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x278584: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x278584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x278588: 0xac222000  sw          $v0, 0x2000($at)
    ctx->pc = 0x278588u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8192), GPR_U32(ctx, 2));
    // 0x27858c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27858cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278590: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278594: 0xae23082c  sw          $v1, 0x82C($s1)
    ctx->pc = 0x278594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 3));
    // 0x278598: 0xc09e37a  jal         func_278DE8
    ctx->pc = 0x278598u;
    SET_GPR_U32(ctx, 31, 0x2785A0u);
    ctx->pc = 0x27859Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278598u;
            // 0x27859c: 0xae220828  sw          $v0, 0x828($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278DE8u;
    if (runtime->hasFunction(0x278DE8u)) {
        auto targetFn = runtime->lookupFunction(0x278DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2785A0u; }
        if (ctx->pc != 0x2785A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278de8_0x278e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2785A0u; }
        if (ctx->pc != 0x2785A0u) { return; }
    }
    ctx->pc = 0x2785A0u;
    // 0x2785a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2785a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2785a4: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x2785a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x2785a8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2785a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2785ac: 0xc09bff4  jal         func_26FFD0
    ctx->pc = 0x2785ACu;
    SET_GPR_U32(ctx, 31, 0x2785B4u);
    ctx->pc = 0x2785B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2785ACu;
            // 0x2785b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26FFD0u;
    if (runtime->hasFunction(0x26FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x26FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2785B4u; }
        if (ctx->pc != 0x2785B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ffd0_0x270048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2785B4u; }
        if (ctx->pc != 0x2785B4u) { return; }
    }
    ctx->pc = 0x2785B4u;
label_2785b4:
    // 0x2785b4: 0xc09e306  jal         func_278C18
    ctx->pc = 0x2785B4u;
    SET_GPR_U32(ctx, 31, 0x2785BCu);
    ctx->pc = 0x2785B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2785B4u;
            // 0x2785b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278C18u;
    if (runtime->hasFunction(0x278C18u)) {
        auto targetFn = runtime->lookupFunction(0x278C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2785BCu; }
        if (ctx->pc != 0x2785BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278c18_0x278de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2785BCu; }
        if (ctx->pc != 0x2785BCu) { return; }
    }
    ctx->pc = 0x2785BCu;
    // 0x2785bc: 0xc09e006  jal         func_278018
    ctx->pc = 0x2785BCu;
    SET_GPR_U32(ctx, 31, 0x2785C4u);
    ctx->pc = 0x2785C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2785BCu;
            // 0x2785c0: 0x8e240868  lw          $a0, 0x868($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278018u;
    if (runtime->hasFunction(0x278018u)) {
        auto targetFn = runtime->lookupFunction(0x278018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2785C4u; }
        if (ctx->pc != 0x2785C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00278018_0x278018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2785C4u; }
        if (ctx->pc != 0x2785C4u) { return; }
    }
    ctx->pc = 0x2785C4u;
    // 0x2785c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2785c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2785c8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2785c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2785cc: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2785ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2785d0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2785d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2785d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2785D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2785D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2785D4u;
            // 0x2785d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x278384u: goto label_278384;
            case 0x2783F0u: goto label_2783f0;
            case 0x278478u: goto label_278478;
            case 0x2784ACu: goto label_2784ac;
            case 0x2784F4u: goto label_2784f4;
            case 0x278580u: goto label_278580;
            case 0x2785B4u: goto label_2785b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2785DCu;
    // 0x2785dc: 0x0  nop
    ctx->pc = 0x2785dcu;
    // NOP
}
