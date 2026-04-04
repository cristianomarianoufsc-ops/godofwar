#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011CF78
// Address: 0x11cf78 - 0x11d1d0
void sub_0011CF78_0x11cf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CF78_0x11cf78");
#endif

    ctx->pc = 0x11cf78u;

    // 0x11cf78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11cf78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11cf7c: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x11cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x11cf80: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x11cf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x11cf84: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x11cf84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x11cf88: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x11cf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x11cf8c: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x11cf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x11cf90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x11cf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x11cf94: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x11cf94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11cf98: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x11cf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x11cf9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11cf9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cfa0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x11cfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x11cfa4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x11cfa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cfa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11cfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11cfac: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x11cfacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x11cfb0: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x11cfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x11cfb4: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x11cfb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x11cfb8: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x11cfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x11cfbc: 0x26500028  addiu       $s0, $s2, 0x28
    ctx->pc = 0x11cfbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x11cfc0: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x11cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x11cfc4: 0xa6470004  sh          $a3, 0x4($s2)
    ctx->pc = 0x11cfc4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x11cfc8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x11cfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x11cfcc: 0xa6480000  sh          $t0, 0x0($s2)
    ctx->pc = 0x11cfccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x11cfd0: 0xae460020  sw          $a2, 0x20($s2)
    ctx->pc = 0x11cfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 6));
    // 0x11cfd4: 0x26510034  addiu       $s1, $s2, 0x34
    ctx->pc = 0x11cfd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x11cfd8: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x11cfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x11cfdc: 0xc08e222  jal         func_238888
    ctx->pc = 0x11CFDCu;
    SET_GPR_U32(ctx, 31, 0x11CFE4u);
    ctx->pc = 0x11CFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CFDCu;
            // 0x11cfe0: 0xa6420002  sh          $v0, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CFE4u; }
        if (ctx->pc != 0x11CFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CFE4u; }
        if (ctx->pc != 0x11CFE4u) { return; }
    }
    ctx->pc = 0x11CFE4u;
    // 0x11cfe4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x11cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x11cfe8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11cfe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cfec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11cfecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cff0: 0xc08e222  jal         func_238888
    ctx->pc = 0x11CFF0u;
    SET_GPR_U32(ctx, 31, 0x11CFF8u);
    ctx->pc = 0x11CFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CFF0u;
            // 0x11cff4: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CFF8u; }
        if (ctx->pc != 0x11CFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CFF8u; }
        if (ctx->pc != 0x11CFF8u) { return; }
    }
    ctx->pc = 0x11CFF8u;
    // 0x11cff8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x11cff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11cffc: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x11cffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x11d000: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11d000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11d004: 0x246307e0  addiu       $v1, $v1, 0x7E0
    ctx->pc = 0x11d004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2016));
    // 0x11d008: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11d008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11d00c: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x11d00cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
    // 0x11d010: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11d010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11d014: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x11d014u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x11d018: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x11D018u;
    SET_GPR_U32(ctx, 31, 0x11D020u);
    ctx->pc = 0x11D01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D018u;
            // 0x11d01c: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D020u; }
        if (ctx->pc != 0x11D020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D020u; }
        if (ctx->pc != 0x11D020u) { return; }
    }
    ctx->pc = 0x11D020u;
    // 0x11d020: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x11d020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11d024: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x11d024u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x11d028: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x11d028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x11d02c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x11d02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x11d030: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x11d030u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x11d034: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x11D034u;
    SET_GPR_U32(ctx, 31, 0x11D03Cu);
    ctx->pc = 0x11D038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D034u;
            // 0x11d038: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D03Cu; }
        if (ctx->pc != 0x11D03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D03Cu; }
        if (ctx->pc != 0x11D03Cu) { return; }
    }
    ctx->pc = 0x11D03Cu;
    // 0x11d03c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d040: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x11d040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x11d044: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x11d044u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x11d048: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x11d048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11d04c: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x11d04cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
    // 0x11d050: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x11D050u;
    SET_GPR_U32(ctx, 31, 0x11D058u);
    ctx->pc = 0x11D054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D050u;
            // 0x11d054: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D058u; }
        if (ctx->pc != 0x11D058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D058u; }
        if (ctx->pc != 0x11D058u) { return; }
    }
    ctx->pc = 0x11D058u;
    // 0x11d058: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d05c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11d05cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d060: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11d060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11d064: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11d064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11d068:
    // 0x11d068: 0x0  nop
    ctx->pc = 0x11d068u;
    // NOP
    // 0x11d06c: 0x0  nop
    ctx->pc = 0x11d06cu;
    // NOP
    // 0x11d070: 0x0  nop
    ctx->pc = 0x11d070u;
    // NOP
    // 0x11d074: 0x0  nop
    ctx->pc = 0x11d074u;
    // NOP
    // 0x11d078: 0x0  nop
    ctx->pc = 0x11d078u;
    // NOP
    // 0x11d07c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11D07Cu;
    {
        const bool branch_taken_0x11d07c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11D080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D07Cu;
            // 0x11d080: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d07c) {
            ctx->pc = 0x11D068u;
            runtime->cooperativeGuestYield();
            goto label_11d068;
        }
    }
    ctx->pc = 0x11D084u;
    // 0x11d084: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x11d084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x11d088: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x11d088u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d08c: 0xae440024  sw          $a0, 0x24($s2)
    ctx->pc = 0x11d08cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
    // 0x11d090: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x11D090u;
    {
        const bool branch_taken_0x11d090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D090u;
            // 0x11d094: 0xae400044  sw          $zero, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d090) {
            ctx->pc = 0x11D144u;
            goto label_11d144;
        }
    }
    ctx->pc = 0x11D098u;
    // 0x11d098: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x11d098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11d09c: 0x0  nop
    ctx->pc = 0x11d09cu;
    // NOP
label_11d0a0:
    // 0x11d0a0: 0x8e510014  lw          $s1, 0x14($s2)
    ctx->pc = 0x11d0a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x11d0a4: 0x2708018  mult        $s0, $s3, $s0
    ctx->pc = 0x11d0a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x11d0a8: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x11d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x11d0ac: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x11d0acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x11d0b0: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x11D0B0u;
    SET_GPR_U32(ctx, 31, 0x11D0B8u);
    ctx->pc = 0x11D0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D0B0u;
            // 0x11d0b4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0B8u; }
        if (ctx->pc != 0x11D0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0B8u; }
        if (ctx->pc != 0x11D0B8u) { return; }
    }
    ctx->pc = 0x11D0B8u;
    // 0x11d0b8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x11d0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x11d0bc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11d0bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d0c0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x11d0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x11d0c4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x11D0C4u;
    {
        const bool branch_taken_0x11d0c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D0C4u;
            // 0x11d0c8: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d0c4) {
            ctx->pc = 0x11D0F4u;
            goto label_11d0f4;
        }
    }
    ctx->pc = 0x11D0CCu;
    // 0x11d0cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d0d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x11d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11d0d4: 0x0  nop
    ctx->pc = 0x11d0d4u;
    // NOP
label_11d0d8:
    // 0x11d0d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11d0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11d0dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11d0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11d0e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x11d0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x11d0e4: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x11d0e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x11d0e8: 0x0  nop
    ctx->pc = 0x11d0e8u;
    // NOP
    // 0x11d0ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11D0ECu;
    {
        const bool branch_taken_0x11d0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D0ECu;
            // 0x11d0f0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d0ec) {
            ctx->pc = 0x11D0D8u;
            runtime->cooperativeGuestYield();
            goto label_11d0d8;
        }
    }
    ctx->pc = 0x11D0F4u;
label_11d0f4:
    // 0x11d0f4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x11d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x11d0f8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11D0F8u;
    {
        const bool branch_taken_0x11d0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D0F8u;
            // 0x11d0fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d0f8) {
            ctx->pc = 0x11D130u;
            goto label_11d130;
        }
    }
    ctx->pc = 0x11D100u;
    // 0x11d100: 0x8e470024  lw          $a3, 0x24($s2)
    ctx->pc = 0x11d100u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x11d104: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11d104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d108:
    // 0x11d108: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x11d108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11d10c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x11d10cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11d110: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x11d110u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11d114: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11d114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11d118: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x11d118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x11d11c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11d11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11d120: 0xa6202b  sltu        $a0, $a1, $a2
    ctx->pc = 0x11d120u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11d124: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11d124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11d128: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11D128u;
    {
        const bool branch_taken_0x11d128 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D128u;
            // 0x11d12c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d128) {
            ctx->pc = 0x11D108u;
            runtime->cooperativeGuestYield();
            goto label_11d108;
        }
    }
    ctx->pc = 0x11D130u;
label_11d130:
    // 0x11d130: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x11d130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x11d134: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x11d134u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x11d138: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x11d138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11d13c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x11D13Cu;
    {
        const bool branch_taken_0x11d13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D13Cu;
            // 0x11d140: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d13c) {
            ctx->pc = 0x11D0A0u;
            runtime->cooperativeGuestYield();
            goto label_11d0a0;
        }
    }
    ctx->pc = 0x11D144u;
label_11d144:
    // 0x11d144: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11d144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d148: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x11d148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x11d14c: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x11d14cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
    // 0x11d150: 0x2442e550  addiu       $v0, $v0, -0x1AB0
    ctx->pc = 0x11d150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x11d154: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x11d154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x11d158: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x11d158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x11d15c: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x11d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x11d160: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x11d160u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x11d164: 0xae4200d0  sw          $v0, 0xD0($s2)
    ctx->pc = 0x11d164u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
    // 0x11d168: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x11d168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x11d16c: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x11d16cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x11d170: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x11d170u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
    // 0x11d174: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x11d174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x11d178: 0xc04d7f0  jal         func_135FC0
    ctx->pc = 0x11D178u;
    SET_GPR_U32(ctx, 31, 0x11D180u);
    ctx->pc = 0x11D17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D178u;
            // 0x11d17c: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135FC0u;
    if (runtime->hasFunction(0x135FC0u)) {
        auto targetFn = runtime->lookupFunction(0x135FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D180u; }
        if (ctx->pc != 0x11D180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_135fc0_0x135fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D180u; }
        if (ctx->pc != 0x11D180u) { return; }
    }
    ctx->pc = 0x11D180u;
    // 0x11d180: 0x8e02be10  lw          $v0, -0x41F0($s0)
    ctx->pc = 0x11d180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950416)));
    // 0x11d184: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D184u;
    {
        const bool branch_taken_0x11d184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d184) {
            ctx->pc = 0x11D194u;
            goto label_11d194;
        }
    }
    ctx->pc = 0x11D18Cu;
    // 0x11d18c: 0xc04e24c  jal         func_138930
    ctx->pc = 0x11D18Cu;
    SET_GPR_U32(ctx, 31, 0x11D194u);
    ctx->pc = 0x138930u;
    if (runtime->hasFunction(0x138930u)) {
        auto targetFn = runtime->lookupFunction(0x138930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D194u; }
        if (ctx->pc != 0x11D194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138930_0x138930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D194u; }
        if (ctx->pc != 0x11D194u) { return; }
    }
    ctx->pc = 0x11D194u;
label_11d194:
    // 0x11d194: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x11D194u;
    SET_GPR_U32(ctx, 31, 0x11D19Cu);
    ctx->pc = 0x11D198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D194u;
            // 0x11d198: 0x8e04be10  lw          $a0, -0x41F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D19Cu; }
        if (ctx->pc != 0x11D19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D19Cu; }
        if (ctx->pc != 0x11D19Cu) { return; }
    }
    ctx->pc = 0x11D19Cu;
    // 0x11d19c: 0xc08f41c  jal         func_23D070
    ctx->pc = 0x11D19Cu;
    SET_GPR_U32(ctx, 31, 0x11D1A4u);
    ctx->pc = 0x11D1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D19Cu;
            // 0x11d1a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23D070u;
    if (runtime->hasFunction(0x23D070u)) {
        auto targetFn = runtime->lookupFunction(0x23D070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D1A4u; }
        if (ctx->pc != 0x11D1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023D070_0x23d070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D1A4u; }
        if (ctx->pc != 0x11D1A4u) { return; }
    }
    ctx->pc = 0x11D1A4u;
    // 0x11d1a4: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x11d1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x11d1a8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x11d1a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11d1ac: 0xac6253cc  sw          $v0, 0x53CC($v1)
    ctx->pc = 0x11d1acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21452), GPR_U32(ctx, 2));
    // 0x11d1b0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x11d1b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1b4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x11d1b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11d1b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x11d1b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11d1bc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x11d1bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d1c0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x11d1c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d1c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x11D1C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D1C8u;
            // 0x11d1cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D068u: goto label_11d068;
            case 0x11D0A0u: goto label_11d0a0;
            case 0x11D0D8u: goto label_11d0d8;
            case 0x11D0F4u: goto label_11d0f4;
            case 0x11D108u: goto label_11d108;
            case 0x11D130u: goto label_11d130;
            case 0x11D144u: goto label_11d144;
            case 0x11D194u: goto label_11d194;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D1D0u;
}
