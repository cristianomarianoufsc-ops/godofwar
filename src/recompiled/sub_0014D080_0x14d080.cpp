#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014D080
// Address: 0x14d080 - 0x14d378
void sub_0014D080_0x14d080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D080_0x14d080");
#endif

    ctx->pc = 0x14d080u;

    // 0x14d080: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14d080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14d084: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x14d084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x14d088: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x14d088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x14d08c: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x14d08cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x14d090: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x14d090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x14d094: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x14d094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x14d098: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14d098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14d09c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x14d09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14d0a0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x14d0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x14d0a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14d0a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d0a8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x14d0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x14d0ac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x14d0acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d0b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d0b4: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x14d0b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x14d0b8: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x14d0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x14d0bc: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x14d0bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14d0c0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x14d0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x14d0c4: 0x26500028  addiu       $s0, $s2, 0x28
    ctx->pc = 0x14d0c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x14d0c8: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x14d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x14d0cc: 0xa6470004  sh          $a3, 0x4($s2)
    ctx->pc = 0x14d0ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x14d0d0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14d0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x14d0d4: 0xa6480000  sh          $t0, 0x0($s2)
    ctx->pc = 0x14d0d4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x14d0d8: 0xae460020  sw          $a2, 0x20($s2)
    ctx->pc = 0x14d0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 6));
    // 0x14d0dc: 0x26510034  addiu       $s1, $s2, 0x34
    ctx->pc = 0x14d0dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x14d0e0: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x14d0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x14d0e4: 0xc08e222  jal         func_238888
    ctx->pc = 0x14D0E4u;
    SET_GPR_U32(ctx, 31, 0x14D0ECu);
    ctx->pc = 0x14D0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D0E4u;
            // 0x14d0e8: 0xa6420002  sh          $v0, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D0ECu; }
        if (ctx->pc != 0x14D0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D0ECu; }
        if (ctx->pc != 0x14D0ECu) { return; }
    }
    ctx->pc = 0x14D0ECu;
    // 0x14d0ec: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x14d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14d0f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14d0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d0f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14d0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d0f8: 0xc08e222  jal         func_238888
    ctx->pc = 0x14D0F8u;
    SET_GPR_U32(ctx, 31, 0x14D100u);
    ctx->pc = 0x14D0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D0F8u;
            // 0x14d0fc: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D100u; }
        if (ctx->pc != 0x14D100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D100u; }
        if (ctx->pc != 0x14D100u) { return; }
    }
    ctx->pc = 0x14D100u;
    // 0x14d100: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x14d100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14d104: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x14d104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x14d108: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x14d108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x14d10c: 0x246307e0  addiu       $v1, $v1, 0x7E0
    ctx->pc = 0x14d10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2016));
    // 0x14d110: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14d110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14d114: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x14d114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
    // 0x14d118: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x14d118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14d11c: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x14d11cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x14d120: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x14D120u;
    SET_GPR_U32(ctx, 31, 0x14D128u);
    ctx->pc = 0x14D124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D120u;
            // 0x14d124: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D128u; }
        if (ctx->pc != 0x14D128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D128u; }
        if (ctx->pc != 0x14D128u) { return; }
    }
    ctx->pc = 0x14D128u;
    // 0x14d128: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x14d128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14d12c: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x14d12cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x14d130: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x14d130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x14d134: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x14d134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x14d138: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x14d138u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x14d13c: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x14D13Cu;
    SET_GPR_U32(ctx, 31, 0x14D144u);
    ctx->pc = 0x14D140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D13Cu;
            // 0x14d140: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D144u; }
        if (ctx->pc != 0x14D144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D144u; }
        if (ctx->pc != 0x14D144u) { return; }
    }
    ctx->pc = 0x14D144u;
    // 0x14d144: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d148: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x14d148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x14d14c: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x14d14cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x14d150: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x14d150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14d154: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x14d154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
    // 0x14d158: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x14D158u;
    SET_GPR_U32(ctx, 31, 0x14D160u);
    ctx->pc = 0x14D15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D158u;
            // 0x14d15c: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D160u; }
        if (ctx->pc != 0x14D160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D160u; }
        if (ctx->pc != 0x14D160u) { return; }
    }
    ctx->pc = 0x14D160u;
    // 0x14d160: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14d160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d164: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14d164u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d168: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14d168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14d16c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14d16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14d170:
    // 0x14d170: 0x0  nop
    ctx->pc = 0x14d170u;
    // NOP
    // 0x14d174: 0x0  nop
    ctx->pc = 0x14d174u;
    // NOP
    // 0x14d178: 0x0  nop
    ctx->pc = 0x14d178u;
    // NOP
    // 0x14d17c: 0x0  nop
    ctx->pc = 0x14d17cu;
    // NOP
    // 0x14d180: 0x0  nop
    ctx->pc = 0x14d180u;
    // NOP
    // 0x14d184: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14D184u;
    {
        const bool branch_taken_0x14d184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14D188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D184u;
            // 0x14d188: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d184) {
            ctx->pc = 0x14D170u;
            runtime->cooperativeGuestYield();
            goto label_14d170;
        }
    }
    ctx->pc = 0x14D18Cu;
    // 0x14d18c: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x14d18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x14d190: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14d190u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d194: 0xae440024  sw          $a0, 0x24($s2)
    ctx->pc = 0x14d194u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
    // 0x14d198: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x14D198u;
    {
        const bool branch_taken_0x14d198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D198u;
            // 0x14d19c: 0xae400044  sw          $zero, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d198) {
            ctx->pc = 0x14D24Cu;
            goto label_14d24c;
        }
    }
    ctx->pc = 0x14D1A0u;
    // 0x14d1a0: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x14d1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14d1a4: 0x0  nop
    ctx->pc = 0x14d1a4u;
    // NOP
label_14d1a8:
    // 0x14d1a8: 0x8e510014  lw          $s1, 0x14($s2)
    ctx->pc = 0x14d1a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x14d1ac: 0x2708018  mult        $s0, $s3, $s0
    ctx->pc = 0x14d1acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x14d1b0: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x14d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x14d1b4: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x14d1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x14d1b8: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x14D1B8u;
    SET_GPR_U32(ctx, 31, 0x14D1C0u);
    ctx->pc = 0x14D1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D1B8u;
            // 0x14d1bc: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D1C0u; }
        if (ctx->pc != 0x14D1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D1C0u; }
        if (ctx->pc != 0x14D1C0u) { return; }
    }
    ctx->pc = 0x14D1C0u;
    // 0x14d1c0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x14d1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x14d1c4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14d1c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d1c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14d1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14d1cc: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x14D1CCu;
    {
        const bool branch_taken_0x14d1cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D1CCu;
            // 0x14d1d0: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d1cc) {
            ctx->pc = 0x14D1FCu;
            goto label_14d1fc;
        }
    }
    ctx->pc = 0x14D1D4u;
    // 0x14d1d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14d1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d1d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x14d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14d1dc: 0x0  nop
    ctx->pc = 0x14d1dcu;
    // NOP
label_14d1e0:
    // 0x14d1e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14d1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14d1e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14d1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14d1e8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14d1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14d1ec: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x14d1ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14d1f0: 0x0  nop
    ctx->pc = 0x14d1f0u;
    // NOP
    // 0x14d1f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14D1F4u;
    {
        const bool branch_taken_0x14d1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D1F4u;
            // 0x14d1f8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d1f4) {
            ctx->pc = 0x14D1E0u;
            runtime->cooperativeGuestYield();
            goto label_14d1e0;
        }
    }
    ctx->pc = 0x14D1FCu;
label_14d1fc:
    // 0x14d1fc: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x14d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x14d200: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14D200u;
    {
        const bool branch_taken_0x14d200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D200u;
            // 0x14d204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d200) {
            ctx->pc = 0x14D238u;
            goto label_14d238;
        }
    }
    ctx->pc = 0x14D208u;
    // 0x14d208: 0x8e470024  lw          $a3, 0x24($s2)
    ctx->pc = 0x14d208u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x14d20c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14d20cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14d210:
    // 0x14d210: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x14d210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14d214: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x14d214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14d218: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x14d218u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x14d21c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14d21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14d220: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x14d220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x14d224: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14d224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14d228: 0xa6202b  sltu        $a0, $a1, $a2
    ctx->pc = 0x14d228u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x14d22c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14d22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14d230: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14D230u;
    {
        const bool branch_taken_0x14d230 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D230u;
            // 0x14d234: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d230) {
            ctx->pc = 0x14D210u;
            runtime->cooperativeGuestYield();
            goto label_14d210;
        }
    }
    ctx->pc = 0x14D238u;
label_14d238:
    // 0x14d238: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x14d238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x14d23c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x14d23cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14d240: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x14d240u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14d244: 0x5440ffd8  bnel        $v0, $zero, . + 4 + (-0x28 << 2)
    ctx->pc = 0x14D244u;
    {
        const bool branch_taken_0x14d244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d244) {
            ctx->pc = 0x14D248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D244u;
            // 0x14d248: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D1A8u;
            runtime->cooperativeGuestYield();
            goto label_14d1a8;
        }
    }
    ctx->pc = 0x14D24Cu;
label_14d24c:
    // 0x14d24c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x14d24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14d250: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x14d250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x14d254: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x14d254u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
    // 0x14d258: 0x2442cf58  addiu       $v0, $v0, -0x30A8
    ctx->pc = 0x14d258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954840));
    // 0x14d25c: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x14d25cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x14d260: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x14d260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x14d264: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x14d264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x14d268: 0x24631090  addiu       $v1, $v1, 0x1090
    ctx->pc = 0x14d268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4240));
    // 0x14d26c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14d26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14d270: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14d270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d274: 0xae4200d0  sw          $v0, 0xD0($s2)
    ctx->pc = 0x14d274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
    // 0x14d278: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x14d278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14d27c: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x14d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x14d280: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x14d280u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x14d284: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x14d284u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
    // 0x14d288: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x14d288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x14d28c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x14d28cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x14d290: 0xa0650020  sb          $a1, 0x20($v1)
    ctx->pc = 0x14d290u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x14d294: 0xa0660008  sb          $a2, 0x8($v1)
    ctx->pc = 0x14d294u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x14d298: 0xa0640010  sb          $a0, 0x10($v1)
    ctx->pc = 0x14d298u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x14d29c: 0xa0650018  sb          $a1, 0x18($v1)
    ctx->pc = 0x14d29cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 5));
    // 0x14d2a0: 0xc053a76  jal         func_14E9D8
    ctx->pc = 0x14D2A0u;
    SET_GPR_U32(ctx, 31, 0x14D2A8u);
    ctx->pc = 0x14D2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D2A0u;
            // 0x14d2a4: 0xa0600004  sb          $zero, 0x4($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E9D8u;
    if (runtime->hasFunction(0x14E9D8u)) {
        auto targetFn = runtime->lookupFunction(0x14E9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D2A8u; }
        if (ctx->pc != 0x14D2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E9D8_0x14e9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D2A8u; }
        if (ctx->pc != 0x14D2A8u) { return; }
    }
    ctx->pc = 0x14D2A8u;
    // 0x14d2a8: 0xc04f824  jal         func_13E090
    ctx->pc = 0x14D2A8u;
    SET_GPR_U32(ctx, 31, 0x14D2B0u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D2B0u; }
        if (ctx->pc != 0x14D2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D2B0u; }
        if (ctx->pc != 0x14D2B0u) { return; }
    }
    ctx->pc = 0x14D2B0u;
    // 0x14d2b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14d2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d2b4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x14d2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14d2b8: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x14d2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x14d2bc: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x14d2bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x14d2c0: 0xc04f644  jal         func_13D910
    ctx->pc = 0x14D2C0u;
    SET_GPR_U32(ctx, 31, 0x14D2C8u);
    ctx->pc = 0x14D2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D2C0u;
            // 0x14d2c4: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D2C8u; }
        if (ctx->pc != 0x14D2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D2C8u; }
        if (ctx->pc != 0x14D2C8u) { return; }
    }
    ctx->pc = 0x14D2C8u;
    // 0x14d2c8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x14d2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x14d2cc: 0xc04f824  jal         func_13E090
    ctx->pc = 0x14D2CCu;
    SET_GPR_U32(ctx, 31, 0x14D2D4u);
    ctx->pc = 0x14D2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D2CCu;
            // 0x14d2d0: 0xac6216f8  sw          $v0, 0x16F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D2D4u; }
        if (ctx->pc != 0x14D2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D2D4u; }
        if (ctx->pc != 0x14D2D4u) { return; }
    }
    ctx->pc = 0x14D2D4u;
    // 0x14d2d4: 0x24050094  addiu       $a1, $zero, 0x94
    ctx->pc = 0x14d2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x14d2d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14d2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d2dc: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x14d2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x14d2e0: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x14d2e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14d2e4: 0xc04f644  jal         func_13D910
    ctx->pc = 0x14D2E4u;
    SET_GPR_U32(ctx, 31, 0x14D2ECu);
    ctx->pc = 0x14D2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D2E4u;
            // 0x14d2e8: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D2ECu; }
        if (ctx->pc != 0x14D2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D2ECu; }
        if (ctx->pc != 0x14D2ECu) { return; }
    }
    ctx->pc = 0x14D2ECu;
    // 0x14d2ec: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x14d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x14d2f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14d2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d2f4: 0xac6216fc  sw          $v0, 0x16FC($v1)
    ctx->pc = 0x14d2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5884), GPR_U32(ctx, 2));
label_14d2f8:
    // 0x14d2f8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x14d2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x14d2fc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x14d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14d300: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x14d300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x14d304: 0x24631700  addiu       $v1, $v1, 0x1700
    ctx->pc = 0x14d304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5888));
    // 0x14d308: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x14d308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14d30c: 0x24841800  addiu       $a0, $a0, 0x1800
    ctx->pc = 0x14d30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6144));
    // 0x14d310: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14d310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14d314: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14d314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14d318: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14d318u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14d31c: 0x2ca20040  sltiu       $v0, $a1, 0x40
    ctx->pc = 0x14d31cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x14d320: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x14D320u;
    {
        const bool branch_taken_0x14d320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D320u;
            // 0x14d324: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d320) {
            ctx->pc = 0x14D2F8u;
            runtime->cooperativeGuestYield();
            goto label_14d2f8;
        }
    }
    ctx->pc = 0x14D328u;
    // 0x14d328: 0xc04f824  jal         func_13E090
    ctx->pc = 0x14D328u;
    SET_GPR_U32(ctx, 31, 0x14D330u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D330u; }
        if (ctx->pc != 0x14D330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D330u; }
        if (ctx->pc != 0x14D330u) { return; }
    }
    ctx->pc = 0x14D330u;
    // 0x14d330: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x14d330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x14d334: 0xc053e36  jal         func_14F8D8
    ctx->pc = 0x14D334u;
    SET_GPR_U32(ctx, 31, 0x14D33Cu);
    ctx->pc = 0x14D338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D334u;
            // 0x14d338: 0xac621900  sw          $v0, 0x1900($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 6400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F8D8u;
    if (runtime->hasFunction(0x14F8D8u)) {
        auto targetFn = runtime->lookupFunction(0x14F8D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D33Cu; }
        if (ctx->pc != 0x14D33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014F8D8_0x14f8d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D33Cu; }
        if (ctx->pc != 0x14D33Cu) { return; }
    }
    ctx->pc = 0x14D33Cu;
    // 0x14d33c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14d340: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x14d340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x14d344: 0xac401904  sw          $zero, 0x1904($v0)
    ctx->pc = 0x14d344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6404), GPR_U32(ctx, 0));
    // 0x14d348: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x14d348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x14d34c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x14d34cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d350: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x14d350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14d354: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x14d354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14d358: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14d358u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14d35c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x14d35cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d360: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x14d360u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d364: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d368: 0xac601908  sw          $zero, 0x1908($v1)
    ctx->pc = 0x14d368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6408), GPR_U32(ctx, 0));
    // 0x14d36c: 0xac80190c  sw          $zero, 0x190C($a0)
    ctx->pc = 0x14d36cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6412), GPR_U32(ctx, 0));
    // 0x14d370: 0x3e00008  jr          $ra
    ctx->pc = 0x14D370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D370u;
            // 0x14d374: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14D170u: goto label_14d170;
            case 0x14D1A8u: goto label_14d1a8;
            case 0x14D1E0u: goto label_14d1e0;
            case 0x14D1FCu: goto label_14d1fc;
            case 0x14D210u: goto label_14d210;
            case 0x14D238u: goto label_14d238;
            case 0x14D24Cu: goto label_14d24c;
            case 0x14D2F8u: goto label_14d2f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14D378u;
}
