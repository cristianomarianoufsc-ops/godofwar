#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_18af50
// Address: 0x18af50 - 0x18b850
void entry_18af50_0x18b850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_18af50_0x18b850");
#endif

    ctx->pc = 0x18af50u;

    // 0x18af50: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x18af50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x18af54: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x18af54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x18af58: 0x8c64ec4c  lw          $a0, -0x13B4($v1)
    ctx->pc = 0x18af58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962252)));
    // 0x18af5c: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x18af5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x18af60: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18af60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18af64: 0x2442a1b0  addiu       $v0, $v0, -0x5E50
    ctx->pc = 0x18af64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943152));
    // 0x18af68: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x18af68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x18af6c: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x18af6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x18af70: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x18af70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x18af74: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x18af74u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x18af78: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x18af78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x18af7c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18af7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af80: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x18af80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x18af84: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x18af84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x18af88: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x18af88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x18af8c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x18af8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x18af90: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x18af90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x18af94: 0xa7a00010  sh          $zero, 0x10($sp)
    ctx->pc = 0x18af94u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x18af98: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x18af98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x18af9c: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x18af9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x18afa0: 0xc04f856  jal         func_13E158
    ctx->pc = 0x18AFA0u;
    SET_GPR_U32(ctx, 31, 0x18AFA8u);
    ctx->pc = 0x18AFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AFA0u;
            // 0x18afa4: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFA8u; }
        if (ctx->pc != 0x18AFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFA8u; }
        if (ctx->pc != 0x18AFA8u) { return; }
    }
    ctx->pc = 0x18AFA8u;
    // 0x18afa8: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x18AFA8u;
    SET_GPR_U32(ctx, 31, 0x18AFB0u);
    ctx->pc = 0x18AFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AFA8u;
            // 0x18afac: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFB0u; }
        if (ctx->pc != 0x18AFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFB0u; }
        if (ctx->pc != 0x18AFB0u) { return; }
    }
    ctx->pc = 0x18AFB0u;
    // 0x18afb0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x18AFB0u;
    SET_GPR_U32(ctx, 31, 0x18AFB8u);
    ctx->pc = 0x18AFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AFB0u;
            // 0x18afb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFB8u; }
        if (ctx->pc != 0x18AFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFB8u; }
        if (ctx->pc != 0x18AFB8u) { return; }
    }
    ctx->pc = 0x18AFB8u;
    // 0x18afb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18afb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18afbc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x18afbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x18afc0: 0x24a53058  addiu       $a1, $a1, 0x3058
    ctx->pc = 0x18afc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12376));
    // 0x18afc4: 0xc060978  jal         func_1825E0
    ctx->pc = 0x18AFC4u;
    SET_GPR_U32(ctx, 31, 0x18AFCCu);
    ctx->pc = 0x18AFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AFC4u;
            // 0x18afc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFCCu; }
        if (ctx->pc != 0x18AFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFCCu; }
        if (ctx->pc != 0x18AFCCu) { return; }
    }
    ctx->pc = 0x18AFCCu;
    // 0x18afcc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x18afccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x18afd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18afd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18afd4: 0x2442a170  addiu       $v0, $v0, -0x5E90
    ctx->pc = 0x18afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943088));
    // 0x18afd8: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x18AFD8u;
    SET_GPR_U32(ctx, 31, 0x18AFE0u);
    ctx->pc = 0x18AFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AFD8u;
            // 0x18afdc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFE0u; }
        if (ctx->pc != 0x18AFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFE0u; }
        if (ctx->pc != 0x18AFE0u) { return; }
    }
    ctx->pc = 0x18AFE0u;
    // 0x18afe0: 0x3c056850  lui         $a1, 0x6850
    ctx->pc = 0x18afe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26704 << 16));
    // 0x18afe4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18afe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18afe8: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x18afe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x18afec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18afecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aff0: 0x34a53edc  ori         $a1, $a1, 0x3EDC
    ctx->pc = 0x18aff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16092);
    // 0x18aff4: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x18AFF4u;
    SET_GPR_U32(ctx, 31, 0x18AFFCu);
    ctx->pc = 0x18AFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AFF4u;
            // 0x18aff8: 0xae30c874  sw          $s0, -0x378C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294953076), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFFCu; }
        if (ctx->pc != 0x18AFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFFCu; }
        if (ctx->pc != 0x18AFFCu) { return; }
    }
    ctx->pc = 0x18AFFCu;
    // 0x18affc: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18affcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b000: 0x3c05c086  lui         $a1, 0xC086
    ctx->pc = 0x18b000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49286 << 16));
    // 0x18b004: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b008: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x18b008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x18b00c: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x18B00Cu;
    SET_GPR_U32(ctx, 31, 0x18B014u);
    ctx->pc = 0x18B010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B00Cu;
            // 0x18b010: 0x34a5e0b4  ori         $a1, $a1, 0xE0B4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57524);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B014u; }
        if (ctx->pc != 0x18B014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B014u; }
        if (ctx->pc != 0x18B014u) { return; }
    }
    ctx->pc = 0x18B014u;
    // 0x18b014: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b018: 0x3c05e9b4  lui         $a1, 0xE9B4
    ctx->pc = 0x18b018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59828 << 16));
    // 0x18b01c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b020: 0x27a70026  addiu       $a3, $sp, 0x26
    ctx->pc = 0x18b020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 38));
    // 0x18b024: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x18B024u;
    SET_GPR_U32(ctx, 31, 0x18B02Cu);
    ctx->pc = 0x18B028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B024u;
            // 0x18b028: 0x34a50e3d  ori         $a1, $a1, 0xE3D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3645);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B02Cu; }
        if (ctx->pc != 0x18B02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B02Cu; }
        if (ctx->pc != 0x18B02Cu) { return; }
    }
    ctx->pc = 0x18B02Cu;
    // 0x18b02c: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x18B02Cu;
    SET_GPR_U32(ctx, 31, 0x18B034u);
    ctx->pc = 0x18B030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B02Cu;
            // 0x18b030: 0x8e24c874  lw          $a0, -0x378C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B034u; }
        if (ctx->pc != 0x18B034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B034u; }
        if (ctx->pc != 0x18B034u) { return; }
    }
    ctx->pc = 0x18B034u;
    // 0x18b034: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b038: 0x3c05ec2e  lui         $a1, 0xEC2E
    ctx->pc = 0x18b038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60462 << 16));
    // 0x18b03c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b03cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b040: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x18b040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x18b044: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x18B044u;
    SET_GPR_U32(ctx, 31, 0x18B04Cu);
    ctx->pc = 0x18B048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B044u;
            // 0x18b048: 0x34a54776  ori         $a1, $a1, 0x4776 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)18294);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B04Cu; }
        if (ctx->pc != 0x18B04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B04Cu; }
        if (ctx->pc != 0x18B04Cu) { return; }
    }
    ctx->pc = 0x18B04Cu;
    // 0x18b04c: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b050: 0x3c055938  lui         $a1, 0x5938
    ctx->pc = 0x18b050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22840 << 16));
    // 0x18b054: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b058: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x18b058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18b05c: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x18B05Cu;
    SET_GPR_U32(ctx, 31, 0x18B064u);
    ctx->pc = 0x18B060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B05Cu;
            // 0x18b060: 0x34a5a592  ori         $a1, $a1, 0xA592 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42386);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B064u; }
        if (ctx->pc != 0x18B064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B064u; }
        if (ctx->pc != 0x18B064u) { return; }
    }
    ctx->pc = 0x18B064u;
    // 0x18b064: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b068: 0x3c054ad5  lui         $a1, 0x4AD5
    ctx->pc = 0x18b068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19157 << 16));
    // 0x18b06c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b06cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b070: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x18b070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x18b074: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18B074u;
    SET_GPR_U32(ctx, 31, 0x18B07Cu);
    ctx->pc = 0x18B078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B074u;
            // 0x18b078: 0x34a50b52  ori         $a1, $a1, 0xB52 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2898);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B07Cu; }
        if (ctx->pc != 0x18B07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B07Cu; }
        if (ctx->pc != 0x18B07Cu) { return; }
    }
    ctx->pc = 0x18B07Cu;
    // 0x18b07c: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x18B07Cu;
    SET_GPR_U32(ctx, 31, 0x18B084u);
    ctx->pc = 0x18B080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B07Cu;
            // 0x18b080: 0x8e24c874  lw          $a0, -0x378C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B084u; }
        if (ctx->pc != 0x18B084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B084u; }
        if (ctx->pc != 0x18B084u) { return; }
    }
    ctx->pc = 0x18B084u;
    // 0x18b084: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b088: 0x3c05d2af  lui         $a1, 0xD2AF
    ctx->pc = 0x18b088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53935 << 16));
    // 0x18b08c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b090: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x18b090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x18b094: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18b094u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b098: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18b098u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b09c: 0xc06074a  jal         func_181D28
    ctx->pc = 0x18B09Cu;
    SET_GPR_U32(ctx, 31, 0x18B0A4u);
    ctx->pc = 0x18B0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B09Cu;
            // 0x18b0a0: 0x34a52a3b  ori         $a1, $a1, 0x2A3B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)10811);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181D28u;
    if (runtime->hasFunction(0x181D28u)) {
        auto targetFn = runtime->lookupFunction(0x181D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B0A4u; }
        if (ctx->pc != 0x18B0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181D28_0x181d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B0A4u; }
        if (ctx->pc != 0x18B0A4u) { return; }
    }
    ctx->pc = 0x18B0A4u;
    // 0x18b0a4: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x18B0A4u;
    SET_GPR_U32(ctx, 31, 0x18B0ACu);
    ctx->pc = 0x18B0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B0A4u;
            // 0x18b0a8: 0x8e24c874  lw          $a0, -0x378C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B0ACu; }
        if (ctx->pc != 0x18B0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B0ACu; }
        if (ctx->pc != 0x18B0ACu) { return; }
    }
    ctx->pc = 0x18B0ACu;
    // 0x18b0ac: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b0b0: 0x3c05b9ff  lui         $a1, 0xB9FF
    ctx->pc = 0x18b0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47615 << 16));
    // 0x18b0b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b0b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b0b8: 0x27a70094  addiu       $a3, $sp, 0x94
    ctx->pc = 0x18b0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x18b0bc: 0xc06063a  jal         func_1818E8
    ctx->pc = 0x18B0BCu;
    SET_GPR_U32(ctx, 31, 0x18B0C4u);
    ctx->pc = 0x18B0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B0BCu;
            // 0x18b0c0: 0x34a5cbe2  ori         $a1, $a1, 0xCBE2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52194);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818E8u;
    if (runtime->hasFunction(0x1818E8u)) {
        auto targetFn = runtime->lookupFunction(0x1818E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B0C4u; }
        if (ctx->pc != 0x18B0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001818E8_0x1818e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B0C4u; }
        if (ctx->pc != 0x18B0C4u) { return; }
    }
    ctx->pc = 0x18B0C4u;
    // 0x18b0c4: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b0c8: 0x3c05758c  lui         $a1, 0x758C
    ctx->pc = 0x18b0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30092 << 16));
    // 0x18b0cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b0ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b0d0: 0x27a70096  addiu       $a3, $sp, 0x96
    ctx->pc = 0x18b0d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 150));
    // 0x18b0d4: 0xc06063a  jal         func_1818E8
    ctx->pc = 0x18B0D4u;
    SET_GPR_U32(ctx, 31, 0x18B0DCu);
    ctx->pc = 0x18B0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B0D4u;
            // 0x18b0d8: 0x34a5abee  ori         $a1, $a1, 0xABEE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44014);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818E8u;
    if (runtime->hasFunction(0x1818E8u)) {
        auto targetFn = runtime->lookupFunction(0x1818E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B0DCu; }
        if (ctx->pc != 0x18B0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001818E8_0x1818e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B0DCu; }
        if (ctx->pc != 0x18B0DCu) { return; }
    }
    ctx->pc = 0x18B0DCu;
    // 0x18b0dc: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x18B0DCu;
    SET_GPR_U32(ctx, 31, 0x18B0E4u);
    ctx->pc = 0x18B0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B0DCu;
            // 0x18b0e0: 0x8e24c874  lw          $a0, -0x378C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B0E4u; }
        if (ctx->pc != 0x18B0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B0E4u; }
        if (ctx->pc != 0x18B0E4u) { return; }
    }
    ctx->pc = 0x18B0E4u;
    // 0x18b0e4: 0x27b00084  addiu       $s0, $sp, 0x84
    ctx->pc = 0x18b0e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x18b0e8: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b0ec: 0x3c057ea1  lui         $a1, 0x7EA1
    ctx->pc = 0x18b0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32417 << 16));
    // 0x18b0f0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b0f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b0f4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b0f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b0f8: 0x34a5ec2e  ori         $a1, $a1, 0xEC2E
    ctx->pc = 0x18b0f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60462);
    // 0x18b0fc: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B0FCu;
    SET_GPR_U32(ctx, 31, 0x18B104u);
    ctx->pc = 0x18B100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B0FCu;
            // 0x18b100: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B104u; }
        if (ctx->pc != 0x18B104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B104u; }
        if (ctx->pc != 0x18B104u) { return; }
    }
    ctx->pc = 0x18B104u;
    // 0x18b104: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b108: 0x3c05c1c0  lui         $a1, 0xC1C0
    ctx->pc = 0x18b108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49600 << 16));
    // 0x18b10c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b10cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b110: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b110u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b114: 0x34a51f59  ori         $a1, $a1, 0x1F59
    ctx->pc = 0x18b114u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8025);
    // 0x18b118: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B118u;
    SET_GPR_U32(ctx, 31, 0x18B120u);
    ctx->pc = 0x18B11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B118u;
            // 0x18b11c: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B120u; }
        if (ctx->pc != 0x18B120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B120u; }
        if (ctx->pc != 0x18B120u) { return; }
    }
    ctx->pc = 0x18B120u;
    // 0x18b120: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b124: 0x3c05bbbc  lui         $a1, 0xBBBC
    ctx->pc = 0x18b124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48060 << 16));
    // 0x18b128: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b12c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b12cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b130: 0x34a5439a  ori         $a1, $a1, 0x439A
    ctx->pc = 0x18b130u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17306);
    // 0x18b134: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B134u;
    SET_GPR_U32(ctx, 31, 0x18B13Cu);
    ctx->pc = 0x18B138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B134u;
            // 0x18b138: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B13Cu; }
        if (ctx->pc != 0x18B13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B13Cu; }
        if (ctx->pc != 0x18B13Cu) { return; }
    }
    ctx->pc = 0x18B13Cu;
    // 0x18b13c: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b140: 0x3c05dbb4  lui         $a1, 0xDBB4
    ctx->pc = 0x18b140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56244 << 16));
    // 0x18b144: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b148: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b14c: 0x34a572c3  ori         $a1, $a1, 0x72C3
    ctx->pc = 0x18b14cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)29379);
    // 0x18b150: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B150u;
    SET_GPR_U32(ctx, 31, 0x18B158u);
    ctx->pc = 0x18B154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B150u;
            // 0x18b154: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B158u; }
        if (ctx->pc != 0x18B158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B158u; }
        if (ctx->pc != 0x18B158u) { return; }
    }
    ctx->pc = 0x18B158u;
    // 0x18b158: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b15c: 0x3c05fc03  lui         $a1, 0xFC03
    ctx->pc = 0x18b15cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64515 << 16));
    // 0x18b160: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b164: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x18b164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18b168: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b16c: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B16Cu;
    SET_GPR_U32(ctx, 31, 0x18B174u);
    ctx->pc = 0x18B170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B16Cu;
            // 0x18b170: 0x34a57268  ori         $a1, $a1, 0x7268 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)29288);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B174u; }
        if (ctx->pc != 0x18B174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B174u; }
        if (ctx->pc != 0x18B174u) { return; }
    }
    ctx->pc = 0x18B174u;
    // 0x18b174: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b178: 0x3c05f3a5  lui         $a1, 0xF3A5
    ctx->pc = 0x18b178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62373 << 16));
    // 0x18b17c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b17cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b180: 0x27a7009b  addiu       $a3, $sp, 0x9B
    ctx->pc = 0x18b180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 155));
    // 0x18b184: 0xc060706  jal         func_181C18
    ctx->pc = 0x18B184u;
    SET_GPR_U32(ctx, 31, 0x18B18Cu);
    ctx->pc = 0x18B188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B184u;
            // 0x18b188: 0x34a51122  ori         $a1, $a1, 0x1122 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4386);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C18u;
    if (runtime->hasFunction(0x181C18u)) {
        auto targetFn = runtime->lookupFunction(0x181C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B18Cu; }
        if (ctx->pc != 0x18B18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181C18_0x181c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B18Cu; }
        if (ctx->pc != 0x18B18Cu) { return; }
    }
    ctx->pc = 0x18B18Cu;
    // 0x18b18c: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b190: 0x3c05cb24  lui         $a1, 0xCB24
    ctx->pc = 0x18b190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52004 << 16));
    // 0x18b194: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b198: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b198u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b19c: 0x34a57958  ori         $a1, $a1, 0x7958
    ctx->pc = 0x18b19cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31064);
    // 0x18b1a0: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B1A0u;
    SET_GPR_U32(ctx, 31, 0x18B1A8u);
    ctx->pc = 0x18B1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B1A0u;
            // 0x18b1a4: 0x24080100  addiu       $t0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B1A8u; }
        if (ctx->pc != 0x18B1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B1A8u; }
        if (ctx->pc != 0x18B1A8u) { return; }
    }
    ctx->pc = 0x18B1A8u;
    // 0x18b1a8: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b1ac: 0x3c055563  lui         $a1, 0x5563
    ctx->pc = 0x18b1acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21859 << 16));
    // 0x18b1b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b1b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b1b4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b1b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b1b8: 0x34a57e92  ori         $a1, $a1, 0x7E92
    ctx->pc = 0x18b1b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32402);
    // 0x18b1bc: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B1BCu;
    SET_GPR_U32(ctx, 31, 0x18B1C4u);
    ctx->pc = 0x18B1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B1BCu;
            // 0x18b1c0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B1C4u; }
        if (ctx->pc != 0x18B1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B1C4u; }
        if (ctx->pc != 0x18B1C4u) { return; }
    }
    ctx->pc = 0x18B1C4u;
    // 0x18b1c4: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b1c8: 0x3c05f174  lui         $a1, 0xF174
    ctx->pc = 0x18b1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61812 << 16));
    // 0x18b1cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b1ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b1d0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b1d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b1d4: 0x34a592ae  ori         $a1, $a1, 0x92AE
    ctx->pc = 0x18b1d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37550);
    // 0x18b1d8: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B1D8u;
    SET_GPR_U32(ctx, 31, 0x18B1E0u);
    ctx->pc = 0x18B1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B1D8u;
            // 0x18b1dc: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B1E0u; }
        if (ctx->pc != 0x18B1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B1E0u; }
        if (ctx->pc != 0x18B1E0u) { return; }
    }
    ctx->pc = 0x18B1E0u;
    // 0x18b1e0: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b1e4: 0x3c05500a  lui         $a1, 0x500A
    ctx->pc = 0x18b1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20490 << 16));
    // 0x18b1e8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b1e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b1ec: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b1ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b1f0: 0x34a5656c  ori         $a1, $a1, 0x656C
    ctx->pc = 0x18b1f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25964);
    // 0x18b1f4: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B1F4u;
    SET_GPR_U32(ctx, 31, 0x18B1FCu);
    ctx->pc = 0x18B1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B1F4u;
            // 0x18b1f8: 0x24080400  addiu       $t0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B1FCu; }
        if (ctx->pc != 0x18B1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B1FCu; }
        if (ctx->pc != 0x18B1FCu) { return; }
    }
    ctx->pc = 0x18B1FCu;
    // 0x18b1fc: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b200: 0x3c058eb6  lui         $a1, 0x8EB6
    ctx->pc = 0x18b200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36534 << 16));
    // 0x18b204: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b208: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b20c: 0x34a5af1b  ori         $a1, $a1, 0xAF1B
    ctx->pc = 0x18b20cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44827);
    // 0x18b210: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B210u;
    SET_GPR_U32(ctx, 31, 0x18B218u);
    ctx->pc = 0x18B214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B210u;
            // 0x18b214: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B218u; }
        if (ctx->pc != 0x18B218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B218u; }
        if (ctx->pc != 0x18B218u) { return; }
    }
    ctx->pc = 0x18B218u;
    // 0x18b218: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b21c: 0x3c05ff0d  lui         $a1, 0xFF0D
    ctx->pc = 0x18b21cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65293 << 16));
    // 0x18b220: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b224: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b228: 0x34a5af8f  ori         $a1, $a1, 0xAF8F
    ctx->pc = 0x18b228u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44943);
    // 0x18b22c: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B22Cu;
    SET_GPR_U32(ctx, 31, 0x18B234u);
    ctx->pc = 0x18B230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B22Cu;
            // 0x18b230: 0x24080800  addiu       $t0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B234u; }
        if (ctx->pc != 0x18B234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B234u; }
        if (ctx->pc != 0x18B234u) { return; }
    }
    ctx->pc = 0x18B234u;
    // 0x18b234: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b238: 0x3c05918d  lui         $a1, 0x918D
    ctx->pc = 0x18b238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37261 << 16));
    // 0x18b23c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b23cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b240: 0x24081000  addiu       $t0, $zero, 0x1000
    ctx->pc = 0x18b240u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x18b244: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b244u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b248: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B248u;
    SET_GPR_U32(ctx, 31, 0x18B250u);
    ctx->pc = 0x18B24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B248u;
            // 0x18b24c: 0x34a5e416  ori         $a1, $a1, 0xE416 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)58390);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B250u; }
        if (ctx->pc != 0x18B250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B250u; }
        if (ctx->pc != 0x18B250u) { return; }
    }
    ctx->pc = 0x18B250u;
    // 0x18b250: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x18B250u;
    SET_GPR_U32(ctx, 31, 0x18B258u);
    ctx->pc = 0x18B254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B250u;
            // 0x18b254: 0x8e24c874  lw          $a0, -0x378C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B258u; }
        if (ctx->pc != 0x18B258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B258u; }
        if (ctx->pc != 0x18B258u) { return; }
    }
    ctx->pc = 0x18B258u;
    // 0x18b258: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b25c: 0x3c05884f  lui         $a1, 0x884F
    ctx->pc = 0x18b25cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34895 << 16));
    // 0x18b260: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b264: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x18b264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18b268: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18B268u;
    SET_GPR_U32(ctx, 31, 0x18B270u);
    ctx->pc = 0x18B26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B268u;
            // 0x18b26c: 0x34a526ff  ori         $a1, $a1, 0x26FF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9983);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B270u; }
        if (ctx->pc != 0x18B270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B270u; }
        if (ctx->pc != 0x18B270u) { return; }
    }
    ctx->pc = 0x18B270u;
    // 0x18b270: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b274: 0x3c05ccf3  lui         $a1, 0xCCF3
    ctx->pc = 0x18b274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52467 << 16));
    // 0x18b278: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b27c: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x18b27cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x18b280: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18B280u;
    SET_GPR_U32(ctx, 31, 0x18B288u);
    ctx->pc = 0x18B284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B280u;
            // 0x18b284: 0x34a5a893  ori         $a1, $a1, 0xA893 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43155);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B288u; }
        if (ctx->pc != 0x18B288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B288u; }
        if (ctx->pc != 0x18B288u) { return; }
    }
    ctx->pc = 0x18B288u;
    // 0x18b288: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x18B288u;
    SET_GPR_U32(ctx, 31, 0x18B290u);
    ctx->pc = 0x18B28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B288u;
            // 0x18b28c: 0x8e24c874  lw          $a0, -0x378C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B290u; }
        if (ctx->pc != 0x18B290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B290u; }
        if (ctx->pc != 0x18B290u) { return; }
    }
    ctx->pc = 0x18B290u;
    // 0x18b290: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b294: 0x3c05cf61  lui         $a1, 0xCF61
    ctx->pc = 0x18b294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53089 << 16));
    // 0x18b298: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b29c: 0x27a7008c  addiu       $a3, $sp, 0x8C
    ctx->pc = 0x18b29cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x18b2a0: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x18B2A0u;
    SET_GPR_U32(ctx, 31, 0x18B2A8u);
    ctx->pc = 0x18B2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B2A0u;
            // 0x18b2a4: 0x34a55f41  ori         $a1, $a1, 0x5F41 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24385);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B2A8u; }
        if (ctx->pc != 0x18B2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B2A8u; }
        if (ctx->pc != 0x18B2A8u) { return; }
    }
    ctx->pc = 0x18B2A8u;
    // 0x18b2a8: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b2ac: 0x3c05684a  lui         $a1, 0x684A
    ctx->pc = 0x18b2acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26698 << 16));
    // 0x18b2b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b2b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b2b4: 0x27a7008e  addiu       $a3, $sp, 0x8E
    ctx->pc = 0x18b2b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 142));
    // 0x18b2b8: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x18B2B8u;
    SET_GPR_U32(ctx, 31, 0x18B2C0u);
    ctx->pc = 0x18B2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B2B8u;
            // 0x18b2bc: 0x34a58d09  ori         $a1, $a1, 0x8D09 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36105);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B2C0u; }
        if (ctx->pc != 0x18B2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B2C0u; }
        if (ctx->pc != 0x18B2C0u) { return; }
    }
    ctx->pc = 0x18B2C0u;
    // 0x18b2c0: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b2c4: 0x3c05e752  lui         $a1, 0xE752
    ctx->pc = 0x18b2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59218 << 16));
    // 0x18b2c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b2c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b2cc: 0x27a70092  addiu       $a3, $sp, 0x92
    ctx->pc = 0x18b2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 146));
    // 0x18b2d0: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x18B2D0u;
    SET_GPR_U32(ctx, 31, 0x18B2D8u);
    ctx->pc = 0x18B2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B2D0u;
            // 0x18b2d4: 0x34a5e4cf  ori         $a1, $a1, 0xE4CF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)58575);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B2D8u; }
        if (ctx->pc != 0x18B2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B2D8u; }
        if (ctx->pc != 0x18B2D8u) { return; }
    }
    ctx->pc = 0x18B2D8u;
    // 0x18b2d8: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b2dc: 0x3c059789  lui         $a1, 0x9789
    ctx->pc = 0x18b2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38793 << 16));
    // 0x18b2e0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b2e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b2e4: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x18b2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18b2e8: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x18B2E8u;
    SET_GPR_U32(ctx, 31, 0x18B2F0u);
    ctx->pc = 0x18B2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B2E8u;
            // 0x18b2ec: 0x34a5b6a5  ori         $a1, $a1, 0xB6A5 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46757);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B2F0u; }
        if (ctx->pc != 0x18B2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B2F0u; }
        if (ctx->pc != 0x18B2F0u) { return; }
    }
    ctx->pc = 0x18B2F0u;
    // 0x18b2f0: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x18B2F0u;
    SET_GPR_U32(ctx, 31, 0x18B2F8u);
    ctx->pc = 0x18B2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B2F0u;
            // 0x18b2f4: 0x8e24c874  lw          $a0, -0x378C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B2F8u; }
        if (ctx->pc != 0x18B2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B2F8u; }
        if (ctx->pc != 0x18B2F8u) { return; }
    }
    ctx->pc = 0x18B2F8u;
    // 0x18b2f8: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b2fc: 0x3c050cad  lui         $a1, 0xCAD
    ctx->pc = 0x18b2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3245 << 16));
    // 0x18b300: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b304: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x18b304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18b308: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18B308u;
    SET_GPR_U32(ctx, 31, 0x18B310u);
    ctx->pc = 0x18B30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B308u;
            // 0x18b30c: 0x34a5a0cd  ori         $a1, $a1, 0xA0CD (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)41165);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B310u; }
        if (ctx->pc != 0x18B310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B310u; }
        if (ctx->pc != 0x18B310u) { return; }
    }
    ctx->pc = 0x18B310u;
    // 0x18b310: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b314: 0x3c05a708  lui         $a1, 0xA708
    ctx->pc = 0x18b314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42760 << 16));
    // 0x18b318: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b31c: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x18b31cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x18b320: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18B320u;
    SET_GPR_U32(ctx, 31, 0x18B328u);
    ctx->pc = 0x18B324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B320u;
            // 0x18b324: 0x34a52db6  ori         $a1, $a1, 0x2DB6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11702);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B328u; }
        if (ctx->pc != 0x18B328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B328u; }
        if (ctx->pc != 0x18B328u) { return; }
    }
    ctx->pc = 0x18B328u;
    // 0x18b328: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x18B328u;
    SET_GPR_U32(ctx, 31, 0x18B330u);
    ctx->pc = 0x18B32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B328u;
            // 0x18b32c: 0x8e24c874  lw          $a0, -0x378C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B330u; }
        if (ctx->pc != 0x18B330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B330u; }
        if (ctx->pc != 0x18B330u) { return; }
    }
    ctx->pc = 0x18B330u;
    // 0x18b330: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b334: 0x3c054949  lui         $a1, 0x4949
    ctx->pc = 0x18b334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18761 << 16));
    // 0x18b338: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b33c: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x18b33cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x18b340: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18B340u;
    SET_GPR_U32(ctx, 31, 0x18B348u);
    ctx->pc = 0x18B344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B340u;
            // 0x18b344: 0x34a5c244  ori         $a1, $a1, 0xC244 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49732);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B348u; }
        if (ctx->pc != 0x18B348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B348u; }
        if (ctx->pc != 0x18B348u) { return; }
    }
    ctx->pc = 0x18B348u;
    // 0x18b348: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b34c: 0x3c054002  lui         $a1, 0x4002
    ctx->pc = 0x18b34cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16386 << 16));
    // 0x18b350: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b354: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x18b354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x18b358: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18B358u;
    SET_GPR_U32(ctx, 31, 0x18B360u);
    ctx->pc = 0x18B35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B358u;
            // 0x18b35c: 0x34a532ce  ori         $a1, $a1, 0x32CE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13006);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B360u; }
        if (ctx->pc != 0x18B360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B360u; }
        if (ctx->pc != 0x18B360u) { return; }
    }
    ctx->pc = 0x18B360u;
    // 0x18b360: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b364: 0x3c054672  lui         $a1, 0x4672
    ctx->pc = 0x18b364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18034 << 16));
    // 0x18b368: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b36c: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x18b36cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x18b370: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18B370u;
    SET_GPR_U32(ctx, 31, 0x18B378u);
    ctx->pc = 0x18B374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B370u;
            // 0x18b374: 0x34a5bfb2  ori         $a1, $a1, 0xBFB2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49074);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B378u; }
        if (ctx->pc != 0x18B378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B378u; }
        if (ctx->pc != 0x18B378u) { return; }
    }
    ctx->pc = 0x18B378u;
    // 0x18b378: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b37c: 0x3c05d37b  lui         $a1, 0xD37B
    ctx->pc = 0x18b37cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54139 << 16));
    // 0x18b380: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b384: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x18b384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18b388: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18B388u;
    SET_GPR_U32(ctx, 31, 0x18B390u);
    ctx->pc = 0x18B38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B388u;
            // 0x18b38c: 0x34a5884c  ori         $a1, $a1, 0x884C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34892);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B390u; }
        if (ctx->pc != 0x18B390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B390u; }
        if (ctx->pc != 0x18B390u) { return; }
    }
    ctx->pc = 0x18B390u;
    // 0x18b390: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x18B390u;
    SET_GPR_U32(ctx, 31, 0x18B398u);
    ctx->pc = 0x18B394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B390u;
            // 0x18b394: 0x8e24c874  lw          $a0, -0x378C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B398u; }
        if (ctx->pc != 0x18B398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B398u; }
        if (ctx->pc != 0x18B398u) { return; }
    }
    ctx->pc = 0x18B398u;
    // 0x18b398: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b39c: 0x3c05c3a1  lui         $a1, 0xC3A1
    ctx->pc = 0x18b39cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50081 << 16));
    // 0x18b3a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b3a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b3a4: 0x27a70074  addiu       $a3, $sp, 0x74
    ctx->pc = 0x18b3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x18b3a8: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18B3A8u;
    SET_GPR_U32(ctx, 31, 0x18B3B0u);
    ctx->pc = 0x18B3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B3A8u;
            // 0x18b3ac: 0x34a52b87  ori         $a1, $a1, 0x2B87 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11143);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B3B0u; }
        if (ctx->pc != 0x18B3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B3B0u; }
        if (ctx->pc != 0x18B3B0u) { return; }
    }
    ctx->pc = 0x18B3B0u;
    // 0x18b3b0: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b3b4: 0x3c052c2b  lui         $a1, 0x2C2B
    ctx->pc = 0x18b3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)11307 << 16));
    // 0x18b3b8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b3b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b3bc: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x18b3bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x18b3c0: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18B3C0u;
    SET_GPR_U32(ctx, 31, 0x18B3C8u);
    ctx->pc = 0x18B3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B3C0u;
            // 0x18b3c4: 0x34a51e13  ori         $a1, $a1, 0x1E13 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7699);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B3C8u; }
        if (ctx->pc != 0x18B3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B3C8u; }
        if (ctx->pc != 0x18B3C8u) { return; }
    }
    ctx->pc = 0x18B3C8u;
    // 0x18b3c8: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x18B3C8u;
    SET_GPR_U32(ctx, 31, 0x18B3D0u);
    ctx->pc = 0x18B3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B3C8u;
            // 0x18b3cc: 0x8e24c874  lw          $a0, -0x378C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B3D0u; }
        if (ctx->pc != 0x18B3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B3D0u; }
        if (ctx->pc != 0x18B3D0u) { return; }
    }
    ctx->pc = 0x18B3D0u;
    // 0x18b3d0: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b3d4: 0x3c05cd7d  lui         $a1, 0xCD7D
    ctx->pc = 0x18b3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52605 << 16));
    // 0x18b3d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b3d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b3dc: 0x27a70064  addiu       $a3, $sp, 0x64
    ctx->pc = 0x18b3dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x18b3e0: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18B3E0u;
    SET_GPR_U32(ctx, 31, 0x18B3E8u);
    ctx->pc = 0x18B3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B3E0u;
            // 0x18b3e4: 0x34a5a53a  ori         $a1, $a1, 0xA53A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42298);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B3E8u; }
        if (ctx->pc != 0x18B3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B3E8u; }
        if (ctx->pc != 0x18B3E8u) { return; }
    }
    ctx->pc = 0x18B3E8u;
    // 0x18b3e8: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b3ec: 0x3c057294  lui         $a1, 0x7294
    ctx->pc = 0x18b3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29332 << 16));
    // 0x18b3f0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b3f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b3f4: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x18b3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x18b3f8: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18B3F8u;
    SET_GPR_U32(ctx, 31, 0x18B400u);
    ctx->pc = 0x18B3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B3F8u;
            // 0x18b3fc: 0x34a59419  ori         $a1, $a1, 0x9419 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37913);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B400u; }
        if (ctx->pc != 0x18B400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B400u; }
        if (ctx->pc != 0x18B400u) { return; }
    }
    ctx->pc = 0x18B400u;
    // 0x18b400: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b404: 0x3c05d452  lui         $a1, 0xD452
    ctx->pc = 0x18b404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54354 << 16));
    // 0x18b408: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b40c: 0x27a70098  addiu       $a3, $sp, 0x98
    ctx->pc = 0x18b40cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x18b410: 0xc0606c2  jal         func_181B08
    ctx->pc = 0x18B410u;
    SET_GPR_U32(ctx, 31, 0x18B418u);
    ctx->pc = 0x18B414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B410u;
            // 0x18b414: 0x34a51fd9  ori         $a1, $a1, 0x1FD9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8153);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181B08u;
    if (runtime->hasFunction(0x181B08u)) {
        auto targetFn = runtime->lookupFunction(0x181B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B418u; }
        if (ctx->pc != 0x18B418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181B08_0x181b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B418u; }
        if (ctx->pc != 0x18B418u) { return; }
    }
    ctx->pc = 0x18B418u;
    // 0x18b418: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b41c: 0x3c050fa7  lui         $a1, 0xFA7
    ctx->pc = 0x18b41cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4007 << 16));
    // 0x18b420: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b424: 0x27a70099  addiu       $a3, $sp, 0x99
    ctx->pc = 0x18b424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 153));
    // 0x18b428: 0xc0606c2  jal         func_181B08
    ctx->pc = 0x18B428u;
    SET_GPR_U32(ctx, 31, 0x18B430u);
    ctx->pc = 0x18B42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B428u;
            // 0x18b42c: 0x34a59c82  ori         $a1, $a1, 0x9C82 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40066);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181B08u;
    if (runtime->hasFunction(0x181B08u)) {
        auto targetFn = runtime->lookupFunction(0x181B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B430u; }
        if (ctx->pc != 0x18B430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181B08_0x181b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B430u; }
        if (ctx->pc != 0x18B430u) { return; }
    }
    ctx->pc = 0x18B430u;
    // 0x18b430: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b434: 0x3c057972  lui         $a1, 0x7972
    ctx->pc = 0x18b434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31090 << 16));
    // 0x18b438: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b43c: 0x27a70054  addiu       $a3, $sp, 0x54
    ctx->pc = 0x18b43cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x18b440: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18B440u;
    SET_GPR_U32(ctx, 31, 0x18B448u);
    ctx->pc = 0x18B444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B440u;
            // 0x18b444: 0x34a51b17  ori         $a1, $a1, 0x1B17 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6935);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B448u; }
        if (ctx->pc != 0x18B448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B448u; }
        if (ctx->pc != 0x18B448u) { return; }
    }
    ctx->pc = 0x18B448u;
    // 0x18b448: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b44c: 0x3c059cdc  lui         $a1, 0x9CDC
    ctx->pc = 0x18b44cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40156 << 16));
    // 0x18b450: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b454: 0x27a70088  addiu       $a3, $sp, 0x88
    ctx->pc = 0x18b454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x18b458: 0xc06063a  jal         func_1818E8
    ctx->pc = 0x18B458u;
    SET_GPR_U32(ctx, 31, 0x18B460u);
    ctx->pc = 0x18B45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B458u;
            // 0x18b45c: 0x34a515e3  ori         $a1, $a1, 0x15E3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5603);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818E8u;
    if (runtime->hasFunction(0x1818E8u)) {
        auto targetFn = runtime->lookupFunction(0x1818E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B460u; }
        if (ctx->pc != 0x18B460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001818E8_0x1818e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B460u; }
        if (ctx->pc != 0x18B460u) { return; }
    }
    ctx->pc = 0x18B460u;
    // 0x18b460: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b464: 0x3c05a2c3  lui         $a1, 0xA2C3
    ctx->pc = 0x18b464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41667 << 16));
    // 0x18b468: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b46c: 0x27a7008a  addiu       $a3, $sp, 0x8A
    ctx->pc = 0x18b46cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 138));
    // 0x18b470: 0xc06063a  jal         func_1818E8
    ctx->pc = 0x18B470u;
    SET_GPR_U32(ctx, 31, 0x18B478u);
    ctx->pc = 0x18B474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B470u;
            // 0x18b474: 0x34a559e9  ori         $a1, $a1, 0x59E9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)23017);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818E8u;
    if (runtime->hasFunction(0x1818E8u)) {
        auto targetFn = runtime->lookupFunction(0x1818E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B478u; }
        if (ctx->pc != 0x18B478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001818E8_0x1818e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B478u; }
        if (ctx->pc != 0x18B478u) { return; }
    }
    ctx->pc = 0x18B478u;
    // 0x18b478: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b47c: 0x3c051a55  lui         $a1, 0x1A55
    ctx->pc = 0x18b47cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)6741 << 16));
    // 0x18b480: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b484: 0x27a7009a  addiu       $a3, $sp, 0x9A
    ctx->pc = 0x18b484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 154));
    // 0x18b488: 0xc0606c2  jal         func_181B08
    ctx->pc = 0x18B488u;
    SET_GPR_U32(ctx, 31, 0x18B490u);
    ctx->pc = 0x18B48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B488u;
            // 0x18b48c: 0x34a5ba55  ori         $a1, $a1, 0xBA55 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47701);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181B08u;
    if (runtime->hasFunction(0x181B08u)) {
        auto targetFn = runtime->lookupFunction(0x181B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B490u; }
        if (ctx->pc != 0x18B490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181B08_0x181b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B490u; }
        if (ctx->pc != 0x18B490u) { return; }
    }
    ctx->pc = 0x18B490u;
    // 0x18b490: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b494: 0x3c0562d4  lui         $a1, 0x62D4
    ctx->pc = 0x18b494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25300 << 16));
    // 0x18b498: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b49c: 0x27a7007c  addiu       $a3, $sp, 0x7C
    ctx->pc = 0x18b49cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x18b4a0: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18B4A0u;
    SET_GPR_U32(ctx, 31, 0x18B4A8u);
    ctx->pc = 0x18B4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B4A0u;
            // 0x18b4a4: 0x34a5f60b  ori         $a1, $a1, 0xF60B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62987);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B4A8u; }
        if (ctx->pc != 0x18B4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B4A8u; }
        if (ctx->pc != 0x18B4A8u) { return; }
    }
    ctx->pc = 0x18B4A8u;
    // 0x18b4a8: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b4ac: 0x3c05b513  lui         $a1, 0xB513
    ctx->pc = 0x18b4acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46355 << 16));
    // 0x18b4b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b4b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b4b4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x18b4b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18b4b8: 0xc0605b2  jal         func_1816C8
    ctx->pc = 0x18B4B8u;
    SET_GPR_U32(ctx, 31, 0x18B4C0u);
    ctx->pc = 0x18B4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B4B8u;
            // 0x18b4bc: 0x34a54762  ori         $a1, $a1, 0x4762 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)18274);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816C8u;
    if (runtime->hasFunction(0x1816C8u)) {
        auto targetFn = runtime->lookupFunction(0x1816C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B4C0u; }
        if (ctx->pc != 0x18B4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001816C8_0x1816c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B4C0u; }
        if (ctx->pc != 0x18B4C0u) { return; }
    }
    ctx->pc = 0x18B4C0u;
    // 0x18b4c0: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x18B4C0u;
    SET_GPR_U32(ctx, 31, 0x18B4C8u);
    ctx->pc = 0x18B4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B4C0u;
            // 0x18b4c4: 0x8e24c874  lw          $a0, -0x378C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B4C8u; }
        if (ctx->pc != 0x18B4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B4C8u; }
        if (ctx->pc != 0x18B4C8u) { return; }
    }
    ctx->pc = 0x18B4C8u;
    // 0x18b4c8: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b4cc: 0x3c05a3c5  lui         $a1, 0xA3C5
    ctx->pc = 0x18b4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41925 << 16));
    // 0x18b4d0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b4d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b4d4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x18b4d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18b4d8: 0xc06063a  jal         func_1818E8
    ctx->pc = 0x18B4D8u;
    SET_GPR_U32(ctx, 31, 0x18B4E0u);
    ctx->pc = 0x18B4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B4D8u;
            // 0x18b4dc: 0x34a5272c  ori         $a1, $a1, 0x272C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)10028);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818E8u;
    if (runtime->hasFunction(0x1818E8u)) {
        auto targetFn = runtime->lookupFunction(0x1818E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B4E0u; }
        if (ctx->pc != 0x18B4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001818E8_0x1818e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B4E0u; }
        if (ctx->pc != 0x18B4E0u) { return; }
    }
    ctx->pc = 0x18B4E0u;
    // 0x18b4e0: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b4e4: 0x3c05b36f  lui         $a1, 0xB36F
    ctx->pc = 0x18b4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45935 << 16));
    // 0x18b4e8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b4e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b4ec: 0x27a70022  addiu       $a3, $sp, 0x22
    ctx->pc = 0x18b4ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 34));
    // 0x18b4f0: 0xc06063a  jal         func_1818E8
    ctx->pc = 0x18B4F0u;
    SET_GPR_U32(ctx, 31, 0x18B4F8u);
    ctx->pc = 0x18B4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B4F0u;
            // 0x18b4f4: 0x34a5f1c2  ori         $a1, $a1, 0xF1C2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61890);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818E8u;
    if (runtime->hasFunction(0x1818E8u)) {
        auto targetFn = runtime->lookupFunction(0x1818E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B4F8u; }
        if (ctx->pc != 0x18B4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001818E8_0x1818e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B4F8u; }
        if (ctx->pc != 0x18B4F8u) { return; }
    }
    ctx->pc = 0x18B4F8u;
    // 0x18b4f8: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b4fc: 0x3c0541e0  lui         $a1, 0x41E0
    ctx->pc = 0x18b4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16864 << 16));
    // 0x18b500: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b504: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x18b504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x18b508: 0xc06063a  jal         func_1818E8
    ctx->pc = 0x18B508u;
    SET_GPR_U32(ctx, 31, 0x18B510u);
    ctx->pc = 0x18B50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B508u;
            // 0x18b50c: 0x34a58a53  ori         $a1, $a1, 0x8A53 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)35411);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818E8u;
    if (runtime->hasFunction(0x1818E8u)) {
        auto targetFn = runtime->lookupFunction(0x1818E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B510u; }
        if (ctx->pc != 0x18B510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001818E8_0x1818e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B510u; }
        if (ctx->pc != 0x18B510u) { return; }
    }
    ctx->pc = 0x18B510u;
    // 0x18b510: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x18B510u;
    SET_GPR_U32(ctx, 31, 0x18B518u);
    ctx->pc = 0x18B514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B510u;
            // 0x18b514: 0x8e24c874  lw          $a0, -0x378C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B518u; }
        if (ctx->pc != 0x18B518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B518u; }
        if (ctx->pc != 0x18B518u) { return; }
    }
    ctx->pc = 0x18B518u;
    // 0x18b518: 0x27b00038  addiu       $s0, $sp, 0x38
    ctx->pc = 0x18b518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x18b51c: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b520: 0x3c051c2d  lui         $a1, 0x1C2D
    ctx->pc = 0x18b520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7213 << 16));
    // 0x18b524: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b528: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b52c: 0x34a5a9b5  ori         $a1, $a1, 0xA9B5
    ctx->pc = 0x18b52cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43445);
    // 0x18b530: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B530u;
    SET_GPR_U32(ctx, 31, 0x18B538u);
    ctx->pc = 0x18B534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B530u;
            // 0x18b534: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B538u; }
        if (ctx->pc != 0x18B538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B538u; }
        if (ctx->pc != 0x18B538u) { return; }
    }
    ctx->pc = 0x18B538u;
    // 0x18b538: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b53c: 0x3c05fad9  lui         $a1, 0xFAD9
    ctx->pc = 0x18b53cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64217 << 16));
    // 0x18b540: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b544: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b548: 0x34a569dc  ori         $a1, $a1, 0x69DC
    ctx->pc = 0x18b548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27100);
    // 0x18b54c: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B54Cu;
    SET_GPR_U32(ctx, 31, 0x18B554u);
    ctx->pc = 0x18B550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B54Cu;
            // 0x18b550: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B554u; }
        if (ctx->pc != 0x18B554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B554u; }
        if (ctx->pc != 0x18B554u) { return; }
    }
    ctx->pc = 0x18B554u;
    // 0x18b554: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b558: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x18b558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x18b55c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b55cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b560: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b564: 0x34a57053  ori         $a1, $a1, 0x7053
    ctx->pc = 0x18b564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)28755);
    // 0x18b568: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B568u;
    SET_GPR_U32(ctx, 31, 0x18B570u);
    ctx->pc = 0x18B56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B568u;
            // 0x18b56c: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B570u; }
        if (ctx->pc != 0x18B570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B570u; }
        if (ctx->pc != 0x18B570u) { return; }
    }
    ctx->pc = 0x18B570u;
    // 0x18b570: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b574: 0x3c050a3f  lui         $a1, 0xA3F
    ctx->pc = 0x18b574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2623 << 16));
    // 0x18b578: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b57c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b57cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b580: 0x34a5ba28  ori         $a1, $a1, 0xBA28
    ctx->pc = 0x18b580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47656);
    // 0x18b584: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B584u;
    SET_GPR_U32(ctx, 31, 0x18B58Cu);
    ctx->pc = 0x18B588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B584u;
            // 0x18b588: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B58Cu; }
        if (ctx->pc != 0x18B58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B58Cu; }
        if (ctx->pc != 0x18B58Cu) { return; }
    }
    ctx->pc = 0x18B58Cu;
    // 0x18b58c: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b590: 0x3c050867  lui         $a1, 0x867
    ctx->pc = 0x18b590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2151 << 16));
    // 0x18b594: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b598: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b59c: 0x34a57814  ori         $a1, $a1, 0x7814
    ctx->pc = 0x18b59cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30740);
    // 0x18b5a0: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B5A0u;
    SET_GPR_U32(ctx, 31, 0x18B5A8u);
    ctx->pc = 0x18B5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B5A0u;
            // 0x18b5a4: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B5A8u; }
        if (ctx->pc != 0x18B5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B5A8u; }
        if (ctx->pc != 0x18B5A8u) { return; }
    }
    ctx->pc = 0x18B5A8u;
    // 0x18b5a8: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b5ac: 0x3c05abfa  lui         $a1, 0xABFA
    ctx->pc = 0x18b5acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44026 << 16));
    // 0x18b5b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b5b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b5b4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b5b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b5b8: 0x34a5cea6  ori         $a1, $a1, 0xCEA6
    ctx->pc = 0x18b5b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52902);
    // 0x18b5bc: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B5BCu;
    SET_GPR_U32(ctx, 31, 0x18B5C4u);
    ctx->pc = 0x18B5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B5BCu;
            // 0x18b5c0: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B5C4u; }
        if (ctx->pc != 0x18B5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B5C4u; }
        if (ctx->pc != 0x18B5C4u) { return; }
    }
    ctx->pc = 0x18B5C4u;
    // 0x18b5c4: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b5c8: 0x3c050925  lui         $a1, 0x925
    ctx->pc = 0x18b5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2341 << 16));
    // 0x18b5cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b5ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b5d0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b5d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b5d4: 0x34a5f0ae  ori         $a1, $a1, 0xF0AE
    ctx->pc = 0x18b5d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61614);
    // 0x18b5d8: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B5D8u;
    SET_GPR_U32(ctx, 31, 0x18B5E0u);
    ctx->pc = 0x18B5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B5D8u;
            // 0x18b5dc: 0x3c080010  lui         $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B5E0u; }
        if (ctx->pc != 0x18B5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B5E0u; }
        if (ctx->pc != 0x18B5E0u) { return; }
    }
    ctx->pc = 0x18B5E0u;
    // 0x18b5e0: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b5e4: 0x3c05112a  lui         $a1, 0x112A
    ctx->pc = 0x18b5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4394 << 16));
    // 0x18b5e8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b5e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b5ec: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b5ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b5f0: 0x34a5f47f  ori         $a1, $a1, 0xF47F
    ctx->pc = 0x18b5f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62591);
    // 0x18b5f4: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B5F4u;
    SET_GPR_U32(ctx, 31, 0x18B5FCu);
    ctx->pc = 0x18B5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B5F4u;
            // 0x18b5f8: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B5FCu; }
        if (ctx->pc != 0x18B5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B5FCu; }
        if (ctx->pc != 0x18B5FCu) { return; }
    }
    ctx->pc = 0x18B5FCu;
    // 0x18b5fc: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b600: 0x3c050a1e  lui         $a1, 0xA1E
    ctx->pc = 0x18b600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2590 << 16));
    // 0x18b604: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b608: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b608u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b60c: 0x34a58412  ori         $a1, $a1, 0x8412
    ctx->pc = 0x18b60cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33810);
    // 0x18b610: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B610u;
    SET_GPR_U32(ctx, 31, 0x18B618u);
    ctx->pc = 0x18B614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B610u;
            // 0x18b614: 0x24080100  addiu       $t0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B618u; }
        if (ctx->pc != 0x18B618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B618u; }
        if (ctx->pc != 0x18B618u) { return; }
    }
    ctx->pc = 0x18B618u;
    // 0x18b618: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b61c: 0x3c0509df  lui         $a1, 0x9DF
    ctx->pc = 0x18b61cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2527 << 16));
    // 0x18b620: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b624: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b628: 0x34a5ff18  ori         $a1, $a1, 0xFF18
    ctx->pc = 0x18b628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65304);
    // 0x18b62c: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B62Cu;
    SET_GPR_U32(ctx, 31, 0x18B634u);
    ctx->pc = 0x18B630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B62Cu;
            // 0x18b630: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B634u; }
        if (ctx->pc != 0x18B634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B634u; }
        if (ctx->pc != 0x18B634u) { return; }
    }
    ctx->pc = 0x18B634u;
    // 0x18b634: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b638: 0x3c05087b  lui         $a1, 0x87B
    ctx->pc = 0x18b638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2171 << 16));
    // 0x18b63c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b63cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b640: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b644: 0x34a5c8d5  ori         $a1, $a1, 0xC8D5
    ctx->pc = 0x18b644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)51413);
    // 0x18b648: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B648u;
    SET_GPR_U32(ctx, 31, 0x18B650u);
    ctx->pc = 0x18B64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B648u;
            // 0x18b64c: 0x24080400  addiu       $t0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B650u; }
        if (ctx->pc != 0x18B650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B650u; }
        if (ctx->pc != 0x18B650u) { return; }
    }
    ctx->pc = 0x18B650u;
    // 0x18b650: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b654: 0x3c0527f3  lui         $a1, 0x27F3
    ctx->pc = 0x18b654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10227 << 16));
    // 0x18b658: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b65c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b65cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b660: 0x34a551d1  ori         $a1, $a1, 0x51D1
    ctx->pc = 0x18b660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20945);
    // 0x18b664: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B664u;
    SET_GPR_U32(ctx, 31, 0x18B66Cu);
    ctx->pc = 0x18B668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B664u;
            // 0x18b668: 0x24080800  addiu       $t0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B66Cu; }
        if (ctx->pc != 0x18B66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B66Cu; }
        if (ctx->pc != 0x18B66Cu) { return; }
    }
    ctx->pc = 0x18B66Cu;
    // 0x18b66c: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b670: 0x3c059740  lui         $a1, 0x9740
    ctx->pc = 0x18b670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38720 << 16));
    // 0x18b674: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b678: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b67c: 0x34a539af  ori         $a1, $a1, 0x39AF
    ctx->pc = 0x18b67cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14767);
    // 0x18b680: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B680u;
    SET_GPR_U32(ctx, 31, 0x18B688u);
    ctx->pc = 0x18B684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B680u;
            // 0x18b684: 0x24084000  addiu       $t0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B688u; }
        if (ctx->pc != 0x18B688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B688u; }
        if (ctx->pc != 0x18B688u) { return; }
    }
    ctx->pc = 0x18B688u;
    // 0x18b688: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b68c: 0x3c0582c4  lui         $a1, 0x82C4
    ctx->pc = 0x18b68cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33476 << 16));
    // 0x18b690: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b694: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b698: 0x34a52e3f  ori         $a1, $a1, 0x2E3F
    ctx->pc = 0x18b698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11839);
    // 0x18b69c: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B69Cu;
    SET_GPR_U32(ctx, 31, 0x18B6A4u);
    ctx->pc = 0x18B6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B69Cu;
            // 0x18b6a0: 0x34088000  ori         $t0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B6A4u; }
        if (ctx->pc != 0x18B6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B6A4u; }
        if (ctx->pc != 0x18B6A4u) { return; }
    }
    ctx->pc = 0x18B6A4u;
    // 0x18b6a4: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b6a8: 0x3c05ff97  lui         $a1, 0xFF97
    ctx->pc = 0x18b6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65431 << 16));
    // 0x18b6ac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b6acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b6b0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b6b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b6b4: 0x34a51f92  ori         $a1, $a1, 0x1F92
    ctx->pc = 0x18b6b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8082);
    // 0x18b6b8: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B6B8u;
    SET_GPR_U32(ctx, 31, 0x18B6C0u);
    ctx->pc = 0x18B6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B6B8u;
            // 0x18b6bc: 0x3c080001  lui         $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B6C0u; }
        if (ctx->pc != 0x18B6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B6C0u; }
        if (ctx->pc != 0x18B6C0u) { return; }
    }
    ctx->pc = 0x18B6C0u;
    // 0x18b6c0: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b6c4: 0x3c057aa8  lui         $a1, 0x7AA8
    ctx->pc = 0x18b6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31400 << 16));
    // 0x18b6c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b6c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b6cc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b6ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b6d0: 0x34a5082a  ori         $a1, $a1, 0x82A
    ctx->pc = 0x18b6d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2090);
    // 0x18b6d4: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B6D4u;
    SET_GPR_U32(ctx, 31, 0x18B6DCu);
    ctx->pc = 0x18B6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B6D4u;
            // 0x18b6d8: 0x3c080002  lui         $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B6DCu; }
        if (ctx->pc != 0x18B6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B6DCu; }
        if (ctx->pc != 0x18B6DCu) { return; }
    }
    ctx->pc = 0x18B6DCu;
    // 0x18b6dc: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b6e0: 0x3c054ed2  lui         $a1, 0x4ED2
    ctx->pc = 0x18b6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20178 << 16));
    // 0x18b6e4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b6e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b6e8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b6e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b6ec: 0x34a55ac3  ori         $a1, $a1, 0x5AC3
    ctx->pc = 0x18b6ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)23235);
    // 0x18b6f0: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B6F0u;
    SET_GPR_U32(ctx, 31, 0x18B6F8u);
    ctx->pc = 0x18B6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B6F0u;
            // 0x18b6f4: 0x3c080004  lui         $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B6F8u; }
        if (ctx->pc != 0x18B6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B6F8u; }
        if (ctx->pc != 0x18B6F8u) { return; }
    }
    ctx->pc = 0x18B6F8u;
    // 0x18b6f8: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b6fc: 0x3c058ca8  lui         $a1, 0x8CA8
    ctx->pc = 0x18b6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36008 << 16));
    // 0x18b700: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b704: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x18b704u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x18b708: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b708u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b70c: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18B70Cu;
    SET_GPR_U32(ctx, 31, 0x18B714u);
    ctx->pc = 0x18B710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B70Cu;
            // 0x18b710: 0x34a5e85c  ori         $a1, $a1, 0xE85C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59484);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B714u; }
        if (ctx->pc != 0x18B714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B714u; }
        if (ctx->pc != 0x18B714u) { return; }
    }
    ctx->pc = 0x18B714u;
    // 0x18b714: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x18B714u;
    SET_GPR_U32(ctx, 31, 0x18B71Cu);
    ctx->pc = 0x18B718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B714u;
            // 0x18b718: 0x8e24c874  lw          $a0, -0x378C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B71Cu; }
        if (ctx->pc != 0x18B71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B71Cu; }
        if (ctx->pc != 0x18B71Cu) { return; }
    }
    ctx->pc = 0x18B71Cu;
    // 0x18b71c: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b720: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b724: 0x27a7009c  addiu       $a3, $sp, 0x9C
    ctx->pc = 0x18b724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x18b728: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x18B728u;
    SET_GPR_U32(ctx, 31, 0x18B730u);
    ctx->pc = 0x18B72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B728u;
            // 0x18b72c: 0x2405247b  addiu       $a1, $zero, 0x247B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9339));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B730u; }
        if (ctx->pc != 0x18B730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B730u; }
        if (ctx->pc != 0x18B730u) { return; }
    }
    ctx->pc = 0x18B730u;
    // 0x18b730: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b734: 0x3c05a6e3  lui         $a1, 0xA6E3
    ctx->pc = 0x18b734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42723 << 16));
    // 0x18b738: 0x34a57c64  ori         $a1, $a1, 0x7C64
    ctx->pc = 0x18b738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31844);
    // 0x18b73c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b73cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b740: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x18B740u;
    SET_GPR_U32(ctx, 31, 0x18B748u);
    ctx->pc = 0x18B744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B740u;
            // 0x18b744: 0x27a7009e  addiu       $a3, $sp, 0x9E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 158));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B748u; }
        if (ctx->pc != 0x18B748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B748u; }
        if (ctx->pc != 0x18B748u) { return; }
    }
    ctx->pc = 0x18B748u;
    // 0x18b748: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x18B748u;
    SET_GPR_U32(ctx, 31, 0x18B750u);
    ctx->pc = 0x18B74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B748u;
            // 0x18b74c: 0x8e24c874  lw          $a0, -0x378C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B750u; }
        if (ctx->pc != 0x18B750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B750u; }
        if (ctx->pc != 0x18B750u) { return; }
    }
    ctx->pc = 0x18B750u;
    // 0x18b750: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x18b750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18b754: 0x0  nop
    ctx->pc = 0x18b754u;
    // NOP
label_18b758:
    // 0x18b758: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x18B758u;
    {
        const bool branch_taken_0x18b758 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B758u;
            // 0x18b75c: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b758) {
            ctx->pc = 0x18B778u;
            goto label_18b778;
        }
    }
    ctx->pc = 0x18B760u;
    // 0x18b760: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x18b760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x18b764: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x18b764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x18b768: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x18B768u;
    SET_GPR_U32(ctx, 31, 0x18B770u);
    ctx->pc = 0x18B76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B768u;
            // 0x18b76c: 0x24a53060  addiu       $a1, $a1, 0x3060 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B770u; }
        if (ctx->pc != 0x18B770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B770u; }
        if (ctx->pc != 0x18B770u) { return; }
    }
    ctx->pc = 0x18B770u;
    // 0x18b770: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18B770u;
    {
        const bool branch_taken_0x18b770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B770u;
            // 0x18b774: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b770) {
            ctx->pc = 0x18B78Cu;
            goto label_18b78c;
        }
    }
    ctx->pc = 0x18B778u;
label_18b778:
    // 0x18b778: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x18b778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x18b77c: 0x24a53078  addiu       $a1, $a1, 0x3078
    ctx->pc = 0x18b77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12408));
    // 0x18b780: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x18B780u;
    SET_GPR_U32(ctx, 31, 0x18B788u);
    ctx->pc = 0x18B784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B780u;
            // 0x18b784: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B788u; }
        if (ctx->pc != 0x18B788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B788u; }
        if (ctx->pc != 0x18B788u) { return; }
    }
    ctx->pc = 0x18B788u;
    // 0x18b788: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x18b788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_18b78c:
    // 0x18b78c: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x18B78Cu;
    SET_GPR_U32(ctx, 31, 0x18B794u);
    ctx->pc = 0x18B790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B78Cu;
            // 0x18b790: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B794u; }
        if (ctx->pc != 0x18B794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B794u; }
        if (ctx->pc != 0x18B794u) { return; }
    }
    ctx->pc = 0x18B794u;
    // 0x18b794: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18b794u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x18b798: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b79c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18b79cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b7a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18b7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b7a4: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x18B7A4u;
    SET_GPR_U32(ctx, 31, 0x18B7ACu);
    ctx->pc = 0x18B7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B7A4u;
            // 0x18b7a8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B7ACu; }
        if (ctx->pc != 0x18B7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B7ACu; }
        if (ctx->pc != 0x18B7ACu) { return; }
    }
    ctx->pc = 0x18B7ACu;
    // 0x18b7ac: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x18b7acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x18b7b0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x18B7B0u;
    {
        const bool branch_taken_0x18b7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B7B0u;
            // 0x18b7b4: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b7b0) {
            ctx->pc = 0x18B758u;
            runtime->cooperativeGuestYield();
            goto label_18b758;
        }
    }
    ctx->pc = 0x18B7B8u;
    // 0x18b7b8: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b7bc: 0x3c055cb5  lui         $a1, 0x5CB5
    ctx->pc = 0x18b7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23733 << 16));
    // 0x18b7c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b7c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b7c4: 0x27a700ac  addiu       $a3, $sp, 0xAC
    ctx->pc = 0x18b7c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x18b7c8: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18B7C8u;
    SET_GPR_U32(ctx, 31, 0x18B7D0u);
    ctx->pc = 0x18B7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B7C8u;
            // 0x18b7cc: 0x34a5773a  ori         $a1, $a1, 0x773A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30522);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B7D0u; }
        if (ctx->pc != 0x18B7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B7D0u; }
        if (ctx->pc != 0x18B7D0u) { return; }
    }
    ctx->pc = 0x18B7D0u;
    // 0x18b7d0: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b7d4: 0x3c05aa7c  lui         $a1, 0xAA7C
    ctx->pc = 0x18b7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43644 << 16));
    // 0x18b7d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b7d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b7dc: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x18b7dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18b7e0: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18B7E0u;
    SET_GPR_U32(ctx, 31, 0x18B7E8u);
    ctx->pc = 0x18B7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B7E0u;
            // 0x18b7e4: 0x34a5da8b  ori         $a1, $a1, 0xDA8B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55947);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B7E8u; }
        if (ctx->pc != 0x18B7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B7E8u; }
        if (ctx->pc != 0x18B7E8u) { return; }
    }
    ctx->pc = 0x18B7E8u;
    // 0x18b7e8: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b7ec: 0x3c057ed7  lui         $a1, 0x7ED7
    ctx->pc = 0x18b7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32471 << 16));
    // 0x18b7f0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b7f4: 0x27a700b4  addiu       $a3, $sp, 0xB4
    ctx->pc = 0x18b7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x18b7f8: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18B7F8u;
    SET_GPR_U32(ctx, 31, 0x18B800u);
    ctx->pc = 0x18B7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B7F8u;
            // 0x18b7fc: 0x34a59e0a  ori         $a1, $a1, 0x9E0A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40458);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B800u; }
        if (ctx->pc != 0x18B800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B800u; }
        if (ctx->pc != 0x18B800u) { return; }
    }
    ctx->pc = 0x18B800u;
    // 0x18b800: 0x8e24c874  lw          $a0, -0x378C($s1)
    ctx->pc = 0x18b800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
    // 0x18b804: 0x3c055332  lui         $a1, 0x5332
    ctx->pc = 0x18b804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21298 << 16));
    // 0x18b808: 0x34a56189  ori         $a1, $a1, 0x6189
    ctx->pc = 0x18b808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24969);
    // 0x18b80c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18b80cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b810: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18B810u;
    SET_GPR_U32(ctx, 31, 0x18B818u);
    ctx->pc = 0x18B814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B810u;
            // 0x18b814: 0x27a700b8  addiu       $a3, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B818u; }
        if (ctx->pc != 0x18B818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B818u; }
        if (ctx->pc != 0x18B818u) { return; }
    }
    ctx->pc = 0x18B818u;
    // 0x18b818: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x18B818u;
    SET_GPR_U32(ctx, 31, 0x18B820u);
    ctx->pc = 0x18B81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B818u;
            // 0x18b81c: 0x8e24c874  lw          $a0, -0x378C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B820u; }
        if (ctx->pc != 0x18B820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B820u; }
        if (ctx->pc != 0x18B820u) { return; }
    }
    ctx->pc = 0x18B820u;
    // 0x18b820: 0xc04f860  jal         func_13E180
    ctx->pc = 0x18B820u;
    SET_GPR_U32(ctx, 31, 0x18B828u);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B828u; }
        if (ctx->pc != 0x18B828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B828u; }
        if (ctx->pc != 0x18B828u) { return; }
    }
    ctx->pc = 0x18B828u;
    // 0x18b828: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18b828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b82c: 0xc090cf6  jal         func_2433D8
    ctx->pc = 0x18B82Cu;
    SET_GPR_U32(ctx, 31, 0x18B834u);
    ctx->pc = 0x18B830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B82Cu;
            // 0x18b830: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2433D8u;
    if (runtime->hasFunction(0x2433D8u)) {
        auto targetFn = runtime->lookupFunction(0x2433D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B834u; }
        if (ctx->pc != 0x18B834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002433D8_0x2433d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B834u; }
        if (ctx->pc != 0x18B834u) { return; }
    }
    ctx->pc = 0x18B834u;
    // 0x18b834: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x18b834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x18b838: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x18b838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x18b83c: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x18b83cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x18b840: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x18b840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x18b844: 0x3e00008  jr          $ra
    ctx->pc = 0x18B844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B844u;
            // 0x18b848: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18B758u: goto label_18b758;
            case 0x18B778u: goto label_18b778;
            case 0x18B78Cu: goto label_18b78c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18B84Cu;
    // 0x18b84c: 0x0  nop
    ctx->pc = 0x18b84cu;
    // NOP
}
