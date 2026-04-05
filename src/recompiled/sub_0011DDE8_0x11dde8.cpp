#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011DDE8
// Address: 0x11dde8 - 0x11e090
void sub_0011DDE8_0x11dde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DDE8_0x11dde8");
#endif

    ctx->pc = 0x11dde8u;

    // 0x11dde8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11dde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11ddec: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x11ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x11ddf0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x11ddf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x11ddf4: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x11ddf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x11ddf8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x11ddf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x11ddfc: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x11ddfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x11de00: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x11de00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x11de04: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x11de04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11de08: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x11de08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x11de0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11de0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de10: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x11de10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x11de14: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x11de14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11de18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11de1c: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x11de1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x11de20: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x11de20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x11de24: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x11de24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x11de28: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x11de28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x11de2c: 0x26500028  addiu       $s0, $s2, 0x28
    ctx->pc = 0x11de2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x11de30: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x11de30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x11de34: 0xa6470004  sh          $a3, 0x4($s2)
    ctx->pc = 0x11de34u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x11de38: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x11de38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x11de3c: 0xa6480000  sh          $t0, 0x0($s2)
    ctx->pc = 0x11de3cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x11de40: 0xae460020  sw          $a2, 0x20($s2)
    ctx->pc = 0x11de40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 6));
    // 0x11de44: 0x26510034  addiu       $s1, $s2, 0x34
    ctx->pc = 0x11de44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x11de48: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x11de48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x11de4c: 0xc08e222  jal         func_238888
    ctx->pc = 0x11DE4Cu;
    SET_GPR_U32(ctx, 31, 0x11DE54u);
    ctx->pc = 0x11DE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DE4Cu;
            // 0x11de50: 0xa6420002  sh          $v0, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DE54u; }
        if (ctx->pc != 0x11DE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DE54u; }
        if (ctx->pc != 0x11DE54u) { return; }
    }
    ctx->pc = 0x11DE54u;
    // 0x11de54: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x11de54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x11de58: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11de58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11de5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de60: 0xc08e222  jal         func_238888
    ctx->pc = 0x11DE60u;
    SET_GPR_U32(ctx, 31, 0x11DE68u);
    ctx->pc = 0x11DE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DE60u;
            // 0x11de64: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DE68u; }
        if (ctx->pc != 0x11DE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DE68u; }
        if (ctx->pc != 0x11DE68u) { return; }
    }
    ctx->pc = 0x11DE68u;
    // 0x11de68: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x11de68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11de6c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x11de6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x11de70: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11de70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11de74: 0x246307e0  addiu       $v1, $v1, 0x7E0
    ctx->pc = 0x11de74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2016));
    // 0x11de78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11de78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11de7c: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x11de7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
    // 0x11de80: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11de80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11de84: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x11de84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x11de88: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x11DE88u;
    SET_GPR_U32(ctx, 31, 0x11DE90u);
    ctx->pc = 0x11DE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DE88u;
            // 0x11de8c: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DE90u; }
        if (ctx->pc != 0x11DE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DE90u; }
        if (ctx->pc != 0x11DE90u) { return; }
    }
    ctx->pc = 0x11DE90u;
    // 0x11de90: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x11de90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11de94: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x11de94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x11de98: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x11de98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x11de9c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x11de9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x11dea0: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x11dea0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x11dea4: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x11DEA4u;
    SET_GPR_U32(ctx, 31, 0x11DEACu);
    ctx->pc = 0x11DEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DEA4u;
            // 0x11dea8: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DEACu; }
        if (ctx->pc != 0x11DEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DEACu; }
        if (ctx->pc != 0x11DEACu) { return; }
    }
    ctx->pc = 0x11DEACu;
    // 0x11deac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11deacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11deb0: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x11deb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x11deb4: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x11deb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x11deb8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x11deb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11debc: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x11debcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
    // 0x11dec0: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x11DEC0u;
    SET_GPR_U32(ctx, 31, 0x11DEC8u);
    ctx->pc = 0x11DEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DEC0u;
            // 0x11dec4: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DEC8u; }
        if (ctx->pc != 0x11DEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DEC8u; }
        if (ctx->pc != 0x11DEC8u) { return; }
    }
    ctx->pc = 0x11DEC8u;
    // 0x11dec8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11dec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11decc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11deccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ded0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11ded0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11ded4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11ded8:
    // 0x11ded8: 0x0  nop
    ctx->pc = 0x11ded8u;
    // NOP
    // 0x11dedc: 0x0  nop
    ctx->pc = 0x11dedcu;
    // NOP
    // 0x11dee0: 0x0  nop
    ctx->pc = 0x11dee0u;
    // NOP
    // 0x11dee4: 0x0  nop
    ctx->pc = 0x11dee4u;
    // NOP
    // 0x11dee8: 0x0  nop
    ctx->pc = 0x11dee8u;
    // NOP
    // 0x11deec: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11DEECu;
    {
        const bool branch_taken_0x11deec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11DEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DEECu;
            // 0x11def0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11deec) {
            ctx->pc = 0x11DED8u;
            runtime->cooperativeGuestYield();
            goto label_11ded8;
        }
    }
    ctx->pc = 0x11DEF4u;
    // 0x11def4: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x11def4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x11def8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x11def8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11defc: 0xae440024  sw          $a0, 0x24($s2)
    ctx->pc = 0x11defcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
    // 0x11df00: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x11DF00u;
    {
        const bool branch_taken_0x11df00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF00u;
            // 0x11df04: 0xae400044  sw          $zero, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df00) {
            ctx->pc = 0x11DFB4u;
            goto label_11dfb4;
        }
    }
    ctx->pc = 0x11DF08u;
    // 0x11df08: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x11df08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11df0c: 0x0  nop
    ctx->pc = 0x11df0cu;
    // NOP
label_11df10:
    // 0x11df10: 0x8e510014  lw          $s1, 0x14($s2)
    ctx->pc = 0x11df10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x11df14: 0x2708018  mult        $s0, $s3, $s0
    ctx->pc = 0x11df14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x11df18: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x11df18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x11df1c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x11df1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x11df20: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x11DF20u;
    SET_GPR_U32(ctx, 31, 0x11DF28u);
    ctx->pc = 0x11DF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF20u;
            // 0x11df24: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DF28u; }
        if (ctx->pc != 0x11DF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DF28u; }
        if (ctx->pc != 0x11DF28u) { return; }
    }
    ctx->pc = 0x11DF28u;
    // 0x11df28: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x11df28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x11df2c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11df2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11df30: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x11df30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x11df34: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x11DF34u;
    {
        const bool branch_taken_0x11df34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF34u;
            // 0x11df38: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df34) {
            ctx->pc = 0x11DF64u;
            goto label_11df64;
        }
    }
    ctx->pc = 0x11DF3Cu;
    // 0x11df3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11df3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11df40: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x11df40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11df44: 0x0  nop
    ctx->pc = 0x11df44u;
    // NOP
label_11df48:
    // 0x11df48: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11df48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11df4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11df4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11df50: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x11df50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x11df54: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x11df54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x11df58: 0x0  nop
    ctx->pc = 0x11df58u;
    // NOP
    // 0x11df5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11DF5Cu;
    {
        const bool branch_taken_0x11df5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF5Cu;
            // 0x11df60: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df5c) {
            ctx->pc = 0x11DF48u;
            runtime->cooperativeGuestYield();
            goto label_11df48;
        }
    }
    ctx->pc = 0x11DF64u;
label_11df64:
    // 0x11df64: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x11df64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x11df68: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11DF68u;
    {
        const bool branch_taken_0x11df68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF68u;
            // 0x11df6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df68) {
            ctx->pc = 0x11DFA0u;
            goto label_11dfa0;
        }
    }
    ctx->pc = 0x11DF70u;
    // 0x11df70: 0x8e470024  lw          $a3, 0x24($s2)
    ctx->pc = 0x11df70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x11df74: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11df74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11df78:
    // 0x11df78: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x11df78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11df7c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x11df7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11df80: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x11df80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11df84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11df84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11df88: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x11df88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x11df8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11df90: 0xa6202b  sltu        $a0, $a1, $a2
    ctx->pc = 0x11df90u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11df94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11df94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11df98: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11DF98u;
    {
        const bool branch_taken_0x11df98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF98u;
            // 0x11df9c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df98) {
            ctx->pc = 0x11DF78u;
            runtime->cooperativeGuestYield();
            goto label_11df78;
        }
    }
    ctx->pc = 0x11DFA0u;
label_11dfa0:
    // 0x11dfa0: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x11dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x11dfa4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x11dfa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x11dfa8: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x11dfa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11dfac: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x11DFACu;
    {
        const bool branch_taken_0x11dfac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DFACu;
            // 0x11dfb0: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfac) {
            ctx->pc = 0x11DF10u;
            runtime->cooperativeGuestYield();
            goto label_11df10;
        }
    }
    ctx->pc = 0x11DFB4u;
label_11dfb4:
    // 0x11dfb4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11dfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11dfb8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x11dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x11dfbc: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x11dfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
    // 0x11dfc0: 0x2442ddd0  addiu       $v0, $v0, -0x2230
    ctx->pc = 0x11dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958544));
    // 0x11dfc4: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x11dfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x11dfc8: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x11dfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x11dfcc: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x11dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x11dfd0: 0xae4200d0  sw          $v0, 0xD0($s2)
    ctx->pc = 0x11dfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
    // 0x11dfd4: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x11dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x11dfd8: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x11dfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x11dfdc: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x11dfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
    // 0x11dfe0: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x11dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x11dfe4: 0xc04d7f0  jal         func_135FC0
    ctx->pc = 0x11DFE4u;
    SET_GPR_U32(ctx, 31, 0x11DFECu);
    ctx->pc = 0x11DFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DFE4u;
            // 0x11dfe8: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135FC0u;
    if (runtime->hasFunction(0x135FC0u)) {
        auto targetFn = runtime->lookupFunction(0x135FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DFECu; }
        if (ctx->pc != 0x11DFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_135fc0_0x135fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DFECu; }
        if (ctx->pc != 0x11DFECu) { return; }
    }
    ctx->pc = 0x11DFECu;
    // 0x11dfec: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x11dfecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dff0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x11dff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x11dff4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x11dff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11dff8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x11dff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11dffc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x11dffcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e000: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x11e000u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e004: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x11e004u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11e008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e00c: 0xac60bcf8  sw          $zero, -0x4308($v1)
    ctx->pc = 0x11e00cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950136), GPR_U32(ctx, 0));
    // 0x11e010: 0x3e00008  jr          $ra
    ctx->pc = 0x11E010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E010u;
            // 0x11e014: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11DED8u: goto label_11ded8;
            case 0x11DF10u: goto label_11df10;
            case 0x11DF48u: goto label_11df48;
            case 0x11DF64u: goto label_11df64;
            case 0x11DF78u: goto label_11df78;
            case 0x11DFA0u: goto label_11dfa0;
            case 0x11DFB4u: goto label_11dfb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11E018u;
    // 0x11e018: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11e018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11e01c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x11e01cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e020: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11e020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11e024: 0x24041074  addiu       $a0, $zero, 0x1074
    ctx->pc = 0x11e024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4212));
    // 0x11e028: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11e028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11e02c: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x11e02cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x11e030: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x11e030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11e034: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x11e034u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x11e038: 0x8c6800d0  lw          $t0, 0xD0($v1)
    ctx->pc = 0x11e038u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x11e03c: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x11e03cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x11e040: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x11e040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x11e044: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x11e044u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x11e048: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x11e048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x11e04c: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x11e04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x11e050: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x11e050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x11e054: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x11e054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x11e058: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x11e058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x11e05c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x11e05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x11e060: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x11e060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x11e064: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x11E064u;
    SET_GPR_U32(ctx, 31, 0x11E06Cu);
    ctx->pc = 0x11E068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E064u;
            // 0x11e068: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E06Cu; }
        if (ctx->pc != 0x11E06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E06Cu; }
        if (ctx->pc != 0x11E06Cu) { return; }
    }
    ctx->pc = 0x11E06Cu;
    // 0x11e06c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e070: 0xc047592  jal         func_11D648
    ctx->pc = 0x11E070u;
    SET_GPR_U32(ctx, 31, 0x11E078u);
    ctx->pc = 0x11E074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E070u;
            // 0x11e074: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D648u;
    if (runtime->hasFunction(0x11D648u)) {
        auto targetFn = runtime->lookupFunction(0x11D648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E078u; }
        if (ctx->pc != 0x11E078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D648_0x11d648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E078u; }
        if (ctx->pc != 0x11E078u) { return; }
    }
    ctx->pc = 0x11E078u;
    // 0x11e078: 0xae02bcf8  sw          $v0, -0x4308($s0)
    ctx->pc = 0x11e078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950136), GPR_U32(ctx, 2));
    // 0x11e07c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11e07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e080: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11e080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e084: 0x3e00008  jr          $ra
    ctx->pc = 0x11E084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E084u;
            // 0x11e088: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11DED8u: goto label_11ded8;
            case 0x11DF10u: goto label_11df10;
            case 0x11DF48u: goto label_11df48;
            case 0x11DF64u: goto label_11df64;
            case 0x11DF78u: goto label_11df78;
            case 0x11DFA0u: goto label_11dfa0;
            case 0x11DFB4u: goto label_11dfb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11E08Cu;
    // 0x11e08c: 0x0  nop
    ctx->pc = 0x11e08cu;
    // NOP
}
