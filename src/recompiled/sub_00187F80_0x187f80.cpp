#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187F80
// Address: 0x187f80 - 0x1882e8
void sub_00187F80_0x187f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187F80_0x187f80");
#endif

    ctx->pc = 0x187f80u;

    // 0x187f80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x187f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x187f84: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x187f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x187f88: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x187f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x187f8c: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x187f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x187f90: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x187f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x187f94: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x187f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x187f98: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x187f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x187f9c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x187f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x187fa0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x187fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x187fa4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x187fa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187fa8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x187fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x187fac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x187facu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187fb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187fb4: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x187fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x187fb8: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x187fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x187fbc: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x187fbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x187fc0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x187fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x187fc4: 0x26500028  addiu       $s0, $s2, 0x28
    ctx->pc = 0x187fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x187fc8: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x187fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x187fcc: 0xa6470004  sh          $a3, 0x4($s2)
    ctx->pc = 0x187fccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x187fd0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x187fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x187fd4: 0xa6480000  sh          $t0, 0x0($s2)
    ctx->pc = 0x187fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x187fd8: 0xae460020  sw          $a2, 0x20($s2)
    ctx->pc = 0x187fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 6));
    // 0x187fdc: 0x26510034  addiu       $s1, $s2, 0x34
    ctx->pc = 0x187fdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x187fe0: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x187fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x187fe4: 0xc08e222  jal         func_238888
    ctx->pc = 0x187FE4u;
    SET_GPR_U32(ctx, 31, 0x187FECu);
    ctx->pc = 0x187FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187FE4u;
            // 0x187fe8: 0xa6420002  sh          $v0, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187FECu; }
        if (ctx->pc != 0x187FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187FECu; }
        if (ctx->pc != 0x187FECu) { return; }
    }
    ctx->pc = 0x187FECu;
    // 0x187fec: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x187fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x187ff0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x187ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ff4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x187ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ff8: 0xc08e222  jal         func_238888
    ctx->pc = 0x187FF8u;
    SET_GPR_U32(ctx, 31, 0x188000u);
    ctx->pc = 0x187FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187FF8u;
            // 0x187ffc: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188000u; }
        if (ctx->pc != 0x188000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188000u; }
        if (ctx->pc != 0x188000u) { return; }
    }
    ctx->pc = 0x188000u;
    // 0x188000: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x188000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x188004: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x188004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x188008: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x188008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x18800c: 0x246307e0  addiu       $v1, $v1, 0x7E0
    ctx->pc = 0x18800cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2016));
    // 0x188010: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x188010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x188014: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x188014u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
    // 0x188018: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x188018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18801c: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x18801cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x188020: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x188020u;
    SET_GPR_U32(ctx, 31, 0x188028u);
    ctx->pc = 0x188024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188020u;
            // 0x188024: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188028u; }
        if (ctx->pc != 0x188028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188028u; }
        if (ctx->pc != 0x188028u) { return; }
    }
    ctx->pc = 0x188028u;
    // 0x188028: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x188028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18802c: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x18802cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x188030: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x188030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x188034: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x188034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x188038: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x188038u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x18803c: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x18803Cu;
    SET_GPR_U32(ctx, 31, 0x188044u);
    ctx->pc = 0x188040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18803Cu;
            // 0x188040: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188044u; }
        if (ctx->pc != 0x188044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188044u; }
        if (ctx->pc != 0x188044u) { return; }
    }
    ctx->pc = 0x188044u;
    // 0x188044: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x188044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188048: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x188048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x18804c: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x18804cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x188050: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x188050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x188054: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x188054u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
    // 0x188058: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x188058u;
    SET_GPR_U32(ctx, 31, 0x188060u);
    ctx->pc = 0x18805Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188058u;
            // 0x18805c: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188060u; }
        if (ctx->pc != 0x188060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188060u; }
        if (ctx->pc != 0x188060u) { return; }
    }
    ctx->pc = 0x188060u;
    // 0x188060: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x188060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188064: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x188064u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188068: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x188068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18806c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18806cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_188070:
    // 0x188070: 0x0  nop
    ctx->pc = 0x188070u;
    // NOP
    // 0x188074: 0x0  nop
    ctx->pc = 0x188074u;
    // NOP
    // 0x188078: 0x0  nop
    ctx->pc = 0x188078u;
    // NOP
    // 0x18807c: 0x0  nop
    ctx->pc = 0x18807cu;
    // NOP
    // 0x188080: 0x0  nop
    ctx->pc = 0x188080u;
    // NOP
    // 0x188084: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x188084u;
    {
        const bool branch_taken_0x188084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x188088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188084u;
            // 0x188088: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188084) {
            ctx->pc = 0x188070u;
            runtime->cooperativeGuestYield();
            goto label_188070;
        }
    }
    ctx->pc = 0x18808Cu;
    // 0x18808c: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x18808cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x188090: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x188090u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188094: 0xae440024  sw          $a0, 0x24($s2)
    ctx->pc = 0x188094u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
    // 0x188098: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x188098u;
    {
        const bool branch_taken_0x188098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18809Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188098u;
            // 0x18809c: 0xae400044  sw          $zero, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188098) {
            ctx->pc = 0x18814Cu;
            goto label_18814c;
        }
    }
    ctx->pc = 0x1880A0u;
    // 0x1880a0: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x1880a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1880a4: 0x0  nop
    ctx->pc = 0x1880a4u;
    // NOP
label_1880a8:
    // 0x1880a8: 0x8e510014  lw          $s1, 0x14($s2)
    ctx->pc = 0x1880a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1880ac: 0x2708018  mult        $s0, $s3, $s0
    ctx->pc = 0x1880acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1880b0: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1880b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1880b4: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1880b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1880b8: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x1880B8u;
    SET_GPR_U32(ctx, 31, 0x1880C0u);
    ctx->pc = 0x1880BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1880B8u;
            // 0x1880bc: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1880C0u; }
        if (ctx->pc != 0x1880C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1880C0u; }
        if (ctx->pc != 0x1880C0u) { return; }
    }
    ctx->pc = 0x1880C0u;
    // 0x1880c0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1880c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1880c4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1880c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1880c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1880c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1880cc: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1880CCu;
    {
        const bool branch_taken_0x1880cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1880D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1880CCu;
            // 0x1880d0: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880cc) {
            ctx->pc = 0x1880FCu;
            goto label_1880fc;
        }
    }
    ctx->pc = 0x1880D4u;
    // 0x1880d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1880d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1880d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1880d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1880dc: 0x0  nop
    ctx->pc = 0x1880dcu;
    // NOP
label_1880e0:
    // 0x1880e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1880e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1880e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1880e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1880e8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1880e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1880ec: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x1880ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1880f0: 0x0  nop
    ctx->pc = 0x1880f0u;
    // NOP
    // 0x1880f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1880F4u;
    {
        const bool branch_taken_0x1880f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1880F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1880F4u;
            // 0x1880f8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880f4) {
            ctx->pc = 0x1880E0u;
            runtime->cooperativeGuestYield();
            goto label_1880e0;
        }
    }
    ctx->pc = 0x1880FCu;
label_1880fc:
    // 0x1880fc: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1880fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x188100: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x188100u;
    {
        const bool branch_taken_0x188100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188100u;
            // 0x188104: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188100) {
            ctx->pc = 0x188138u;
            goto label_188138;
        }
    }
    ctx->pc = 0x188108u;
    // 0x188108: 0x8e470024  lw          $a3, 0x24($s2)
    ctx->pc = 0x188108u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x18810c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18810cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_188110:
    // 0x188110: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x188110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x188114: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x188114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x188118: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x188118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x18811c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18811cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x188120: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x188120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x188124: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x188124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188128: 0xa6202b  sltu        $a0, $a1, $a2
    ctx->pc = 0x188128u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x18812c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18812cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x188130: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x188130u;
    {
        const bool branch_taken_0x188130 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x188134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188130u;
            // 0x188134: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188130) {
            ctx->pc = 0x188110u;
            runtime->cooperativeGuestYield();
            goto label_188110;
        }
    }
    ctx->pc = 0x188138u;
label_188138:
    // 0x188138: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x188138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x18813c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18813cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x188140: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x188140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x188144: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x188144u;
    {
        const bool branch_taken_0x188144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188144u;
            // 0x188148: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188144) {
            ctx->pc = 0x1880A8u;
            runtime->cooperativeGuestYield();
            goto label_1880a8;
        }
    }
    ctx->pc = 0x18814Cu;
label_18814c:
    // 0x18814c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18814cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188150: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x188150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x188154: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x188154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
    // 0x188158: 0x2442afe8  addiu       $v0, $v0, -0x5018
    ctx->pc = 0x188158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946792));
    // 0x18815c: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x18815cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x188160: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x188160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x188164: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x188164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x188168: 0xae4200d0  sw          $v0, 0xD0($s2)
    ctx->pc = 0x188168u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
    // 0x18816c: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x18816cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x188170: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x188170u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x188174: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x188174u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
    // 0x188178: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x188178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x18817c: 0xc04d7f0  jal         func_135FC0
    ctx->pc = 0x18817Cu;
    SET_GPR_U32(ctx, 31, 0x188184u);
    ctx->pc = 0x188180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18817Cu;
            // 0x188180: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135FC0u;
    if (runtime->hasFunction(0x135FC0u)) {
        auto targetFn = runtime->lookupFunction(0x135FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188184u; }
        if (ctx->pc != 0x188184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_135fc0_0x135fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188184u; }
        if (ctx->pc != 0x188184u) { return; }
    }
    ctx->pc = 0x188184u;
    // 0x188184: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x188184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188188: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x188188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18818c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x18818cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188190: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x188190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188194: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x188194u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188198: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x188198u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18819c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18819cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1881a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1881A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1881A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1881A0u;
            // 0x1881a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188070u: goto label_188070;
            case 0x1880A8u: goto label_1880a8;
            case 0x1880E0u: goto label_1880e0;
            case 0x1880FCu: goto label_1880fc;
            case 0x188110u: goto label_188110;
            case 0x188138u: goto label_188138;
            case 0x18814Cu: goto label_18814c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1881A8u;
    // 0x1881a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1881a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1881ac: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1881acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1881b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1881b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1881b4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1881b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1881b8: 0x2442afe8  addiu       $v0, $v0, -0x5018
    ctx->pc = 0x1881b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946792));
    // 0x1881bc: 0xc08eb42  jal         func_23AD08
    ctx->pc = 0x1881BCu;
    SET_GPR_U32(ctx, 31, 0x1881C4u);
    ctx->pc = 0x1881C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1881BCu;
            // 0x1881c0: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AD08u;
    if (runtime->hasFunction(0x23AD08u)) {
        auto targetFn = runtime->lookupFunction(0x23AD08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881C4u; }
        if (ctx->pc != 0x1881C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ad08_0x23ad30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881C4u; }
        if (ctx->pc != 0x1881C4u) { return; }
    }
    ctx->pc = 0x1881C4u;
    // 0x1881c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1881c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1881c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1881C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1881CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1881C8u;
            // 0x1881cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188070u: goto label_188070;
            case 0x1880A8u: goto label_1880a8;
            case 0x1880E0u: goto label_1880e0;
            case 0x1880FCu: goto label_1880fc;
            case 0x188110u: goto label_188110;
            case 0x188138u: goto label_188138;
            case 0x18814Cu: goto label_18814c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1881D0u;
    // 0x1881d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1881d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1881d4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1881d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1881d8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1881d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1881dc: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1881dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1881e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1881e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1881e4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1881e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1881e8: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x1881e8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1881ec: 0x8c6800d0  lw          $t0, 0xD0($v1)
    ctx->pc = 0x1881ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x1881f0: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x1881f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1881f4: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x1881f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1881f8: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x1881f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1881fc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1881fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x188200: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x188200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x188204: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x188204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x188208: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x188208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x18820c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x18820cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x188210: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x188210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x188214: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x188214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x188218: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x188218u;
    SET_GPR_U32(ctx, 31, 0x188220u);
    ctx->pc = 0x18821Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188218u;
            // 0x18821c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188220u; }
        if (ctx->pc != 0x188220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188220u; }
        if (ctx->pc != 0x188220u) { return; }
    }
    ctx->pc = 0x188220u;
    // 0x188220: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x188220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188224: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x188224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188228: 0x3c06dead  lui         $a2, 0xDEAD
    ctx->pc = 0x188228u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57005 << 16));
    // 0x18822c: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x18822cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x188230: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x188230u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x188234: 0x24e70978  addiu       $a3, $a3, 0x978
    ctx->pc = 0x188234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2424));
    // 0x188238: 0x34c6beef  ori         $a2, $a2, 0xBEEF
    ctx->pc = 0x188238u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48879);
    // 0x18823c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x18823cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x188240: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x188240u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x188244: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x188244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x188248: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x188248u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x18824c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18824cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188250: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x188250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x188254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188258: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x188258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x18825c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x18825cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x188260: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x188260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x188264: 0xc08e222  jal         func_238888
    ctx->pc = 0x188264u;
    SET_GPR_U32(ctx, 31, 0x18826Cu);
    ctx->pc = 0x188268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188264u;
            // 0x188268: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18826Cu; }
        if (ctx->pc != 0x18826Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18826Cu; }
        if (ctx->pc != 0x18826Cu) { return; }
    }
    ctx->pc = 0x18826Cu;
    // 0x18826c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x18826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x188270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188274: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x188274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188278: 0xc08e222  jal         func_238888
    ctx->pc = 0x188278u;
    SET_GPR_U32(ctx, 31, 0x188280u);
    ctx->pc = 0x18827Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188278u;
            // 0x18827c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188280u; }
        if (ctx->pc != 0x188280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188280u; }
        if (ctx->pc != 0x188280u) { return; }
    }
    ctx->pc = 0x188280u;
    // 0x188280: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x188280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x188284: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x188284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x188288: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x188288u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18828c: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x18828cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x188290: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x188290u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188294: 0x2484b0a8  addiu       $a0, $a0, -0x4F58
    ctx->pc = 0x188294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946984));
    // 0x188298: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x188298u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18829c: 0x30a5ffdf  andi        $a1, $a1, 0xFFDF
    ctx->pc = 0x18829cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65503);
    // 0x1882a0: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x1882a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1882a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1882a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1882a8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1882a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1882ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1882acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1882b0: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1882b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1882b4: 0xae080010  sw          $t0, 0x10($s0)
    ctx->pc = 0x1882b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 8));
    // 0x1882b8: 0xae070034  sw          $a3, 0x34($s0)
    ctx->pc = 0x1882b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
    // 0x1882bc: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x1882bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x1882c0: 0xa6050004  sh          $a1, 0x4($s0)
    ctx->pc = 0x1882c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x1882c4: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x1882c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x1882c8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1882c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1882cc: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1882ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1882d0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1882d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1882d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1882d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1882d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1882d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1882dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1882DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1882E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1882DCu;
            // 0x1882e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188070u: goto label_188070;
            case 0x1880A8u: goto label_1880a8;
            case 0x1880E0u: goto label_1880e0;
            case 0x1880FCu: goto label_1880fc;
            case 0x188110u: goto label_188110;
            case 0x188138u: goto label_188138;
            case 0x18814Cu: goto label_18814c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1882E4u;
    // 0x1882e4: 0x0  nop
    ctx->pc = 0x1882e4u;
    // NOP
}
