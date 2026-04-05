#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174830
// Address: 0x174830 - 0x175148
void sub_00174830_0x174830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174830_0x174830");
#endif

    ctx->pc = 0x174830u;

    // 0x174830: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x174830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x174834: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x174834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x174838: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x174838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x17483c: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x17483cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x174840: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x174840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x174844: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x174844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x174848: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x174848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17484c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x17484cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x174850: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x174850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x174854: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x174854u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174858: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x174858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x17485c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x17485cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174864: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x174864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x174868: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x174868u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x17486c: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x17486cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x174870: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x174870u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x174874: 0x26500028  addiu       $s0, $s2, 0x28
    ctx->pc = 0x174874u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x174878: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x174878u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x17487c: 0xa6470004  sh          $a3, 0x4($s2)
    ctx->pc = 0x17487cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x174880: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x174880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x174884: 0xa6480000  sh          $t0, 0x0($s2)
    ctx->pc = 0x174884u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x174888: 0xae460020  sw          $a2, 0x20($s2)
    ctx->pc = 0x174888u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 6));
    // 0x17488c: 0x26510034  addiu       $s1, $s2, 0x34
    ctx->pc = 0x17488cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x174890: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x174890u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x174894: 0xc08e222  jal         func_238888
    ctx->pc = 0x174894u;
    SET_GPR_U32(ctx, 31, 0x17489Cu);
    ctx->pc = 0x174898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174894u;
            // 0x174898: 0xa6420002  sh          $v0, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17489Cu; }
        if (ctx->pc != 0x17489Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17489Cu; }
        if (ctx->pc != 0x17489Cu) { return; }
    }
    ctx->pc = 0x17489Cu;
    // 0x17489c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x17489cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1748a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1748a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1748a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1748a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1748a8: 0xc08e222  jal         func_238888
    ctx->pc = 0x1748A8u;
    SET_GPR_U32(ctx, 31, 0x1748B0u);
    ctx->pc = 0x1748ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1748A8u;
            // 0x1748ac: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1748B0u; }
        if (ctx->pc != 0x1748B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1748B0u; }
        if (ctx->pc != 0x1748B0u) { return; }
    }
    ctx->pc = 0x1748B0u;
    // 0x1748b0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1748b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1748b4: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1748b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1748b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1748b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1748bc: 0x246307e0  addiu       $v1, $v1, 0x7E0
    ctx->pc = 0x1748bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2016));
    // 0x1748c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1748c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1748c4: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x1748c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
    // 0x1748c8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1748c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1748cc: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x1748ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x1748d0: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x1748D0u;
    SET_GPR_U32(ctx, 31, 0x1748D8u);
    ctx->pc = 0x1748D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1748D0u;
            // 0x1748d4: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1748D8u; }
        if (ctx->pc != 0x1748D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1748D8u; }
        if (ctx->pc != 0x1748D8u) { return; }
    }
    ctx->pc = 0x1748D8u;
    // 0x1748d8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1748d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1748dc: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x1748dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x1748e0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1748e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1748e4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1748e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1748e8: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x1748e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1748ec: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x1748ECu;
    SET_GPR_U32(ctx, 31, 0x1748F4u);
    ctx->pc = 0x1748F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1748ECu;
            // 0x1748f0: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1748F4u; }
        if (ctx->pc != 0x1748F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1748F4u; }
        if (ctx->pc != 0x1748F4u) { return; }
    }
    ctx->pc = 0x1748F4u;
    // 0x1748f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1748f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1748f8: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x1748f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x1748fc: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x1748fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x174900: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x174900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x174904: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x174904u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
    // 0x174908: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x174908u;
    SET_GPR_U32(ctx, 31, 0x174910u);
    ctx->pc = 0x17490Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174908u;
            // 0x17490c: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174910u; }
        if (ctx->pc != 0x174910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174910u; }
        if (ctx->pc != 0x174910u) { return; }
    }
    ctx->pc = 0x174910u;
    // 0x174910: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174914: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x174914u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174918: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x174918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17491c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17491cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_174920:
    // 0x174920: 0x0  nop
    ctx->pc = 0x174920u;
    // NOP
    // 0x174924: 0x0  nop
    ctx->pc = 0x174924u;
    // NOP
    // 0x174928: 0x0  nop
    ctx->pc = 0x174928u;
    // NOP
    // 0x17492c: 0x0  nop
    ctx->pc = 0x17492cu;
    // NOP
    // 0x174930: 0x0  nop
    ctx->pc = 0x174930u;
    // NOP
    // 0x174934: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x174934u;
    {
        const bool branch_taken_0x174934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x174938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174934u;
            // 0x174938: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174934) {
            ctx->pc = 0x174920u;
            runtime->cooperativeGuestYield();
            goto label_174920;
        }
    }
    ctx->pc = 0x17493Cu;
    // 0x17493c: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x17493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x174940: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x174940u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174944: 0xae440024  sw          $a0, 0x24($s2)
    ctx->pc = 0x174944u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
    // 0x174948: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x174948u;
    {
        const bool branch_taken_0x174948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17494Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174948u;
            // 0x17494c: 0xae400044  sw          $zero, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174948) {
            ctx->pc = 0x1749FCu;
            goto label_1749fc;
        }
    }
    ctx->pc = 0x174950u;
    // 0x174950: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x174950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x174954: 0x0  nop
    ctx->pc = 0x174954u;
    // NOP
label_174958:
    // 0x174958: 0x8e510014  lw          $s1, 0x14($s2)
    ctx->pc = 0x174958u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x17495c: 0x2708018  mult        $s0, $s3, $s0
    ctx->pc = 0x17495cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x174960: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x174960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x174964: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x174964u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x174968: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x174968u;
    SET_GPR_U32(ctx, 31, 0x174970u);
    ctx->pc = 0x17496Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174968u;
            // 0x17496c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174970u; }
        if (ctx->pc != 0x174970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174970u; }
        if (ctx->pc != 0x174970u) { return; }
    }
    ctx->pc = 0x174970u;
    // 0x174970: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x174970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x174974: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x174974u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174978: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x174978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17497c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x17497Cu;
    {
        const bool branch_taken_0x17497c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x174980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17497Cu;
            // 0x174980: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17497c) {
            ctx->pc = 0x1749ACu;
            goto label_1749ac;
        }
    }
    ctx->pc = 0x174984u;
    // 0x174984: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174988: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x174988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17498c: 0x0  nop
    ctx->pc = 0x17498cu;
    // NOP
label_174990:
    // 0x174990: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x174990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x174994: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x174994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x174998: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x174998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17499c: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x17499cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1749a0: 0x0  nop
    ctx->pc = 0x1749a0u;
    // NOP
    // 0x1749a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1749A4u;
    {
        const bool branch_taken_0x1749a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1749A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1749A4u;
            // 0x1749a8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1749a4) {
            ctx->pc = 0x174990u;
            runtime->cooperativeGuestYield();
            goto label_174990;
        }
    }
    ctx->pc = 0x1749ACu;
label_1749ac:
    // 0x1749ac: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1749acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1749b0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1749B0u;
    {
        const bool branch_taken_0x1749b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1749B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1749B0u;
            // 0x1749b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1749b0) {
            ctx->pc = 0x1749E8u;
            goto label_1749e8;
        }
    }
    ctx->pc = 0x1749B8u;
    // 0x1749b8: 0x8e470024  lw          $a3, 0x24($s2)
    ctx->pc = 0x1749b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1749bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1749bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1749c0:
    // 0x1749c0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1749c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1749c4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1749c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1749c8: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x1749c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1749cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1749ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1749d0: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x1749d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1749d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1749d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1749d8: 0xa6202b  sltu        $a0, $a1, $a2
    ctx->pc = 0x1749d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1749dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1749dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1749e0: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1749E0u;
    {
        const bool branch_taken_0x1749e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1749E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1749E0u;
            // 0x1749e4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1749e0) {
            ctx->pc = 0x1749C0u;
            runtime->cooperativeGuestYield();
            goto label_1749c0;
        }
    }
    ctx->pc = 0x1749E8u;
label_1749e8:
    // 0x1749e8: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x1749e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1749ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1749ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1749f0: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1749f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1749f4: 0x5440ffd8  bnel        $v0, $zero, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1749F4u;
    {
        const bool branch_taken_0x1749f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1749f4) {
            ctx->pc = 0x1749F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1749F4u;
            // 0x1749f8: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x174958u;
            runtime->cooperativeGuestYield();
            goto label_174958;
        }
    }
    ctx->pc = 0x1749FCu;
label_1749fc:
    // 0x1749fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1749fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x174a00: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x174a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x174a04: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x174a04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
    // 0x174a08: 0x2442e2d0  addiu       $v0, $v0, -0x1D30
    ctx->pc = 0x174a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959824));
    // 0x174a0c: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x174a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x174a10: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x174a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x174a14: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x174a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x174a18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x174a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174a1c: 0xac72c4ac  sw          $s2, -0x3B54($v1)
    ctx->pc = 0x174a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952108), GPR_U32(ctx, 18));
    // 0x174a20: 0xae4200d0  sw          $v0, 0xD0($s2)
    ctx->pc = 0x174a20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
    // 0x174a24: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x174a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x174a28: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x174a28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x174a2c: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x174a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
    // 0x174a30: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x174a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x174a34: 0xc09af78  jal         func_26BDE0
    ctx->pc = 0x174A34u;
    SET_GPR_U32(ctx, 31, 0x174A3Cu);
    ctx->pc = 0x174A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174A34u;
            // 0x174a38: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BDE0u;
    if (runtime->hasFunction(0x26BDE0u)) {
        auto targetFn = runtime->lookupFunction(0x26BDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A3Cu; }
        if (ctx->pc != 0x174A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026BDE0_0x26bde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A3Cu; }
        if (ctx->pc != 0x174A3Cu) { return; }
    }
    ctx->pc = 0x174A3Cu;
    // 0x174a3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x174a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174a40: 0xc09b1ca  jal         func_26C728
    ctx->pc = 0x174A40u;
    SET_GPR_U32(ctx, 31, 0x174A48u);
    ctx->pc = 0x174A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174A40u;
            // 0x174a44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C728u;
    if (runtime->hasFunction(0x26C728u)) {
        auto targetFn = runtime->lookupFunction(0x26C728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A48u; }
        if (ctx->pc != 0x174A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26c728_0x26c760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A48u; }
        if (ctx->pc != 0x174A48u) { return; }
    }
    ctx->pc = 0x174A48u;
    // 0x174a48: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x174a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x174a4c: 0xc09b1ca  jal         func_26C728
    ctx->pc = 0x174A4Cu;
    SET_GPR_U32(ctx, 31, 0x174A54u);
    ctx->pc = 0x174A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174A4Cu;
            // 0x174a50: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C728u;
    if (runtime->hasFunction(0x26C728u)) {
        auto targetFn = runtime->lookupFunction(0x26C728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A54u; }
        if (ctx->pc != 0x174A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26c728_0x26c760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A54u; }
        if (ctx->pc != 0x174A54u) { return; }
    }
    ctx->pc = 0x174A54u;
    // 0x174a54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x174a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174a58: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x174a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x174a5c: 0xc09af68  jal         func_26BDA0
    ctx->pc = 0x174A5Cu;
    SET_GPR_U32(ctx, 31, 0x174A64u);
    ctx->pc = 0x174A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174A5Cu;
            // 0x174a60: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BDA0u;
    if (runtime->hasFunction(0x26BDA0u)) {
        auto targetFn = runtime->lookupFunction(0x26BDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A64u; }
        if (ctx->pc != 0x174A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26bda0_0x26bde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A64u; }
        if (ctx->pc != 0x174A64u) { return; }
    }
    ctx->pc = 0x174A64u;
    // 0x174a64: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x174a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x174a68: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x174a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x174a6c: 0xc09af68  jal         func_26BDA0
    ctx->pc = 0x174A6Cu;
    SET_GPR_U32(ctx, 31, 0x174A74u);
    ctx->pc = 0x174A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174A6Cu;
            // 0x174a70: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BDA0u;
    if (runtime->hasFunction(0x26BDA0u)) {
        auto targetFn = runtime->lookupFunction(0x26BDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A74u; }
        if (ctx->pc != 0x174A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26bda0_0x26bde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A74u; }
        if (ctx->pc != 0x174A74u) { return; }
    }
    ctx->pc = 0x174A74u;
    // 0x174a74: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x174a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x174a78: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x174a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x174a7c: 0xc09af68  jal         func_26BDA0
    ctx->pc = 0x174A7Cu;
    SET_GPR_U32(ctx, 31, 0x174A84u);
    ctx->pc = 0x174A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174A7Cu;
            // 0x174a80: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BDA0u;
    if (runtime->hasFunction(0x26BDA0u)) {
        auto targetFn = runtime->lookupFunction(0x26BDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A84u; }
        if (ctx->pc != 0x174A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26bda0_0x26bde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A84u; }
        if (ctx->pc != 0x174A84u) { return; }
    }
    ctx->pc = 0x174A84u;
    // 0x174a84: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x174a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x174a88: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x174a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x174a8c: 0xc09af68  jal         func_26BDA0
    ctx->pc = 0x174A8Cu;
    SET_GPR_U32(ctx, 31, 0x174A94u);
    ctx->pc = 0x174A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174A8Cu;
            // 0x174a90: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BDA0u;
    if (runtime->hasFunction(0x26BDA0u)) {
        auto targetFn = runtime->lookupFunction(0x26BDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A94u; }
        if (ctx->pc != 0x174A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26bda0_0x26bde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A94u; }
        if (ctx->pc != 0x174A94u) { return; }
    }
    ctx->pc = 0x174A94u;
    // 0x174a94: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x174a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x174a98: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x174a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x174a9c: 0xc09af68  jal         func_26BDA0
    ctx->pc = 0x174A9Cu;
    SET_GPR_U32(ctx, 31, 0x174AA4u);
    ctx->pc = 0x174AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174A9Cu;
            // 0x174aa0: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BDA0u;
    if (runtime->hasFunction(0x26BDA0u)) {
        auto targetFn = runtime->lookupFunction(0x26BDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174AA4u; }
        if (ctx->pc != 0x174AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26bda0_0x26bde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174AA4u; }
        if (ctx->pc != 0x174AA4u) { return; }
    }
    ctx->pc = 0x174AA4u;
    // 0x174aa4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x174aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x174aa8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x174aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x174aac: 0xc09af68  jal         func_26BDA0
    ctx->pc = 0x174AACu;
    SET_GPR_U32(ctx, 31, 0x174AB4u);
    ctx->pc = 0x174AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174AACu;
            // 0x174ab0: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BDA0u;
    if (runtime->hasFunction(0x26BDA0u)) {
        auto targetFn = runtime->lookupFunction(0x26BDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174AB4u; }
        if (ctx->pc != 0x174AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26bda0_0x26bde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174AB4u; }
        if (ctx->pc != 0x174AB4u) { return; }
    }
    ctx->pc = 0x174AB4u;
    // 0x174ab4: 0xc05d1b6  jal         func_1746D8
    ctx->pc = 0x174AB4u;
    SET_GPR_U32(ctx, 31, 0x174ABCu);
    ctx->pc = 0x174AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174AB4u;
            // 0x174ab8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1746D8u;
    if (runtime->hasFunction(0x1746D8u)) {
        auto targetFn = runtime->lookupFunction(0x1746D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174ABCu; }
        if (ctx->pc != 0x174ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001746D8_0x1746d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174ABCu; }
        if (ctx->pc != 0x174ABCu) { return; }
    }
    ctx->pc = 0x174ABCu;
    // 0x174abc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x174abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x174ac0: 0x24031f40  addiu       $v1, $zero, 0x1F40
    ctx->pc = 0x174ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
    // 0x174ac4: 0x24444f18  addiu       $a0, $v0, 0x4F18
    ctx->pc = 0x174ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20248));
    // 0x174ac8: 0xac434f18  sw          $v1, 0x4F18($v0)
    ctx->pc = 0x174ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20248), GPR_U32(ctx, 3));
    // 0x174acc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x174accu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x174ad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ad4: 0x0  nop
    ctx->pc = 0x174ad4u;
    // NOP
label_174ad8:
    // 0x174ad8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x174ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x174adc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x174adcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x174ae0: 0x24424f20  addiu       $v0, $v0, 0x4F20
    ctx->pc = 0x174ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20256));
    // 0x174ae4: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x174ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x174ae8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x174ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x174aec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x174aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x174af0: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x174af0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x174af4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x174AF4u;
    {
        const bool branch_taken_0x174af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174AF4u;
            // 0x174af8: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174af4) {
            ctx->pc = 0x174AD8u;
            runtime->cooperativeGuestYield();
            goto label_174ad8;
        }
    }
    ctx->pc = 0x174AFCu;
    // 0x174afc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x174afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174b00:
    // 0x174b00: 0xc09af4a  jal         func_26BD28
    ctx->pc = 0x174B00u;
    SET_GPR_U32(ctx, 31, 0x174B08u);
    ctx->pc = 0x174B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174B00u;
            // 0x174b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BD28u;
    if (runtime->hasFunction(0x26BD28u)) {
        auto targetFn = runtime->lookupFunction(0x26BD28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B08u; }
        if (ctx->pc != 0x174B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026BD28_0x26bd28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B08u; }
        if (ctx->pc != 0x174B08u) { return; }
    }
    ctx->pc = 0x174B08u;
    // 0x174b08: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x174b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x174b0c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x174b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x174b10: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x174b10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x174b14: 0x248449b0  addiu       $a0, $a0, 0x49B0
    ctx->pc = 0x174b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18864));
    // 0x174b18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x174b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174b1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x174b1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x174b20: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x174b20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x174b24: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x174b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x174b28: 0x25074e98  addiu       $a3, $t0, 0x4E98
    ctx->pc = 0x174b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 20120));
    // 0x174b2c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x174b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x174b30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x174b30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x174b34: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x174b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x174b38: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x174b38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x174b3c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x174b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b40: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x174b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x174b44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x174b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x174b48: 0x2a02000f  slti        $v0, $s0, 0xF
    ctx->pc = 0x174b48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x174b4c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x174b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x174b50: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x174B50u;
    {
        const bool branch_taken_0x174b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174B50u;
            // 0x174b54: 0xacc00008  sw          $zero, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b50) {
            ctx->pc = 0x174B00u;
            runtime->cooperativeGuestYield();
            goto label_174b00;
        }
    }
    ctx->pc = 0x174B58u;
    // 0x174b58: 0x3c0145fa  lui         $at, 0x45FA
    ctx->pc = 0x174b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17914 << 16));
    // 0x174b5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x174b5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174b60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x174b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b64: 0xe4e0003c  swc1        $f0, 0x3C($a3)
    ctx->pc = 0x174b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 60), bits); }
label_174b68:
    // 0x174b68: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x174b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x174b6c: 0x25034e98  addiu       $v1, $t0, 0x4E98
    ctx->pc = 0x174b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 20120));
    // 0x174b70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x174b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x174b74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x174b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x174b78: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x174b78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x174b7c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x174B7Cu;
    {
        const bool branch_taken_0x174b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174B7Cu;
            // 0x174b80: 0xac600040  sw          $zero, 0x40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b7c) {
            ctx->pc = 0x174B68u;
            runtime->cooperativeGuestYield();
            goto label_174b68;
        }
    }
    ctx->pc = 0x174B84u;
    // 0x174b84: 0xc05ccf0  jal         func_1733C0
    ctx->pc = 0x174B84u;
    SET_GPR_U32(ctx, 31, 0x174B8Cu);
    ctx->pc = 0x1733C0u;
    if (runtime->hasFunction(0x1733C0u)) {
        auto targetFn = runtime->lookupFunction(0x1733C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B8Cu; }
        if (ctx->pc != 0x174B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1733c0_0x1733d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B8Cu; }
        if (ctx->pc != 0x174B8Cu) { return; }
    }
    ctx->pc = 0x174B8Cu;
    // 0x174b8c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x174b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b90: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x174b90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x174b94: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x174b94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174b98: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x174b98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174b9c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x174b9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174ba0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x174ba0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174ba4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x174BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174BA8u;
            // 0x174bac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174920u: goto label_174920;
            case 0x174958u: goto label_174958;
            case 0x174990u: goto label_174990;
            case 0x1749ACu: goto label_1749ac;
            case 0x1749C0u: goto label_1749c0;
            case 0x1749E8u: goto label_1749e8;
            case 0x1749FCu: goto label_1749fc;
            case 0x174AD8u: goto label_174ad8;
            case 0x174B00u: goto label_174b00;
            case 0x174B68u: goto label_174b68;
            case 0x174D8Cu: goto label_174d8c;
            case 0x174DF8u: goto label_174df8;
            case 0x174E50u: goto label_174e50;
            case 0x174E80u: goto label_174e80;
            case 0x174EA0u: goto label_174ea0;
            case 0x174EA4u: goto label_174ea4;
            case 0x174EA8u: goto label_174ea8;
            case 0x174EACu: goto label_174eac;
            case 0x174EE0u: goto label_174ee0;
            case 0x174EE4u: goto label_174ee4;
            case 0x174F60u: goto label_174f60;
            case 0x174FA8u: goto label_174fa8;
            case 0x174FE8u: goto label_174fe8;
            case 0x174FF0u: goto label_174ff0;
            case 0x175098u: goto label_175098;
            case 0x175100u: goto label_175100;
            case 0x175120u: goto label_175120;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174BB0u;
    // 0x174bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x174bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x174bb4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x174bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x174bb8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x174bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x174bbc: 0x2442e2d0  addiu       $v0, $v0, -0x1D30
    ctx->pc = 0x174bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959824));
    // 0x174bc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x174bc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174bc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174bcc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x174bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174bd0: 0xc09aecc  jal         func_26BB30
    ctx->pc = 0x174BD0u;
    SET_GPR_U32(ctx, 31, 0x174BD8u);
    ctx->pc = 0x174BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174BD0u;
            // 0x174bd4: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BB30u;
    if (runtime->hasFunction(0x26BB30u)) {
        auto targetFn = runtime->lookupFunction(0x26BB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174BD8u; }
        if (ctx->pc != 0x174BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026BB30_0x26bb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174BD8u; }
        if (ctx->pc != 0x174BD8u) { return; }
    }
    ctx->pc = 0x174BD8u;
    // 0x174bd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174bdc: 0xc08eb42  jal         func_23AD08
    ctx->pc = 0x174BDCu;
    SET_GPR_U32(ctx, 31, 0x174BE4u);
    ctx->pc = 0x174BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174BDCu;
            // 0x174be0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AD08u;
    if (runtime->hasFunction(0x23AD08u)) {
        auto targetFn = runtime->lookupFunction(0x23AD08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174BE4u; }
        if (ctx->pc != 0x174BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ad08_0x23ad30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174BE4u; }
        if (ctx->pc != 0x174BE4u) { return; }
    }
    ctx->pc = 0x174BE4u;
    // 0x174be4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x174be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174be8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174bec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x174BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174BF0u;
            // 0x174bf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174920u: goto label_174920;
            case 0x174958u: goto label_174958;
            case 0x174990u: goto label_174990;
            case 0x1749ACu: goto label_1749ac;
            case 0x1749C0u: goto label_1749c0;
            case 0x1749E8u: goto label_1749e8;
            case 0x1749FCu: goto label_1749fc;
            case 0x174AD8u: goto label_174ad8;
            case 0x174B00u: goto label_174b00;
            case 0x174B68u: goto label_174b68;
            case 0x174D8Cu: goto label_174d8c;
            case 0x174DF8u: goto label_174df8;
            case 0x174E50u: goto label_174e50;
            case 0x174E80u: goto label_174e80;
            case 0x174EA0u: goto label_174ea0;
            case 0x174EA4u: goto label_174ea4;
            case 0x174EA8u: goto label_174ea8;
            case 0x174EACu: goto label_174eac;
            case 0x174EE0u: goto label_174ee0;
            case 0x174EE4u: goto label_174ee4;
            case 0x174F60u: goto label_174f60;
            case 0x174FA8u: goto label_174fa8;
            case 0x174FE8u: goto label_174fe8;
            case 0x174FF0u: goto label_174ff0;
            case 0x175098u: goto label_175098;
            case 0x175100u: goto label_175100;
            case 0x175120u: goto label_175120;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174BF8u;
    // 0x174bf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x174bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x174bfc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x174bfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c00: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x174c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x174c04: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x174c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x174c08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x174c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x174c0c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x174c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x174c10: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x174c10u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x174c14: 0x8c6800d0  lw          $t0, 0xD0($v1)
    ctx->pc = 0x174c14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x174c18: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x174c18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x174c1c: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x174c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x174c20: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x174c20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x174c24: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x174c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x174c28: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x174c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x174c2c: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x174c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x174c30: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x174c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x174c34: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x174c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x174c38: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x174c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x174c3c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x174c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x174c40: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x174C40u;
    SET_GPR_U32(ctx, 31, 0x174C48u);
    ctx->pc = 0x174C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174C40u;
            // 0x174c44: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C48u; }
        if (ctx->pc != 0x174C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C48u; }
        if (ctx->pc != 0x174C48u) { return; }
    }
    ctx->pc = 0x174C48u;
    // 0x174c48: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x174c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174c4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x174c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c50: 0x3c06dead  lui         $a2, 0xDEAD
    ctx->pc = 0x174c50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57005 << 16));
    // 0x174c54: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x174c54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x174c58: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x174c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x174c5c: 0x24e70978  addiu       $a3, $a3, 0x978
    ctx->pc = 0x174c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2424));
    // 0x174c60: 0x34c6beef  ori         $a2, $a2, 0xBEEF
    ctx->pc = 0x174c60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48879);
    // 0x174c64: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x174c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x174c68: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x174c68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x174c6c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x174c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x174c70: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x174c70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x174c74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x174c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c78: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x174c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x174c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c80: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x174c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x174c84: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x174c84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x174c88: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x174c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x174c8c: 0xc08e222  jal         func_238888
    ctx->pc = 0x174C8Cu;
    SET_GPR_U32(ctx, 31, 0x174C94u);
    ctx->pc = 0x174C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174C8Cu;
            // 0x174c90: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C94u; }
        if (ctx->pc != 0x174C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C94u; }
        if (ctx->pc != 0x174C94u) { return; }
    }
    ctx->pc = 0x174C94u;
    // 0x174c94: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x174c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x174c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x174c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ca0: 0xc08e222  jal         func_238888
    ctx->pc = 0x174CA0u;
    SET_GPR_U32(ctx, 31, 0x174CA8u);
    ctx->pc = 0x174CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174CA0u;
            // 0x174ca4: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174CA8u; }
        if (ctx->pc != 0x174CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174CA8u; }
        if (ctx->pc != 0x174CA8u) { return; }
    }
    ctx->pc = 0x174CA8u;
    // 0x174ca8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x174ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x174cac: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x174cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x174cb0: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x174cb0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x174cb4: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x174cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x174cb8: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x174cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174cbc: 0x2484e390  addiu       $a0, $a0, -0x1C70
    ctx->pc = 0x174cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960016));
    // 0x174cc0: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x174cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174cc4: 0x30a5ffdf  andi        $a1, $a1, 0xFFDF
    ctx->pc = 0x174cc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65503);
    // 0x174cc8: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x174cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x174ccc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x174cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x174cd0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x174cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x174cd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x174cd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174cd8: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x174cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x174cdc: 0xae080010  sw          $t0, 0x10($s0)
    ctx->pc = 0x174cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 8));
    // 0x174ce0: 0xae070034  sw          $a3, 0x34($s0)
    ctx->pc = 0x174ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
    // 0x174ce4: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x174ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x174ce8: 0xa6050004  sh          $a1, 0x4($s0)
    ctx->pc = 0x174ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x174cec: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x174cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x174cf0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x174cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x174cf4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x174cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x174cf8: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x174cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x174cfc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x174cfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174d00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x174d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174d04: 0x3e00008  jr          $ra
    ctx->pc = 0x174D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174D04u;
            // 0x174d08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174920u: goto label_174920;
            case 0x174958u: goto label_174958;
            case 0x174990u: goto label_174990;
            case 0x1749ACu: goto label_1749ac;
            case 0x1749C0u: goto label_1749c0;
            case 0x1749E8u: goto label_1749e8;
            case 0x1749FCu: goto label_1749fc;
            case 0x174AD8u: goto label_174ad8;
            case 0x174B00u: goto label_174b00;
            case 0x174B68u: goto label_174b68;
            case 0x174D8Cu: goto label_174d8c;
            case 0x174DF8u: goto label_174df8;
            case 0x174E50u: goto label_174e50;
            case 0x174E80u: goto label_174e80;
            case 0x174EA0u: goto label_174ea0;
            case 0x174EA4u: goto label_174ea4;
            case 0x174EA8u: goto label_174ea8;
            case 0x174EACu: goto label_174eac;
            case 0x174EE0u: goto label_174ee0;
            case 0x174EE4u: goto label_174ee4;
            case 0x174F60u: goto label_174f60;
            case 0x174FA8u: goto label_174fa8;
            case 0x174FE8u: goto label_174fe8;
            case 0x174FF0u: goto label_174ff0;
            case 0x175098u: goto label_175098;
            case 0x175100u: goto label_175100;
            case 0x175120u: goto label_175120;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174D0Cu;
    // 0x174d0c: 0x0  nop
    ctx->pc = 0x174d0cu;
    // NOP
    // 0x174d10: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x174d10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x174d14: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x174d14u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x174d18: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x174d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x174d1c: 0x24424f30  addiu       $v0, $v0, 0x4F30
    ctx->pc = 0x174d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20272));
    // 0x174d20: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x174d20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x174d24: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x174d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x174d28: 0x3e00008  jr          $ra
    ctx->pc = 0x174D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174D28u;
            // 0x174d2c: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174920u: goto label_174920;
            case 0x174958u: goto label_174958;
            case 0x174990u: goto label_174990;
            case 0x1749ACu: goto label_1749ac;
            case 0x1749C0u: goto label_1749c0;
            case 0x1749E8u: goto label_1749e8;
            case 0x1749FCu: goto label_1749fc;
            case 0x174AD8u: goto label_174ad8;
            case 0x174B00u: goto label_174b00;
            case 0x174B68u: goto label_174b68;
            case 0x174D8Cu: goto label_174d8c;
            case 0x174DF8u: goto label_174df8;
            case 0x174E50u: goto label_174e50;
            case 0x174E80u: goto label_174e80;
            case 0x174EA0u: goto label_174ea0;
            case 0x174EA4u: goto label_174ea4;
            case 0x174EA8u: goto label_174ea8;
            case 0x174EACu: goto label_174eac;
            case 0x174EE0u: goto label_174ee0;
            case 0x174EE4u: goto label_174ee4;
            case 0x174F60u: goto label_174f60;
            case 0x174FA8u: goto label_174fa8;
            case 0x174FE8u: goto label_174fe8;
            case 0x174FF0u: goto label_174ff0;
            case 0x175098u: goto label_175098;
            case 0x175100u: goto label_175100;
            case 0x175120u: goto label_175120;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174D30u;
    // 0x174d30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x174d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x174d34: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x174d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x174d38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x174d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x174d3c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x174d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x174d40: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x174d40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d44: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x174d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x174d48: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x174d48u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x174d4c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x174d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x174d50: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x174d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x174d54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x174d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x174d58: 0xc09ae46  jal         func_26B918
    ctx->pc = 0x174D58u;
    SET_GPR_U32(ctx, 31, 0x174D60u);
    ctx->pc = 0x174D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174D58u;
            // 0x174d5c: 0xac40c3b4  sw          $zero, -0x3C4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294951860), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B918u;
    if (runtime->hasFunction(0x26B918u)) {
        auto targetFn = runtime->lookupFunction(0x26B918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D60u; }
        if (ctx->pc != 0x174D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B918_0x26b918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D60u; }
        if (ctx->pc != 0x174D60u) { return; }
    }
    ctx->pc = 0x174D60u;
    // 0x174d60: 0xc09b17a  jal         func_26C5E8
    ctx->pc = 0x174D60u;
    SET_GPR_U32(ctx, 31, 0x174D68u);
    ctx->pc = 0x26C5E8u;
    if (runtime->hasFunction(0x26C5E8u)) {
        auto targetFn = runtime->lookupFunction(0x26C5E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D68u; }
        if (ctx->pc != 0x174D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26c5e8_0x26c5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D68u; }
        if (ctx->pc != 0x174D68u) { return; }
    }
    ctx->pc = 0x174D68u;
    // 0x174d68: 0xc05cc24  jal         func_173090
    ctx->pc = 0x174D68u;
    SET_GPR_U32(ctx, 31, 0x174D70u);
    ctx->pc = 0x173090u;
    if (runtime->hasFunction(0x173090u)) {
        auto targetFn = runtime->lookupFunction(0x173090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D70u; }
        if (ctx->pc != 0x174D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173090_0x173090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D70u; }
        if (ctx->pc != 0x174D70u) { return; }
    }
    ctx->pc = 0x174D70u;
    // 0x174d70: 0x8e82c3a4  lw          $v0, -0x3C5C($s4)
    ctx->pc = 0x174d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951844)));
    // 0x174d74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x174d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x174d78: 0x2c430100  sltiu       $v1, $v0, 0x100
    ctx->pc = 0x174d78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x174d7c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x174D7Cu;
    {
        const bool branch_taken_0x174d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x174D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174D7Cu;
            // 0x174d80: 0xae82c3a4  sw          $v0, -0x3C5C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294951844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d7c) {
            ctx->pc = 0x174D8Cu;
            goto label_174d8c;
        }
    }
    ctx->pc = 0x174D84u;
    // 0x174d84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174d88: 0xae82c3a4  sw          $v0, -0x3C5C($s4)
    ctx->pc = 0x174d88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294951844), GPR_U32(ctx, 2));
label_174d8c:
    // 0x174d8c: 0x8e86c3a4  lw          $a2, -0x3C5C($s4)
    ctx->pc = 0x174d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951844)));
    // 0x174d90: 0x3c0b0017  lui         $t3, 0x17
    ctx->pc = 0x174d90u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)23 << 16));
    // 0x174d94: 0x3c04534d  lui         $a0, 0x534D
    ctx->pc = 0x174d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
    // 0x174d98: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x174d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x174d9c: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x174d9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x174da0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x174da0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174da4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x174da4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174da8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x174da8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174dac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x174dacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174db0: 0x256b3480  addiu       $t3, $t3, 0x3480
    ctx->pc = 0x174db0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 13440));
    // 0x174db4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x174db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x174db8: 0xc09b272  jal         func_26C9C8
    ctx->pc = 0x174DB8u;
    SET_GPR_U32(ctx, 31, 0x174DC0u);
    ctx->pc = 0x174DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174DB8u;
            // 0x174dbc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C9C8u;
    if (runtime->hasFunction(0x26C9C8u)) {
        auto targetFn = runtime->lookupFunction(0x26C9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174DC0u; }
        if (ctx->pc != 0x174DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C9C8_0x26c9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174DC0u; }
        if (ctx->pc != 0x174DC0u) { return; }
    }
    ctx->pc = 0x174DC0u;
    // 0x174dc0: 0xc05ccf6  jal         func_1733D8
    ctx->pc = 0x174DC0u;
    SET_GPR_U32(ctx, 31, 0x174DC8u);
    ctx->pc = 0x174DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174DC0u;
            // 0x174dc4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1733D8u;
    if (runtime->hasFunction(0x1733D8u)) {
        auto targetFn = runtime->lookupFunction(0x1733D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174DC8u; }
        if (ctx->pc != 0x174DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1733d8_0x173430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174DC8u; }
        if (ctx->pc != 0x174DC8u) { return; }
    }
    ctx->pc = 0x174DC8u;
    // 0x174dc8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x174dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174dcc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x174dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x174dd0: 0x3c04534d  lui         $a0, 0x534D
    ctx->pc = 0x174dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
    // 0x174dd4: 0x8c46ed58  lw          $a2, -0x12A8($v0)
    ctx->pc = 0x174dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x174dd8: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x174dd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x174ddc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x174ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x174de0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x174de0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174de4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x174de4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174de8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x174de8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174dec: 0xc09b260  jal         func_26C980
    ctx->pc = 0x174DECu;
    SET_GPR_U32(ctx, 31, 0x174DF4u);
    ctx->pc = 0x174DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174DECu;
            // 0x174df0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C980u;
    if (runtime->hasFunction(0x26C980u)) {
        auto targetFn = runtime->lookupFunction(0x26C980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174DF4u; }
        if (ctx->pc != 0x174DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C980_0x26c980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174DF4u; }
        if (ctx->pc != 0x174DF4u) { return; }
    }
    ctx->pc = 0x174DF4u;
    // 0x174df4: 0x0  nop
    ctx->pc = 0x174df4u;
    // NOP
label_174df8:
    // 0x174df8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x174df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x174dfc: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x174dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x174e00: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x174e00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x174e04: 0x244249b0  addiu       $v0, $v0, 0x49B0
    ctx->pc = 0x174e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18864));
    // 0x174e08: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x174e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x174e0c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x174e0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x174e10: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x174e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x174e14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x174e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174e18: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x174e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x174e1c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x174e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x174e20: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x174E20u;
    {
        const bool branch_taken_0x174e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x174E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174E20u;
            // 0x174e24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e20) {
            ctx->pc = 0x174E50u;
            goto label_174e50;
        }
    }
    ctx->pc = 0x174E28u;
    // 0x174e28: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x174e28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x174e2c: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x174E2Cu;
    {
        const bool branch_taken_0x174e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174e2c) {
            ctx->pc = 0x174E30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x174E2Cu;
            // 0x174e30: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x174EA8u;
            goto label_174ea8;
        }
    }
    ctx->pc = 0x174E34u;
    // 0x174e34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x174e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x174e38: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x174E38u;
    {
        const bool branch_taken_0x174e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x174E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174E38u;
            // 0x174e3c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e38) {
            ctx->pc = 0x174EA4u;
            goto label_174ea4;
        }
    }
    ctx->pc = 0x174E40u;
    // 0x174e40: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x174E40u;
    {
        const bool branch_taken_0x174e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x174E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174E40u;
            // 0x174e44: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e40) {
            ctx->pc = 0x174E80u;
            goto label_174e80;
        }
    }
    ctx->pc = 0x174E48u;
    // 0x174e48: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x174E48u;
    {
        const bool branch_taken_0x174e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174E48u;
            // 0x174e4c: 0x24824e98  addiu       $v0, $a0, 0x4E98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e48) {
            ctx->pc = 0x174EACu;
            goto label_174eac;
        }
    }
    ctx->pc = 0x174E50u;
label_174e50:
    // 0x174e50: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x174e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174e54: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x174e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174e58: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x174e58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x174e5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x174e5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x174e60: 0x0  nop
    ctx->pc = 0x174e60u;
    // NOP
    // 0x174e64: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x174E64u;
    {
        const bool branch_taken_0x174e64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x174E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174E64u;
            // 0x174e68: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e64) {
            ctx->pc = 0x174EA0u;
            goto label_174ea0;
        }
    }
    ctx->pc = 0x174E6Cu;
    // 0x174e6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x174e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x174e70: 0x2231804  sllv        $v1, $v1, $s1
    ctx->pc = 0x174e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
    // 0x174e74: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x174e74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x174e78: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x174E78u;
    {
        const bool branch_taken_0x174e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174E78u;
            // 0x174e7c: 0x2439025  or          $s2, $s2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e78) {
            ctx->pc = 0x174EA0u;
            goto label_174ea0;
        }
    }
    ctx->pc = 0x174E80u;
label_174e80:
    // 0x174e80: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x174e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174e84: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x174e84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x174e88: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x174e88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x174e8c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x174e8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x174e90: 0x0  nop
    ctx->pc = 0x174e90u;
    // NOP
    // 0x174e94: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x174E94u;
    {
        const bool branch_taken_0x174e94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x174E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174E94u;
            // 0x174e98: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e94) {
            ctx->pc = 0x174EA0u;
            goto label_174ea0;
        }
    }
    ctx->pc = 0x174E9Cu;
    // 0x174e9c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x174e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_174ea0:
    // 0x174ea0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x174ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174ea4:
    // 0x174ea4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x174ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_174ea8:
    // 0x174ea8: 0x24824e98  addiu       $v0, $a0, 0x4E98
    ctx->pc = 0x174ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20120));
label_174eac:
    // 0x174eac: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x174eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x174eb0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x174eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x174eb4: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x174eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174eb8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x174eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174ebc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x174ebcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x174ec0: 0x0  nop
    ctx->pc = 0x174ec0u;
    // NOP
    // 0x174ec4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x174EC4u;
    {
        const bool branch_taken_0x174ec4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x174EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174EC4u;
            // 0x174ec8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ec4) {
            ctx->pc = 0x174EE0u;
            goto label_174ee0;
        }
    }
    ctx->pc = 0x174ECCu;
    // 0x174ecc: 0x8c42c48c  lw          $v0, -0x3B74($v0)
    ctx->pc = 0x174eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952076)));
    // 0x174ed0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x174ED0u;
    {
        const bool branch_taken_0x174ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174ed0) {
            ctx->pc = 0x174ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x174ED0u;
            // 0x174ed4: 0x24844e98  addiu       $a0, $a0, 0x4E98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x174EE4u;
            goto label_174ee4;
        }
    }
    ctx->pc = 0x174ED8u;
    // 0x174ed8: 0x50c00021  beql        $a2, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x174ED8u;
    {
        const bool branch_taken_0x174ed8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x174ed8) {
            ctx->pc = 0x174EDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x174ED8u;
            // 0x174edc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x174F60u;
            goto label_174f60;
        }
    }
    ctx->pc = 0x174EE0u;
label_174ee0:
    // 0x174ee0: 0x24844e98  addiu       $a0, $a0, 0x4E98
    ctx->pc = 0x174ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20120));
label_174ee4:
    // 0x174ee4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x174ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x174ee8: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x174ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x174eec: 0x2442c3f8  addiu       $v0, $v0, -0x3C08
    ctx->pc = 0x174eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951928));
    // 0x174ef0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x174ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x174ef4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x174ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x174ef8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x174ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174efc: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x174efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x174f00: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x174f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x174f04: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x174f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174f08: 0x24424f20  addiu       $v0, $v0, 0x4F20
    ctx->pc = 0x174f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20256));
    // 0x174f0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x174f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x174f10: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x174f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174f14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x174f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x174f18: 0x460010e4  .word       0x460010E4                   # cvt.w.s     $f3, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x174f18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x174f1c: 0x44051800  mfc1        $a1, $f3
    ctx->pc = 0x174f1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x174f20: 0xe4820040  swc1        $f2, 0x40($a0)
    ctx->pc = 0x174f20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x174f24: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x174f24u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x174f28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x174f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x174f2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x174f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x174f30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x174f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x174f34: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x174f34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x174f38: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x174f38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x174f3c: 0x22a83  sra         $a1, $v0, 10
    ctx->pc = 0x174f3cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
    // 0x174f40: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x174f40u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174f44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x174f44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x174f48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x174f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x174f4c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x174f4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x174f50: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x174f50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x174f54: 0xc09af3c  jal         func_26BCF0
    ctx->pc = 0x174F54u;
    SET_GPR_U32(ctx, 31, 0x174F5Cu);
    ctx->pc = 0x174F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174F54u;
            // 0x174f58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BCF0u;
    if (runtime->hasFunction(0x26BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x26BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174F5Cu; }
        if (ctx->pc != 0x174F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26bcf0_0x26bd28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174F5Cu; }
        if (ctx->pc != 0x174F5Cu) { return; }
    }
    ctx->pc = 0x174F5Cu;
    // 0x174f5c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x174f5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_174f60:
    // 0x174f60: 0x2a22000f  slti        $v0, $s1, 0xF
    ctx->pc = 0x174f60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x174f64: 0x1440ffa4  bnez        $v0, . + 4 + (-0x5C << 2)
    ctx->pc = 0x174F64u;
    {
        const bool branch_taken_0x174f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174F64u;
            // 0x174f68: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174f64) {
            ctx->pc = 0x174DF8u;
            runtime->cooperativeGuestYield();
            goto label_174df8;
        }
    }
    ctx->pc = 0x174F6Cu;
    // 0x174f6c: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x174F6Cu;
    {
        const bool branch_taken_0x174f6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x174F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174F6Cu;
            // 0x174f70: 0x3c04534d  lui         $a0, 0x534D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174f6c) {
            ctx->pc = 0x174FA8u;
            goto label_174fa8;
        }
    }
    ctx->pc = 0x174F74u;
    // 0x174f74: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x174f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x174f78: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x174f78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x174f7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x174f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174f80: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x174f80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174f84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x174f84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174f88: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x174f88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174f8c: 0xc09b260  jal         func_26C980
    ctx->pc = 0x174F8Cu;
    SET_GPR_U32(ctx, 31, 0x174F94u);
    ctx->pc = 0x174F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174F8Cu;
            // 0x174f90: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C980u;
    if (runtime->hasFunction(0x26C980u)) {
        auto targetFn = runtime->lookupFunction(0x26C980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174F94u; }
        if (ctx->pc != 0x174F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C980_0x26c980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174F94u; }
        if (ctx->pc != 0x174F94u) { return; }
    }
    ctx->pc = 0x174F94u;
    // 0x174f94: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x174f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x174f98: 0x8c62c4b0  lw          $v0, -0x3B50($v1)
    ctx->pc = 0x174f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952112)));
    // 0x174f9c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x174f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x174fa0: 0xac62c4b0  sw          $v0, -0x3B50($v1)
    ctx->pc = 0x174fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952112), GPR_U32(ctx, 2));
    // 0x174fa4: 0x0  nop
    ctx->pc = 0x174fa4u;
    // NOP
label_174fa8:
    // 0x174fa8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x174fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x174fac: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x174facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x174fb0: 0x8c42c4b0  lw          $v0, -0x3B50($v0)
    ctx->pc = 0x174fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952112)));
    // 0x174fb4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x174FB4u;
    {
        const bool branch_taken_0x174fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174FB4u;
            // 0x174fb8: 0xac60c48c  sw          $zero, -0x3B74($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952076), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174fb4) {
            ctx->pc = 0x174FE8u;
            goto label_174fe8;
        }
    }
    ctx->pc = 0x174FBCu;
    // 0x174fbc: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x174fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x174fc0: 0x26114f18  addiu       $s1, $s0, 0x4F18
    ctx->pc = 0x174fc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 20248));
    // 0x174fc4: 0x8e054f18  lw          $a1, 0x4F18($s0)
    ctx->pc = 0x174fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20248)));
    // 0x174fc8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x174fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x174fcc: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x174FCCu;
    {
        const bool branch_taken_0x174fcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x174fcc) {
            ctx->pc = 0x174FD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x174FCCu;
            // 0x174fd0: 0x8e6400d4  lw          $a0, 0xD4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x174FF0u;
            goto label_174ff0;
        }
    }
    ctx->pc = 0x174FD4u;
    // 0x174fd4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x174fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x174fd8: 0xc09b1d8  jal         func_26C760
    ctx->pc = 0x174FD8u;
    SET_GPR_U32(ctx, 31, 0x174FE0u);
    ctx->pc = 0x174FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174FD8u;
            // 0x174fdc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C760u;
    if (runtime->hasFunction(0x26C760u)) {
        auto targetFn = runtime->lookupFunction(0x26C760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174FE0u; }
        if (ctx->pc != 0x174FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C760_0x26c760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174FE0u; }
        if (ctx->pc != 0x174FE0u) { return; }
    }
    ctx->pc = 0x174FE0u;
    // 0x174fe0: 0x8e024f18  lw          $v0, 0x4F18($s0)
    ctx->pc = 0x174fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20248)));
    // 0x174fe4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x174fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_174fe8:
    // 0x174fe8: 0x8e6400d4  lw          $a0, 0xD4($s3)
    ctx->pc = 0x174fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
    // 0x174fec: 0x0  nop
    ctx->pc = 0x174fecu;
    // NOP
label_174ff0:
    // 0x174ff0: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x174ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x174ff4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x174ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x174ff8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x174ff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x174ffc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x174ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x175000: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x175000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x175004: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175008: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x175008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17500c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x17500cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x175010: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x175010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x175014: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x175014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x175018: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x175018u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x17501c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x17501cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x175020: 0x40f809  jalr        $v0
    ctx->pc = 0x175020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x175028u);
        ctx->pc = 0x175024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175020u;
            // 0x175024: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x175028u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174920u: goto label_174920;
            case 0x174958u: goto label_174958;
            case 0x174990u: goto label_174990;
            case 0x1749ACu: goto label_1749ac;
            case 0x1749C0u: goto label_1749c0;
            case 0x1749E8u: goto label_1749e8;
            case 0x1749FCu: goto label_1749fc;
            case 0x174AD8u: goto label_174ad8;
            case 0x174B00u: goto label_174b00;
            case 0x174B68u: goto label_174b68;
            case 0x174D8Cu: goto label_174d8c;
            case 0x174DF8u: goto label_174df8;
            case 0x174E50u: goto label_174e50;
            case 0x174E80u: goto label_174e80;
            case 0x174EA0u: goto label_174ea0;
            case 0x174EA4u: goto label_174ea4;
            case 0x174EA8u: goto label_174ea8;
            case 0x174EACu: goto label_174eac;
            case 0x174EE0u: goto label_174ee0;
            case 0x174EE4u: goto label_174ee4;
            case 0x174F60u: goto label_174f60;
            case 0x174FA8u: goto label_174fa8;
            case 0x174FE8u: goto label_174fe8;
            case 0x174FF0u: goto label_174ff0;
            case 0x175098u: goto label_175098;
            case 0x175100u: goto label_175100;
            case 0x175120u: goto label_175120;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x175028u; }
            if (ctx->pc != 0x175028u) { return; }
        }
        }
    }
    ctx->pc = 0x175028u;
    // 0x175028: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x175028u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x17502c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17502cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175030: 0x26104d10  addiu       $s0, $s0, 0x4D10
    ctx->pc = 0x175030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19728));
    // 0x175034: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175038: 0xc09afbe  jal         func_26BEF8
    ctx->pc = 0x175038u;
    SET_GPR_U32(ctx, 31, 0x175040u);
    ctx->pc = 0x17503Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175038u;
            // 0x17503c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF8u;
    if (runtime->hasFunction(0x26BEF8u)) {
        auto targetFn = runtime->lookupFunction(0x26BEF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175040u; }
        if (ctx->pc != 0x175040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26bef8_0x26bf28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175040u; }
        if (ctx->pc != 0x175040u) { return; }
    }
    ctx->pc = 0x175040u;
    // 0x175040: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x175040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175044: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x175044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175048: 0xc09afbe  jal         func_26BEF8
    ctx->pc = 0x175048u;
    SET_GPR_U32(ctx, 31, 0x175050u);
    ctx->pc = 0x17504Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175048u;
            // 0x17504c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF8u;
    if (runtime->hasFunction(0x26BEF8u)) {
        auto targetFn = runtime->lookupFunction(0x26BEF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175050u; }
        if (ctx->pc != 0x175050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26bef8_0x26bf28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175050u; }
        if (ctx->pc != 0x175050u) { return; }
    }
    ctx->pc = 0x175050u;
    // 0x175050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175054: 0xc09aeda  jal         func_26BB68
    ctx->pc = 0x175054u;
    SET_GPR_U32(ctx, 31, 0x17505Cu);
    ctx->pc = 0x175058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175054u;
            // 0x175058: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BB68u;
    if (runtime->hasFunction(0x26BB68u)) {
        auto targetFn = runtime->lookupFunction(0x26BB68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17505Cu; }
        if (ctx->pc != 0x17505Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26bb68_0x26bb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17505Cu; }
        if (ctx->pc != 0x17505Cu) { return; }
    }
    ctx->pc = 0x17505Cu;
    // 0x17505c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17505cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175060: 0xc09b1f8  jal         func_26C7E0
    ctx->pc = 0x175060u;
    SET_GPR_U32(ctx, 31, 0x175068u);
    ctx->pc = 0x175064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175060u;
            // 0x175064: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C7E0u;
    if (runtime->hasFunction(0x26C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x26C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175068u; }
        if (ctx->pc != 0x175068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26c7e0_0x26c818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175068u; }
        if (ctx->pc != 0x175068u) { return; }
    }
    ctx->pc = 0x175068u;
    // 0x175068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17506c: 0xc09b206  jal         func_26C818
    ctx->pc = 0x17506Cu;
    SET_GPR_U32(ctx, 31, 0x175074u);
    ctx->pc = 0x175070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17506Cu;
            // 0x175070: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C818u;
    if (runtime->hasFunction(0x26C818u)) {
        auto targetFn = runtime->lookupFunction(0x26C818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175074u; }
        if (ctx->pc != 0x175074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26c818_0x26c848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175074u; }
        if (ctx->pc != 0x175074u) { return; }
    }
    ctx->pc = 0x175074u;
    // 0x175074: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x175074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x175078: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x175078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x17507c: 0x8444c448  lh          $a0, -0x3BB8($v0)
    ctx->pc = 0x17507cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294952008)));
    // 0x175080: 0x8c62c44c  lw          $v0, -0x3BB4($v1)
    ctx->pc = 0x175080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952012)));
    // 0x175084: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x175084u;
    {
        const bool branch_taken_0x175084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x175088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175084u;
            // 0x175088: 0x8e86c3a4  lw          $a2, -0x3C5C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175084) {
            ctx->pc = 0x175098u;
            goto label_175098;
        }
    }
    ctx->pc = 0x17508Cu;
    // 0x17508c: 0xc05d1b6  jal         func_1746D8
    ctx->pc = 0x17508Cu;
    SET_GPR_U32(ctx, 31, 0x175094u);
    ctx->pc = 0x1746D8u;
    if (runtime->hasFunction(0x1746D8u)) {
        auto targetFn = runtime->lookupFunction(0x1746D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175094u; }
        if (ctx->pc != 0x175094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001746D8_0x1746d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175094u; }
        if (ctx->pc != 0x175094u) { return; }
    }
    ctx->pc = 0x175094u;
    // 0x175094: 0x8e86c3a4  lw          $a2, -0x3C5C($s4)
    ctx->pc = 0x175094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951844)));
label_175098:
    // 0x175098: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x175098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17509c: 0x3c0b0017  lui         $t3, 0x17
    ctx->pc = 0x17509cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)23 << 16));
    // 0x1750a0: 0x3c04534d  lui         $a0, 0x534D
    ctx->pc = 0x1750a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
    // 0x1750a4: 0xac46c3ac  sw          $a2, -0x3C54($v0)
    ctx->pc = 0x1750a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294951852), GPR_U32(ctx, 6));
    // 0x1750a8: 0x256b3490  addiu       $t3, $t3, 0x3490
    ctx->pc = 0x1750a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 13456));
    // 0x1750ac: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1750acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1750b0: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x1750b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x1750b4: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x1750b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1750b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1750b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1750bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1750bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1750c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1750c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1750c4: 0xc09b272  jal         func_26C9C8
    ctx->pc = 0x1750C4u;
    SET_GPR_U32(ctx, 31, 0x1750CCu);
    ctx->pc = 0x1750C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1750C4u;
            // 0x1750c8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C9C8u;
    if (runtime->hasFunction(0x26C9C8u)) {
        auto targetFn = runtime->lookupFunction(0x26C9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1750CCu; }
        if (ctx->pc != 0x1750CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C9C8_0x26c9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1750CCu; }
        if (ctx->pc != 0x1750CCu) { return; }
    }
    ctx->pc = 0x1750CCu;
    // 0x1750cc: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1750ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1750d0: 0x2442d9c0  addiu       $v0, $v0, -0x2640
    ctx->pc = 0x1750d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957504));
    // 0x1750d4: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x1750d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x1750d8: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1750d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1750dc: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1750dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1750e0: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1750e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1750e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1750e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1750e8: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x1750e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1750ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1750ECu;
    {
        const bool branch_taken_0x1750ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1750F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1750ECu;
            // 0x1750f0: 0x3c04534d  lui         $a0, 0x534D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1750ec) {
            ctx->pc = 0x175100u;
            goto label_175100;
        }
    }
    ctx->pc = 0x1750F4u;
    // 0x1750f4: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x1750f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x1750f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1750F8u;
    {
        const bool branch_taken_0x1750f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1750f8) {
            ctx->pc = 0x175120u;
            goto label_175120;
        }
    }
    ctx->pc = 0x175100u;
label_175100:
    // 0x175100: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x175100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x175104: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x175104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x175108: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17510c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17510cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175110: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x175110u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175114: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x175114u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175118: 0xc09b260  jal         func_26C980
    ctx->pc = 0x175118u;
    SET_GPR_U32(ctx, 31, 0x175120u);
    ctx->pc = 0x17511Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175118u;
            // 0x17511c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C980u;
    if (runtime->hasFunction(0x26C980u)) {
        auto targetFn = runtime->lookupFunction(0x26C980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175120u; }
        if (ctx->pc != 0x175120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C980_0x26c980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175120u; }
        if (ctx->pc != 0x175120u) { return; }
    }
    ctx->pc = 0x175120u;
label_175120:
    // 0x175120: 0xc09b17e  jal         func_26C5F8
    ctx->pc = 0x175120u;
    SET_GPR_U32(ctx, 31, 0x175128u);
    ctx->pc = 0x26C5F8u;
    if (runtime->hasFunction(0x26C5F8u)) {
        auto targetFn = runtime->lookupFunction(0x26C5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175128u; }
        if (ctx->pc != 0x175128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C5F8_0x26c5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175128u; }
        if (ctx->pc != 0x175128u) { return; }
    }
    ctx->pc = 0x175128u;
    // 0x175128: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x175128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17512c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x17512cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x175130: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x175130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x175134: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x175134u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175138: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x175138u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17513c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17513cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175140: 0x3e00008  jr          $ra
    ctx->pc = 0x175140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175140u;
            // 0x175144: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174920u: goto label_174920;
            case 0x174958u: goto label_174958;
            case 0x174990u: goto label_174990;
            case 0x1749ACu: goto label_1749ac;
            case 0x1749C0u: goto label_1749c0;
            case 0x1749E8u: goto label_1749e8;
            case 0x1749FCu: goto label_1749fc;
            case 0x174AD8u: goto label_174ad8;
            case 0x174B00u: goto label_174b00;
            case 0x174B68u: goto label_174b68;
            case 0x174D8Cu: goto label_174d8c;
            case 0x174DF8u: goto label_174df8;
            case 0x174E50u: goto label_174e50;
            case 0x174E80u: goto label_174e80;
            case 0x174EA0u: goto label_174ea0;
            case 0x174EA4u: goto label_174ea4;
            case 0x174EA8u: goto label_174ea8;
            case 0x174EACu: goto label_174eac;
            case 0x174EE0u: goto label_174ee0;
            case 0x174EE4u: goto label_174ee4;
            case 0x174F60u: goto label_174f60;
            case 0x174FA8u: goto label_174fa8;
            case 0x174FE8u: goto label_174fe8;
            case 0x174FF0u: goto label_174ff0;
            case 0x175098u: goto label_175098;
            case 0x175100u: goto label_175100;
            case 0x175120u: goto label_175120;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175148u;
}
