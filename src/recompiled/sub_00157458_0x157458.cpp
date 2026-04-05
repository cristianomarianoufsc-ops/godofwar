#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00157458
// Address: 0x157458 - 0x157958
void sub_00157458_0x157458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157458_0x157458");
#endif

    ctx->pc = 0x157458u;

    // 0x157458: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x157458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15745c: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x15745cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x157460: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x157460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x157464: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x157464u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x157468: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x157468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x15746c: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x15746cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x157470: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x157470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x157474: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x157474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x157478: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x157478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x15747c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15747cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157480: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x157480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x157484: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x157484u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x157488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15748c: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x15748cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x157490: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x157490u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x157494: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x157494u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x157498: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x157498u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x15749c: 0x26500028  addiu       $s0, $s2, 0x28
    ctx->pc = 0x15749cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x1574a0: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x1574a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x1574a4: 0xa6470004  sh          $a3, 0x4($s2)
    ctx->pc = 0x1574a4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x1574a8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1574a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1574ac: 0xa6480000  sh          $t0, 0x0($s2)
    ctx->pc = 0x1574acu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1574b0: 0xae460020  sw          $a2, 0x20($s2)
    ctx->pc = 0x1574b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 6));
    // 0x1574b4: 0x26510034  addiu       $s1, $s2, 0x34
    ctx->pc = 0x1574b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x1574b8: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x1574b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x1574bc: 0xc08e222  jal         func_238888
    ctx->pc = 0x1574BCu;
    SET_GPR_U32(ctx, 31, 0x1574C4u);
    ctx->pc = 0x1574C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1574BCu;
            // 0x1574c0: 0xa6420002  sh          $v0, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1574C4u; }
        if (ctx->pc != 0x1574C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1574C4u; }
        if (ctx->pc != 0x1574C4u) { return; }
    }
    ctx->pc = 0x1574C4u;
    // 0x1574c4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1574c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1574c8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1574c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1574cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1574ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1574d0: 0xc08e222  jal         func_238888
    ctx->pc = 0x1574D0u;
    SET_GPR_U32(ctx, 31, 0x1574D8u);
    ctx->pc = 0x1574D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1574D0u;
            // 0x1574d4: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1574D8u; }
        if (ctx->pc != 0x1574D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1574D8u; }
        if (ctx->pc != 0x1574D8u) { return; }
    }
    ctx->pc = 0x1574D8u;
    // 0x1574d8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1574d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1574dc: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1574dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1574e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1574e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1574e4: 0x246307e0  addiu       $v1, $v1, 0x7E0
    ctx->pc = 0x1574e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2016));
    // 0x1574e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1574e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1574ec: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x1574ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
    // 0x1574f0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1574f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1574f4: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x1574f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x1574f8: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x1574F8u;
    SET_GPR_U32(ctx, 31, 0x157500u);
    ctx->pc = 0x1574FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1574F8u;
            // 0x1574fc: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157500u; }
        if (ctx->pc != 0x157500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157500u; }
        if (ctx->pc != 0x157500u) { return; }
    }
    ctx->pc = 0x157500u;
    // 0x157500: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x157500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x157504: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x157504u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x157508: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x157508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x15750c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x15750cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x157510: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x157510u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x157514: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x157514u;
    SET_GPR_U32(ctx, 31, 0x15751Cu);
    ctx->pc = 0x157518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157514u;
            // 0x157518: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15751Cu; }
        if (ctx->pc != 0x15751Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15751Cu; }
        if (ctx->pc != 0x15751Cu) { return; }
    }
    ctx->pc = 0x15751Cu;
    // 0x15751c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15751cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157520: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x157520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x157524: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x157524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x157528: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x157528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15752c: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x15752cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
    // 0x157530: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x157530u;
    SET_GPR_U32(ctx, 31, 0x157538u);
    ctx->pc = 0x157534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157530u;
            // 0x157534: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157538u; }
        if (ctx->pc != 0x157538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157538u; }
        if (ctx->pc != 0x157538u) { return; }
    }
    ctx->pc = 0x157538u;
    // 0x157538: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x157538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15753c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15753cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157540: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x157540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x157544: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x157544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_157548:
    // 0x157548: 0x0  nop
    ctx->pc = 0x157548u;
    // NOP
    // 0x15754c: 0x0  nop
    ctx->pc = 0x15754cu;
    // NOP
    // 0x157550: 0x0  nop
    ctx->pc = 0x157550u;
    // NOP
    // 0x157554: 0x0  nop
    ctx->pc = 0x157554u;
    // NOP
    // 0x157558: 0x0  nop
    ctx->pc = 0x157558u;
    // NOP
    // 0x15755c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15755Cu;
    {
        const bool branch_taken_0x15755c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x157560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15755Cu;
            // 0x157560: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15755c) {
            ctx->pc = 0x157548u;
            runtime->cooperativeGuestYield();
            goto label_157548;
        }
    }
    ctx->pc = 0x157564u;
    // 0x157564: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x157564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x157568: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x157568u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15756c: 0xae440024  sw          $a0, 0x24($s2)
    ctx->pc = 0x15756cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
    // 0x157570: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x157570u;
    {
        const bool branch_taken_0x157570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157570u;
            // 0x157574: 0xae400044  sw          $zero, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157570) {
            ctx->pc = 0x157624u;
            goto label_157624;
        }
    }
    ctx->pc = 0x157578u;
    // 0x157578: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x157578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15757c: 0x0  nop
    ctx->pc = 0x15757cu;
    // NOP
label_157580:
    // 0x157580: 0x8e510014  lw          $s1, 0x14($s2)
    ctx->pc = 0x157580u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x157584: 0x2708018  mult        $s0, $s3, $s0
    ctx->pc = 0x157584u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x157588: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x157588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x15758c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x15758cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x157590: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x157590u;
    SET_GPR_U32(ctx, 31, 0x157598u);
    ctx->pc = 0x157594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157590u;
            // 0x157594: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157598u; }
        if (ctx->pc != 0x157598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157598u; }
        if (ctx->pc != 0x157598u) { return; }
    }
    ctx->pc = 0x157598u;
    // 0x157598: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x157598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x15759c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15759cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1575a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1575a4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1575A4u;
    {
        const bool branch_taken_0x1575a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1575A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1575A4u;
            // 0x1575a8: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1575a4) {
            ctx->pc = 0x1575D4u;
            goto label_1575d4;
        }
    }
    ctx->pc = 0x1575ACu;
    // 0x1575ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1575acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575b0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1575b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1575b4: 0x0  nop
    ctx->pc = 0x1575b4u;
    // NOP
label_1575b8:
    // 0x1575b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1575b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1575bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1575bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1575c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1575c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1575c4: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x1575c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1575c8: 0x0  nop
    ctx->pc = 0x1575c8u;
    // NOP
    // 0x1575cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1575CCu;
    {
        const bool branch_taken_0x1575cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1575D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1575CCu;
            // 0x1575d0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1575cc) {
            ctx->pc = 0x1575B8u;
            runtime->cooperativeGuestYield();
            goto label_1575b8;
        }
    }
    ctx->pc = 0x1575D4u;
label_1575d4:
    // 0x1575d4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1575d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1575d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1575D8u;
    {
        const bool branch_taken_0x1575d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1575DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1575D8u;
            // 0x1575dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1575d8) {
            ctx->pc = 0x157610u;
            goto label_157610;
        }
    }
    ctx->pc = 0x1575E0u;
    // 0x1575e0: 0x8e470024  lw          $a3, 0x24($s2)
    ctx->pc = 0x1575e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1575e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1575e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1575e8:
    // 0x1575e8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1575e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1575ec: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1575ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1575f0: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x1575f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1575f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1575f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1575f8: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x1575f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1575fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1575fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157600: 0xa6202b  sltu        $a0, $a1, $a2
    ctx->pc = 0x157600u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x157604: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x157604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x157608: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x157608u;
    {
        const bool branch_taken_0x157608 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15760Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157608u;
            // 0x15760c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157608) {
            ctx->pc = 0x1575E8u;
            runtime->cooperativeGuestYield();
            goto label_1575e8;
        }
    }
    ctx->pc = 0x157610u;
label_157610:
    // 0x157610: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x157610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x157614: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x157614u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x157618: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x157618u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15761c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x15761Cu;
    {
        const bool branch_taken_0x15761c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15761Cu;
            // 0x157620: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15761c) {
            ctx->pc = 0x157580u;
            runtime->cooperativeGuestYield();
            goto label_157580;
        }
    }
    ctx->pc = 0x157624u;
label_157624:
    // 0x157624: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x157624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x157628: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x157628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x15762c: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x15762cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
    // 0x157630: 0x2442c008  addiu       $v0, $v0, -0x3FF8
    ctx->pc = 0x157630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950920));
    // 0x157634: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x157634u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x157638: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x157638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x15763c: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x15763cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x157640: 0xae4200d0  sw          $v0, 0xD0($s2)
    ctx->pc = 0x157640u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
    // 0x157644: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x157644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x157648: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x157648u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x15764c: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x15764cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
    // 0x157650: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x157650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x157654: 0xc04d7f0  jal         func_135FC0
    ctx->pc = 0x157654u;
    SET_GPR_U32(ctx, 31, 0x15765Cu);
    ctx->pc = 0x157658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157654u;
            // 0x157658: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135FC0u;
    if (runtime->hasFunction(0x135FC0u)) {
        auto targetFn = runtime->lookupFunction(0x135FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15765Cu; }
        if (ctx->pc != 0x15765Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_135fc0_0x135fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15765Cu; }
        if (ctx->pc != 0x15765Cu) { return; }
    }
    ctx->pc = 0x15765Cu;
    // 0x15765c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x15765cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157660: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x157660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x157664: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x157664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x157668: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x157668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15766c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x15766cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x157670: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x157670u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x157674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157678: 0x3e00008  jr          $ra
    ctx->pc = 0x157678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15767Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157678u;
            // 0x15767c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x157548u: goto label_157548;
            case 0x157580u: goto label_157580;
            case 0x1575B8u: goto label_1575b8;
            case 0x1575D4u: goto label_1575d4;
            case 0x1575E8u: goto label_1575e8;
            case 0x157610u: goto label_157610;
            case 0x157624u: goto label_157624;
            case 0x1576D8u: goto label_1576d8;
            case 0x157704u: goto label_157704;
            case 0x15771Cu: goto label_15771c;
            case 0x1577A8u: goto label_1577a8;
            case 0x1577B0u: goto label_1577b0;
            case 0x1577C4u: goto label_1577c4;
            case 0x1577D8u: goto label_1577d8;
            case 0x157828u: goto label_157828;
            case 0x157830u: goto label_157830;
            case 0x157844u: goto label_157844;
            case 0x157858u: goto label_157858;
            case 0x1578A8u: goto label_1578a8;
            case 0x1578B0u: goto label_1578b0;
            case 0x1578C4u: goto label_1578c4;
            case 0x1578D8u: goto label_1578d8;
            case 0x15792Cu: goto label_15792c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x157680u;
    // 0x157680: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x157680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x157684: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157688: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x157688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x15768c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x15768cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x157690: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x157690u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157694: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x157694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x157698: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x157698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x15769c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x15769cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1576a0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1576a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1576a4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1576a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1576a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1576a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1576ac: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x1576acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x1576b0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1576b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1576b4: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1576B4u;
    {
        const bool branch_taken_0x1576b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1576B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1576B4u;
            // 0x1576b8: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576b4) {
            ctx->pc = 0x15771Cu;
            goto label_15771c;
        }
    }
    ctx->pc = 0x1576BCu;
    // 0x1576bc: 0x96c30002  lhu         $v1, 0x2($s6)
    ctx->pc = 0x1576bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x1576c0: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x1576c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x1576c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1576C4u;
    {
        const bool branch_taken_0x1576c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1576C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1576C4u;
            // 0x1576c8: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576c4) {
            ctx->pc = 0x1576D8u;
            goto label_1576d8;
        }
    }
    ctx->pc = 0x1576CCu;
    // 0x1576cc: 0x34625000  ori         $v0, $v1, 0x5000
    ctx->pc = 0x1576ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x1576d0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1576D0u;
    {
        const bool branch_taken_0x1576d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1576D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1576D0u;
            // 0x1576d4: 0xa6c20002  sh          $v0, 0x2($s6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 22), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576d0) {
            ctx->pc = 0x157704u;
            goto label_157704;
        }
    }
    ctx->pc = 0x1576D8u;
label_1576d8:
    // 0x1576d8: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1576D8u;
    SET_GPR_U32(ctx, 31, 0x1576E0u);
    ctx->pc = 0x1576DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1576D8u;
            // 0x1576dc: 0x8e900004  lw          $s0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1576E0u; }
        if (ctx->pc != 0x1576E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1576E0u; }
        if (ctx->pc != 0x1576E0u) { return; }
    }
    ctx->pc = 0x1576E0u;
    // 0x1576e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1576e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1576e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1576e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1576e8: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x1576E8u;
    SET_GPR_U32(ctx, 31, 0x1576F0u);
    ctx->pc = 0x1576ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1576E8u;
            // 0x1576ec: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1576F0u; }
        if (ctx->pc != 0x1576F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1576F0u; }
        if (ctx->pc != 0x1576F0u) { return; }
    }
    ctx->pc = 0x1576F0u;
    // 0x1576f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1576f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1576f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1576f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1576f8: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x1576f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1576fc: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x1576FCu;
    SET_GPR_U32(ctx, 31, 0x157704u);
    ctx->pc = 0x157700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1576FCu;
            // 0x157700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157704u; }
        if (ctx->pc != 0x157704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157704u; }
        if (ctx->pc != 0x157704u) { return; }
    }
    ctx->pc = 0x157704u;
label_157704:
    // 0x157704: 0xc0566ca  jal         func_159B28
    ctx->pc = 0x157704u;
    SET_GPR_U32(ctx, 31, 0x15770Cu);
    ctx->pc = 0x157708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157704u;
            // 0x157708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159B28u;
    if (runtime->hasFunction(0x159B28u)) {
        auto targetFn = runtime->lookupFunction(0x159B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15770Cu; }
        if (ctx->pc != 0x15770Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00159B28_0x159b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15770Cu; }
        if (ctx->pc != 0x15770Cu) { return; }
    }
    ctx->pc = 0x15770Cu;
    // 0x15770c: 0xc0566c8  jal         func_159B20
    ctx->pc = 0x15770Cu;
    SET_GPR_U32(ctx, 31, 0x157714u);
    ctx->pc = 0x157710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15770Cu;
            // 0x157710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159B20u;
    if (runtime->hasFunction(0x159B20u)) {
        auto targetFn = runtime->lookupFunction(0x159B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157714u; }
        if (ctx->pc != 0x157714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_159b20_0x159b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157714u; }
        if (ctx->pc != 0x157714u) { return; }
    }
    ctx->pc = 0x157714u;
    // 0x157714: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x157714u;
    {
        const bool branch_taken_0x157714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157714u;
            // 0x157718: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157714) {
            ctx->pc = 0x15792Cu;
            goto label_15792c;
        }
    }
    ctx->pc = 0x15771Cu;
label_15771c:
    // 0x15771c: 0x24040098  addiu       $a0, $zero, 0x98
    ctx->pc = 0x15771cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x157720: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x157720u;
    SET_GPR_U32(ctx, 31, 0x157728u);
    ctx->pc = 0x157724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157720u;
            // 0x157724: 0x3c110002  lui         $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157728u; }
        if (ctx->pc != 0x157728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157728u; }
        if (ctx->pc != 0x157728u) { return; }
    }
    ctx->pc = 0x157728u;
    // 0x157728: 0x3631000f  ori         $s1, $s1, 0xF
    ctx->pc = 0x157728u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)15);
    // 0x15772c: 0xc05e37e  jal         func_178DF8
    ctx->pc = 0x15772Cu;
    SET_GPR_U32(ctx, 31, 0x157734u);
    ctx->pc = 0x157730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15772Cu;
            // 0x157730: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178DF8u;
    if (runtime->hasFunction(0x178DF8u)) {
        auto targetFn = runtime->lookupFunction(0x178DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157734u; }
        if (ctx->pc != 0x157734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178DF8_0x178df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157734u; }
        if (ctx->pc != 0x157734u) { return; }
    }
    ctx->pc = 0x157734u;
    // 0x157734: 0x26530008  addiu       $s3, $s2, 0x8
    ctx->pc = 0x157734u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x157738: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x157738u;
    SET_GPR_U32(ctx, 31, 0x157740u);
    ctx->pc = 0x15773Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157738u;
            // 0x15773c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157740u; }
        if (ctx->pc != 0x157740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157740u; }
        if (ctx->pc != 0x157740u) { return; }
    }
    ctx->pc = 0x157740u;
    // 0x157740: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x157740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157744: 0xc08e200  jal         func_238800
    ctx->pc = 0x157744u;
    SET_GPR_U32(ctx, 31, 0x15774Cu);
    ctx->pc = 0x157748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157744u;
            // 0x157748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238800u;
    if (runtime->hasFunction(0x238800u)) {
        auto targetFn = runtime->lookupFunction(0x238800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15774Cu; }
        if (ctx->pc != 0x15774Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238800_0x238810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15774Cu; }
        if (ctx->pc != 0x15774Cu) { return; }
    }
    ctx->pc = 0x15774Cu;
    // 0x15774c: 0xc05e37e  jal         func_178DF8
    ctx->pc = 0x15774Cu;
    SET_GPR_U32(ctx, 31, 0x157754u);
    ctx->pc = 0x178DF8u;
    if (runtime->hasFunction(0x178DF8u)) {
        auto targetFn = runtime->lookupFunction(0x178DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157754u; }
        if (ctx->pc != 0x157754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178DF8_0x178df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157754u; }
        if (ctx->pc != 0x157754u) { return; }
    }
    ctx->pc = 0x157754u;
    // 0x157754: 0x8e950014  lw          $s5, 0x14($s4)
    ctx->pc = 0x157754u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x157758: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x157758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x15775c: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x15775cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x157760: 0xc04f824  jal         func_13E090
    ctx->pc = 0x157760u;
    SET_GPR_U32(ctx, 31, 0x157768u);
    ctx->pc = 0x157764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157760u;
            // 0x157764: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157768u; }
        if (ctx->pc != 0x157768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157768u; }
        if (ctx->pc != 0x157768u) { return; }
    }
    ctx->pc = 0x157768u;
    // 0x157768: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x157768u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x15776c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x15776cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x157770: 0x2463f970  addiu       $v1, $v1, -0x690
    ctx->pc = 0x157770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965616));
    // 0x157774: 0xae750010  sw          $s5, 0x10($s3)
    ctx->pc = 0x157774u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 21));
    // 0x157778: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x157778u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x15777c: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x15777cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
    // 0x157780: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x157780u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x157784: 0xc04f824  jal         func_13E090
    ctx->pc = 0x157784u;
    SET_GPR_U32(ctx, 31, 0x15778Cu);
    ctx->pc = 0x157788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157784u;
            // 0x157788: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15778Cu; }
        if (ctx->pc != 0x15778Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15778Cu; }
        if (ctx->pc != 0x15778Cu) { return; }
    }
    ctx->pc = 0x15778Cu;
    // 0x15778c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15778cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157790: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x157790u;
    {
        const bool branch_taken_0x157790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x157790) {
            ctx->pc = 0x1577B0u;
            goto label_1577b0;
        }
    }
    ctx->pc = 0x157798u;
    // 0x157798: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x157798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x15779c: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15779Cu;
    {
        const bool branch_taken_0x15779c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1577A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15779Cu;
            // 0x1577a0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15779c) {
            ctx->pc = 0x1577A8u;
            goto label_1577a8;
        }
    }
    ctx->pc = 0x1577A4u;
    // 0x1577a4: 0x8c44f198  lw          $a0, -0xE68($v0)
    ctx->pc = 0x1577a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963608)));
label_1577a8:
    // 0x1577a8: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x1577A8u;
    SET_GPR_U32(ctx, 31, 0x1577B0u);
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1577B0u; }
        if (ctx->pc != 0x1577B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1577B0u; }
        if (ctx->pc != 0x1577B0u) { return; }
    }
    ctx->pc = 0x1577B0u;
label_1577b0:
    // 0x1577b0: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1577B0u;
    {
        const bool branch_taken_0x1577b0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1577B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1577B0u;
            // 0x1577b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577b0) {
            ctx->pc = 0x1577C4u;
            goto label_1577c4;
        }
    }
    ctx->pc = 0x1577B8u;
    // 0x1577b8: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x1577B8u;
    SET_GPR_U32(ctx, 31, 0x1577C0u);
    ctx->pc = 0x1577BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1577B8u;
            // 0x1577bc: 0x152080  sll         $a0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1577C0u; }
        if (ctx->pc != 0x1577C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1577C0u; }
        if (ctx->pc != 0x1577C0u) { return; }
    }
    ctx->pc = 0x1577C0u;
    // 0x1577c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1577c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1577c4:
    // 0x1577c4: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1577C4u;
    {
        const bool branch_taken_0x1577c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1577c4) {
            ctx->pc = 0x1577C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1577C4u;
            // 0x1577c8: 0xae710004  sw          $s1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1577D8u;
            goto label_1577d8;
        }
    }
    ctx->pc = 0x1577CCu;
    // 0x1577cc: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x1577CCu;
    SET_GPR_U32(ctx, 31, 0x1577D4u);
    ctx->pc = 0x1577D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1577CCu;
            // 0x1577d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1577D4u; }
        if (ctx->pc != 0x1577D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1577D4u; }
        if (ctx->pc != 0x1577D4u) { return; }
    }
    ctx->pc = 0x1577D4u;
    // 0x1577d4: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x1577d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
label_1577d8:
    // 0x1577d8: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x1577d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1577dc: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x1577dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x1577e0: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1577E0u;
    SET_GPR_U32(ctx, 31, 0x1577E8u);
    ctx->pc = 0x1577E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1577E0u;
            // 0x1577e4: 0x8e930018  lw          $s3, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1577E8u; }
        if (ctx->pc != 0x1577E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1577E8u; }
        if (ctx->pc != 0x1577E8u) { return; }
    }
    ctx->pc = 0x1577E8u;
    // 0x1577e8: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x1577e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x1577ec: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1577ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1577f0: 0x2463ea38  addiu       $v1, $v1, -0x15C8
    ctx->pc = 0x1577f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961720));
    // 0x1577f4: 0xae130010  sw          $s3, 0x10($s0)
    ctx->pc = 0x1577f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
    // 0x1577f8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1577f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1577fc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1577fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x157800: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x157800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x157804: 0xc04f824  jal         func_13E090
    ctx->pc = 0x157804u;
    SET_GPR_U32(ctx, 31, 0x15780Cu);
    ctx->pc = 0x157808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157804u;
            // 0x157808: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15780Cu; }
        if (ctx->pc != 0x15780Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15780Cu; }
        if (ctx->pc != 0x15780Cu) { return; }
    }
    ctx->pc = 0x15780Cu;
    // 0x15780c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15780cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157810: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x157810u;
    {
        const bool branch_taken_0x157810 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x157810) {
            ctx->pc = 0x157830u;
            goto label_157830;
        }
    }
    ctx->pc = 0x157818u;
    // 0x157818: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x157818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15781c: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15781Cu;
    {
        const bool branch_taken_0x15781c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x157820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15781Cu;
            // 0x157820: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15781c) {
            ctx->pc = 0x157828u;
            goto label_157828;
        }
    }
    ctx->pc = 0x157824u;
    // 0x157824: 0x8c44f198  lw          $a0, -0xE68($v0)
    ctx->pc = 0x157824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963608)));
label_157828:
    // 0x157828: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x157828u;
    SET_GPR_U32(ctx, 31, 0x157830u);
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157830u; }
        if (ctx->pc != 0x157830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157830u; }
        if (ctx->pc != 0x157830u) { return; }
    }
    ctx->pc = 0x157830u;
label_157830:
    // 0x157830: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x157830u;
    {
        const bool branch_taken_0x157830 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x157830) {
            ctx->pc = 0x157834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157830u;
            // 0x157834: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157844u;
            goto label_157844;
        }
    }
    ctx->pc = 0x157838u;
    // 0x157838: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x157838u;
    SET_GPR_U32(ctx, 31, 0x157840u);
    ctx->pc = 0x15783Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157838u;
            // 0x15783c: 0x132080  sll         $a0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157840u; }
        if (ctx->pc != 0x157840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157840u; }
        if (ctx->pc != 0x157840u) { return; }
    }
    ctx->pc = 0x157840u;
    // 0x157840: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x157840u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_157844:
    // 0x157844: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x157844u;
    {
        const bool branch_taken_0x157844 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x157844) {
            ctx->pc = 0x157848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157844u;
            // 0x157848: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157858u;
            goto label_157858;
        }
    }
    ctx->pc = 0x15784Cu;
    // 0x15784c: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x15784Cu;
    SET_GPR_U32(ctx, 31, 0x157854u);
    ctx->pc = 0x157850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15784Cu;
            // 0x157850: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157854u; }
        if (ctx->pc != 0x157854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157854u; }
        if (ctx->pc != 0x157854u) { return; }
    }
    ctx->pc = 0x157854u;
    // 0x157854: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x157854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_157858:
    // 0x157858: 0x26510038  addiu       $s1, $s2, 0x38
    ctx->pc = 0x157858u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x15785c: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x15785cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x157860: 0xc04f824  jal         func_13E090
    ctx->pc = 0x157860u;
    SET_GPR_U32(ctx, 31, 0x157868u);
    ctx->pc = 0x157864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157860u;
            // 0x157864: 0x8e93003c  lw          $s3, 0x3C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157868u; }
        if (ctx->pc != 0x157868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157868u; }
        if (ctx->pc != 0x157868u) { return; }
    }
    ctx->pc = 0x157868u;
    // 0x157868: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x157868u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
    // 0x15786c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x15786cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x157870: 0x2463ea18  addiu       $v1, $v1, -0x15E8
    ctx->pc = 0x157870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961688));
    // 0x157874: 0xae330010  sw          $s3, 0x10($s1)
    ctx->pc = 0x157874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 19));
    // 0x157878: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x157878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x15787c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x15787cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x157880: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x157880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x157884: 0xc04f824  jal         func_13E090
    ctx->pc = 0x157884u;
    SET_GPR_U32(ctx, 31, 0x15788Cu);
    ctx->pc = 0x157888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157884u;
            // 0x157888: 0xae400038  sw          $zero, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15788Cu; }
        if (ctx->pc != 0x15788Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15788Cu; }
        if (ctx->pc != 0x15788Cu) { return; }
    }
    ctx->pc = 0x15788Cu;
    // 0x15788c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15788cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157890: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x157890u;
    {
        const bool branch_taken_0x157890 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x157890) {
            ctx->pc = 0x1578B0u;
            goto label_1578b0;
        }
    }
    ctx->pc = 0x157898u;
    // 0x157898: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x157898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15789c: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15789Cu;
    {
        const bool branch_taken_0x15789c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1578A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15789Cu;
            // 0x1578a0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15789c) {
            ctx->pc = 0x1578A8u;
            goto label_1578a8;
        }
    }
    ctx->pc = 0x1578A4u;
    // 0x1578a4: 0x8c44f198  lw          $a0, -0xE68($v0)
    ctx->pc = 0x1578a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963608)));
label_1578a8:
    // 0x1578a8: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x1578A8u;
    SET_GPR_U32(ctx, 31, 0x1578B0u);
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1578B0u; }
        if (ctx->pc != 0x1578B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1578B0u; }
        if (ctx->pc != 0x1578B0u) { return; }
    }
    ctx->pc = 0x1578B0u;
label_1578b0:
    // 0x1578b0: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1578B0u;
    {
        const bool branch_taken_0x1578b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1578b0) {
            ctx->pc = 0x1578B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1578B0u;
            // 0x1578b4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1578C4u;
            goto label_1578c4;
        }
    }
    ctx->pc = 0x1578B8u;
    // 0x1578b8: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x1578B8u;
    SET_GPR_U32(ctx, 31, 0x1578C0u);
    ctx->pc = 0x1578BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1578B8u;
            // 0x1578bc: 0x132080  sll         $a0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1578C0u; }
        if (ctx->pc != 0x1578C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1578C0u; }
        if (ctx->pc != 0x1578C0u) { return; }
    }
    ctx->pc = 0x1578C0u;
    // 0x1578c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1578c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1578c4:
    // 0x1578c4: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1578C4u;
    {
        const bool branch_taken_0x1578c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1578c4) {
            ctx->pc = 0x1578C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1578C4u;
            // 0x1578c8: 0xde870028  ld          $a3, 0x28($s4) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 20), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1578D8u;
            goto label_1578d8;
        }
    }
    ctx->pc = 0x1578CCu;
    // 0x1578cc: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x1578CCu;
    SET_GPR_U32(ctx, 31, 0x1578D4u);
    ctx->pc = 0x1578D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1578CCu;
            // 0x1578d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1578D4u; }
        if (ctx->pc != 0x1578D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1578D4u; }
        if (ctx->pc != 0x1578D4u) { return; }
    }
    ctx->pc = 0x1578D4u;
    // 0x1578d4: 0xde870028  ld          $a3, 0x28($s4)
    ctx->pc = 0x1578d4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 20), 40)));
label_1578d8:
    // 0x1578d8: 0x26c50008  addiu       $a1, $s6, 0x8
    ctx->pc = 0x1578d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1578dc: 0xde820030  ld          $v0, 0x30($s4)
    ctx->pc = 0x1578dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1578e0: 0x26440080  addiu       $a0, $s2, 0x80
    ctx->pc = 0x1578e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x1578e4: 0x8e890040  lw          $t1, 0x40($s4)
    ctx->pc = 0x1578e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x1578e8: 0x8e880020  lw          $t0, 0x20($s4)
    ctx->pc = 0x1578e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1578ec: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x1578ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1578f0: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x1578f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1578f4: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x1578f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1578f8: 0xc6820010  lwc1        $f2, 0x10($s4)
    ctx->pc = 0x1578f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1578fc: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1578fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x157900: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x157900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x157904: 0xae480050  sw          $t0, 0x50($s2)
    ctx->pc = 0x157904u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 8));
    // 0x157908: 0xfe470058  sd          $a3, 0x58($s2)
    ctx->pc = 0x157908u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 7));
    // 0x15790c: 0xfe420060  sd          $v0, 0x60($s2)
    ctx->pc = 0x15790cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 2));
    // 0x157910: 0xae430068  sw          $v1, 0x68($s2)
    ctx->pc = 0x157910u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 3));
    // 0x157914: 0xe640006c  swc1        $f0, 0x6C($s2)
    ctx->pc = 0x157914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
    // 0x157918: 0xe6410070  swc1        $f1, 0x70($s2)
    ctx->pc = 0x157918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x15791c: 0xe6420074  swc1        $f2, 0x74($s2)
    ctx->pc = 0x15791cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x157920: 0xc0a2644  jal         func_289910
    ctx->pc = 0x157920u;
    SET_GPR_U32(ctx, 31, 0x157928u);
    ctx->pc = 0x157924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157920u;
            // 0x157924: 0xae490078  sw          $t1, 0x78($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157928u; }
        if (ctx->pc != 0x157928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157928u; }
        if (ctx->pc != 0x157928u) { return; }
    }
    ctx->pc = 0x157928u;
    // 0x157928: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x157928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15792c:
    // 0x15792c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x15792cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x157930: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x157930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x157934: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x157934u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x157938: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x157938u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15793c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x15793cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x157940: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x157940u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x157944: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x157944u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x157948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15794c: 0x3e00008  jr          $ra
    ctx->pc = 0x15794Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15794Cu;
            // 0x157950: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x157548u: goto label_157548;
            case 0x157580u: goto label_157580;
            case 0x1575B8u: goto label_1575b8;
            case 0x1575D4u: goto label_1575d4;
            case 0x1575E8u: goto label_1575e8;
            case 0x157610u: goto label_157610;
            case 0x157624u: goto label_157624;
            case 0x1576D8u: goto label_1576d8;
            case 0x157704u: goto label_157704;
            case 0x15771Cu: goto label_15771c;
            case 0x1577A8u: goto label_1577a8;
            case 0x1577B0u: goto label_1577b0;
            case 0x1577C4u: goto label_1577c4;
            case 0x1577D8u: goto label_1577d8;
            case 0x157828u: goto label_157828;
            case 0x157830u: goto label_157830;
            case 0x157844u: goto label_157844;
            case 0x157858u: goto label_157858;
            case 0x1578A8u: goto label_1578a8;
            case 0x1578B0u: goto label_1578b0;
            case 0x1578C4u: goto label_1578c4;
            case 0x1578D8u: goto label_1578d8;
            case 0x15792Cu: goto label_15792c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x157954u;
    // 0x157954: 0x0  nop
    ctx->pc = 0x157954u;
    // NOP
}
