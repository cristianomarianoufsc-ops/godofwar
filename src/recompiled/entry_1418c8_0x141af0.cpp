#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1418c8
// Address: 0x1418c8 - 0x141af0
void entry_1418c8_0x141af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1418c8_0x141af0");
#endif

    ctx->pc = 0x1418c8u;

    // 0x1418c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1418c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1418cc: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x1418ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x1418d0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1418d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1418d4: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x1418d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x1418d8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1418d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1418dc: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x1418dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x1418e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1418e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1418e4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1418e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1418e8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1418e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1418ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1418ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1418f0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1418f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1418f4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1418f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1418f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1418f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1418fc: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x1418fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x141900: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x141900u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x141904: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x141904u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x141908: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x141908u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x14190c: 0x26500028  addiu       $s0, $s2, 0x28
    ctx->pc = 0x14190cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x141910: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x141910u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x141914: 0xa6470004  sh          $a3, 0x4($s2)
    ctx->pc = 0x141914u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x141918: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x141918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x14191c: 0xa6480000  sh          $t0, 0x0($s2)
    ctx->pc = 0x14191cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x141920: 0xae460020  sw          $a2, 0x20($s2)
    ctx->pc = 0x141920u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 6));
    // 0x141924: 0x26510034  addiu       $s1, $s2, 0x34
    ctx->pc = 0x141924u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x141928: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x141928u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x14192c: 0xc08e222  jal         func_238888
    ctx->pc = 0x14192Cu;
    SET_GPR_U32(ctx, 31, 0x141934u);
    ctx->pc = 0x141930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14192Cu;
            // 0x141930: 0xa6420002  sh          $v0, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141934u; }
        if (ctx->pc != 0x141934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141934u; }
        if (ctx->pc != 0x141934u) { return; }
    }
    ctx->pc = 0x141934u;
    // 0x141934: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x141934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x141938: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x141938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14193c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14193cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141940: 0xc08e222  jal         func_238888
    ctx->pc = 0x141940u;
    SET_GPR_U32(ctx, 31, 0x141948u);
    ctx->pc = 0x141944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141940u;
            // 0x141944: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141948u; }
        if (ctx->pc != 0x141948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141948u; }
        if (ctx->pc != 0x141948u) { return; }
    }
    ctx->pc = 0x141948u;
    // 0x141948: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x141948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14194c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x14194cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x141950: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x141950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x141954: 0x246307e0  addiu       $v1, $v1, 0x7E0
    ctx->pc = 0x141954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2016));
    // 0x141958: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x141958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14195c: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x14195cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
    // 0x141960: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x141960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x141964: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x141964u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x141968: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x141968u;
    SET_GPR_U32(ctx, 31, 0x141970u);
    ctx->pc = 0x14196Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141968u;
            // 0x14196c: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141970u; }
        if (ctx->pc != 0x141970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141970u; }
        if (ctx->pc != 0x141970u) { return; }
    }
    ctx->pc = 0x141970u;
    // 0x141970: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x141970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x141974: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x141974u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x141978: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x141978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x14197c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x14197cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x141980: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x141980u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x141984: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x141984u;
    SET_GPR_U32(ctx, 31, 0x14198Cu);
    ctx->pc = 0x141988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141984u;
            // 0x141988: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14198Cu; }
        if (ctx->pc != 0x14198Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14198Cu; }
        if (ctx->pc != 0x14198Cu) { return; }
    }
    ctx->pc = 0x14198Cu;
    // 0x14198c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14198cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141990: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x141990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x141994: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x141994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x141998: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x141998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14199c: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x14199cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
    // 0x1419a0: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x1419A0u;
    SET_GPR_U32(ctx, 31, 0x1419A8u);
    ctx->pc = 0x1419A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1419A0u;
            // 0x1419a4: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419A8u; }
        if (ctx->pc != 0x1419A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419A8u; }
        if (ctx->pc != 0x1419A8u) { return; }
    }
    ctx->pc = 0x1419A8u;
    // 0x1419a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1419a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1419ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1419acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1419b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1419b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1419b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1419b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1419b8:
    // 0x1419b8: 0x0  nop
    ctx->pc = 0x1419b8u;
    // NOP
    // 0x1419bc: 0x0  nop
    ctx->pc = 0x1419bcu;
    // NOP
    // 0x1419c0: 0x0  nop
    ctx->pc = 0x1419c0u;
    // NOP
    // 0x1419c4: 0x0  nop
    ctx->pc = 0x1419c4u;
    // NOP
    // 0x1419c8: 0x0  nop
    ctx->pc = 0x1419c8u;
    // NOP
    // 0x1419cc: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1419CCu;
    {
        const bool branch_taken_0x1419cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1419D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1419CCu;
            // 0x1419d0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1419cc) {
            ctx->pc = 0x1419B8u;
            runtime->cooperativeGuestYield();
            goto label_1419b8;
        }
    }
    ctx->pc = 0x1419D4u;
    // 0x1419d4: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x1419d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1419d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1419d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1419dc: 0xae440024  sw          $a0, 0x24($s2)
    ctx->pc = 0x1419dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
    // 0x1419e0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1419E0u;
    {
        const bool branch_taken_0x1419e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1419E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1419E0u;
            // 0x1419e4: 0xae400044  sw          $zero, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1419e0) {
            ctx->pc = 0x141A94u;
            goto label_141a94;
        }
    }
    ctx->pc = 0x1419E8u;
    // 0x1419e8: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x1419e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1419ec: 0x0  nop
    ctx->pc = 0x1419ecu;
    // NOP
label_1419f0:
    // 0x1419f0: 0x8e510014  lw          $s1, 0x14($s2)
    ctx->pc = 0x1419f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1419f4: 0x2708018  mult        $s0, $s3, $s0
    ctx->pc = 0x1419f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1419f8: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1419f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1419fc: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1419fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x141a00: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x141A00u;
    SET_GPR_U32(ctx, 31, 0x141A08u);
    ctx->pc = 0x141A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141A00u;
            // 0x141a04: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A08u; }
        if (ctx->pc != 0x141A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A08u; }
        if (ctx->pc != 0x141A08u) { return; }
    }
    ctx->pc = 0x141A08u;
    // 0x141a08: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x141a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x141a0c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x141a0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141a10: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x141a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x141a14: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x141A14u;
    {
        const bool branch_taken_0x141a14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x141A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141A14u;
            // 0x141a18: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a14) {
            ctx->pc = 0x141A44u;
            goto label_141a44;
        }
    }
    ctx->pc = 0x141A1Cu;
    // 0x141a1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x141a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141a20: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x141a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x141a24: 0x0  nop
    ctx->pc = 0x141a24u;
    // NOP
label_141a28:
    // 0x141a28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x141a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x141a2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x141a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x141a30: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x141a30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x141a34: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x141a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x141a38: 0x0  nop
    ctx->pc = 0x141a38u;
    // NOP
    // 0x141a3c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x141A3Cu;
    {
        const bool branch_taken_0x141a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141A3Cu;
            // 0x141a40: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a3c) {
            ctx->pc = 0x141A28u;
            runtime->cooperativeGuestYield();
            goto label_141a28;
        }
    }
    ctx->pc = 0x141A44u;
label_141a44:
    // 0x141a44: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x141a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x141a48: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x141A48u;
    {
        const bool branch_taken_0x141a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141A48u;
            // 0x141a4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a48) {
            ctx->pc = 0x141A80u;
            goto label_141a80;
        }
    }
    ctx->pc = 0x141A50u;
    // 0x141a50: 0x8e470024  lw          $a3, 0x24($s2)
    ctx->pc = 0x141a50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x141a54: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x141a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_141a58:
    // 0x141a58: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x141a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x141a5c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x141a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x141a60: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x141a60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x141a64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x141a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x141a68: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x141a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x141a6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x141a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141a70: 0xa6202b  sltu        $a0, $a1, $a2
    ctx->pc = 0x141a70u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x141a74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x141a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x141a78: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x141A78u;
    {
        const bool branch_taken_0x141a78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x141A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141A78u;
            // 0x141a7c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a78) {
            ctx->pc = 0x141A58u;
            runtime->cooperativeGuestYield();
            goto label_141a58;
        }
    }
    ctx->pc = 0x141A80u;
label_141a80:
    // 0x141a80: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x141a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x141a84: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x141a84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x141a88: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x141a88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x141a8c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x141A8Cu;
    {
        const bool branch_taken_0x141a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141A8Cu;
            // 0x141a90: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a8c) {
            ctx->pc = 0x1419F0u;
            runtime->cooperativeGuestYield();
            goto label_1419f0;
        }
    }
    ctx->pc = 0x141A94u;
label_141a94:
    // 0x141a94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x141a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x141a98: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x141a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x141a9c: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x141a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
    // 0x141aa0: 0x2442d1d8  addiu       $v0, $v0, -0x2E28
    ctx->pc = 0x141aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955480));
    // 0x141aa4: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x141aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x141aa8: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x141aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x141aac: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x141aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x141ab0: 0xae4200d0  sw          $v0, 0xD0($s2)
    ctx->pc = 0x141ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
    // 0x141ab4: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x141ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x141ab8: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x141ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x141abc: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x141abcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
    // 0x141ac0: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x141ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x141ac4: 0xc04d7f0  jal         func_135FC0
    ctx->pc = 0x141AC4u;
    SET_GPR_U32(ctx, 31, 0x141ACCu);
    ctx->pc = 0x141AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141AC4u;
            // 0x141ac8: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135FC0u;
    if (runtime->hasFunction(0x135FC0u)) {
        auto targetFn = runtime->lookupFunction(0x135FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141ACCu; }
        if (ctx->pc != 0x141ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_135fc0_0x135fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141ACCu; }
        if (ctx->pc != 0x141ACCu) { return; }
    }
    ctx->pc = 0x141ACCu;
    // 0x141acc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x141accu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141ad0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x141ad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x141ad4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x141ad4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x141ad8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x141ad8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x141adc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x141adcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141ae0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x141ae0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141ae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x141AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141AE8u;
            // 0x141aec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1419B8u: goto label_1419b8;
            case 0x1419F0u: goto label_1419f0;
            case 0x141A28u: goto label_141a28;
            case 0x141A44u: goto label_141a44;
            case 0x141A58u: goto label_141a58;
            case 0x141A80u: goto label_141a80;
            case 0x141A94u: goto label_141a94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x141AF0u;
}
