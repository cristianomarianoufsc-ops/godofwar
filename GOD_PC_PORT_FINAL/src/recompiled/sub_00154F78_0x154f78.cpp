#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00154F78
// Address: 0x154f78 - 0x1553a0
void sub_00154F78_0x154f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154F78_0x154f78");
#endif

    ctx->pc = 0x154f78u;

    // 0x154f78: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x154f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x154f7c: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x154f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x154f80: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x154f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x154f84: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x154f84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x154f88: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x154f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x154f8c: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x154f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x154f90: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x154f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x154f94: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x154f94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x154f98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x154f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x154f9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x154f9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154fa0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x154fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x154fa4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x154fa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154fa8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x154fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x154fac: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x154facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x154fb0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x154fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x154fb4: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x154fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x154fb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x154fbc: 0x26500028  addiu       $s0, $s2, 0x28
    ctx->pc = 0x154fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x154fc0: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x154fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x154fc4: 0x26510034  addiu       $s1, $s2, 0x34
    ctx->pc = 0x154fc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x154fc8: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x154fc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x154fcc: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x154fccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x154fd0: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x154fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x154fd4: 0xa6470004  sh          $a3, 0x4($s2)
    ctx->pc = 0x154fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x154fd8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x154fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x154fdc: 0xa6480000  sh          $t0, 0x0($s2)
    ctx->pc = 0x154fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x154fe0: 0xae460020  sw          $a2, 0x20($s2)
    ctx->pc = 0x154fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 6));
    // 0x154fe4: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x154fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x154fe8: 0xc08e222  jal         func_238888
    ctx->pc = 0x154FE8u;
    SET_GPR_U32(ctx, 31, 0x154FF0u);
    ctx->pc = 0x154FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154FE8u;
            // 0x154fec: 0xa6420002  sh          $v0, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154FF0u; }
        if (ctx->pc != 0x154FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154FF0u; }
        if (ctx->pc != 0x154FF0u) { return; }
    }
    ctx->pc = 0x154FF0u;
    // 0x154ff0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x154ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x154ff4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x154ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ff8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x154ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ffc: 0xc08e222  jal         func_238888
    ctx->pc = 0x154FFCu;
    SET_GPR_U32(ctx, 31, 0x155004u);
    ctx->pc = 0x155000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154FFCu;
            // 0x155000: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155004u; }
        if (ctx->pc != 0x155004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155004u; }
        if (ctx->pc != 0x155004u) { return; }
    }
    ctx->pc = 0x155004u;
    // 0x155004: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x155004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x155008: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x155008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x15500c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x15500cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x155010: 0x246307e0  addiu       $v1, $v1, 0x7E0
    ctx->pc = 0x155010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2016));
    // 0x155014: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x155014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x155018: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x155018u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
    // 0x15501c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x15501cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x155020: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x155020u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x155024: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x155024u;
    SET_GPR_U32(ctx, 31, 0x15502Cu);
    ctx->pc = 0x155028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155024u;
            // 0x155028: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15502Cu; }
        if (ctx->pc != 0x15502Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15502Cu; }
        if (ctx->pc != 0x15502Cu) { return; }
    }
    ctx->pc = 0x15502Cu;
    // 0x15502c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x15502cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x155030: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x155030u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x155034: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x155034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x155038: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x155038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x15503c: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x15503cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x155040: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x155040u;
    SET_GPR_U32(ctx, 31, 0x155048u);
    ctx->pc = 0x155044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155040u;
            // 0x155044: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155048u; }
        if (ctx->pc != 0x155048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155048u; }
        if (ctx->pc != 0x155048u) { return; }
    }
    ctx->pc = 0x155048u;
    // 0x155048: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x155048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15504c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x15504cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x155050: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x155050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x155054: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x155054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x155058: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x155058u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
    // 0x15505c: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x15505Cu;
    SET_GPR_U32(ctx, 31, 0x155064u);
    ctx->pc = 0x155060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15505Cu;
            // 0x155060: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155064u; }
        if (ctx->pc != 0x155064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155064u; }
        if (ctx->pc != 0x155064u) { return; }
    }
    ctx->pc = 0x155064u;
    // 0x155064: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x155064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155068: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x155068u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15506c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15506cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x155070: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x155070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x155074: 0x0  nop
    ctx->pc = 0x155074u;
    // NOP
label_155078:
    // 0x155078: 0x0  nop
    ctx->pc = 0x155078u;
    // NOP
    // 0x15507c: 0x0  nop
    ctx->pc = 0x15507cu;
    // NOP
    // 0x155080: 0x0  nop
    ctx->pc = 0x155080u;
    // NOP
    // 0x155084: 0x0  nop
    ctx->pc = 0x155084u;
    // NOP
    // 0x155088: 0x0  nop
    ctx->pc = 0x155088u;
    // NOP
    // 0x15508c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15508Cu;
    {
        const bool branch_taken_0x15508c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x155090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15508Cu;
            // 0x155090: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15508c) {
            ctx->pc = 0x155078u;
            runtime->cooperativeGuestYield();
            goto label_155078;
        }
    }
    ctx->pc = 0x155094u;
    // 0x155094: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x155094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x155098: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x155098u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15509c: 0xae440024  sw          $a0, 0x24($s2)
    ctx->pc = 0x15509cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
    // 0x1550a0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1550A0u;
    {
        const bool branch_taken_0x1550a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1550A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1550A0u;
            // 0x1550a4: 0xae400044  sw          $zero, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1550a0) {
            ctx->pc = 0x155154u;
            goto label_155154;
        }
    }
    ctx->pc = 0x1550A8u;
    // 0x1550a8: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x1550a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1550ac: 0x0  nop
    ctx->pc = 0x1550acu;
    // NOP
label_1550b0:
    // 0x1550b0: 0x8e510014  lw          $s1, 0x14($s2)
    ctx->pc = 0x1550b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1550b4: 0x2708018  mult        $s0, $s3, $s0
    ctx->pc = 0x1550b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1550b8: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1550b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1550bc: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1550bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1550c0: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x1550C0u;
    SET_GPR_U32(ctx, 31, 0x1550C8u);
    ctx->pc = 0x1550C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1550C0u;
            // 0x1550c4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1550C8u; }
        if (ctx->pc != 0x1550C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1550C8u; }
        if (ctx->pc != 0x1550C8u) { return; }
    }
    ctx->pc = 0x1550C8u;
    // 0x1550c8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1550c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1550cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1550ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1550d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1550d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1550d4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1550D4u;
    {
        const bool branch_taken_0x1550d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1550D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1550D4u;
            // 0x1550d8: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1550d4) {
            ctx->pc = 0x155104u;
            goto label_155104;
        }
    }
    ctx->pc = 0x1550DCu;
    // 0x1550dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1550dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1550e0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1550e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1550e4: 0x0  nop
    ctx->pc = 0x1550e4u;
    // NOP
label_1550e8:
    // 0x1550e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1550e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1550ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1550ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1550f0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1550f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1550f4: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x1550f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1550f8: 0x0  nop
    ctx->pc = 0x1550f8u;
    // NOP
    // 0x1550fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1550FCu;
    {
        const bool branch_taken_0x1550fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1550FCu;
            // 0x155100: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1550fc) {
            ctx->pc = 0x1550E8u;
            runtime->cooperativeGuestYield();
            goto label_1550e8;
        }
    }
    ctx->pc = 0x155104u;
label_155104:
    // 0x155104: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x155104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x155108: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x155108u;
    {
        const bool branch_taken_0x155108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15510Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155108u;
            // 0x15510c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155108) {
            ctx->pc = 0x155140u;
            goto label_155140;
        }
    }
    ctx->pc = 0x155110u;
    // 0x155110: 0x8e470024  lw          $a3, 0x24($s2)
    ctx->pc = 0x155110u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x155114: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x155114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_155118:
    // 0x155118: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x155118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15511c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x15511cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x155120: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x155120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x155124: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x155124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x155128: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x155128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x15512c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15512cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155130: 0xa6202b  sltu        $a0, $a1, $a2
    ctx->pc = 0x155130u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x155134: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x155134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x155138: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x155138u;
    {
        const bool branch_taken_0x155138 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15513Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155138u;
            // 0x15513c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155138) {
            ctx->pc = 0x155118u;
            runtime->cooperativeGuestYield();
            goto label_155118;
        }
    }
    ctx->pc = 0x155140u;
label_155140:
    // 0x155140: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x155140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x155144: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x155144u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x155148: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x155148u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15514c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x15514Cu;
    {
        const bool branch_taken_0x15514c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15514Cu;
            // 0x155150: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15514c) {
            ctx->pc = 0x1550B0u;
            runtime->cooperativeGuestYield();
            goto label_1550b0;
        }
    }
    ctx->pc = 0x155154u;
label_155154:
    // 0x155154: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x155154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x155158: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x155158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x15515c: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x15515cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
    // 0x155160: 0x2442c1c8  addiu       $v0, $v0, -0x3E38
    ctx->pc = 0x155160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951368));
    // 0x155164: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x155164u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x155168: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x155168u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x15516c: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x15516cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x155170: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x155170u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    // 0x155174: 0x3c170033  lui         $s7, 0x33
    ctx->pc = 0x155174u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
    // 0x155178: 0x3c160033  lui         $s6, 0x33
    ctx->pc = 0x155178u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
    // 0x15517c: 0xae4200d0  sw          $v0, 0xD0($s2)
    ctx->pc = 0x15517cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
    // 0x155180: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x155180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155184: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x155184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x155188: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x155188u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x15518c: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x15518cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
    // 0x155190: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x155190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x155194: 0xc05520c  jal         func_154830
    ctx->pc = 0x155194u;
    SET_GPR_U32(ctx, 31, 0x15519Cu);
    ctx->pc = 0x155198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155194u;
            // 0x155198: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154830u;
    if (runtime->hasFunction(0x154830u)) {
        auto targetFn = runtime->lookupFunction(0x154830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15519Cu; }
        if (ctx->pc != 0x15519Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00154830_0x154830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15519Cu; }
        if (ctx->pc != 0x15519Cu) { return; }
    }
    ctx->pc = 0x15519Cu;
    // 0x15519c: 0xc05520c  jal         func_154830
    ctx->pc = 0x15519Cu;
    SET_GPR_U32(ctx, 31, 0x1551A4u);
    ctx->pc = 0x154830u;
    if (runtime->hasFunction(0x154830u)) {
        auto targetFn = runtime->lookupFunction(0x154830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1551A4u; }
        if (ctx->pc != 0x1551A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00154830_0x154830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1551A4u; }
        if (ctx->pc != 0x1551A4u) { return; }
    }
    ctx->pc = 0x1551A4u;
    // 0x1551a4: 0xc055302  jal         func_154C08
    ctx->pc = 0x1551A4u;
    SET_GPR_U32(ctx, 31, 0x1551ACu);
    ctx->pc = 0x1551A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1551A4u;
            // 0x1551a8: 0xae623988  sw          $v0, 0x3988($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 14728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154C08u;
    if (runtime->hasFunction(0x154C08u)) {
        auto targetFn = runtime->lookupFunction(0x154C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1551ACu; }
        if (ctx->pc != 0x1551ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00154C08_0x154c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1551ACu; }
        if (ctx->pc != 0x1551ACu) { return; }
    }
    ctx->pc = 0x1551ACu;
    // 0x1551ac: 0x8e633988  lw          $v1, 0x3988($s3)
    ctx->pc = 0x1551acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 14728)));
    // 0x1551b0: 0xaea23984  sw          $v0, 0x3984($s5)
    ctx->pc = 0x1551b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 14724), GPR_U32(ctx, 2));
    // 0x1551b4: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x1551b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1551b8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1551b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1551bc: 0x1082c0  sll         $s0, $s0, 11
    ctx->pc = 0x1551bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 11));
    // 0x1551c0: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1551C0u;
    SET_GPR_U32(ctx, 31, 0x1551C8u);
    ctx->pc = 0x1551C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1551C0u;
            // 0x1551c4: 0xaee2398c  sw          $v0, 0x398C($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 14732), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1551C8u; }
        if (ctx->pc != 0x1551C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1551C8u; }
        if (ctx->pc != 0x1551C8u) { return; }
    }
    ctx->pc = 0x1551C8u;
    // 0x1551c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1551c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1551cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1551ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1551d0: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x1551D0u;
    SET_GPR_U32(ctx, 31, 0x1551D8u);
    ctx->pc = 0x1551D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1551D0u;
            // 0x1551d4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1551D8u; }
        if (ctx->pc != 0x1551D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1551D8u; }
        if (ctx->pc != 0x1551D8u) { return; }
    }
    ctx->pc = 0x1551D8u;
    // 0x1551d8: 0xaec23990  sw          $v0, 0x3990($s6)
    ctx->pc = 0x1551d8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 14736), GPR_U32(ctx, 2));
    // 0x1551dc: 0x8ee6398c  lw          $a2, 0x398C($s7)
    ctx->pc = 0x1551dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 14732)));
label_1551e0:
    // 0x1551e0: 0x8ec23990  lw          $v0, 0x3990($s6)
    ctx->pc = 0x1551e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 14736)));
    // 0x1551e4: 0x2262018  mult        $a0, $s1, $a2
    ctx->pc = 0x1551e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1551e8: 0x8e653988  lw          $a1, 0x3988($s3)
    ctx->pc = 0x1551e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 14728)));
    // 0x1551ec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1551ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1551f0: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x1551f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x1551f4: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x1551F4u;
    SET_GPR_U32(ctx, 31, 0x1551FCu);
    ctx->pc = 0x1551F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1551F4u;
            // 0x1551f8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1551FCu; }
        if (ctx->pc != 0x1551FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1551FCu; }
        if (ctx->pc != 0x1551FCu) { return; }
    }
    ctx->pc = 0x1551FCu;
    // 0x1551fc: 0x2e220080  sltiu       $v0, $s1, 0x80
    ctx->pc = 0x1551fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x155200: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x155200u;
    {
        const bool branch_taken_0x155200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155200u;
            // 0x155204: 0x8ee6398c  lw          $a2, 0x398C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 14732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155200) {
            ctx->pc = 0x1551E0u;
            runtime->cooperativeGuestYield();
            goto label_1551e0;
        }
    }
    ctx->pc = 0x155208u;
    // 0x155208: 0x8ea23984  lw          $v0, 0x3984($s5)
    ctx->pc = 0x155208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 14724)));
    // 0x15520c: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x15520cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x155210: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x155210u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x155214: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x155214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155218: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x155218u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15521c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x15521cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x155220: 0x1082c0  sll         $s0, $s0, 11
    ctx->pc = 0x155220u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 11));
    // 0x155224: 0xc04f824  jal         func_13E090
    ctx->pc = 0x155224u;
    SET_GPR_U32(ctx, 31, 0x15522Cu);
    ctx->pc = 0x155228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155224u;
            // 0x155228: 0xae823994  sw          $v0, 0x3994($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 14740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15522Cu; }
        if (ctx->pc != 0x15522Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15522Cu; }
        if (ctx->pc != 0x15522Cu) { return; }
    }
    ctx->pc = 0x15522Cu;
    // 0x15522c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15522cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155230: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x155230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155234: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x155234u;
    SET_GPR_U32(ctx, 31, 0x15523Cu);
    ctx->pc = 0x155238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155234u;
            // 0x155238: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15523Cu; }
        if (ctx->pc != 0x15523Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15523Cu; }
        if (ctx->pc != 0x15523Cu) { return; }
    }
    ctx->pc = 0x15523Cu;
    // 0x15523c: 0xae623998  sw          $v0, 0x3998($s3)
    ctx->pc = 0x15523cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 14744), GPR_U32(ctx, 2));
    // 0x155240: 0x8e863994  lw          $a2, 0x3994($s4)
    ctx->pc = 0x155240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 14740)));
    // 0x155244: 0x0  nop
    ctx->pc = 0x155244u;
    // NOP
label_155248:
    // 0x155248: 0x8e623998  lw          $v0, 0x3998($s3)
    ctx->pc = 0x155248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 14744)));
    // 0x15524c: 0x2262018  mult        $a0, $s1, $a2
    ctx->pc = 0x15524cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x155250: 0x8ea53984  lw          $a1, 0x3984($s5)
    ctx->pc = 0x155250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 14724)));
    // 0x155254: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x155254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x155258: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x155258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x15525c: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x15525Cu;
    SET_GPR_U32(ctx, 31, 0x155264u);
    ctx->pc = 0x155260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15525Cu;
            // 0x155260: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155264u; }
        if (ctx->pc != 0x155264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155264u; }
        if (ctx->pc != 0x155264u) { return; }
    }
    ctx->pc = 0x155264u;
    // 0x155264: 0x2e220080  sltiu       $v0, $s1, 0x80
    ctx->pc = 0x155264u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x155268: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x155268u;
    {
        const bool branch_taken_0x155268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15526Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155268u;
            // 0x15526c: 0x8e863994  lw          $a2, 0x3994($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 14740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155268) {
            ctx->pc = 0x155248u;
            runtime->cooperativeGuestYield();
            goto label_155248;
        }
    }
    ctx->pc = 0x155270u;
    // 0x155270: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x155270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x155274: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x155274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x155278: 0xac40399c  sw          $zero, 0x399C($v0)
    ctx->pc = 0x155278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14748), GPR_U32(ctx, 0));
    // 0x15527c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x15527cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155280: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x155280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x155284: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x155284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x155288: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x155288u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15528c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x15528cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x155290: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x155290u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x155294: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x155294u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155298: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x155298u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15529c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x15529cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1552a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1552a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1552a4: 0xac6039a0  sw          $zero, 0x39A0($v1)
    ctx->pc = 0x1552a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14752), GPR_U32(ctx, 0));
    // 0x1552a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1552A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1552ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1552A8u;
            // 0x1552ac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155078u: goto label_155078;
            case 0x1550B0u: goto label_1550b0;
            case 0x1550E8u: goto label_1550e8;
            case 0x155104u: goto label_155104;
            case 0x155118u: goto label_155118;
            case 0x155140u: goto label_155140;
            case 0x155154u: goto label_155154;
            case 0x1551E0u: goto label_1551e0;
            case 0x155248u: goto label_155248;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1552B0u;
    // 0x1552b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1552b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1552b4: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1552b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1552b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1552b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1552bc: 0x2484bc80  addiu       $a0, $a0, -0x4380
    ctx->pc = 0x1552bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950016));
    // 0x1552c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1552c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1552c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1552c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1552c8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1552c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1552cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1552ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1552d0: 0xc0a2644  jal         func_289910
    ctx->pc = 0x1552D0u;
    SET_GPR_U32(ctx, 31, 0x1552D8u);
    ctx->pc = 0x1552D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1552D0u;
            // 0x1552d4: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1552D8u; }
        if (ctx->pc != 0x1552D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1552D8u; }
        if (ctx->pc != 0x1552D8u) { return; }
    }
    ctx->pc = 0x1552D8u;
    // 0x1552d8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1552d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1552dc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1552dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1552e0: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1552e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1552e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1552e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1552e8: 0x26103878  addiu       $s0, $s0, 0x3878
    ctx->pc = 0x1552e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 14456));
    // 0x1552ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1552ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1552f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1552f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1552f4: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x1552F4u;
    SET_GPR_U32(ctx, 31, 0x1552FCu);
    ctx->pc = 0x1552F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1552F4u;
            // 0x1552f8: 0xac62c81c  sw          $v0, -0x37E4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952988), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1552FCu; }
        if (ctx->pc != 0x1552FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1552FCu; }
        if (ctx->pc != 0x1552FCu) { return; }
    }
    ctx->pc = 0x1552FCu;
    // 0x1552fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1552fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x155300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155304: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x155304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15530c: 0x3e00008  jr          $ra
    ctx->pc = 0x15530Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15530Cu;
            // 0x155310: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155078u: goto label_155078;
            case 0x1550B0u: goto label_1550b0;
            case 0x1550E8u: goto label_1550e8;
            case 0x155104u: goto label_155104;
            case 0x155118u: goto label_155118;
            case 0x155140u: goto label_155140;
            case 0x155154u: goto label_155154;
            case 0x1551E0u: goto label_1551e0;
            case 0x155248u: goto label_155248;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155314u;
    // 0x155314: 0x0  nop
    ctx->pc = 0x155314u;
    // NOP
    // 0x155318: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x155318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15531c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15531cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x155320: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x155320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x155324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x155324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155328: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x155328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x15532c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15532cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x155330: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x155330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155334: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x155334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155338: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x155338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x15533c: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x15533cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x155340: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x155340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x155344: 0x40f809  jalr        $v0
    ctx->pc = 0x155344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15534Cu);
        ctx->pc = 0x155348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155344u;
            // 0x155348: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15534Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155078u: goto label_155078;
            case 0x1550B0u: goto label_1550b0;
            case 0x1550E8u: goto label_1550e8;
            case 0x155104u: goto label_155104;
            case 0x155118u: goto label_155118;
            case 0x155140u: goto label_155140;
            case 0x155154u: goto label_155154;
            case 0x1551E0u: goto label_1551e0;
            case 0x155248u: goto label_155248;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15534Cu; }
            if (ctx->pc != 0x15534Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15534Cu;
    // 0x15534c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x15534cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x155350: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x155350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155354: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x155354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155358: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x155358u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x15535c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x15535cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x155360: 0x40f809  jalr        $v0
    ctx->pc = 0x155360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x155368u);
        ctx->pc = 0x155364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155360u;
            // 0x155364: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x155368u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155078u: goto label_155078;
            case 0x1550B0u: goto label_1550b0;
            case 0x1550E8u: goto label_1550e8;
            case 0x155104u: goto label_155104;
            case 0x155118u: goto label_155118;
            case 0x155140u: goto label_155140;
            case 0x155154u: goto label_155154;
            case 0x1551E0u: goto label_1551e0;
            case 0x155248u: goto label_155248;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x155368u; }
            if (ctx->pc != 0x155368u) { return; }
        }
        }
    }
    ctx->pc = 0x155368u;
    // 0x155368: 0xc05d656  jal         func_175958
    ctx->pc = 0x155368u;
    SET_GPR_U32(ctx, 31, 0x155370u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155370u; }
        if (ctx->pc != 0x155370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155370u; }
        if (ctx->pc != 0x155370u) { return; }
    }
    ctx->pc = 0x155370u;
    // 0x155370: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x155370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155374: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x155374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x155378: 0xc05d6c2  jal         func_175B08
    ctx->pc = 0x155378u;
    SET_GPR_U32(ctx, 31, 0x155380u);
    ctx->pc = 0x15537Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155378u;
            // 0x15537c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B08u;
    if (runtime->hasFunction(0x175B08u)) {
        auto targetFn = runtime->lookupFunction(0x175B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155380u; }
        if (ctx->pc != 0x155380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B08_0x175b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155380u; }
        if (ctx->pc != 0x155380u) { return; }
    }
    ctx->pc = 0x155380u;
    // 0x155380: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x155380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x155384: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x155384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155388: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x155388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15538c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x15538cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155394: 0xac40c81c  sw          $zero, -0x37E4($v0)
    ctx->pc = 0x155394u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952988), GPR_U32(ctx, 0));
    // 0x155398: 0x3e00008  jr          $ra
    ctx->pc = 0x155398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15539Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155398u;
            // 0x15539c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155078u: goto label_155078;
            case 0x1550B0u: goto label_1550b0;
            case 0x1550E8u: goto label_1550e8;
            case 0x155104u: goto label_155104;
            case 0x155118u: goto label_155118;
            case 0x155140u: goto label_155140;
            case 0x155154u: goto label_155154;
            case 0x1551E0u: goto label_1551e0;
            case 0x155248u: goto label_155248;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1553A0u;
}
