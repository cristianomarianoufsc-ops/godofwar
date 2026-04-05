#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022CDB0
// Address: 0x22cdb0 - 0x22ced8
void sub_0022CDB0_0x22cdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CDB0_0x22cdb0");
#endif

    ctx->pc = 0x22cdb0u;

    // 0x22cdb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22cdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22cdb4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x22cdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x22cdb8: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x22cdb8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x22cdbc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x22cdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x22cdc0: 0x26314f90  addiu       $s1, $s1, 0x4F90
    ctx->pc = 0x22cdc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20368));
    // 0x22cdc4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22cdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x22cdc8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x22cdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x22cdcc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x22cdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x22cdd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22cdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22cdd4: 0xc076d06  jal         func_1DB418
    ctx->pc = 0x22CDD4u;
    SET_GPR_U32(ctx, 31, 0x22CDDCu);
    ctx->pc = 0x22CDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CDD4u;
            // 0x22cdd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB418u;
    if (runtime->hasFunction(0x1DB418u)) {
        auto targetFn = runtime->lookupFunction(0x1DB418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CDDCu; }
        if (ctx->pc != 0x22CDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DB418_0x1db418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CDDCu; }
        if (ctx->pc != 0x22CDDCu) { return; }
    }
    ctx->pc = 0x22CDDCu;
    // 0x22cddc: 0x3c140030  lui         $s4, 0x30
    ctx->pc = 0x22cddcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)48 << 16));
    // 0x22cde0: 0x26945020  addiu       $s4, $s4, 0x5020
    ctx->pc = 0x22cde0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 20512));
    // 0x22cde4: 0xc07b620  jal         func_1ED880
    ctx->pc = 0x22CDE4u;
    SET_GPR_U32(ctx, 31, 0x22CDECu);
    ctx->pc = 0x22CDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CDE4u;
            // 0x22cde8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED880u;
    if (runtime->hasFunction(0x1ED880u)) {
        auto targetFn = runtime->lookupFunction(0x1ED880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CDECu; }
        if (ctx->pc != 0x22CDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED880_0x1ed880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CDECu; }
        if (ctx->pc != 0x22CDECu) { return; }
    }
    ctx->pc = 0x22CDECu;
    // 0x22cdec: 0x3c130030  lui         $s3, 0x30
    ctx->pc = 0x22cdecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)48 << 16));
    // 0x22cdf0: 0x267350e0  addiu       $s3, $s3, 0x50E0
    ctx->pc = 0x22cdf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20704));
    // 0x22cdf4: 0xc08ac84  jal         func_22B210
    ctx->pc = 0x22CDF4u;
    SET_GPR_U32(ctx, 31, 0x22CDFCu);
    ctx->pc = 0x22CDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CDF4u;
            // 0x22cdf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B210u;
    if (runtime->hasFunction(0x22B210u)) {
        auto targetFn = runtime->lookupFunction(0x22B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CDFCu; }
        if (ctx->pc != 0x22CDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22b210_0x22b238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CDFCu; }
        if (ctx->pc != 0x22CDFCu) { return; }
    }
    ctx->pc = 0x22CDFCu;
    // 0x22cdfc: 0x3c120030  lui         $s2, 0x30
    ctx->pc = 0x22cdfcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)48 << 16));
    // 0x22ce00: 0x265251d0  addiu       $s2, $s2, 0x51D0
    ctx->pc = 0x22ce00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20944));
    // 0x22ce04: 0xc06c3a8  jal         func_1B0EA0
    ctx->pc = 0x22CE04u;
    SET_GPR_U32(ctx, 31, 0x22CE0Cu);
    ctx->pc = 0x22CE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CE04u;
            // 0x22ce08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0EA0u;
    if (runtime->hasFunction(0x1B0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE0Cu; }
        if (ctx->pc != 0x22CE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0EA0_0x1b0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE0Cu; }
        if (ctx->pc != 0x22CE0Cu) { return; }
    }
    ctx->pc = 0x22CE0Cu;
    // 0x22ce0c: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x22CE0Cu;
    SET_GPR_U32(ctx, 31, 0x22CE14u);
    ctx->pc = 0x22CE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CE0Cu;
            // 0x22ce10: 0x3c100030  lui         $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE14u; }
        if (ctx->pc != 0x22CE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE14u; }
        if (ctx->pc != 0x22CE14u) { return; }
    }
    ctx->pc = 0x22CE14u;
    // 0x22ce14: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22ce18: 0xa2025398  sb          $v0, 0x5398($s0)
    ctx->pc = 0x22ce18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21400), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ce1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ce1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ce20: 0x8c63cb94  lw          $v1, -0x346C($v1)
    ctx->pc = 0x22ce20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953876)));
    // 0x22ce24: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22ce24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22ce28: 0x9046cc9c  lbu         $a2, -0x3364($v0)
    ctx->pc = 0x22ce28u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294954140)));
    // 0x22ce2c: 0x26105398  addiu       $s0, $s0, 0x5398
    ctx->pc = 0x22ce2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21400));
    // 0x22ce30: 0x90620290  lbu         $v0, 0x290($v1)
    ctx->pc = 0x22ce30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 656)));
    // 0x22ce34: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x22ce34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x22ce38: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x22ce38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ce3c: 0x90620294  lbu         $v0, 0x294($v1)
    ctx->pc = 0x22ce3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 660)));
    // 0x22ce40: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x22ce40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ce44: 0x90620298  lbu         $v0, 0x298($v1)
    ctx->pc = 0x22ce44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 664)));
    // 0x22ce48: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x22ce48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ce4c: 0x9062029c  lbu         $v0, 0x29C($v1)
    ctx->pc = 0x22ce4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 668)));
    // 0x22ce50: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x22ce50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ce54: 0x906202a4  lbu         $v0, 0x2A4($v1)
    ctx->pc = 0x22ce54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 676)));
    // 0x22ce58: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x22ce58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ce5c: 0x906202a8  lbu         $v0, 0x2A8($v1)
    ctx->pc = 0x22ce5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 680)));
    // 0x22ce60: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x22ce60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ce64: 0x906201c8  lbu         $v0, 0x1C8($v1)
    ctx->pc = 0x22ce64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 456)));
    // 0x22ce68: 0xa2020007  sb          $v0, 0x7($s0)
    ctx->pc = 0x22ce68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ce6c: 0x906201c4  lbu         $v0, 0x1C4($v1)
    ctx->pc = 0x22ce6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 452)));
    // 0x22ce70: 0xa2060009  sb          $a2, 0x9($s0)
    ctx->pc = 0x22ce70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x22ce74: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x22ce74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ce78: 0x906201b8  lbu         $v0, 0x1B8($v1)
    ctx->pc = 0x22ce78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 440)));
    // 0x22ce7c: 0xc08b422  jal         func_22D088
    ctx->pc = 0x22CE7Cu;
    SET_GPR_U32(ctx, 31, 0x22CE84u);
    ctx->pc = 0x22CE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CE7Cu;
            // 0x22ce80: 0xa202000a  sb          $v0, 0xA($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE84u; }
        if (ctx->pc != 0x22CE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE84u; }
        if (ctx->pc != 0x22CE84u) { return; }
    }
    ctx->pc = 0x22CE84u;
    // 0x22ce84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22ce84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ce88: 0xc08b422  jal         func_22D088
    ctx->pc = 0x22CE88u;
    SET_GPR_U32(ctx, 31, 0x22CE90u);
    ctx->pc = 0x22CE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CE88u;
            // 0x22ce8c: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE90u; }
        if (ctx->pc != 0x22CE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE90u; }
        if (ctx->pc != 0x22CE90u) { return; }
    }
    ctx->pc = 0x22CE90u;
    // 0x22ce90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22ce90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ce94: 0xc08b422  jal         func_22D088
    ctx->pc = 0x22CE94u;
    SET_GPR_U32(ctx, 31, 0x22CE9Cu);
    ctx->pc = 0x22CE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CE94u;
            // 0x22ce98: 0x240500ec  addiu       $a1, $zero, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE9Cu; }
        if (ctx->pc != 0x22CE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE9Cu; }
        if (ctx->pc != 0x22CE9Cu) { return; }
    }
    ctx->pc = 0x22CE9Cu;
    // 0x22ce9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22ce9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cea0: 0xc08b422  jal         func_22D088
    ctx->pc = 0x22CEA0u;
    SET_GPR_U32(ctx, 31, 0x22CEA8u);
    ctx->pc = 0x22CEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CEA0u;
            // 0x22cea4: 0x240501c4  addiu       $a1, $zero, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CEA8u; }
        if (ctx->pc != 0x22CEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CEA8u; }
        if (ctx->pc != 0x22CEA8u) { return; }
    }
    ctx->pc = 0x22CEA8u;
    // 0x22cea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22cea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ceac: 0xc08b422  jal         func_22D088
    ctx->pc = 0x22CEACu;
    SET_GPR_U32(ctx, 31, 0x22CEB4u);
    ctx->pc = 0x22CEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CEACu;
            // 0x22ceb0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CEB4u; }
        if (ctx->pc != 0x22CEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CEB4u; }
        if (ctx->pc != 0x22CEB4u) { return; }
    }
    ctx->pc = 0x22CEB4u;
    // 0x22ceb4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x22ceb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22ceb8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x22ceb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22cebc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22cebcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22cec0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x22cec0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22cec4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x22cec4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22cec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22cec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22cecc: 0x3e00008  jr          $ra
    ctx->pc = 0x22CECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CECCu;
            // 0x22ced0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22CED4u;
    // 0x22ced4: 0x0  nop
    ctx->pc = 0x22ced4u;
    // NOP
}
