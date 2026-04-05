#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172500
// Address: 0x172500 - 0x172778
void sub_00172500_0x172500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172500_0x172500");
#endif

    ctx->pc = 0x172500u;

    // 0x172500: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x172500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x172504: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x172504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x172508: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x172508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x17250c: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x17250cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x172510: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x172510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x172514: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x172514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x172518: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x172518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17251c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x17251cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x172520: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x172520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x172524: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x172524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172528: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x172528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x17252c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x17252cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172530: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172534: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x172534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x172538: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x172538u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x17253c: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x17253cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x172540: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x172540u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x172544: 0x26500028  addiu       $s0, $s2, 0x28
    ctx->pc = 0x172544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x172548: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x172548u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x17254c: 0xa6470004  sh          $a3, 0x4($s2)
    ctx->pc = 0x17254cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x172550: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x172550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x172554: 0xa6480000  sh          $t0, 0x0($s2)
    ctx->pc = 0x172554u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x172558: 0xae460020  sw          $a2, 0x20($s2)
    ctx->pc = 0x172558u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 6));
    // 0x17255c: 0x26510034  addiu       $s1, $s2, 0x34
    ctx->pc = 0x17255cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x172560: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x172560u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x172564: 0xc08e222  jal         func_238888
    ctx->pc = 0x172564u;
    SET_GPR_U32(ctx, 31, 0x17256Cu);
    ctx->pc = 0x172568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172564u;
            // 0x172568: 0xa6420002  sh          $v0, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17256Cu; }
        if (ctx->pc != 0x17256Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17256Cu; }
        if (ctx->pc != 0x17256Cu) { return; }
    }
    ctx->pc = 0x17256Cu;
    // 0x17256c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x17256cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x172570: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x172570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172574: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x172574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172578: 0xc08e222  jal         func_238888
    ctx->pc = 0x172578u;
    SET_GPR_U32(ctx, 31, 0x172580u);
    ctx->pc = 0x17257Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172578u;
            // 0x17257c: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172580u; }
        if (ctx->pc != 0x172580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172580u; }
        if (ctx->pc != 0x172580u) { return; }
    }
    ctx->pc = 0x172580u;
    // 0x172580: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x172580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x172584: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x172584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x172588: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x172588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x17258c: 0x246307e0  addiu       $v1, $v1, 0x7E0
    ctx->pc = 0x17258cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2016));
    // 0x172590: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x172590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x172594: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x172594u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
    // 0x172598: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x172598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17259c: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x17259cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x1725a0: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x1725A0u;
    SET_GPR_U32(ctx, 31, 0x1725A8u);
    ctx->pc = 0x1725A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1725A0u;
            // 0x1725a4: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1725A8u; }
        if (ctx->pc != 0x1725A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1725A8u; }
        if (ctx->pc != 0x1725A8u) { return; }
    }
    ctx->pc = 0x1725A8u;
    // 0x1725a8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1725a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1725ac: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x1725acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x1725b0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1725b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1725b4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1725b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1725b8: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x1725b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1725bc: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x1725BCu;
    SET_GPR_U32(ctx, 31, 0x1725C4u);
    ctx->pc = 0x1725C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1725BCu;
            // 0x1725c0: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1725C4u; }
        if (ctx->pc != 0x1725C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1725C4u; }
        if (ctx->pc != 0x1725C4u) { return; }
    }
    ctx->pc = 0x1725C4u;
    // 0x1725c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1725c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1725c8: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x1725c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x1725cc: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x1725ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x1725d0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1725d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1725d4: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x1725d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
    // 0x1725d8: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x1725D8u;
    SET_GPR_U32(ctx, 31, 0x1725E0u);
    ctx->pc = 0x1725DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1725D8u;
            // 0x1725dc: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1725E0u; }
        if (ctx->pc != 0x1725E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1725E0u; }
        if (ctx->pc != 0x1725E0u) { return; }
    }
    ctx->pc = 0x1725E0u;
    // 0x1725e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1725e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1725e4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1725e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1725e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1725e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1725ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1725ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1725f0:
    // 0x1725f0: 0x0  nop
    ctx->pc = 0x1725f0u;
    // NOP
    // 0x1725f4: 0x0  nop
    ctx->pc = 0x1725f4u;
    // NOP
    // 0x1725f8: 0x0  nop
    ctx->pc = 0x1725f8u;
    // NOP
    // 0x1725fc: 0x0  nop
    ctx->pc = 0x1725fcu;
    // NOP
    // 0x172600: 0x0  nop
    ctx->pc = 0x172600u;
    // NOP
    // 0x172604: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x172604u;
    {
        const bool branch_taken_0x172604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x172608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172604u;
            // 0x172608: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172604) {
            ctx->pc = 0x1725F0u;
            runtime->cooperativeGuestYield();
            goto label_1725f0;
        }
    }
    ctx->pc = 0x17260Cu;
    // 0x17260c: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x17260cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x172610: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x172610u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172614: 0xae440024  sw          $a0, 0x24($s2)
    ctx->pc = 0x172614u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
    // 0x172618: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x172618u;
    {
        const bool branch_taken_0x172618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17261Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172618u;
            // 0x17261c: 0xae400044  sw          $zero, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172618) {
            ctx->pc = 0x1726CCu;
            goto label_1726cc;
        }
    }
    ctx->pc = 0x172620u;
    // 0x172620: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x172620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x172624: 0x0  nop
    ctx->pc = 0x172624u;
    // NOP
label_172628:
    // 0x172628: 0x8e510014  lw          $s1, 0x14($s2)
    ctx->pc = 0x172628u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x17262c: 0x2708018  mult        $s0, $s3, $s0
    ctx->pc = 0x17262cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x172630: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x172630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x172634: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x172634u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x172638: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x172638u;
    SET_GPR_U32(ctx, 31, 0x172640u);
    ctx->pc = 0x17263Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172638u;
            // 0x17263c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172640u; }
        if (ctx->pc != 0x172640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172640u; }
        if (ctx->pc != 0x172640u) { return; }
    }
    ctx->pc = 0x172640u;
    // 0x172640: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x172640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x172644: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x172644u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172648: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x172648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17264c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x17264Cu;
    {
        const bool branch_taken_0x17264c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x172650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17264Cu;
            // 0x172650: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17264c) {
            ctx->pc = 0x17267Cu;
            goto label_17267c;
        }
    }
    ctx->pc = 0x172654u;
    // 0x172654: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x172654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172658: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x172658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17265c: 0x0  nop
    ctx->pc = 0x17265cu;
    // NOP
label_172660:
    // 0x172660: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x172660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x172664: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x172664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x172668: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x172668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17266c: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x17266cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x172670: 0x0  nop
    ctx->pc = 0x172670u;
    // NOP
    // 0x172674: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x172674u;
    {
        const bool branch_taken_0x172674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172674u;
            // 0x172678: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172674) {
            ctx->pc = 0x172660u;
            runtime->cooperativeGuestYield();
            goto label_172660;
        }
    }
    ctx->pc = 0x17267Cu;
label_17267c:
    // 0x17267c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x17267cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x172680: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x172680u;
    {
        const bool branch_taken_0x172680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172680u;
            // 0x172684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172680) {
            ctx->pc = 0x1726B8u;
            goto label_1726b8;
        }
    }
    ctx->pc = 0x172688u;
    // 0x172688: 0x8e470024  lw          $a3, 0x24($s2)
    ctx->pc = 0x172688u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x17268c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17268cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172690:
    // 0x172690: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x172690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x172694: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x172694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x172698: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x172698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x17269c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17269cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1726a0: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x1726a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1726a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1726a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1726a8: 0xa6202b  sltu        $a0, $a1, $a2
    ctx->pc = 0x1726a8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1726ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1726acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1726b0: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1726B0u;
    {
        const bool branch_taken_0x1726b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1726B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1726B0u;
            // 0x1726b4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1726b0) {
            ctx->pc = 0x172690u;
            runtime->cooperativeGuestYield();
            goto label_172690;
        }
    }
    ctx->pc = 0x1726B8u;
label_1726b8:
    // 0x1726b8: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x1726b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1726bc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1726bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1726c0: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1726c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1726c4: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1726C4u;
    {
        const bool branch_taken_0x1726c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1726C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1726C4u;
            // 0x1726c8: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1726c4) {
            ctx->pc = 0x172628u;
            runtime->cooperativeGuestYield();
            goto label_172628;
        }
    }
    ctx->pc = 0x1726CCu;
label_1726cc:
    // 0x1726cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1726ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1726d0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1726d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1726d4: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x1726d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
    // 0x1726d8: 0x2442e050  addiu       $v0, $v0, -0x1FB0
    ctx->pc = 0x1726d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959184));
    // 0x1726dc: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x1726dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x1726e0: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x1726e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1726e4: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x1726e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1726e8: 0xae4200d0  sw          $v0, 0xD0($s2)
    ctx->pc = 0x1726e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
    // 0x1726ec: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x1726ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1726f0: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1726f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x1726f4: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x1726f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
    // 0x1726f8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1726f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1726fc: 0xc04d7f0  jal         func_135FC0
    ctx->pc = 0x1726FCu;
    SET_GPR_U32(ctx, 31, 0x172704u);
    ctx->pc = 0x172700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1726FCu;
            // 0x172700: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135FC0u;
    if (runtime->hasFunction(0x135FC0u)) {
        auto targetFn = runtime->lookupFunction(0x135FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172704u; }
        if (ctx->pc != 0x172704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_135fc0_0x135fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172704u; }
        if (ctx->pc != 0x172704u) { return; }
    }
    ctx->pc = 0x172704u;
    // 0x172704: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x172704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172708: 0xc05ca98  jal         func_172A60
    ctx->pc = 0x172708u;
    SET_GPR_U32(ctx, 31, 0x172710u);
    ctx->pc = 0x17270Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172708u;
            // 0x17270c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172A60u;
    if (runtime->hasFunction(0x172A60u)) {
        auto targetFn = runtime->lookupFunction(0x172A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172710u; }
        if (ctx->pc != 0x172710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172A60_0x172a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172710u; }
        if (ctx->pc != 0x172710u) { return; }
    }
    ctx->pc = 0x172710u;
    // 0x172710: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x172710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x172714: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x172714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x172718: 0xac6253ec  sw          $v0, 0x53EC($v1)
    ctx->pc = 0x172718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21484), GPR_U32(ctx, 2));
    // 0x17271c: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x17271cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x172720: 0xc05c0c0  jal         func_170300
    ctx->pc = 0x172720u;
    SET_GPR_U32(ctx, 31, 0x172728u);
    ctx->pc = 0x172724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172720u;
            // 0x172724: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170300u;
    if (runtime->hasFunction(0x170300u)) {
        auto targetFn = runtime->lookupFunction(0x170300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172728u; }
        if (ctx->pc != 0x172728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_170300_0x170350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172728u; }
        if (ctx->pc != 0x172728u) { return; }
    }
    ctx->pc = 0x172728u;
    // 0x172728: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x172728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17272c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x17272cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172730: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x172730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172734: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x172734u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172738: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x172738u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17273c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x17273cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172744: 0x3e00008  jr          $ra
    ctx->pc = 0x172744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172744u;
            // 0x172748: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1725F0u: goto label_1725f0;
            case 0x172628u: goto label_172628;
            case 0x172660u: goto label_172660;
            case 0x17267Cu: goto label_17267c;
            case 0x172690u: goto label_172690;
            case 0x1726B8u: goto label_1726b8;
            case 0x1726CCu: goto label_1726cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17274Cu;
    // 0x17274c: 0x0  nop
    ctx->pc = 0x17274cu;
    // NOP
    // 0x172750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172754: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x172754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x172758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17275c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x17275cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172760: 0x2442e050  addiu       $v0, $v0, -0x1FB0
    ctx->pc = 0x172760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959184));
    // 0x172764: 0xc08eb42  jal         func_23AD08
    ctx->pc = 0x172764u;
    SET_GPR_U32(ctx, 31, 0x17276Cu);
    ctx->pc = 0x172768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172764u;
            // 0x172768: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AD08u;
    if (runtime->hasFunction(0x23AD08u)) {
        auto targetFn = runtime->lookupFunction(0x23AD08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17276Cu; }
        if (ctx->pc != 0x17276Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ad08_0x23ad30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17276Cu; }
        if (ctx->pc != 0x17276Cu) { return; }
    }
    ctx->pc = 0x17276Cu;
    // 0x17276c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17276cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172770: 0x3e00008  jr          $ra
    ctx->pc = 0x172770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172770u;
            // 0x172774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1725F0u: goto label_1725f0;
            case 0x172628u: goto label_172628;
            case 0x172660u: goto label_172660;
            case 0x17267Cu: goto label_17267c;
            case 0x172690u: goto label_172690;
            case 0x1726B8u: goto label_1726b8;
            case 0x1726CCu: goto label_1726cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172778u;
}
