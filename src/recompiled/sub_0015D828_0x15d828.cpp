#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015D828
// Address: 0x15d828 - 0x15dc18
void sub_0015D828_0x15d828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D828_0x15d828");
#endif

    ctx->pc = 0x15d828u;

    // 0x15d828: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15d828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15d82c: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x15d82cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x15d830: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x15d830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x15d834: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x15d834u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x15d838: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x15d838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x15d83c: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x15d83cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x15d840: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15d840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x15d844: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x15d844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15d848: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x15d848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x15d84c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15d84cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d850: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x15d850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x15d854: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x15d854u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15d85c: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x15d85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x15d860: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x15d860u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x15d864: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x15d864u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x15d868: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x15d868u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x15d86c: 0x26500028  addiu       $s0, $s2, 0x28
    ctx->pc = 0x15d86cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x15d870: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x15d870u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x15d874: 0xa6470004  sh          $a3, 0x4($s2)
    ctx->pc = 0x15d874u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x15d878: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x15d878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x15d87c: 0xa6480000  sh          $t0, 0x0($s2)
    ctx->pc = 0x15d87cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x15d880: 0xae460020  sw          $a2, 0x20($s2)
    ctx->pc = 0x15d880u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 6));
    // 0x15d884: 0x26510034  addiu       $s1, $s2, 0x34
    ctx->pc = 0x15d884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x15d888: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x15d888u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x15d88c: 0xc08e222  jal         func_238888
    ctx->pc = 0x15D88Cu;
    SET_GPR_U32(ctx, 31, 0x15D894u);
    ctx->pc = 0x15D890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D88Cu;
            // 0x15d890: 0xa6420002  sh          $v0, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D894u; }
        if (ctx->pc != 0x15D894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D894u; }
        if (ctx->pc != 0x15D894u) { return; }
    }
    ctx->pc = 0x15D894u;
    // 0x15d894: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x15d894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15d898: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x15d898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d89c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15d89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d8a0: 0xc08e222  jal         func_238888
    ctx->pc = 0x15D8A0u;
    SET_GPR_U32(ctx, 31, 0x15D8A8u);
    ctx->pc = 0x15D8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D8A0u;
            // 0x15d8a4: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D8A8u; }
        if (ctx->pc != 0x15D8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D8A8u; }
        if (ctx->pc != 0x15D8A8u) { return; }
    }
    ctx->pc = 0x15D8A8u;
    // 0x15d8a8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x15d8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15d8ac: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x15d8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x15d8b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x15d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x15d8b4: 0x246307e0  addiu       $v1, $v1, 0x7E0
    ctx->pc = 0x15d8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2016));
    // 0x15d8b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15d8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15d8bc: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x15d8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
    // 0x15d8c0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x15d8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x15d8c4: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x15d8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x15d8c8: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x15D8C8u;
    SET_GPR_U32(ctx, 31, 0x15D8D0u);
    ctx->pc = 0x15D8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D8C8u;
            // 0x15d8cc: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D8D0u; }
        if (ctx->pc != 0x15D8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D8D0u; }
        if (ctx->pc != 0x15D8D0u) { return; }
    }
    ctx->pc = 0x15D8D0u;
    // 0x15d8d0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x15d8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15d8d4: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x15d8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x15d8d8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x15d8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x15d8dc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x15d8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x15d8e0: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x15d8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x15d8e4: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x15D8E4u;
    SET_GPR_U32(ctx, 31, 0x15D8ECu);
    ctx->pc = 0x15D8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D8E4u;
            // 0x15d8e8: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D8ECu; }
        if (ctx->pc != 0x15D8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D8ECu; }
        if (ctx->pc != 0x15D8ECu) { return; }
    }
    ctx->pc = 0x15D8ECu;
    // 0x15d8ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15d8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d8f0: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x15d8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x15d8f4: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x15d8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x15d8f8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x15d8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15d8fc: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x15d8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
    // 0x15d900: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x15D900u;
    SET_GPR_U32(ctx, 31, 0x15D908u);
    ctx->pc = 0x15D904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D900u;
            // 0x15d904: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D908u; }
        if (ctx->pc != 0x15D908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D908u; }
        if (ctx->pc != 0x15D908u) { return; }
    }
    ctx->pc = 0x15D908u;
    // 0x15d908: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15d908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d90c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15d90cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d910: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15d910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15d914: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15d914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15d918:
    // 0x15d918: 0x0  nop
    ctx->pc = 0x15d918u;
    // NOP
    // 0x15d91c: 0x0  nop
    ctx->pc = 0x15d91cu;
    // NOP
    // 0x15d920: 0x0  nop
    ctx->pc = 0x15d920u;
    // NOP
    // 0x15d924: 0x0  nop
    ctx->pc = 0x15d924u;
    // NOP
    // 0x15d928: 0x0  nop
    ctx->pc = 0x15d928u;
    // NOP
    // 0x15d92c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15D92Cu;
    {
        const bool branch_taken_0x15d92c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15D930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D92Cu;
            // 0x15d930: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d92c) {
            ctx->pc = 0x15D918u;
            runtime->cooperativeGuestYield();
            goto label_15d918;
        }
    }
    ctx->pc = 0x15D934u;
    // 0x15d934: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x15d934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x15d938: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15d938u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d93c: 0xae440024  sw          $a0, 0x24($s2)
    ctx->pc = 0x15d93cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
    // 0x15d940: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x15D940u;
    {
        const bool branch_taken_0x15d940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D940u;
            // 0x15d944: 0xae400044  sw          $zero, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d940) {
            ctx->pc = 0x15D9F4u;
            goto label_15d9f4;
        }
    }
    ctx->pc = 0x15D948u;
    // 0x15d948: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x15d948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15d94c: 0x0  nop
    ctx->pc = 0x15d94cu;
    // NOP
label_15d950:
    // 0x15d950: 0x8e510014  lw          $s1, 0x14($s2)
    ctx->pc = 0x15d950u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x15d954: 0x2708018  mult        $s0, $s3, $s0
    ctx->pc = 0x15d954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x15d958: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x15d958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x15d95c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x15d95cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x15d960: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x15D960u;
    SET_GPR_U32(ctx, 31, 0x15D968u);
    ctx->pc = 0x15D964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D960u;
            // 0x15d964: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D968u; }
        if (ctx->pc != 0x15D968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D968u; }
        if (ctx->pc != 0x15D968u) { return; }
    }
    ctx->pc = 0x15D968u;
    // 0x15d968: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15d968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x15d96c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15d96cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d970: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x15d970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x15d974: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x15D974u;
    {
        const bool branch_taken_0x15d974 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D974u;
            // 0x15d978: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d974) {
            ctx->pc = 0x15D9A4u;
            goto label_15d9a4;
        }
    }
    ctx->pc = 0x15D97Cu;
    // 0x15d97c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15d97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d980: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x15d980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15d984: 0x0  nop
    ctx->pc = 0x15d984u;
    // NOP
label_15d988:
    // 0x15d988: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15d988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15d98c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15d98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15d990: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x15d990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x15d994: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x15d994u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x15d998: 0x0  nop
    ctx->pc = 0x15d998u;
    // NOP
    // 0x15d99c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15D99Cu;
    {
        const bool branch_taken_0x15d99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D99Cu;
            // 0x15d9a0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d99c) {
            ctx->pc = 0x15D988u;
            runtime->cooperativeGuestYield();
            goto label_15d988;
        }
    }
    ctx->pc = 0x15D9A4u;
label_15d9a4:
    // 0x15d9a4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x15d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x15d9a8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15D9A8u;
    {
        const bool branch_taken_0x15d9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D9A8u;
            // 0x15d9ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d9a8) {
            ctx->pc = 0x15D9E0u;
            goto label_15d9e0;
        }
    }
    ctx->pc = 0x15D9B0u;
    // 0x15d9b0: 0x8e470024  lw          $a3, 0x24($s2)
    ctx->pc = 0x15d9b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x15d9b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15d9b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15d9b8:
    // 0x15d9b8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x15d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15d9bc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x15d9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15d9c0: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x15d9c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x15d9c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15d9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15d9c8: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x15d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x15d9cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15d9d0: 0xa6202b  sltu        $a0, $a1, $a2
    ctx->pc = 0x15d9d0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x15d9d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15d9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15d9d8: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x15D9D8u;
    {
        const bool branch_taken_0x15d9d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D9D8u;
            // 0x15d9dc: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d9d8) {
            ctx->pc = 0x15D9B8u;
            runtime->cooperativeGuestYield();
            goto label_15d9b8;
        }
    }
    ctx->pc = 0x15D9E0u;
label_15d9e0:
    // 0x15d9e0: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x15d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x15d9e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15d9e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x15d9e8: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x15d9e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15d9ec: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x15D9ECu;
    {
        const bool branch_taken_0x15d9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D9ECu;
            // 0x15d9f0: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d9ec) {
            ctx->pc = 0x15D950u;
            runtime->cooperativeGuestYield();
            goto label_15d950;
        }
    }
    ctx->pc = 0x15D9F4u;
label_15d9f4:
    // 0x15d9f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15d9f8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x15d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x15d9fc: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x15d9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
    // 0x15da00: 0x2442cc10  addiu       $v0, $v0, -0x33F0
    ctx->pc = 0x15da00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954000));
    // 0x15da04: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x15da04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x15da08: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x15da08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x15da0c: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x15da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x15da10: 0xae4200d0  sw          $v0, 0xD0($s2)
    ctx->pc = 0x15da10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
    // 0x15da14: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x15da14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x15da18: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x15da18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x15da1c: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x15da1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
    // 0x15da20: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x15da20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x15da24: 0xc04d7f0  jal         func_135FC0
    ctx->pc = 0x15DA24u;
    SET_GPR_U32(ctx, 31, 0x15DA2Cu);
    ctx->pc = 0x15DA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DA24u;
            // 0x15da28: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135FC0u;
    if (runtime->hasFunction(0x135FC0u)) {
        auto targetFn = runtime->lookupFunction(0x135FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA2Cu; }
        if (ctx->pc != 0x15DA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_135fc0_0x135fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA2Cu; }
        if (ctx->pc != 0x15DA2Cu) { return; }
    }
    ctx->pc = 0x15DA2Cu;
    // 0x15da2c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x15da2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15da30: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x15da30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15da34: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x15da34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15da38: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15da38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15da3c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x15da3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15da40: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x15da40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15da44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15da44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15da48: 0x3e00008  jr          $ra
    ctx->pc = 0x15DA48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DA48u;
            // 0x15da4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D918u: goto label_15d918;
            case 0x15D950u: goto label_15d950;
            case 0x15D988u: goto label_15d988;
            case 0x15D9A4u: goto label_15d9a4;
            case 0x15D9B8u: goto label_15d9b8;
            case 0x15D9E0u: goto label_15d9e0;
            case 0x15D9F4u: goto label_15d9f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15DA50u;
    // 0x15da50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15da50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15da54: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x15da54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15da58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15da58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15da5c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x15da5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15da60: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x15da60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x15da64: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x15da64u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x15da68: 0x8c6800d0  lw          $t0, 0xD0($v1)
    ctx->pc = 0x15da68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x15da6c: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x15da6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x15da70: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x15da70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x15da74: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x15da74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x15da78: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x15da78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x15da7c: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x15da7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x15da80: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x15da80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x15da84: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x15da84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x15da88: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x15da88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x15da8c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x15da8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x15da90: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x15da90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x15da94: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x15DA94u;
    SET_GPR_U32(ctx, 31, 0x15DA9Cu);
    ctx->pc = 0x15DA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DA94u;
            // 0x15da98: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA9Cu; }
        if (ctx->pc != 0x15DA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA9Cu; }
        if (ctx->pc != 0x15DA9Cu) { return; }
    }
    ctx->pc = 0x15DA9Cu;
    // 0x15da9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15da9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15daa0: 0xc057584  jal         func_15D610
    ctx->pc = 0x15DAA0u;
    SET_GPR_U32(ctx, 31, 0x15DAA8u);
    ctx->pc = 0x15DAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DAA0u;
            // 0x15daa4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D610u;
    if (runtime->hasFunction(0x15D610u)) {
        auto targetFn = runtime->lookupFunction(0x15D610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DAA8u; }
        if (ctx->pc != 0x15DAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D610_0x15d610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DAA8u; }
        if (ctx->pc != 0x15DAA8u) { return; }
    }
    ctx->pc = 0x15DAA8u;
    // 0x15daa8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15daa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15daac: 0x3e00008  jr          $ra
    ctx->pc = 0x15DAACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DAACu;
            // 0x15dab0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D918u: goto label_15d918;
            case 0x15D950u: goto label_15d950;
            case 0x15D988u: goto label_15d988;
            case 0x15D9A4u: goto label_15d9a4;
            case 0x15D9B8u: goto label_15d9b8;
            case 0x15D9E0u: goto label_15d9e0;
            case 0x15D9F4u: goto label_15d9f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15DAB4u;
    // 0x15dab4: 0x0  nop
    ctx->pc = 0x15dab4u;
    // NOP
    // 0x15dab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15dab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15dabc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15dabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15dac0: 0x8c8500d4  lw          $a1, 0xD4($a0)
    ctx->pc = 0x15dac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x15dac4: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x15dac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x15dac8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x15dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15dacc: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x15daccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15dad0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x15dad0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15dad4: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x15dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x15dad8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15dadc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15dae0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x15dae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15dae4: 0xc054454  jal         func_151150
    ctx->pc = 0x15DAE4u;
    SET_GPR_U32(ctx, 31, 0x15DAECu);
    ctx->pc = 0x15DAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DAE4u;
            // 0x15dae8: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151150u;
    if (runtime->hasFunction(0x151150u)) {
        auto targetFn = runtime->lookupFunction(0x151150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DAECu; }
        if (ctx->pc != 0x15DAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151150_0x151150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DAECu; }
        if (ctx->pc != 0x15DAECu) { return; }
    }
    ctx->pc = 0x15DAECu;
    // 0x15daec: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x15daecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x15daf0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x15daf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x15daf4: 0x8c42c7dc  lw          $v0, -0x3824($v0)
    ctx->pc = 0x15daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952924)));
    // 0x15daf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15daf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15dafc: 0xac62c0bc  sw          $v0, -0x3F44($v1)
    ctx->pc = 0x15dafcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294951100), GPR_U32(ctx, 2));
    // 0x15db00: 0x3e00008  jr          $ra
    ctx->pc = 0x15DB00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DB00u;
            // 0x15db04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D918u: goto label_15d918;
            case 0x15D950u: goto label_15d950;
            case 0x15D988u: goto label_15d988;
            case 0x15D9A4u: goto label_15d9a4;
            case 0x15D9B8u: goto label_15d9b8;
            case 0x15D9E0u: goto label_15d9e0;
            case 0x15D9F4u: goto label_15d9f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15DB08u;
    // 0x15db08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15db08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15db0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15db0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15db10: 0x8c8500d4  lw          $a1, 0xD4($a0)
    ctx->pc = 0x15db10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x15db14: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x15db14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x15db18: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x15db18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15db1c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x15db1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15db20: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x15db20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15db24: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x15db24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x15db28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15db28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15db2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15db30: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x15db30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15db34: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x15db34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15db38: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x15db38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x15db3c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x15db3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15db40: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x15db40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x15db44: 0x40f809  jalr        $v0
    ctx->pc = 0x15DB44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15DB4Cu);
        ctx->pc = 0x15DB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DB44u;
            // 0x15db48: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15DB4Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D918u: goto label_15d918;
            case 0x15D950u: goto label_15d950;
            case 0x15D988u: goto label_15d988;
            case 0x15D9A4u: goto label_15d9a4;
            case 0x15D9B8u: goto label_15d9b8;
            case 0x15D9E0u: goto label_15d9e0;
            case 0x15D9F4u: goto label_15d9f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15DB4Cu; }
            if (ctx->pc != 0x15DB4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15DB4Cu;
    // 0x15db4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15db4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15db50: 0x3e00008  jr          $ra
    ctx->pc = 0x15DB50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DB50u;
            // 0x15db54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D918u: goto label_15d918;
            case 0x15D950u: goto label_15d950;
            case 0x15D988u: goto label_15d988;
            case 0x15D9A4u: goto label_15d9a4;
            case 0x15D9B8u: goto label_15d9b8;
            case 0x15D9E0u: goto label_15d9e0;
            case 0x15D9F4u: goto label_15d9f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15DB58u;
    // 0x15db58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15db58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15db5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15db5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15db60: 0x8c8500d4  lw          $a1, 0xD4($a0)
    ctx->pc = 0x15db60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x15db64: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x15db64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x15db68: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x15db68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15db6c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x15db6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15db70: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x15db70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15db74: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x15db74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x15db78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15db78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15db7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15db80: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x15db80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15db84: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x15db84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15db88: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x15db88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x15db8c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x15db8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x15db90: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x15db90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x15db94: 0x40f809  jalr        $v0
    ctx->pc = 0x15DB94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15DB9Cu);
        ctx->pc = 0x15DB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DB94u;
            // 0x15db98: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15DB9Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D918u: goto label_15d918;
            case 0x15D950u: goto label_15d950;
            case 0x15D988u: goto label_15d988;
            case 0x15D9A4u: goto label_15d9a4;
            case 0x15D9B8u: goto label_15d9b8;
            case 0x15D9E0u: goto label_15d9e0;
            case 0x15D9F4u: goto label_15d9f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15DB9Cu; }
            if (ctx->pc != 0x15DB9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15DB9Cu;
    // 0x15db9c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x15db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x15dba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15dba4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15dba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15dba8: 0xac62c0b8  sw          $v0, -0x3F48($v1)
    ctx->pc = 0x15dba8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294951096), GPR_U32(ctx, 2));
    // 0x15dbac: 0x3e00008  jr          $ra
    ctx->pc = 0x15DBACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DBACu;
            // 0x15dbb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D918u: goto label_15d918;
            case 0x15D950u: goto label_15d950;
            case 0x15D988u: goto label_15d988;
            case 0x15D9A4u: goto label_15d9a4;
            case 0x15D9B8u: goto label_15d9b8;
            case 0x15D9E0u: goto label_15d9e0;
            case 0x15D9F4u: goto label_15d9f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15DBB4u;
    // 0x15dbb4: 0x0  nop
    ctx->pc = 0x15dbb4u;
    // NOP
    // 0x15dbb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15dbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15dbbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15dbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15dbc0: 0x8c8500d4  lw          $a1, 0xD4($a0)
    ctx->pc = 0x15dbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x15dbc4: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x15dbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x15dbc8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x15dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15dbcc: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x15dbccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15dbd0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x15dbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15dbd4: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x15dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x15dbd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15dbdc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15dbe0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x15dbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15dbe4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x15dbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15dbe8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x15dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x15dbec: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x15dbecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x15dbf0: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x15dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x15dbf4: 0x40f809  jalr        $v0
    ctx->pc = 0x15DBF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15DBFCu);
        ctx->pc = 0x15DBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DBF4u;
            // 0x15dbf8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15DBFCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D918u: goto label_15d918;
            case 0x15D950u: goto label_15d950;
            case 0x15D988u: goto label_15d988;
            case 0x15D9A4u: goto label_15d9a4;
            case 0x15D9B8u: goto label_15d9b8;
            case 0x15D9E0u: goto label_15d9e0;
            case 0x15D9F4u: goto label_15d9f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15DBFCu; }
            if (ctx->pc != 0x15DBFCu) { return; }
        }
        }
    }
    ctx->pc = 0x15DBFCu;
    // 0x15dbfc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x15dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x15dc00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15dc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15dc04: 0xac40c0b8  sw          $zero, -0x3F48($v0)
    ctx->pc = 0x15dc04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294951096), GPR_U32(ctx, 0));
    // 0x15dc08: 0x3e00008  jr          $ra
    ctx->pc = 0x15DC08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DC08u;
            // 0x15dc0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D918u: goto label_15d918;
            case 0x15D950u: goto label_15d950;
            case 0x15D988u: goto label_15d988;
            case 0x15D9A4u: goto label_15d9a4;
            case 0x15D9B8u: goto label_15d9b8;
            case 0x15D9E0u: goto label_15d9e0;
            case 0x15D9F4u: goto label_15d9f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15DC10u;
    // 0x15dc10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15dc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15dc14: 0x0  nop
    ctx->pc = 0x15dc14u;
    // NOP
}
