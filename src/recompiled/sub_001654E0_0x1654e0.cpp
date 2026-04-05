#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001654E0
// Address: 0x1654e0 - 0x1664c0
void sub_001654E0_0x1654e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001654E0_0x1654e0");
#endif

    ctx->pc = 0x1654e0u;

    // 0x1654e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1654e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1654e4: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x1654e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x1654e8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1654e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1654ec: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x1654ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x1654f0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1654f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1654f4: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x1654f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x1654f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1654f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1654fc: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1654fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x165500: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x165500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x165504: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x165504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165508: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x165508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x16550c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x16550cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165514: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x165514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x165518: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x165518u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x16551c: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x16551cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x165520: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x165520u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x165524: 0x26500028  addiu       $s0, $s2, 0x28
    ctx->pc = 0x165524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x165528: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x165528u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x16552c: 0xa6470004  sh          $a3, 0x4($s2)
    ctx->pc = 0x16552cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x165530: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x165530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x165534: 0xa6480000  sh          $t0, 0x0($s2)
    ctx->pc = 0x165534u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x165538: 0xae460020  sw          $a2, 0x20($s2)
    ctx->pc = 0x165538u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 6));
    // 0x16553c: 0x26510034  addiu       $s1, $s2, 0x34
    ctx->pc = 0x16553cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x165540: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x165540u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x165544: 0xc08e222  jal         func_238888
    ctx->pc = 0x165544u;
    SET_GPR_U32(ctx, 31, 0x16554Cu);
    ctx->pc = 0x165548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165544u;
            // 0x165548: 0xa6420002  sh          $v0, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16554Cu; }
        if (ctx->pc != 0x16554Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16554Cu; }
        if (ctx->pc != 0x16554Cu) { return; }
    }
    ctx->pc = 0x16554Cu;
    // 0x16554c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x16554cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x165550: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x165550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165554: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x165554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165558: 0xc08e222  jal         func_238888
    ctx->pc = 0x165558u;
    SET_GPR_U32(ctx, 31, 0x165560u);
    ctx->pc = 0x16555Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165558u;
            // 0x16555c: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165560u; }
        if (ctx->pc != 0x165560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165560u; }
        if (ctx->pc != 0x165560u) { return; }
    }
    ctx->pc = 0x165560u;
    // 0x165560: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x165560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x165564: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x165564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x165568: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x165568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x16556c: 0x246307e0  addiu       $v1, $v1, 0x7E0
    ctx->pc = 0x16556cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2016));
    // 0x165570: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x165570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x165574: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x165574u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
    // 0x165578: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x165578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x16557c: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x16557cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x165580: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x165580u;
    SET_GPR_U32(ctx, 31, 0x165588u);
    ctx->pc = 0x165584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165580u;
            // 0x165584: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165588u; }
        if (ctx->pc != 0x165588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165588u; }
        if (ctx->pc != 0x165588u) { return; }
    }
    ctx->pc = 0x165588u;
    // 0x165588: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x165588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x16558c: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x16558cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x165590: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x165590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x165594: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x165594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x165598: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x165598u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x16559c: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x16559Cu;
    SET_GPR_U32(ctx, 31, 0x1655A4u);
    ctx->pc = 0x1655A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16559Cu;
            // 0x1655a0: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1655A4u; }
        if (ctx->pc != 0x1655A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1655A4u; }
        if (ctx->pc != 0x1655A4u) { return; }
    }
    ctx->pc = 0x1655A4u;
    // 0x1655a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1655a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1655a8: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x1655a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x1655ac: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x1655acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x1655b0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1655b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1655b4: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x1655b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
    // 0x1655b8: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x1655B8u;
    SET_GPR_U32(ctx, 31, 0x1655C0u);
    ctx->pc = 0x1655BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1655B8u;
            // 0x1655bc: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1655C0u; }
        if (ctx->pc != 0x1655C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1655C0u; }
        if (ctx->pc != 0x1655C0u) { return; }
    }
    ctx->pc = 0x1655C0u;
    // 0x1655c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1655c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1655c4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1655c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1655c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1655c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1655cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1655ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1655d0:
    // 0x1655d0: 0x0  nop
    ctx->pc = 0x1655d0u;
    // NOP
    // 0x1655d4: 0x0  nop
    ctx->pc = 0x1655d4u;
    // NOP
    // 0x1655d8: 0x0  nop
    ctx->pc = 0x1655d8u;
    // NOP
    // 0x1655dc: 0x0  nop
    ctx->pc = 0x1655dcu;
    // NOP
    // 0x1655e0: 0x0  nop
    ctx->pc = 0x1655e0u;
    // NOP
    // 0x1655e4: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1655E4u;
    {
        const bool branch_taken_0x1655e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1655E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1655E4u;
            // 0x1655e8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1655e4) {
            ctx->pc = 0x1655D0u;
            runtime->cooperativeGuestYield();
            goto label_1655d0;
        }
    }
    ctx->pc = 0x1655ECu;
    // 0x1655ec: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x1655ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1655f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1655f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1655f4: 0xae440024  sw          $a0, 0x24($s2)
    ctx->pc = 0x1655f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
    // 0x1655f8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1655F8u;
    {
        const bool branch_taken_0x1655f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1655FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1655F8u;
            // 0x1655fc: 0xae400044  sw          $zero, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1655f8) {
            ctx->pc = 0x1656ACu;
            goto label_1656ac;
        }
    }
    ctx->pc = 0x165600u;
    // 0x165600: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x165600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x165604: 0x0  nop
    ctx->pc = 0x165604u;
    // NOP
label_165608:
    // 0x165608: 0x8e510014  lw          $s1, 0x14($s2)
    ctx->pc = 0x165608u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x16560c: 0x2708018  mult        $s0, $s3, $s0
    ctx->pc = 0x16560cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x165610: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x165610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x165614: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x165614u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x165618: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x165618u;
    SET_GPR_U32(ctx, 31, 0x165620u);
    ctx->pc = 0x16561Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165618u;
            // 0x16561c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165620u; }
        if (ctx->pc != 0x165620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165620u; }
        if (ctx->pc != 0x165620u) { return; }
    }
    ctx->pc = 0x165620u;
    // 0x165620: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x165620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x165624: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x165624u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165628: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x165628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x16562c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x16562Cu;
    {
        const bool branch_taken_0x16562c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x165630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16562Cu;
            // 0x165630: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16562c) {
            ctx->pc = 0x16565Cu;
            goto label_16565c;
        }
    }
    ctx->pc = 0x165634u;
    // 0x165634: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x165634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165638: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x165638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16563c: 0x0  nop
    ctx->pc = 0x16563cu;
    // NOP
label_165640:
    // 0x165640: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x165640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x165644: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x165644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x165648: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x165648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x16564c: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x16564cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x165650: 0x0  nop
    ctx->pc = 0x165650u;
    // NOP
    // 0x165654: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x165654u;
    {
        const bool branch_taken_0x165654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165654u;
            // 0x165658: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165654) {
            ctx->pc = 0x165640u;
            runtime->cooperativeGuestYield();
            goto label_165640;
        }
    }
    ctx->pc = 0x16565Cu;
label_16565c:
    // 0x16565c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x16565cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x165660: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x165660u;
    {
        const bool branch_taken_0x165660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165660u;
            // 0x165664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165660) {
            ctx->pc = 0x165698u;
            goto label_165698;
        }
    }
    ctx->pc = 0x165668u;
    // 0x165668: 0x8e470024  lw          $a3, 0x24($s2)
    ctx->pc = 0x165668u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x16566c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16566cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_165670:
    // 0x165670: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x165670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x165674: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x165674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x165678: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x165678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x16567c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x16567cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x165680: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x165680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x165684: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x165684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165688: 0xa6202b  sltu        $a0, $a1, $a2
    ctx->pc = 0x165688u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x16568c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16568cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x165690: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x165690u;
    {
        const bool branch_taken_0x165690 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x165694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165690u;
            // 0x165694: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165690) {
            ctx->pc = 0x165670u;
            runtime->cooperativeGuestYield();
            goto label_165670;
        }
    }
    ctx->pc = 0x165698u;
label_165698:
    // 0x165698: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x165698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x16569c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x16569cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1656a0: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1656a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1656a4: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1656A4u;
    {
        const bool branch_taken_0x1656a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1656A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1656A4u;
            // 0x1656a8: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1656a4) {
            ctx->pc = 0x165608u;
            runtime->cooperativeGuestYield();
            goto label_165608;
        }
    }
    ctx->pc = 0x1656ACu;
label_1656ac:
    // 0x1656ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1656acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1656b0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1656b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1656b4: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x1656b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
    // 0x1656b8: 0x2442b428  addiu       $v0, $v0, -0x4BD8
    ctx->pc = 0x1656b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947880));
    // 0x1656bc: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x1656bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x1656c0: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x1656c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1656c4: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x1656c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1656c8: 0xae4200d0  sw          $v0, 0xD0($s2)
    ctx->pc = 0x1656c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
    // 0x1656cc: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x1656ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1656d0: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1656d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x1656d4: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x1656d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
    // 0x1656d8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1656d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1656dc: 0xc04d7f0  jal         func_135FC0
    ctx->pc = 0x1656DCu;
    SET_GPR_U32(ctx, 31, 0x1656E4u);
    ctx->pc = 0x1656E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1656DCu;
            // 0x1656e0: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135FC0u;
    if (runtime->hasFunction(0x135FC0u)) {
        auto targetFn = runtime->lookupFunction(0x135FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1656E4u; }
        if (ctx->pc != 0x1656E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_135fc0_0x135fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1656E4u; }
        if (ctx->pc != 0x1656E4u) { return; }
    }
    ctx->pc = 0x1656E4u;
    // 0x1656e4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1656e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1656e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1656e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1656ec: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1656ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1656f0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1656f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1656f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1656f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1656f8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1656f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1656fc: 0xe4404a50  swc1        $f0, 0x4A50($v0)
    ctx->pc = 0x1656fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 19024), bits); }
    // 0x165700: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x165700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165704: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x165704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x165708: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x165708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16570c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16570cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165710: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x165710u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165714: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x165714u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16571c: 0xe4614a54  swc1        $f1, 0x4A54($v1)
    ctx->pc = 0x16571cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 19028), bits); }
    // 0x165720: 0x3e00008  jr          $ra
    ctx->pc = 0x165720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165720u;
            // 0x165724: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1655D0u: goto label_1655d0;
            case 0x165608u: goto label_165608;
            case 0x165640u: goto label_165640;
            case 0x16565Cu: goto label_16565c;
            case 0x165670u: goto label_165670;
            case 0x165698u: goto label_165698;
            case 0x1656ACu: goto label_1656ac;
            case 0x165888u: goto label_165888;
            case 0x1658A4u: goto label_1658a4;
            case 0x1658ACu: goto label_1658ac;
            case 0x1658C8u: goto label_1658c8;
            case 0x165A70u: goto label_165a70;
            case 0x165A74u: goto label_165a74;
            case 0x165AA4u: goto label_165aa4;
            case 0x165AE0u: goto label_165ae0;
            case 0x165AFCu: goto label_165afc;
            case 0x165B18u: goto label_165b18;
            case 0x165B20u: goto label_165b20;
            case 0x165C38u: goto label_165c38;
            case 0x165C60u: goto label_165c60;
            case 0x165CA4u: goto label_165ca4;
            case 0x165CBCu: goto label_165cbc;
            case 0x165D18u: goto label_165d18;
            case 0x165D1Cu: goto label_165d1c;
            case 0x165DD8u: goto label_165dd8;
            case 0x165E30u: goto label_165e30;
            case 0x165E98u: goto label_165e98;
            case 0x165ED0u: goto label_165ed0;
            case 0x166064u: goto label_166064;
            case 0x1660A0u: goto label_1660a0;
            case 0x1660B0u: goto label_1660b0;
            case 0x1660D4u: goto label_1660d4;
            case 0x1660E0u: goto label_1660e0;
            case 0x1660E4u: goto label_1660e4;
            case 0x16611Cu: goto label_16611c;
            case 0x16612Cu: goto label_16612c;
            case 0x166140u: goto label_166140;
            case 0x16616Cu: goto label_16616c;
            case 0x1661A0u: goto label_1661a0;
            case 0x166268u: goto label_166268;
            case 0x1662DCu: goto label_1662dc;
            case 0x166310u: goto label_166310;
            case 0x16632Cu: goto label_16632c;
            case 0x166344u: goto label_166344;
            case 0x1663C8u: goto label_1663c8;
            case 0x1663D4u: goto label_1663d4;
            case 0x166488u: goto label_166488;
            case 0x166490u: goto label_166490;
            default: break;
        }
        return;
    }
    ctx->pc = 0x165728u;
    // 0x165728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x165728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16572c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x16572cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x165730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165734: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x165734u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165738: 0x2442b428  addiu       $v0, $v0, -0x4BD8
    ctx->pc = 0x165738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947880));
    // 0x16573c: 0xc08ecaa  jal         func_23B2A8
    ctx->pc = 0x16573Cu;
    SET_GPR_U32(ctx, 31, 0x165744u);
    ctx->pc = 0x165740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16573Cu;
            // 0x165740: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B2A8u;
    if (runtime->hasFunction(0x23B2A8u)) {
        auto targetFn = runtime->lookupFunction(0x23B2A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165744u; }
        if (ctx->pc != 0x165744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23b2a8_0x23b2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165744u; }
        if (ctx->pc != 0x165744u) { return; }
    }
    ctx->pc = 0x165744u;
    // 0x165744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165748: 0x3e00008  jr          $ra
    ctx->pc = 0x165748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16574Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165748u;
            // 0x16574c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1655D0u: goto label_1655d0;
            case 0x165608u: goto label_165608;
            case 0x165640u: goto label_165640;
            case 0x16565Cu: goto label_16565c;
            case 0x165670u: goto label_165670;
            case 0x165698u: goto label_165698;
            case 0x1656ACu: goto label_1656ac;
            case 0x165888u: goto label_165888;
            case 0x1658A4u: goto label_1658a4;
            case 0x1658ACu: goto label_1658ac;
            case 0x1658C8u: goto label_1658c8;
            case 0x165A70u: goto label_165a70;
            case 0x165A74u: goto label_165a74;
            case 0x165AA4u: goto label_165aa4;
            case 0x165AE0u: goto label_165ae0;
            case 0x165AFCu: goto label_165afc;
            case 0x165B18u: goto label_165b18;
            case 0x165B20u: goto label_165b20;
            case 0x165C38u: goto label_165c38;
            case 0x165C60u: goto label_165c60;
            case 0x165CA4u: goto label_165ca4;
            case 0x165CBCu: goto label_165cbc;
            case 0x165D18u: goto label_165d18;
            case 0x165D1Cu: goto label_165d1c;
            case 0x165DD8u: goto label_165dd8;
            case 0x165E30u: goto label_165e30;
            case 0x165E98u: goto label_165e98;
            case 0x165ED0u: goto label_165ed0;
            case 0x166064u: goto label_166064;
            case 0x1660A0u: goto label_1660a0;
            case 0x1660B0u: goto label_1660b0;
            case 0x1660D4u: goto label_1660d4;
            case 0x1660E0u: goto label_1660e0;
            case 0x1660E4u: goto label_1660e4;
            case 0x16611Cu: goto label_16611c;
            case 0x16612Cu: goto label_16612c;
            case 0x166140u: goto label_166140;
            case 0x16616Cu: goto label_16616c;
            case 0x1661A0u: goto label_1661a0;
            case 0x166268u: goto label_166268;
            case 0x1662DCu: goto label_1662dc;
            case 0x166310u: goto label_166310;
            case 0x16632Cu: goto label_16632c;
            case 0x166344u: goto label_166344;
            case 0x1663C8u: goto label_1663c8;
            case 0x1663D4u: goto label_1663d4;
            case 0x166488u: goto label_166488;
            case 0x166490u: goto label_166490;
            default: break;
        }
        return;
    }
    ctx->pc = 0x165750u;
    // 0x165750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x165750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x165754: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x165754u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165758: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x165758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16575c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x16575cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x165760: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x165760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x165764: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x165764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x165768: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x165768u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x16576c: 0x8c6800d0  lw          $t0, 0xD0($v1)
    ctx->pc = 0x16576cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x165770: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x165770u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x165774: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x165774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x165778: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x165778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x16577c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x16577cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x165780: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x165780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x165784: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x165784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x165788: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x165788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x16578c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x16578cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x165790: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x165790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x165794: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x165794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x165798: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x165798u;
    SET_GPR_U32(ctx, 31, 0x1657A0u);
    ctx->pc = 0x16579Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165798u;
            // 0x16579c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1657A0u; }
        if (ctx->pc != 0x1657A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1657A0u; }
        if (ctx->pc != 0x1657A0u) { return; }
    }
    ctx->pc = 0x1657A0u;
    // 0x1657a0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1657a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1657a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1657a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1657a8: 0x3c06dead  lui         $a2, 0xDEAD
    ctx->pc = 0x1657a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57005 << 16));
    // 0x1657ac: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x1657acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x1657b0: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x1657b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x1657b4: 0x24e70978  addiu       $a3, $a3, 0x978
    ctx->pc = 0x1657b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2424));
    // 0x1657b8: 0x34c6beef  ori         $a2, $a2, 0xBEEF
    ctx->pc = 0x1657b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48879);
    // 0x1657bc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1657bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1657c0: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x1657c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1657c4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1657c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1657c8: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x1657c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1657cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1657ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1657d0: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x1657d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x1657d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1657d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1657d8: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x1657d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x1657dc: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1657dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1657e0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1657e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1657e4: 0xc08e222  jal         func_238888
    ctx->pc = 0x1657E4u;
    SET_GPR_U32(ctx, 31, 0x1657ECu);
    ctx->pc = 0x1657E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1657E4u;
            // 0x1657e8: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1657ECu; }
        if (ctx->pc != 0x1657ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1657ECu; }
        if (ctx->pc != 0x1657ECu) { return; }
    }
    ctx->pc = 0x1657ECu;
    // 0x1657ec: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1657ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1657f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1657f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1657f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1657f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1657f8: 0xc08e222  jal         func_238888
    ctx->pc = 0x1657F8u;
    SET_GPR_U32(ctx, 31, 0x165800u);
    ctx->pc = 0x1657FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1657F8u;
            // 0x1657fc: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165800u; }
        if (ctx->pc != 0x165800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165800u; }
        if (ctx->pc != 0x165800u) { return; }
    }
    ctx->pc = 0x165800u;
    // 0x165800: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x165800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x165804: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x165804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x165808: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x165808u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16580c: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x16580cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x165810: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x165810u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165814: 0x2484b4f8  addiu       $a0, $a0, -0x4B08
    ctx->pc = 0x165814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948088));
    // 0x165818: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x165818u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16581c: 0x30a5ffdf  andi        $a1, $a1, 0xFFDF
    ctx->pc = 0x16581cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65503);
    // 0x165820: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x165820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x165824: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x165824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x165828: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x165828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x16582c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16582cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165830: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x165830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x165834: 0xae080010  sw          $t0, 0x10($s0)
    ctx->pc = 0x165834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 8));
    // 0x165838: 0xae070034  sw          $a3, 0x34($s0)
    ctx->pc = 0x165838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
    // 0x16583c: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x16583cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x165840: 0xa6050004  sh          $a1, 0x4($s0)
    ctx->pc = 0x165840u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x165844: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x165844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x165848: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x165848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x16584c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x16584cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x165850: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x165850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x165854: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x165854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165858: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x165858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16585c: 0x3e00008  jr          $ra
    ctx->pc = 0x16585Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16585Cu;
            // 0x165860: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1655D0u: goto label_1655d0;
            case 0x165608u: goto label_165608;
            case 0x165640u: goto label_165640;
            case 0x16565Cu: goto label_16565c;
            case 0x165670u: goto label_165670;
            case 0x165698u: goto label_165698;
            case 0x1656ACu: goto label_1656ac;
            case 0x165888u: goto label_165888;
            case 0x1658A4u: goto label_1658a4;
            case 0x1658ACu: goto label_1658ac;
            case 0x1658C8u: goto label_1658c8;
            case 0x165A70u: goto label_165a70;
            case 0x165A74u: goto label_165a74;
            case 0x165AA4u: goto label_165aa4;
            case 0x165AE0u: goto label_165ae0;
            case 0x165AFCu: goto label_165afc;
            case 0x165B18u: goto label_165b18;
            case 0x165B20u: goto label_165b20;
            case 0x165C38u: goto label_165c38;
            case 0x165C60u: goto label_165c60;
            case 0x165CA4u: goto label_165ca4;
            case 0x165CBCu: goto label_165cbc;
            case 0x165D18u: goto label_165d18;
            case 0x165D1Cu: goto label_165d1c;
            case 0x165DD8u: goto label_165dd8;
            case 0x165E30u: goto label_165e30;
            case 0x165E98u: goto label_165e98;
            case 0x165ED0u: goto label_165ed0;
            case 0x166064u: goto label_166064;
            case 0x1660A0u: goto label_1660a0;
            case 0x1660B0u: goto label_1660b0;
            case 0x1660D4u: goto label_1660d4;
            case 0x1660E0u: goto label_1660e0;
            case 0x1660E4u: goto label_1660e4;
            case 0x16611Cu: goto label_16611c;
            case 0x16612Cu: goto label_16612c;
            case 0x166140u: goto label_166140;
            case 0x16616Cu: goto label_16616c;
            case 0x1661A0u: goto label_1661a0;
            case 0x166268u: goto label_166268;
            case 0x1662DCu: goto label_1662dc;
            case 0x166310u: goto label_166310;
            case 0x16632Cu: goto label_16632c;
            case 0x166344u: goto label_166344;
            case 0x1663C8u: goto label_1663c8;
            case 0x1663D4u: goto label_1663d4;
            case 0x166488u: goto label_166488;
            case 0x166490u: goto label_166490;
            default: break;
        }
        return;
    }
    ctx->pc = 0x165864u;
    // 0x165864: 0x0  nop
    ctx->pc = 0x165864u;
    // NOP
    // 0x165868: 0x14c00010  bnez        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x165868u;
    {
        const bool branch_taken_0x165868 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x16586Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165868u;
            // 0x16586c: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165868) {
            ctx->pc = 0x1658ACu;
            goto label_1658ac;
        }
    }
    ctx->pc = 0x165870u;
    // 0x165870: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x165870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x165874: 0x24840064  addiu       $a0, $a0, 0x64
    ctx->pc = 0x165874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    // 0x165878: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x165878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16587c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x16587Cu;
    {
        const bool branch_taken_0x16587c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x165880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16587Cu;
            // 0x165880: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16587c) {
            ctx->pc = 0x1658A4u;
            goto label_1658a4;
        }
    }
    ctx->pc = 0x165884u;
    // 0x165884: 0x0  nop
    ctx->pc = 0x165884u;
    // NOP
label_165888:
    // 0x165888: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x165888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16588c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x16588cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x165890: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x165890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x165894: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x165894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x165898: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x165898u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x16589c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16589Cu;
    {
        const bool branch_taken_0x16589c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1658A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16589Cu;
            // 0x1658a0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16589c) {
            ctx->pc = 0x165888u;
            runtime->cooperativeGuestYield();
            goto label_165888;
        }
    }
    ctx->pc = 0x1658A4u;
label_1658a4:
    // 0x1658a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1658A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1655D0u: goto label_1655d0;
            case 0x165608u: goto label_165608;
            case 0x165640u: goto label_165640;
            case 0x16565Cu: goto label_16565c;
            case 0x165670u: goto label_165670;
            case 0x165698u: goto label_165698;
            case 0x1656ACu: goto label_1656ac;
            case 0x165888u: goto label_165888;
            case 0x1658A4u: goto label_1658a4;
            case 0x1658ACu: goto label_1658ac;
            case 0x1658C8u: goto label_1658c8;
            case 0x165A70u: goto label_165a70;
            case 0x165A74u: goto label_165a74;
            case 0x165AA4u: goto label_165aa4;
            case 0x165AE0u: goto label_165ae0;
            case 0x165AFCu: goto label_165afc;
            case 0x165B18u: goto label_165b18;
            case 0x165B20u: goto label_165b20;
            case 0x165C38u: goto label_165c38;
            case 0x165C60u: goto label_165c60;
            case 0x165CA4u: goto label_165ca4;
            case 0x165CBCu: goto label_165cbc;
            case 0x165D18u: goto label_165d18;
            case 0x165D1Cu: goto label_165d1c;
            case 0x165DD8u: goto label_165dd8;
            case 0x165E30u: goto label_165e30;
            case 0x165E98u: goto label_165e98;
            case 0x165ED0u: goto label_165ed0;
            case 0x166064u: goto label_166064;
            case 0x1660A0u: goto label_1660a0;
            case 0x1660B0u: goto label_1660b0;
            case 0x1660D4u: goto label_1660d4;
            case 0x1660E0u: goto label_1660e0;
            case 0x1660E4u: goto label_1660e4;
            case 0x16611Cu: goto label_16611c;
            case 0x16612Cu: goto label_16612c;
            case 0x166140u: goto label_166140;
            case 0x16616Cu: goto label_16616c;
            case 0x1661A0u: goto label_1661a0;
            case 0x166268u: goto label_166268;
            case 0x1662DCu: goto label_1662dc;
            case 0x166310u: goto label_166310;
            case 0x16632Cu: goto label_16632c;
            case 0x166344u: goto label_166344;
            case 0x1663C8u: goto label_1663c8;
            case 0x1663D4u: goto label_1663d4;
            case 0x166488u: goto label_166488;
            case 0x166490u: goto label_166490;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1658ACu;
label_1658ac:
    // 0x1658ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1658acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1658b0: 0x2442006c  addiu       $v0, $v0, 0x6C
    ctx->pc = 0x1658b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x1658b4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1658b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1658b8: 0x10c0fffa  beqz        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1658B8u;
    {
        const bool branch_taken_0x1658b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1658BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1658B8u;
            // 0x1658bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1658b8) {
            ctx->pc = 0x1658A4u;
            runtime->cooperativeGuestYield();
            goto label_1658a4;
        }
    }
    ctx->pc = 0x1658C0u;
    // 0x1658c0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1658c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1658c4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1658c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1658c8:
    // 0x1658c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1658c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1658cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1658ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1658d0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1658d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1658d4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1658d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1658d8: 0x0  nop
    ctx->pc = 0x1658d8u;
    // NOP
    // 0x1658dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1658DCu;
    {
        const bool branch_taken_0x1658dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1658E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1658DCu;
            // 0x1658e0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1658dc) {
            ctx->pc = 0x1658C8u;
            runtime->cooperativeGuestYield();
            goto label_1658c8;
        }
    }
    ctx->pc = 0x1658E4u;
    // 0x1658e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1658E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1655D0u: goto label_1655d0;
            case 0x165608u: goto label_165608;
            case 0x165640u: goto label_165640;
            case 0x16565Cu: goto label_16565c;
            case 0x165670u: goto label_165670;
            case 0x165698u: goto label_165698;
            case 0x1656ACu: goto label_1656ac;
            case 0x165888u: goto label_165888;
            case 0x1658A4u: goto label_1658a4;
            case 0x1658ACu: goto label_1658ac;
            case 0x1658C8u: goto label_1658c8;
            case 0x165A70u: goto label_165a70;
            case 0x165A74u: goto label_165a74;
            case 0x165AA4u: goto label_165aa4;
            case 0x165AE0u: goto label_165ae0;
            case 0x165AFCu: goto label_165afc;
            case 0x165B18u: goto label_165b18;
            case 0x165B20u: goto label_165b20;
            case 0x165C38u: goto label_165c38;
            case 0x165C60u: goto label_165c60;
            case 0x165CA4u: goto label_165ca4;
            case 0x165CBCu: goto label_165cbc;
            case 0x165D18u: goto label_165d18;
            case 0x165D1Cu: goto label_165d1c;
            case 0x165DD8u: goto label_165dd8;
            case 0x165E30u: goto label_165e30;
            case 0x165E98u: goto label_165e98;
            case 0x165ED0u: goto label_165ed0;
            case 0x166064u: goto label_166064;
            case 0x1660A0u: goto label_1660a0;
            case 0x1660B0u: goto label_1660b0;
            case 0x1660D4u: goto label_1660d4;
            case 0x1660E0u: goto label_1660e0;
            case 0x1660E4u: goto label_1660e4;
            case 0x16611Cu: goto label_16611c;
            case 0x16612Cu: goto label_16612c;
            case 0x166140u: goto label_166140;
            case 0x16616Cu: goto label_16616c;
            case 0x1661A0u: goto label_1661a0;
            case 0x166268u: goto label_166268;
            case 0x1662DCu: goto label_1662dc;
            case 0x166310u: goto label_166310;
            case 0x16632Cu: goto label_16632c;
            case 0x166344u: goto label_166344;
            case 0x1663C8u: goto label_1663c8;
            case 0x1663D4u: goto label_1663d4;
            case 0x166488u: goto label_166488;
            case 0x166490u: goto label_166490;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1658ECu;
    // 0x1658ec: 0x0  nop
    ctx->pc = 0x1658ecu;
    // NOP
    // 0x1658f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1658F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1655D0u: goto label_1655d0;
            case 0x165608u: goto label_165608;
            case 0x165640u: goto label_165640;
            case 0x16565Cu: goto label_16565c;
            case 0x165670u: goto label_165670;
            case 0x165698u: goto label_165698;
            case 0x1656ACu: goto label_1656ac;
            case 0x165888u: goto label_165888;
            case 0x1658A4u: goto label_1658a4;
            case 0x1658ACu: goto label_1658ac;
            case 0x1658C8u: goto label_1658c8;
            case 0x165A70u: goto label_165a70;
            case 0x165A74u: goto label_165a74;
            case 0x165AA4u: goto label_165aa4;
            case 0x165AE0u: goto label_165ae0;
            case 0x165AFCu: goto label_165afc;
            case 0x165B18u: goto label_165b18;
            case 0x165B20u: goto label_165b20;
            case 0x165C38u: goto label_165c38;
            case 0x165C60u: goto label_165c60;
            case 0x165CA4u: goto label_165ca4;
            case 0x165CBCu: goto label_165cbc;
            case 0x165D18u: goto label_165d18;
            case 0x165D1Cu: goto label_165d1c;
            case 0x165DD8u: goto label_165dd8;
            case 0x165E30u: goto label_165e30;
            case 0x165E98u: goto label_165e98;
            case 0x165ED0u: goto label_165ed0;
            case 0x166064u: goto label_166064;
            case 0x1660A0u: goto label_1660a0;
            case 0x1660B0u: goto label_1660b0;
            case 0x1660D4u: goto label_1660d4;
            case 0x1660E0u: goto label_1660e0;
            case 0x1660E4u: goto label_1660e4;
            case 0x16611Cu: goto label_16611c;
            case 0x16612Cu: goto label_16612c;
            case 0x166140u: goto label_166140;
            case 0x16616Cu: goto label_16616c;
            case 0x1661A0u: goto label_1661a0;
            case 0x166268u: goto label_166268;
            case 0x1662DCu: goto label_1662dc;
            case 0x166310u: goto label_166310;
            case 0x16632Cu: goto label_16632c;
            case 0x166344u: goto label_166344;
            case 0x1663C8u: goto label_1663c8;
            case 0x1663D4u: goto label_1663d4;
            case 0x166488u: goto label_166488;
            case 0x166490u: goto label_166490;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1658F8u;
    // 0x1658f8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1658f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1658fc: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1658fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x165900: 0x27a90048  addiu       $t1, $sp, 0x48
    ctx->pc = 0x165900u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x165904: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x165904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x165908: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x165908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16590c: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x16590cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x165910: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x165910u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165914: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x165914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x165918: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x165918u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16591c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x16591cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165920: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x165920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x165924: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x165924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x165928: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x165928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x16592c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16592cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165930: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x165930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x165934: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x165934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x165938: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x165938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x16593c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x16593cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x165940: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x165940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x165944: 0xc059e18  jal         func_167860
    ctx->pc = 0x165944u;
    SET_GPR_U32(ctx, 31, 0x16594Cu);
    ctx->pc = 0x165948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165944u;
            // 0x165948: 0x27a80044  addiu       $t0, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167860u;
    if (runtime->hasFunction(0x167860u)) {
        auto targetFn = runtime->lookupFunction(0x167860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16594Cu; }
        if (ctx->pc != 0x16594Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_167860_0x1679f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16594Cu; }
        if (ctx->pc != 0x16594Cu) { return; }
    }
    ctx->pc = 0x16594Cu;
    // 0x16594c: 0x8fb70044  lw          $s7, 0x44($sp)
    ctx->pc = 0x16594cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x165950: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x165950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x165954: 0x12e20205  beq         $s7, $v0, . + 4 + (0x205 << 2)
    ctx->pc = 0x165954u;
    {
        const bool branch_taken_0x165954 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x165958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165954u;
            // 0x165958: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165954) {
            ctx->pc = 0x16616Cu;
            goto label_16616c;
        }
    }
    ctx->pc = 0x16595Cu;
    // 0x16595c: 0xc0587bc  jal         func_161EF0
    ctx->pc = 0x16595Cu;
    SET_GPR_U32(ctx, 31, 0x165964u);
    ctx->pc = 0x165960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16595Cu;
            // 0x165960: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161EF0u;
    if (runtime->hasFunction(0x161EF0u)) {
        auto targetFn = runtime->lookupFunction(0x161EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165964u; }
        if (ctx->pc != 0x165964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161EF0_0x161ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165964u; }
        if (ctx->pc != 0x165964u) { return; }
    }
    ctx->pc = 0x165964u;
    // 0x165964: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x165964u;
    SET_GPR_U32(ctx, 31, 0x16596Cu);
    ctx->pc = 0x165968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165964u;
            // 0x165968: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16596Cu; }
        if (ctx->pc != 0x16596Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16596Cu; }
        if (ctx->pc != 0x16596Cu) { return; }
    }
    ctx->pc = 0x16596Cu;
    // 0x16596c: 0x8e03f168  lw          $v1, -0xE98($s0)
    ctx->pc = 0x16596cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x165970: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x165970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x165974: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x165974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x165978: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x165978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x16597c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x16597cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x165980: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x165980u;
    SET_GPR_U32(ctx, 31, 0x165988u);
    ctx->pc = 0x165984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165980u;
            // 0x165984: 0xae02f168  sw          $v0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165988u; }
        if (ctx->pc != 0x165988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165988u; }
        if (ctx->pc != 0x165988u) { return; }
    }
    ctx->pc = 0x165988u;
    // 0x165988: 0x8e03f168  lw          $v1, -0xE98($s0)
    ctx->pc = 0x165988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x16598c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x16598cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x165990: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x165990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x165994: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x165994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x165998: 0xac441010  sw          $a0, 0x1010($v0)
    ctx->pc = 0x165998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4112), GPR_U32(ctx, 4));
    // 0x16599c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x16599cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1659a0: 0xaca31014  sw          $v1, 0x1014($a1)
    ctx->pc = 0x1659a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4116), GPR_U32(ctx, 3));
    // 0x1659a4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1659a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1659a8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1659a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1659ac: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1659acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1659b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1659b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1659b4: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x1659b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x1659b8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1659b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1659bc: 0x8e04f168  lw          $a0, -0xE98($s0)
    ctx->pc = 0x1659bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x1659c0: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1659c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1659c4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1659c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1659c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1659c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1659cc: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1659ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1659d0: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x1659d0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
    // 0x1659d4: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x1659d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1659d8: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x1659d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x1659dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1659dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1659e0: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x1659e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1659e4: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x1659e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1659e8: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1659e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x1659ec: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x1659ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x1659f0: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x1659f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x1659f4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x1659f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x1659f8: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x1659f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x1659fc: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1659fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x165a00: 0x3442360b  ori         $v0, $v0, 0x360B
    ctx->pc = 0x165a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13835);
    // 0x165a04: 0xfc670028  sd          $a3, 0x28($v1)
    ctx->pc = 0x165a04u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 7));
    // 0x165a08: 0xfc620010  sd          $v0, 0x10($v1)
    ctx->pc = 0x165a08u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 2));
    // 0x165a0c: 0xfc650018  sd          $a1, 0x18($v1)
    ctx->pc = 0x165a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 5));
    // 0x165a10: 0xfc660020  sd          $a2, 0x20($v1)
    ctx->pc = 0x165a10u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 6));
    // 0x165a14: 0xc04fe9e  jal         func_13FA78
    ctx->pc = 0x165A14u;
    SET_GPR_U32(ctx, 31, 0x165A1Cu);
    ctx->pc = 0x165A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165A14u;
            // 0x165a18: 0xae04f168  sw          $a0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA78u;
    if (runtime->hasFunction(0x13FA78u)) {
        auto targetFn = runtime->lookupFunction(0x13FA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A1Cu; }
        if (ctx->pc != 0x165A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa78_0x13fab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A1Cu; }
        if (ctx->pc != 0x165A1Cu) { return; }
    }
    ctx->pc = 0x165A1Cu;
    // 0x165a1c: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x165A1Cu;
    SET_GPR_U32(ctx, 31, 0x165A24u);
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A24u; }
        if (ctx->pc != 0x165A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A24u; }
        if (ctx->pc != 0x165A24u) { return; }
    }
    ctx->pc = 0x165A24u;
    // 0x165a24: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x165A24u;
    SET_GPR_U32(ctx, 31, 0x165A2Cu);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A2Cu; }
        if (ctx->pc != 0x165A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A2Cu; }
        if (ctx->pc != 0x165A2Cu) { return; }
    }
    ctx->pc = 0x165A2Cu;
    // 0x165a2c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x165a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x165a30: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x165a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165a34: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x165a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x165a38: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x165a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x165a3c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x165a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x165a40: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x165a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x165a44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x165a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x165a48: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x165a48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x165a4c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x165a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x165a50: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x165a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x165a54: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x165a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x165a58: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x165a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x165a5c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x165a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x165a60: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x165a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x165a64: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x165a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x165a68: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x165a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x165a6c: 0x0  nop
    ctx->pc = 0x165a6cu;
    // NOP
label_165a70:
    // 0x165a70: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x165a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_165a74:
    // 0x165a74: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x165a74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x165a78: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x165A78u;
    {
        const bool branch_taken_0x165a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165A78u;
            // 0x165a7c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a78) {
            ctx->pc = 0x165AA4u;
            goto label_165aa4;
        }
    }
    ctx->pc = 0x165A80u;
    // 0x165a80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x165a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165a84: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x165A84u;
    {
        const bool branch_taken_0x165a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165A84u;
            // 0x165a88: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a84) {
            ctx->pc = 0x165A70u;
            runtime->cooperativeGuestYield();
            goto label_165a70;
        }
    }
    ctx->pc = 0x165A8Cu;
    // 0x165a8c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x165a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x165a90: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x165a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x165a94: 0x1080fff7  beqz        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x165A94u;
    {
        const bool branch_taken_0x165a94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x165A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165A94u;
            // 0x165a98: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a94) {
            ctx->pc = 0x165A74u;
            runtime->cooperativeGuestYield();
            goto label_165a74;
        }
    }
    ctx->pc = 0x165A9Cu;
    // 0x165a9c: 0xc059b16  jal         func_166C58
    ctx->pc = 0x165A9Cu;
    SET_GPR_U32(ctx, 31, 0x165AA4u);
    ctx->pc = 0x166C58u;
    if (runtime->hasFunction(0x166C58u)) {
        auto targetFn = runtime->lookupFunction(0x166C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165AA4u; }
        if (ctx->pc != 0x165AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166C58_0x166c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165AA4u; }
        if (ctx->pc != 0x165AA4u) { return; }
    }
    ctx->pc = 0x165AA4u;
label_165aa4:
    // 0x165aa4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x165aa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165aa8: 0x3a230001  xori        $v1, $s1, 0x1
    ctx->pc = 0x165aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x165aac: 0x13100b  movn        $v0, $zero, $s3
    ctx->pc = 0x165aacu;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x165ab0: 0x8e04f168  lw          $a0, -0xE98($s0)
    ctx->pc = 0x165ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x165ab4: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x165ab4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x165ab8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x165ab8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165abc: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x165abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x165ac0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x165ac0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165ac4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x165ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x165ac8: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x165ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x165acc: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x165accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x165ad0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x165ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x165ad4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x165AD4u;
    {
        const bool branch_taken_0x165ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165AD4u;
            // 0x165ad8: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ad4) {
            ctx->pc = 0x165AFCu;
            goto label_165afc;
        }
    }
    ctx->pc = 0x165ADCu;
    // 0x165adc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x165adcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_165ae0:
    // 0x165ae0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x165ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x165ae4: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x165ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x165ae8: 0x0  nop
    ctx->pc = 0x165ae8u;
    // NOP
    // 0x165aec: 0x0  nop
    ctx->pc = 0x165aecu;
    // NOP
    // 0x165af0: 0x0  nop
    ctx->pc = 0x165af0u;
    // NOP
    // 0x165af4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x165AF4u;
    {
        const bool branch_taken_0x165af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165af4) {
            ctx->pc = 0x165AF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165AF4u;
            // 0x165af8: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x165AE0u;
            runtime->cooperativeGuestYield();
            goto label_165ae0;
        }
    }
    ctx->pc = 0x165AFCu;
label_165afc:
    // 0x165afc: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x165afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x165b00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x165b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x165b04: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x165b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x165b08: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x165b08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x165b0c: 0x1040018c  beqz        $v0, . + 4 + (0x18C << 2)
    ctx->pc = 0x165B0Cu;
    {
        const bool branch_taken_0x165b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165B0Cu;
            // 0x165b10: 0xae04f168  sw          $a0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b0c) {
            ctx->pc = 0x166140u;
            goto label_166140;
        }
    }
    ctx->pc = 0x165B14u;
    // 0x165b14: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x165b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_165b18:
    // 0x165b18: 0x10400161  beqz        $v0, . + 4 + (0x161 << 2)
    ctx->pc = 0x165B18u;
    {
        const bool branch_taken_0x165b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165B18u;
            // 0x165b1c: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b18) {
            ctx->pc = 0x1660A0u;
            goto label_1660a0;
        }
    }
    ctx->pc = 0x165B20u;
label_165b20:
    // 0x165b20: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x165b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x165b24: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x165b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165b28: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x165b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    // 0x165b2c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x165b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b30: 0xcca0ffe0  pref        0x00, -0x20($a1)
    ctx->pc = 0x165b30u;
    // PREF instruction (ignored)
    // 0x165b34: 0x8fb40050  lw          $s4, 0x50($sp)
    ctx->pc = 0x165b34u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x165b38: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x165b38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x165b3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x165b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165b40: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x165b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x165b44: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x165b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x165b48: 0x24421080  addiu       $v0, $v0, 0x1080
    ctx->pc = 0x165b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4224));
    // 0x165b4c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x165b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x165b50: 0x8cc41088  lw          $a0, 0x1088($a2)
    ctx->pc = 0x165b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4232)));
    // 0x165b54: 0x8e930004  lw          $s3, 0x4($s4)
    ctx->pc = 0x165b54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x165b58: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x165b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x165b5c: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x165b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x165b60: 0x3b080  sll         $s6, $v1, 2
    ctx->pc = 0x165b60u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x165b64: 0xacc31088  sw          $v1, 0x1088($a2)
    ctx->pc = 0x165b64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4232), GPR_U32(ctx, 3));
    // 0x165b68: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x165b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x165b6c: 0x124000b0  beqz        $s2, . + 4 + (0xB0 << 2)
    ctx->pc = 0x165B6Cu;
    {
        const bool branch_taken_0x165b6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x165B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165B6Cu;
            // 0x165b70: 0x8c5e0000  lw          $fp, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b6c) {
            ctx->pc = 0x165E30u;
            goto label_165e30;
        }
    }
    ctx->pc = 0x165B74u;
    // 0x165b74: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x165b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x165b78: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x165b78u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x165b7c: 0x96620008  lhu         $v0, 0x8($s3)
    ctx->pc = 0x165b7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x165b80: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x165b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x165b84: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x165b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x165b88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x165b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x165b8c: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x165b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x165b90: 0x248600c0  addiu       $a2, $a0, 0xC0
    ctx->pc = 0x165b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x165b94: 0xffa50018  sd          $a1, 0x18($sp)
    ctx->pc = 0x165b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 5));
    // 0x165b98: 0x8e45ed58  lw          $a1, -0x12A8($s2)
    ctx->pc = 0x165b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962520)));
    // 0x165b9c: 0x8e90000c  lw          $s0, 0xC($s4)
    ctx->pc = 0x165b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x165ba0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x165ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x165ba4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x165ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x165ba8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x165ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x165bac: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x165bacu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x165bb0: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x165bb0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165bb4: 0xdc8400c0  ld          $a0, 0xC0($a0)
    ctx->pc = 0x165bb4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x165bb8: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x165bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x165bbc: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x165bbcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x165bc0: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x165bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
    // 0x165bc4: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x165bc4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x165bc8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x165bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x165bcc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x165bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x165bd0: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x165bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x165bd4: 0x427fe  dsrl32      $a0, $a0, 31
    ctx->pc = 0x165bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 31));
    // 0x165bd8: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x165bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x165bdc: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x165bdcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x165be0: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x165be0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x165be4: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x165be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x165be8: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x165be8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x165bec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x165becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x165bf0: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x165bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x165bf4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x165bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x165bf8: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x165bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x165bfc: 0x54450029  bnel        $v0, $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x165BFCu;
    {
        const bool branch_taken_0x165bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x165bfc) {
            ctx->pc = 0x165C00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165BFCu;
            // 0x165c00: 0x8e020098  lw          $v0, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x165CA4u;
            goto label_165ca4;
        }
    }
    ctx->pc = 0x165C04u;
    // 0x165c04: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x165c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x165c08: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x165C08u;
    {
        const bool branch_taken_0x165c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165C08u;
            // 0x165c0c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165c08) {
            ctx->pc = 0x165C38u;
            goto label_165c38;
        }
    }
    ctx->pc = 0x165C10u;
    // 0x165c10: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x165c10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x165c14: 0x8c43398c  lw          $v1, 0x398C($v0)
    ctx->pc = 0x165c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14732)));
    // 0x165c18: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x165c18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x165c1c: 0x8ca239a0  lw          $v0, 0x39A0($a1)
    ctx->pc = 0x165c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 14752)));
    // 0x165c20: 0x8c843990  lw          $a0, 0x3990($a0)
    ctx->pc = 0x165c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14736)));
    // 0x165c24: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x165c24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x165c28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x165c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x165c2c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x165c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x165c30: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x165C30u;
    {
        const bool branch_taken_0x165c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165C30u;
            // 0x165c34: 0xaca239a0  sw          $v0, 0x39A0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 14752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165c30) {
            ctx->pc = 0x165C60u;
            goto label_165c60;
        }
    }
    ctx->pc = 0x165C38u;
label_165c38:
    // 0x165c38: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x165c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x165c3c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x165c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x165c40: 0x8c433994  lw          $v1, 0x3994($v0)
    ctx->pc = 0x165c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14740)));
    // 0x165c44: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x165c44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x165c48: 0x8ca2399c  lw          $v0, 0x399C($a1)
    ctx->pc = 0x165c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 14748)));
    // 0x165c4c: 0x8c843998  lw          $a0, 0x3998($a0)
    ctx->pc = 0x165c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14744)));
    // 0x165c50: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x165c50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x165c54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x165c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x165c58: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x165c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x165c5c: 0xaca2399c  sw          $v0, 0x399C($a1)
    ctx->pc = 0x165c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 14748), GPR_U32(ctx, 2));
label_165c60:
    // 0x165c60: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x165c60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x165c64: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x165c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x165c68: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x165c68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165c6c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x165c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x165c70: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x165C70u;
    {
        const bool branch_taken_0x165c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165C70u;
            // 0x165c74: 0x2438821  addu        $s1, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165c70) {
            ctx->pc = 0x165D18u;
            goto label_165d18;
        }
    }
    ctx->pc = 0x165C78u;
    // 0x165c78: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x165c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x165c7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x165c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c80: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x165c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c84: 0xc059d1e  jal         func_167478
    ctx->pc = 0x165C84u;
    SET_GPR_U32(ctx, 31, 0x165C8Cu);
    ctx->pc = 0x165C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165C84u;
            // 0x165c88: 0xafb00054  sw          $s0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167478u;
    if (runtime->hasFunction(0x167478u)) {
        auto targetFn = runtime->lookupFunction(0x167478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165C8Cu; }
        if (ctx->pc != 0x165C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167478_0x167478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165C8Cu; }
        if (ctx->pc != 0x165C8Cu) { return; }
    }
    ctx->pc = 0x165C8Cu;
    // 0x165c8c: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x165c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x165c90: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x165c90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x165c94: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x165c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x165c98: 0x3463360b  ori         $v1, $v1, 0x360B
    ctx->pc = 0x165c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13835);
    // 0x165c9c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x165C9Cu;
    {
        const bool branch_taken_0x165c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165C9Cu;
            // 0x165ca0: 0x47180b  movn        $v1, $v0, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165c9c) {
            ctx->pc = 0x165D1Cu;
            goto label_165d1c;
        }
    }
    ctx->pc = 0x165CA4u;
label_165ca4:
    // 0x165ca4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x165CA4u;
    {
        const bool branch_taken_0x165ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165CA4u;
            // 0x165ca8: 0x26110098  addiu       $s1, $s0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ca4) {
            ctx->pc = 0x165CBCu;
            goto label_165cbc;
        }
    }
    ctx->pc = 0x165CACu;
    // 0x165cac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x165cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165cb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x165cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165cb4: 0xc0551d0  jal         func_154740
    ctx->pc = 0x165CB4u;
    SET_GPR_U32(ctx, 31, 0x165CBCu);
    ctx->pc = 0x165CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165CB4u;
            // 0x165cb8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154740u;
    if (runtime->hasFunction(0x154740u)) {
        auto targetFn = runtime->lookupFunction(0x154740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165CBCu; }
        if (ctx->pc != 0x165CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00154740_0x154740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165CBCu; }
        if (ctx->pc != 0x165CBCu) { return; }
    }
    ctx->pc = 0x165CBCu;
label_165cbc:
    // 0x165cbc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x165cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x165cc0: 0x8e44ed58  lw          $a0, -0x12A8($s2)
    ctx->pc = 0x165cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962520)));
    // 0x165cc4: 0x8c42c7dc  lw          $v0, -0x3824($v0)
    ctx->pc = 0x165cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952924)));
    // 0x165cc8: 0xdfa30010  ld          $v1, 0x10($sp)
    ctx->pc = 0x165cc8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165ccc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x165cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x165cd0: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x165cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x165cd4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x165cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x165cd8: 0xae0400a8  sw          $a0, 0xA8($s0)
    ctx->pc = 0x165cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 4));
    // 0x165cdc: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x165cdcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165ce0: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x165ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x165ce4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x165CE4u;
    {
        const bool branch_taken_0x165ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x165CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165CE4u;
            // 0x165ce8: 0x2458821  addu        $s1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ce4) {
            ctx->pc = 0x165D18u;
            goto label_165d18;
        }
    }
    ctx->pc = 0x165CECu;
    // 0x165cec: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x165cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x165cf0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x165cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165cf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x165cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165cf8: 0xc059cf2  jal         func_1673C8
    ctx->pc = 0x165CF8u;
    SET_GPR_U32(ctx, 31, 0x165D00u);
    ctx->pc = 0x165CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165CF8u;
            // 0x165cfc: 0xafb00054  sw          $s0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1673C8u;
    if (runtime->hasFunction(0x1673C8u)) {
        auto targetFn = runtime->lookupFunction(0x1673C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165D00u; }
        if (ctx->pc != 0x165D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001673C8_0x1673c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165D00u; }
        if (ctx->pc != 0x165D00u) { return; }
    }
    ctx->pc = 0x165D00u;
    // 0x165d00: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x165d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x165d04: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x165d04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x165d08: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x165d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x165d0c: 0x3463360b  ori         $v1, $v1, 0x360B
    ctx->pc = 0x165d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13835);
    // 0x165d10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x165D10u;
    {
        const bool branch_taken_0x165d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165D10u;
            // 0x165d14: 0x49180b  movn        $v1, $v0, $t1 (Delay Slot)
        if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d10) {
            ctx->pc = 0x165D1Cu;
            goto label_165d1c;
        }
    }
    ctx->pc = 0x165D18u;
label_165d18:
    // 0x165d18: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x165d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
label_165d1c:
    // 0x165d1c: 0xfe230058  sd          $v1, 0x58($s1)
    ctx->pc = 0x165d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 88), GPR_U64(ctx, 3));
    // 0x165d20: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x165d20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x165d24: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x165d24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x165d28: 0xa63e0004  sh          $fp, 0x4($s1)
    ctx->pc = 0x165d28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 30));
    // 0x165d2c: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x165d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x165d30: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x165d30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x165d34: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x165d34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x165d38: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x165d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x165d3c: 0x93a20013  lbu         $v0, 0x13($sp)
    ctx->pc = 0x165d3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 19)));
    // 0x165d40: 0x8fa90068  lw          $t1, 0x68($sp)
    ctx->pc = 0x165d40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x165d44: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x165d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x165d48: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x165d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x165d4c: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x165d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x165d50: 0xfe220068  sd          $v0, 0x68($s1)
    ctx->pc = 0x165d50u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 2));
    // 0x165d54: 0x3b64821  addu        $t1, $sp, $s6
    ctx->pc = 0x165d54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 22)));
    // 0x165d58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x165d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x165d5c: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x165d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x165d60: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x165d60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165d64: 0x8c750000  lw          $s5, 0x0($v1)
    ctx->pc = 0x165d64u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165d68: 0x9ce4f19c  lwu         $a0, -0xE64($a3)
    ctx->pc = 0x165d68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 4294963612)));
    // 0x165d6c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x165d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x165d70: 0x9d03f1a0  lwu         $v1, -0xE60($t0)
    ctx->pc = 0x165d70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 4294963616)));
    // 0x165d74: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x165d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x165d78: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x165d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x165d7c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x165d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x165d80: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x165d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x165d84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x165d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x165d88: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x165d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x165d8c: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x165d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x165d90: 0x12a50011  beq         $s5, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x165D90u;
    {
        const bool branch_taken_0x165d90 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 5));
        ctx->pc = 0x165D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165D90u;
            // 0x165d94: 0xfe230078  sd          $v1, 0x78($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 120), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d90) {
            ctx->pc = 0x165DD8u;
            goto label_165dd8;
        }
    }
    ctx->pc = 0x165D98u;
    // 0x165d98: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x165d98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x165d9c: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x165d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x165da0: 0x27c30040  addiu       $v1, $fp, 0x40
    ctx->pc = 0x165da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
    // 0x165da4: 0x8ce5f168  lw          $a1, -0xE98($a3)
    ctx->pc = 0x165da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294963560)));
    // 0x165da8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x165da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x165dac: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x165dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x165db0: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x165db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x165db4: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x165db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x165db8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x165db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x165dbc: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x165dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x165dc0: 0xace6f168  sw          $a2, -0xE98($a3)
    ctx->pc = 0x165dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294963560), GPR_U32(ctx, 6));
    // 0x165dc4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x165dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x165dc8: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x165dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x165dcc: 0xad350000  sw          $s5, 0x0($t1)
    ctx->pc = 0x165dccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 21));
    // 0x165dd0: 0xacb50004  sw          $s5, 0x4($a1)
    ctx->pc = 0x165dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 21));
    // 0x165dd4: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x165dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_165dd8:
    // 0x165dd8: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x165dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x165ddc: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x165ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x165de0: 0x8cc3f168  lw          $v1, -0xE98($a2)
    ctx->pc = 0x165de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294963560)));
    // 0x165de4: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x165de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x165de8: 0x2b62021  addu        $a0, $s5, $s6
    ctx->pc = 0x165de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x165dec: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x165decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x165df0: 0x8c870140  lw          $a3, 0x140($a0)
    ctx->pc = 0x165df0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x165df4: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x165df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x165df8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x165df8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x165dfc: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x165dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x165e00: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x165e00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x165e04: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x165e04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x165e08: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x165e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x165e0c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x165e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x165e10: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x165e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x165e14: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x165e14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x165e18: 0xacc4f168  sw          $a0, -0xE98($a2)
    ctx->pc = 0x165e18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963560), GPR_U32(ctx, 4));
    // 0x165e1c: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x165e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
    // 0x165e20: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x165e20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x165e24: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x165E24u;
    {
        const bool branch_taken_0x165e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165E24u;
            // 0x165e28: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165e24) {
            ctx->pc = 0x165ED0u;
            goto label_165ed0;
        }
    }
    ctx->pc = 0x165E2Cu;
    // 0x165e2c: 0x0  nop
    ctx->pc = 0x165e2cu;
    // NOP
label_165e30:
    // 0x165e30: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x165e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x165e34: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x165e34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e38: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x165e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x165e3c: 0x3b64021  addu        $t0, $sp, $s6
    ctx->pc = 0x165e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 22)));
    // 0x165e40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x165e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165e44: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x165e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x165e48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x165e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x165e4c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x165e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x165e50: 0x8c750000  lw          $s5, 0x0($v1)
    ctx->pc = 0x165e50u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165e54: 0x12a20010  beq         $s5, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x165E54u;
    {
        const bool branch_taken_0x165e54 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x165E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165E54u;
            // 0x165e58: 0x3c070033  lui         $a3, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165e54) {
            ctx->pc = 0x165E98u;
            goto label_165e98;
        }
    }
    ctx->pc = 0x165E5Cu;
    // 0x165e5c: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x165e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x165e60: 0x27c30040  addiu       $v1, $fp, 0x40
    ctx->pc = 0x165e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
    // 0x165e64: 0x8ce5f168  lw          $a1, -0xE98($a3)
    ctx->pc = 0x165e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294963560)));
    // 0x165e68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x165e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x165e6c: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x165e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x165e70: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x165e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x165e74: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x165e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x165e78: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x165e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x165e7c: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x165e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x165e80: 0xace6f168  sw          $a2, -0xE98($a3)
    ctx->pc = 0x165e80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294963560), GPR_U32(ctx, 6));
    // 0x165e84: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x165e84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x165e88: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x165e88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x165e8c: 0xad150000  sw          $s5, 0x0($t0)
    ctx->pc = 0x165e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 21));
    // 0x165e90: 0xacb50004  sw          $s5, 0x4($a1)
    ctx->pc = 0x165e90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 21));
    // 0x165e94: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x165e94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_165e98:
    // 0x165e98: 0x1135000d  beq         $t1, $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x165E98u;
    {
        const bool branch_taken_0x165e98 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 21));
        ctx->pc = 0x165E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165E98u;
            // 0x165e9c: 0x2b61021  addu        $v0, $s5, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165e98) {
            ctx->pc = 0x165ED0u;
            goto label_165ed0;
        }
    }
    ctx->pc = 0x165EA0u;
    // 0x165ea0: 0x8c460148  lw          $a2, 0x148($v0)
    ctx->pc = 0x165ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x165ea4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x165ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x165ea8: 0x8ca3f168  lw          $v1, -0xE98($a1)
    ctx->pc = 0x165ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294963560)));
    // 0x165eac: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x165eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x165eb0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x165eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x165eb4: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x165eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x165eb8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x165eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x165ebc: 0xaca4f168  sw          $a0, -0xE98($a1)
    ctx->pc = 0x165ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963560), GPR_U32(ctx, 4));
    // 0x165ec0: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x165ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x165ec4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x165ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x165ec8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x165ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x165ecc: 0x0  nop
    ctx->pc = 0x165eccu;
    // NOP
label_165ed0:
    // 0x165ed0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x165ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x165ed4: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x165ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x165ed8: 0x92650018  lbu         $a1, 0x18($s3)
    ctx->pc = 0x165ed8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x165edc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x165edcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x165ee0: 0x9664000a  lhu         $a0, 0xA($s3)
    ctx->pc = 0x165ee0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x165ee4: 0x92830014  lbu         $v1, 0x14($s4)
    ctx->pc = 0x165ee4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x165ee8: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x165ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x165eec: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x165eecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x165ef0: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x165ef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x165ef4: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x165ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x165ef8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x165ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x165efc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x165efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x165f00: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x165f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x165f04: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x165f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x165f08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x165f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x165f0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x165f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165f10: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x165f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x165f14: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x165f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x165f18: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x165f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x165f1c: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x165f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x165f20: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x165f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
    // 0x165f24: 0x27c40010  addiu       $a0, $fp, 0x10
    ctx->pc = 0x165f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x165f28: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x165f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x165f2c: 0x8e05f168  lw          $a1, -0xE98($s0)
    ctx->pc = 0x165f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x165f30: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x165f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x165f34: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x165f34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x165f38: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x165f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x165f3c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x165f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x165f40: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x165f40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x165f44: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x165f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x165f48: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x165f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x165f4c: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x165f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x165f50: 0x8fa9005c  lw          $t1, 0x5C($sp)
    ctx->pc = 0x165f50u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x165f54: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x165f54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x165f58: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x165f58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x165f5c: 0x35220020  ori         $v0, $t1, 0x20
    ctx->pc = 0x165f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32);
    // 0x165f60: 0xae06f168  sw          $a2, -0xE98($s0)
    ctx->pc = 0x165f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 6));
    // 0x165f64: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x165f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x165f68: 0x92830016  lbu         $v1, 0x16($s4)
    ctx->pc = 0x165f68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 22)));
    // 0x165f6c: 0x123100a  movz        $v0, $t1, $v1
    ctx->pc = 0x165f6cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 9));
    // 0x165f70: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x165f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x165f74: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x165f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x165f78: 0x8ce4c29c  lw          $a0, -0x3D64($a3)
    ctx->pc = 0x165f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294951580)));
    // 0x165f7c: 0x438825  or          $s1, $v0, $v1
    ctx->pc = 0x165f7cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x165f80: 0x3222007f  andi        $v0, $s1, 0x7F
    ctx->pc = 0x165f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)127);
    // 0x165f84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x165f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x165f88: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x165f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x165f8c: 0x32260020  andi        $a2, $s1, 0x20
    ctx->pc = 0x165f8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
    // 0x165f90: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x165f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x165f94: 0xc05aa38  jal         func_16A8E0
    ctx->pc = 0x165F94u;
    SET_GPR_U32(ctx, 31, 0x165F9Cu);
    ctx->pc = 0x165F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165F94u;
            // 0x165f98: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A8E0u;
    if (runtime->hasFunction(0x16A8E0u)) {
        auto targetFn = runtime->lookupFunction(0x16A8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165F9Cu; }
        if (ctx->pc != 0x165F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16a8e0_0x16aa30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165F9Cu; }
        if (ctx->pc != 0x165F9Cu) { return; }
    }
    ctx->pc = 0x165F9Cu;
    // 0x165f9c: 0x8e04f168  lw          $a0, -0xE98($s0)
    ctx->pc = 0x165f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x165fa0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x165fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x165fa4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x165fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x165fa8: 0x27c80045  addiu       $t0, $fp, 0x45
    ctx->pc = 0x165fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 69));
    // 0x165fac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x165facu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x165fb0: 0x3c0b002a  lui         $t3, 0x2A
    ctx->pc = 0x165fb0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)42 << 16));
    // 0x165fb4: 0x3c046500  lui         $a0, 0x6500
    ctx->pc = 0x165fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25856 << 16));
    // 0x165fb8: 0x256ec2d0  addiu       $t6, $t3, -0x3D30
    ctx->pc = 0x165fb8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 4294951632));
    // 0x165fbc: 0x8e05f168  lw          $a1, -0xE98($s0)
    ctx->pc = 0x165fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x165fc0: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x165fc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x165fc4: 0x8e6c0004  lw          $t4, 0x4($s3)
    ctx->pc = 0x165fc4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x165fc8: 0x3c0f0300  lui         $t7, 0x300
    ctx->pc = 0x165fc8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)768 << 16));
    // 0x165fcc: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x165fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x165fd0: 0x24a90014  addiu       $t1, $a1, 0x14
    ctx->pc = 0x165fd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x165fd4: 0xae03f168  sw          $v1, -0xE98($s0)
    ctx->pc = 0x165fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 3));
    // 0x165fd8: 0x3c0a0400  lui         $t2, 0x400
    ctx->pc = 0x165fd8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1024 << 16));
    // 0x165fdc: 0x3ca5025  or          $t2, $fp, $t2
    ctx->pc = 0x165fdcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 30) | GPR_U64(ctx, 10));
    // 0x165fe0: 0x36270080  ori         $a3, $s1, 0x80
    ctx->pc = 0x165fe0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)128);
    // 0x165fe4: 0x92640018  lbu         $a0, 0x18($s3)
    ctx->pc = 0x165fe4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x165fe8: 0x3c0d0200  lui         $t5, 0x200
    ctx->pc = 0x165fe8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)512 << 16));
    // 0x165fec: 0x92830014  lbu         $v1, 0x14($s4)
    ctx->pc = 0x165fecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x165ff0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x165ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x165ff4: 0x92860015  lbu         $a2, 0x15($s4)
    ctx->pc = 0x165ff4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 21)));
    // 0x165ff8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x165ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x165ffc: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x165ffcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x166000: 0xae09f168  sw          $t1, -0xE98($s0)
    ctx->pc = 0x166000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 9));
    // 0x166004: 0xcc3018  mult        $a2, $a2, $t4
    ctx->pc = 0x166004u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x166008: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x166008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x16600c: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x16600cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x166010: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x166010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x166014: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x166014u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x166018: 0x24a70020  addiu       $a3, $a1, 0x20
    ctx->pc = 0x166018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x16601c: 0x6c1818  mult        $v1, $v1, $t4
    ctx->pc = 0x16601cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x166020: 0x240439e4  addiu       $a0, $zero, 0x39E4
    ctx->pc = 0x166020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14820));
    // 0x166024: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x166024u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x166028: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x166028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x16602c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x16602cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x166030: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x166030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x166034: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x166034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x166038: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x166038u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x16603c: 0x8d63c2d0  lw          $v1, -0x3D30($t3)
    ctx->pc = 0x16603cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294951632)));
    // 0x166040: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x166040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x166044: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x166044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x166048: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x166048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16604c: 0xacad000c  sw          $t5, 0xC($a1)
    ctx->pc = 0x16604cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 13));
    // 0x166050: 0x6f1825  or          $v1, $v1, $t7
    ctx->pc = 0x166050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 15));
    // 0x166054: 0xacaa0010  sw          $t2, 0x10($a1)
    ctx->pc = 0x166054u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 10));
    // 0x166058: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x166058u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x16605c: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16605Cu;
    {
        const bool branch_taken_0x16605c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x16605c) {
            ctx->pc = 0x166060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16605Cu;
            // 0x166060: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x166064u;
            goto label_166064;
        }
    }
    ctx->pc = 0x166064u;
label_166064:
    // 0x166064: 0xaca80014  sw          $t0, 0x14($a1)
    ctx->pc = 0x166064u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 8));
    // 0x166068: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x166068u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x16606c: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x16606cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x166070: 0x9663001a  lhu         $v1, 0x1A($s3)
    ctx->pc = 0x166070u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
    // 0x166074: 0x8d62c2d0  lw          $v0, -0x3D30($t3)
    ctx->pc = 0x166074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294951632)));
    // 0x166078: 0xae07f168  sw          $a3, -0xE98($s0)
    ctx->pc = 0x166078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 7));
    // 0x16607c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16607cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x166080: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x166080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x166084: 0x442006  srlv        $a0, $a0, $v0
    ctx->pc = 0x166084u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x166088: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x166088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x16608c: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x16608cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x166090: 0x1440fea3  bnez        $v0, . + 4 + (-0x15D << 2)
    ctx->pc = 0x166090u;
    {
        const bool branch_taken_0x166090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166090u;
            // 0x166094: 0xad64c2d0  sw          $a0, -0x3D30($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 4294951632), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166090) {
            ctx->pc = 0x165B20u;
            runtime->cooperativeGuestYield();
            goto label_165b20;
        }
    }
    ctx->pc = 0x166098u;
    // 0x166098: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x166098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x16609c: 0x0  nop
    ctx->pc = 0x16609cu;
    // NOP
label_1660a0:
    // 0x1660a0: 0x36520001  ori         $s2, $s2, 0x1
    ctx->pc = 0x1660a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
    // 0x1660a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1660a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1660a8: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1660a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1660ac: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1660acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1660b0:
    // 0x1660b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1660b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1660b4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1660b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1660b8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1660b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1660bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1660BCu;
    {
        const bool branch_taken_0x1660bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1660C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1660BCu;
            // 0x1660c0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1660bc) {
            ctx->pc = 0x1660D4u;
            goto label_1660d4;
        }
    }
    ctx->pc = 0x1660C4u;
    // 0x1660c4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1660c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1660c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1660c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1660cc: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1660CCu;
    {
        const bool branch_taken_0x1660cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1660D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1660CCu;
            // 0x1660d0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1660cc) {
            ctx->pc = 0x1660B0u;
            runtime->cooperativeGuestYield();
            goto label_1660b0;
        }
    }
    ctx->pc = 0x1660D4u;
label_1660d4:
    // 0x1660d4: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x1660d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1660d8: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1660D8u;
    {
        const bool branch_taken_0x1660d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1660DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1660D8u;
            // 0x1660dc: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1660d8) {
            ctx->pc = 0x16612Cu;
            goto label_16612c;
        }
    }
    ctx->pc = 0x1660E0u;
label_1660e0:
    // 0x1660e0: 0x2e6102b  sltu        $v0, $s7, $a2
    ctx->pc = 0x1660e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1660e4:
    // 0x1660e4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1660E4u;
    {
        const bool branch_taken_0x1660e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1660E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1660E4u;
            // 0x1660e8: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1660e4) {
            ctx->pc = 0x16611Cu;
            goto label_16611c;
        }
    }
    ctx->pc = 0x1660ECu;
    // 0x1660ec: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x1660ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x1660f0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1660f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1660f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1660f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1660f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1660f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1660fc: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1660FCu;
    {
        const bool branch_taken_0x1660fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1660FCu;
            // 0x166100: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1660fc) {
            ctx->pc = 0x1660E0u;
            runtime->cooperativeGuestYield();
            goto label_1660e0;
        }
    }
    ctx->pc = 0x166104u;
    // 0x166104: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x166104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x166108: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x166108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x16610c: 0x1080fff5  beqz        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x16610Cu;
    {
        const bool branch_taken_0x16610c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x166110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16610Cu;
            // 0x166110: 0x2e6102b  sltu        $v0, $s7, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16610c) {
            ctx->pc = 0x1660E4u;
            runtime->cooperativeGuestYield();
            goto label_1660e4;
        }
    }
    ctx->pc = 0x166114u;
    // 0x166114: 0xc059b16  jal         func_166C58
    ctx->pc = 0x166114u;
    SET_GPR_U32(ctx, 31, 0x16611Cu);
    ctx->pc = 0x166C58u;
    if (runtime->hasFunction(0x166C58u)) {
        auto targetFn = runtime->lookupFunction(0x166C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16611Cu; }
        if (ctx->pc != 0x16611Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166C58_0x166c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16611Cu; }
        if (ctx->pc != 0x16611Cu) { return; }
    }
    ctx->pc = 0x16611Cu;
label_16611c:
    // 0x16611c: 0x8fa70054  lw          $a3, 0x54($sp)
    ctx->pc = 0x16611cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x166120: 0x8ce40038  lw          $a0, 0x38($a3)
    ctx->pc = 0x166120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x166124: 0xc059ade  jal         func_166B78
    ctx->pc = 0x166124u;
    SET_GPR_U32(ctx, 31, 0x16612Cu);
    ctx->pc = 0x166128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166124u;
            // 0x166128: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166B78u;
    if (runtime->hasFunction(0x166B78u)) {
        auto targetFn = runtime->lookupFunction(0x166B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16612Cu; }
        if (ctx->pc != 0x16612Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166B78_0x166b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16612Cu; }
        if (ctx->pc != 0x16612Cu) { return; }
    }
    ctx->pc = 0x16612Cu;
label_16612c:
    // 0x16612c: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x16612cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x166130: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x166130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x166134: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x166134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x166138: 0x1440fe77  bnez        $v0, . + 4 + (-0x189 << 2)
    ctx->pc = 0x166138u;
    {
        const bool branch_taken_0x166138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16613Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166138u;
            // 0x16613c: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166138) {
            ctx->pc = 0x165B18u;
            runtime->cooperativeGuestYield();
            goto label_165b18;
        }
    }
    ctx->pc = 0x166140u;
label_166140:
    // 0x166140: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x166140u;
    SET_GPR_U32(ctx, 31, 0x166148u);
    ctx->pc = 0x166144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166140u;
            // 0x166144: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166148u; }
        if (ctx->pc != 0x166148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166148u; }
        if (ctx->pc != 0x166148u) { return; }
    }
    ctx->pc = 0x166148u;
    // 0x166148: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x166148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x16614c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x16614cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x166150: 0x8c62f168  lw          $v0, -0xE98($v1)
    ctx->pc = 0x166150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963560)));
    // 0x166154: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x166154u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x166158: 0x8c62f168  lw          $v0, -0xE98($v1)
    ctx->pc = 0x166158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963560)));
    // 0x16615c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x16615cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x166160: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x166160u;
    SET_GPR_U32(ctx, 31, 0x166168u);
    ctx->pc = 0x166164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166160u;
            // 0x166164: 0xac62f168  sw          $v0, -0xE98($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166168u; }
        if (ctx->pc != 0x166168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166168u; }
        if (ctx->pc != 0x166168u) { return; }
    }
    ctx->pc = 0x166168u;
    // 0x166168: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x166168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_16616c:
    // 0x16616c: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x16616cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x166170: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x166170u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x166174: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x166174u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x166178: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x166178u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16617c: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x16617cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x166180: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x166180u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x166184: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x166184u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x166188: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x166188u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16618c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x16618cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x166190: 0x3e00008  jr          $ra
    ctx->pc = 0x166190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166190u;
            // 0x166194: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1655D0u: goto label_1655d0;
            case 0x165608u: goto label_165608;
            case 0x165640u: goto label_165640;
            case 0x16565Cu: goto label_16565c;
            case 0x165670u: goto label_165670;
            case 0x165698u: goto label_165698;
            case 0x1656ACu: goto label_1656ac;
            case 0x165888u: goto label_165888;
            case 0x1658A4u: goto label_1658a4;
            case 0x1658ACu: goto label_1658ac;
            case 0x1658C8u: goto label_1658c8;
            case 0x165A70u: goto label_165a70;
            case 0x165A74u: goto label_165a74;
            case 0x165AA4u: goto label_165aa4;
            case 0x165AE0u: goto label_165ae0;
            case 0x165AFCu: goto label_165afc;
            case 0x165B18u: goto label_165b18;
            case 0x165B20u: goto label_165b20;
            case 0x165C38u: goto label_165c38;
            case 0x165C60u: goto label_165c60;
            case 0x165CA4u: goto label_165ca4;
            case 0x165CBCu: goto label_165cbc;
            case 0x165D18u: goto label_165d18;
            case 0x165D1Cu: goto label_165d1c;
            case 0x165DD8u: goto label_165dd8;
            case 0x165E30u: goto label_165e30;
            case 0x165E98u: goto label_165e98;
            case 0x165ED0u: goto label_165ed0;
            case 0x166064u: goto label_166064;
            case 0x1660A0u: goto label_1660a0;
            case 0x1660B0u: goto label_1660b0;
            case 0x1660D4u: goto label_1660d4;
            case 0x1660E0u: goto label_1660e0;
            case 0x1660E4u: goto label_1660e4;
            case 0x16611Cu: goto label_16611c;
            case 0x16612Cu: goto label_16612c;
            case 0x166140u: goto label_166140;
            case 0x16616Cu: goto label_16616c;
            case 0x1661A0u: goto label_1661a0;
            case 0x166268u: goto label_166268;
            case 0x1662DCu: goto label_1662dc;
            case 0x166310u: goto label_166310;
            case 0x16632Cu: goto label_16632c;
            case 0x166344u: goto label_166344;
            case 0x1663C8u: goto label_1663c8;
            case 0x1663D4u: goto label_1663d4;
            case 0x166488u: goto label_166488;
            case 0x166490u: goto label_166490;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166198u;
    // 0x166198: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x166198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16619c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16619cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1661a0:
    // 0x1661a0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1661a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1661a4: 0x61940  sll         $v1, $a2, 5
    ctx->pc = 0x1661a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1661a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1661a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1661ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1661acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1661b0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1661b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1661b4: 0x28a30008  slti        $v1, $a1, 0x8
    ctx->pc = 0x1661b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1661b8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1661B8u;
    {
        const bool branch_taken_0x1661b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1661BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1661B8u;
            // 0x1661bc: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1661b8) {
            ctx->pc = 0x1661A0u;
            runtime->cooperativeGuestYield();
            goto label_1661a0;
        }
    }
    ctx->pc = 0x1661C0u;
    // 0x1661c0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1661c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1661c4: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1661c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1661c8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1661C8u;
    {
        const bool branch_taken_0x1661c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1661CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1661C8u;
            // 0x1661cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1661c8) {
            ctx->pc = 0x1661A0u;
            runtime->cooperativeGuestYield();
            goto label_1661a0;
        }
    }
    ctx->pc = 0x1661D0u;
    // 0x1661d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1661D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1655D0u: goto label_1655d0;
            case 0x165608u: goto label_165608;
            case 0x165640u: goto label_165640;
            case 0x16565Cu: goto label_16565c;
            case 0x165670u: goto label_165670;
            case 0x165698u: goto label_165698;
            case 0x1656ACu: goto label_1656ac;
            case 0x165888u: goto label_165888;
            case 0x1658A4u: goto label_1658a4;
            case 0x1658ACu: goto label_1658ac;
            case 0x1658C8u: goto label_1658c8;
            case 0x165A70u: goto label_165a70;
            case 0x165A74u: goto label_165a74;
            case 0x165AA4u: goto label_165aa4;
            case 0x165AE0u: goto label_165ae0;
            case 0x165AFCu: goto label_165afc;
            case 0x165B18u: goto label_165b18;
            case 0x165B20u: goto label_165b20;
            case 0x165C38u: goto label_165c38;
            case 0x165C60u: goto label_165c60;
            case 0x165CA4u: goto label_165ca4;
            case 0x165CBCu: goto label_165cbc;
            case 0x165D18u: goto label_165d18;
            case 0x165D1Cu: goto label_165d1c;
            case 0x165DD8u: goto label_165dd8;
            case 0x165E30u: goto label_165e30;
            case 0x165E98u: goto label_165e98;
            case 0x165ED0u: goto label_165ed0;
            case 0x166064u: goto label_166064;
            case 0x1660A0u: goto label_1660a0;
            case 0x1660B0u: goto label_1660b0;
            case 0x1660D4u: goto label_1660d4;
            case 0x1660E0u: goto label_1660e0;
            case 0x1660E4u: goto label_1660e4;
            case 0x16611Cu: goto label_16611c;
            case 0x16612Cu: goto label_16612c;
            case 0x166140u: goto label_166140;
            case 0x16616Cu: goto label_16616c;
            case 0x1661A0u: goto label_1661a0;
            case 0x166268u: goto label_166268;
            case 0x1662DCu: goto label_1662dc;
            case 0x166310u: goto label_166310;
            case 0x16632Cu: goto label_16632c;
            case 0x166344u: goto label_166344;
            case 0x1663C8u: goto label_1663c8;
            case 0x1663D4u: goto label_1663d4;
            case 0x166488u: goto label_166488;
            case 0x166490u: goto label_166490;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1661D8u;
    // 0x1661d8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1661d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1661dc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1661dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1661e0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1661e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1661e4: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1661e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1661e8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1661e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1661ec: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1661ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1661f0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1661f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1661f4: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x1661f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x1661f8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1661f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1661fc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1661fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166200: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x166200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x166204: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x166204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166208: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x166208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x16620c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x16620cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166210: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x166210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x166214: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x166214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x166218: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x166218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x16621c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16621cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x166220: 0x8e24c29c  lw          $a0, -0x3D64($s1)
    ctx->pc = 0x166220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951580)));
    // 0x166224: 0x8ca20068  lw          $v0, 0x68($a1)
    ctx->pc = 0x166224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x166228: 0x8c850810  lw          $a1, 0x810($a0)
    ctx->pc = 0x166228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2064)));
    // 0x16622c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x16622cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x166230: 0x8cf60000  lw          $s6, 0x0($a3)
    ctx->pc = 0x166230u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x166234: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x166234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x166238: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x166238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x16623c: 0xc05aa38  jal         func_16A8E0
    ctx->pc = 0x16623Cu;
    SET_GPR_U32(ctx, 31, 0x166244u);
    ctx->pc = 0x166240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16623Cu;
            // 0x166240: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A8E0u;
    if (runtime->hasFunction(0x16A8E0u)) {
        auto targetFn = runtime->lookupFunction(0x16A8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166244u; }
        if (ctx->pc != 0x166244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16a8e0_0x16aa30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166244u; }
        if (ctx->pc != 0x166244u) { return; }
    }
    ctx->pc = 0x166244u;
    // 0x166244: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x166244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x166248: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x166248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16624c: 0x8e24c29c  lw          $a0, -0x3D64($s1)
    ctx->pc = 0x16624cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951580)));
    // 0x166250: 0x8c850810  lw          $a1, 0x810($a0)
    ctx->pc = 0x166250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2064)));
    // 0x166254: 0xc05aa38  jal         func_16A8E0
    ctx->pc = 0x166254u;
    SET_GPR_U32(ctx, 31, 0x16625Cu);
    ctx->pc = 0x166258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166254u;
            // 0x166258: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A8E0u;
    if (runtime->hasFunction(0x16A8E0u)) {
        auto targetFn = runtime->lookupFunction(0x16A8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16625Cu; }
        if (ctx->pc != 0x16625Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16a8e0_0x16aa30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16625Cu; }
        if (ctx->pc != 0x16625Cu) { return; }
    }
    ctx->pc = 0x16625Cu;
    // 0x16625c: 0x12c0008c  beqz        $s6, . + 4 + (0x8C << 2)
    ctx->pc = 0x16625Cu;
    {
        const bool branch_taken_0x16625c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x166260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16625Cu;
            // 0x166260: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16625c) {
            ctx->pc = 0x166490u;
            goto label_166490;
        }
    }
    ctx->pc = 0x166264u;
    // 0x166264: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x166264u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
label_166268:
    // 0x166268: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x166268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16626c: 0x8e221088  lw          $v0, 0x1088($s1)
    ctx->pc = 0x16626cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4232)));
    // 0x166270: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x166270u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166274: 0x8e570008  lw          $s7, 0x8($s2)
    ctx->pc = 0x166274u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x166278: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x166278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x16627c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x16627cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x166280: 0x24631080  addiu       $v1, $v1, 0x1080
    ctx->pc = 0x166280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4224));
    // 0x166284: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x166284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x166288: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x166288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x16628c: 0x3a23021  addu        $a2, $sp, $v0
    ctx->pc = 0x16628cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x166290: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x166290u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166294: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x166294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x166298: 0x8ede0000  lw          $fp, 0x0($s6)
    ctx->pc = 0x166298u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x16629c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x16629cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1662a0: 0x8cb50000  lw          $s5, 0x0($a1)
    ctx->pc = 0x1662a0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1662a4: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x1662a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1662a8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1662a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1662ac: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x1662acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1662b0: 0x12a2000a  beq         $s5, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1662B0u;
    {
        const bool branch_taken_0x1662b0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x1662B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1662B0u;
            // 0x1662b4: 0xae241088  sw          $a0, 0x1088($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4232), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1662b0) {
            ctx->pc = 0x1662DCu;
            goto label_1662dc;
        }
    }
    ctx->pc = 0x1662B8u;
    // 0x1662b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1662b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1662bc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1662bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1662c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1662c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1662c4: 0xc04fe3a  jal         func_13F8E8
    ctx->pc = 0x1662C4u;
    SET_GPR_U32(ctx, 31, 0x1662CCu);
    ctx->pc = 0x1662C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1662C4u;
            // 0x1662c8: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8E8u;
    if (runtime->hasFunction(0x13F8E8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1662CCu; }
        if (ctx->pc != 0x1662CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8e8_0x13f970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1662CCu; }
        if (ctx->pc != 0x1662CCu) { return; }
    }
    ctx->pc = 0x1662CCu;
    // 0x1662cc: 0x8e221088  lw          $v0, 0x1088($s1)
    ctx->pc = 0x1662ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4232)));
    // 0x1662d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1662d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1662d4: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1662d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1662d8: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x1662d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_1662dc:
    // 0x1662dc: 0x12950019  beq         $s4, $s5, . + 4 + (0x19 << 2)
    ctx->pc = 0x1662DCu;
    {
        const bool branch_taken_0x1662dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 21));
        ctx->pc = 0x1662E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1662DCu;
            // 0x1662e0: 0x8e221088  lw          $v0, 0x1088($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1662dc) {
            ctx->pc = 0x166344u;
            goto label_166344;
        }
    }
    ctx->pc = 0x1662E4u;
    // 0x1662e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1662e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1662e8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1662e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1662ec: 0x8c450148  lw          $a1, 0x148($v0)
    ctx->pc = 0x1662ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x1662f0: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1662f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1662f4: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1662f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1662f8: 0x8cc3f168  lw          $v1, -0xE98($a2)
    ctx->pc = 0x1662f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294963560)));
    // 0x1662fc: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1662fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x166300: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x166300u;
    {
        const bool branch_taken_0x166300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166300u;
            // 0x166304: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x166300) {
            ctx->pc = 0x16632Cu;
            goto label_16632c;
        }
    }
    ctx->pc = 0x166308u;
    // 0x166308: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x166308u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x16630c: 0x0  nop
    ctx->pc = 0x16630cu;
    // NOP
label_166310:
    // 0x166310: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x166310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x166314: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x166314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x166318: 0x0  nop
    ctx->pc = 0x166318u;
    // NOP
    // 0x16631c: 0x0  nop
    ctx->pc = 0x16631cu;
    // NOP
    // 0x166320: 0x0  nop
    ctx->pc = 0x166320u;
    // NOP
    // 0x166324: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x166324u;
    {
        const bool branch_taken_0x166324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166324) {
            ctx->pc = 0x166328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166324u;
            // 0x166328: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166310u;
            runtime->cooperativeGuestYield();
            goto label_166310;
        }
    }
    ctx->pc = 0x16632Cu;
label_16632c:
    // 0x16632c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x16632cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x166330: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x166330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x166334: 0xacc2f168  sw          $v0, -0xE98($a2)
    ctx->pc = 0x166334u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963560), GPR_U32(ctx, 2));
    // 0x166338: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x166338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x16633c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x16633cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x166340: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x166340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_166344:
    // 0x166344: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x166344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x166348: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x166348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16634c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x16634cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x166350: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x166350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166354: 0x92080018  lbu         $t0, 0x18($s0)
    ctx->pc = 0x166354u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x166358: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x166358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x16635c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x16635cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x166360: 0x9604000a  lhu         $a0, 0xA($s0)
    ctx->pc = 0x166360u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x166364: 0x92420014  lbu         $v0, 0x14($s2)
    ctx->pc = 0x166364u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x166368: 0x8ee90008  lw          $t1, 0x8($s7)
    ctx->pc = 0x166368u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x16636c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x16636cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x166370: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x166370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x166374: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x166374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x166378: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x166378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x16637c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x16637cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x166380: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x166380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x166384: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x166384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x166388: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x166388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16638c: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x16638cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x166390: 0xc04fe3a  jal         func_13F8E8
    ctx->pc = 0x166390u;
    SET_GPR_U32(ctx, 31, 0x166398u);
    ctx->pc = 0x166394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166390u;
            // 0x166394: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8E8u;
    if (runtime->hasFunction(0x13F8E8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166398u; }
        if (ctx->pc != 0x166398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8e8_0x13f970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166398u; }
        if (ctx->pc != 0x166398u) { return; }
    }
    ctx->pc = 0x166398u;
    // 0x166398: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x166398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x16639c: 0x8c431048  lw          $v1, 0x1048($v0)
    ctx->pc = 0x16639cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4168)));
    // 0x1663a0: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1663a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1663a4: 0x24a2fff0  addiu       $v0, $a1, -0x10
    ctx->pc = 0x1663a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x1663a8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1663a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1663ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1663acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1663b0: 0x92420016  lbu         $v0, 0x16($s2)
    ctx->pc = 0x1663b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x1663b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1663B4u;
    {
        const bool branch_taken_0x1663b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1663B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1663B4u;
            // 0x1663b8: 0x24022400  addiu       $v0, $zero, 0x2400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1663b4) {
            ctx->pc = 0x1663C8u;
            goto label_1663c8;
        }
    }
    ctx->pc = 0x1663BCu;
    // 0x1663bc: 0xaca2fff0  sw          $v0, -0x10($a1)
    ctx->pc = 0x1663bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967280), GPR_U32(ctx, 2));
    // 0x1663c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1663C0u;
    {
        const bool branch_taken_0x1663c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1663C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1663C0u;
            // 0x1663c4: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1663c0) {
            ctx->pc = 0x1663D4u;
            goto label_1663d4;
        }
    }
    ctx->pc = 0x1663C8u;
label_1663c8:
    // 0x1663c8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1663c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1663cc: 0xaca2fff0  sw          $v0, -0x10($a1)
    ctx->pc = 0x1663ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967280), GPR_U32(ctx, 2));
    // 0x1663d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1663d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1663d4:
    // 0x1663d4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1663d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1663d8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1663d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1663dc: 0x24070045  addiu       $a3, $zero, 0x45
    ctx->pc = 0x1663dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1663e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1663e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1663e4: 0xc04fe3a  jal         func_13F8E8
    ctx->pc = 0x1663E4u;
    SET_GPR_U32(ctx, 31, 0x1663ECu);
    ctx->pc = 0x1663E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1663E4u;
            // 0x1663e8: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8E8u;
    if (runtime->hasFunction(0x13F8E8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1663ECu; }
        if (ctx->pc != 0x1663ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8e8_0x13f970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1663ECu; }
        if (ctx->pc != 0x1663ECu) { return; }
    }
    ctx->pc = 0x1663ECu;
    // 0x1663ec: 0x2633c2d0  addiu       $s3, $s1, -0x3D30
    ctx->pc = 0x1663ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4294951632));
    // 0x1663f0: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x1663f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1663f4: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x1663f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x1663f8: 0x92450014  lbu         $a1, 0x14($s2)
    ctx->pc = 0x1663f8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1663fc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1663fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x166400: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x166400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x166404: 0x92420015  lbu         $v0, 0x15($s2)
    ctx->pc = 0x166404u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 21)));
    // 0x166408: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x166408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16640c: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x16640cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x166410: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x166410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x166414: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x166414u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x166418: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x166418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x16641c: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x16641cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x166420: 0xc04fd64  jal         func_13F590
    ctx->pc = 0x166420u;
    SET_GPR_U32(ctx, 31, 0x166428u);
    ctx->pc = 0x166424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166420u;
            // 0x166424: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F590u;
    if (runtime->hasFunction(0x13F590u)) {
        auto targetFn = runtime->lookupFunction(0x13F590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166428u; }
        if (ctx->pc != 0x166428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f590_0x13f5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166428u; }
        if (ctx->pc != 0x166428u) { return; }
    }
    ctx->pc = 0x166428u;
    // 0x166428: 0x8e22c2d0  lw          $v0, -0x3D30($s1)
    ctx->pc = 0x166428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951632)));
    // 0x16642c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x16642cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x166430: 0x8c85f168  lw          $a1, -0xE98($a0)
    ctx->pc = 0x166430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x166434: 0x3c030300  lui         $v1, 0x300
    ctx->pc = 0x166434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)768 << 16));
    // 0x166438: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x166438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16643c: 0x3c060200  lui         $a2, 0x200
    ctx->pc = 0x16643cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)512 << 16));
    // 0x166440: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x166440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x166444: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x166444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166448: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16644c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x16644cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x166450: 0x8c82f168  lw          $v0, -0xE98($a0)
    ctx->pc = 0x166450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x166454: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x166454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x166458: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x166458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x16645c: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x16645Cu;
    SET_GPR_U32(ctx, 31, 0x166464u);
    ctx->pc = 0x166460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16645Cu;
            // 0x166460: 0xac83f168  sw          $v1, -0xE98($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294963560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166464u; }
        if (ctx->pc != 0x166464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166464u; }
        if (ctx->pc != 0x166464u) { return; }
    }
    ctx->pc = 0x166464u;
    // 0x166464: 0x9603001a  lhu         $v1, 0x1A($s0)
    ctx->pc = 0x166464u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x166468: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x166468u;
    {
        const bool branch_taken_0x166468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16646Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166468u;
            // 0x16646c: 0x8e22c2d0  lw          $v0, -0x3D30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166468) {
            ctx->pc = 0x166488u;
            goto label_166488;
        }
    }
    ctx->pc = 0x166470u;
    // 0x166470: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x166470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x166474: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x166478: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x166478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16647c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x16647cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x166480: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x166480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x166484: 0xae22c2d0  sw          $v0, -0x3D30($s1)
    ctx->pc = 0x166484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294951632), GPR_U32(ctx, 2));
label_166488:
    // 0x166488: 0x17c0ff77  bnez        $fp, . + 4 + (-0x89 << 2)
    ctx->pc = 0x166488u;
    {
        const bool branch_taken_0x166488 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x16648Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166488u;
            // 0x16648c: 0x3c110033  lui         $s1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166488) {
            ctx->pc = 0x166268u;
            runtime->cooperativeGuestYield();
            goto label_166268;
        }
    }
    ctx->pc = 0x166490u;
label_166490:
    // 0x166490: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x166490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x166494: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x166494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x166498: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x166498u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16649c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x16649cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1664a0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1664a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1664a4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1664a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1664a8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1664a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1664ac: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1664acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1664b0: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1664b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1664b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1664b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1664b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1664B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1664BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1664B8u;
            // 0x1664bc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1655D0u: goto label_1655d0;
            case 0x165608u: goto label_165608;
            case 0x165640u: goto label_165640;
            case 0x16565Cu: goto label_16565c;
            case 0x165670u: goto label_165670;
            case 0x165698u: goto label_165698;
            case 0x1656ACu: goto label_1656ac;
            case 0x165888u: goto label_165888;
            case 0x1658A4u: goto label_1658a4;
            case 0x1658ACu: goto label_1658ac;
            case 0x1658C8u: goto label_1658c8;
            case 0x165A70u: goto label_165a70;
            case 0x165A74u: goto label_165a74;
            case 0x165AA4u: goto label_165aa4;
            case 0x165AE0u: goto label_165ae0;
            case 0x165AFCu: goto label_165afc;
            case 0x165B18u: goto label_165b18;
            case 0x165B20u: goto label_165b20;
            case 0x165C38u: goto label_165c38;
            case 0x165C60u: goto label_165c60;
            case 0x165CA4u: goto label_165ca4;
            case 0x165CBCu: goto label_165cbc;
            case 0x165D18u: goto label_165d18;
            case 0x165D1Cu: goto label_165d1c;
            case 0x165DD8u: goto label_165dd8;
            case 0x165E30u: goto label_165e30;
            case 0x165E98u: goto label_165e98;
            case 0x165ED0u: goto label_165ed0;
            case 0x166064u: goto label_166064;
            case 0x1660A0u: goto label_1660a0;
            case 0x1660B0u: goto label_1660b0;
            case 0x1660D4u: goto label_1660d4;
            case 0x1660E0u: goto label_1660e0;
            case 0x1660E4u: goto label_1660e4;
            case 0x16611Cu: goto label_16611c;
            case 0x16612Cu: goto label_16612c;
            case 0x166140u: goto label_166140;
            case 0x16616Cu: goto label_16616c;
            case 0x1661A0u: goto label_1661a0;
            case 0x166268u: goto label_166268;
            case 0x1662DCu: goto label_1662dc;
            case 0x166310u: goto label_166310;
            case 0x16632Cu: goto label_16632c;
            case 0x166344u: goto label_166344;
            case 0x1663C8u: goto label_1663c8;
            case 0x1663D4u: goto label_1663d4;
            case 0x166488u: goto label_166488;
            case 0x166490u: goto label_166490;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1664C0u;
}
