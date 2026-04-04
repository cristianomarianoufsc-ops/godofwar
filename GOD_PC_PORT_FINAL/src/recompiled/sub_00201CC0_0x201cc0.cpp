#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00201CC0
// Address: 0x201cc0 - 0x201f30
void sub_00201CC0_0x201cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201CC0_0x201cc0");
#endif

    ctx->pc = 0x201cc0u;

    // 0x201cc0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x201cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x201cc4: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x201cc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x201cc8: 0x8c44ec4c  lw          $a0, -0x13B4($v0)
    ctx->pc = 0x201cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
    // 0x201ccc: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x201cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x201cd0: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x201cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x201cd4: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x201cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x201cd8: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x201cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x201cdc: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x201cdcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x201ce0: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x201ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x201ce4: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x201ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x201ce8: 0xc04f856  jal         func_13E158
    ctx->pc = 0x201CE8u;
    SET_GPR_U32(ctx, 31, 0x201CF0u);
    ctx->pc = 0x201CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201CE8u;
            // 0x201cec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201CF0u; }
        if (ctx->pc != 0x201CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201CF0u; }
        if (ctx->pc != 0x201CF0u) { return; }
    }
    ctx->pc = 0x201CF0u;
    // 0x201cf0: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x201CF0u;
    SET_GPR_U32(ctx, 31, 0x201CF8u);
    ctx->pc = 0x201CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201CF0u;
            // 0x201cf4: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201CF8u; }
        if (ctx->pc != 0x201CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201CF8u; }
        if (ctx->pc != 0x201CF8u) { return; }
    }
    ctx->pc = 0x201CF8u;
    // 0x201cf8: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x201CF8u;
    SET_GPR_U32(ctx, 31, 0x201D00u);
    ctx->pc = 0x201CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201CF8u;
            // 0x201cfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D00u; }
        if (ctx->pc != 0x201D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D00u; }
        if (ctx->pc != 0x201D00u) { return; }
    }
    ctx->pc = 0x201D00u;
    // 0x201d00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x201d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d04: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x201d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x201d08: 0x24a57a28  addiu       $a1, $a1, 0x7A28
    ctx->pc = 0x201d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31272));
    // 0x201d0c: 0xc060978  jal         func_1825E0
    ctx->pc = 0x201D0Cu;
    SET_GPR_U32(ctx, 31, 0x201D14u);
    ctx->pc = 0x201D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201D0Cu;
            // 0x201d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D14u; }
        if (ctx->pc != 0x201D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D14u; }
        if (ctx->pc != 0x201D14u) { return; }
    }
    ctx->pc = 0x201D14u;
    // 0x201d14: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x201d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x201d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d1c: 0x2442a050  addiu       $v0, $v0, -0x5FB0
    ctx->pc = 0x201d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942800));
    // 0x201d20: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x201D20u;
    SET_GPR_U32(ctx, 31, 0x201D28u);
    ctx->pc = 0x201D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201D20u;
            // 0x201d24: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D28u; }
        if (ctx->pc != 0x201D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D28u; }
        if (ctx->pc != 0x201D28u) { return; }
    }
    ctx->pc = 0x201D28u;
    // 0x201d28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x201d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d2c: 0xc0807cc  jal         func_201F30
    ctx->pc = 0x201D2Cu;
    SET_GPR_U32(ctx, 31, 0x201D34u);
    ctx->pc = 0x201D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201D2Cu;
            // 0x201d30: 0xae50e438  sw          $s0, -0x1BC8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294960184), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201F30u;
    if (runtime->hasFunction(0x201F30u)) {
        auto targetFn = runtime->lookupFunction(0x201F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D34u; }
        if (ctx->pc != 0x201D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_201f30_0x201f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D34u; }
        if (ctx->pc != 0x201D34u) { return; }
    }
    ctx->pc = 0x201D34u;
    // 0x201d34: 0x8e44e438  lw          $a0, -0x1BC8($s2)
    ctx->pc = 0x201d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960184)));
    // 0x201d38: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x201D38u;
    SET_GPR_U32(ctx, 31, 0x201D40u);
    ctx->pc = 0x201D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201D38u;
            // 0x201d3c: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D40u; }
        if (ctx->pc != 0x201D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D40u; }
        if (ctx->pc != 0x201D40u) { return; }
    }
    ctx->pc = 0x201D40u;
    // 0x201d40: 0x8e44e438  lw          $a0, -0x1BC8($s2)
    ctx->pc = 0x201d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960184)));
    // 0x201d44: 0x3c052bb6  lui         $a1, 0x2BB6
    ctx->pc = 0x201d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)11190 << 16));
    // 0x201d48: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x201d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d4c: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x201d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x201d50: 0xc060570  jal         func_1815C0
    ctx->pc = 0x201D50u;
    SET_GPR_U32(ctx, 31, 0x201D58u);
    ctx->pc = 0x201D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201D50u;
            // 0x201d54: 0x34a526fe  ori         $a1, $a1, 0x26FE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9982);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D58u; }
        if (ctx->pc != 0x201D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D58u; }
        if (ctx->pc != 0x201D58u) { return; }
    }
    ctx->pc = 0x201D58u;
    // 0x201d58: 0x8e44e438  lw          $a0, -0x1BC8($s2)
    ctx->pc = 0x201d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960184)));
    // 0x201d5c: 0x3c05a58b  lui         $a1, 0xA58B
    ctx->pc = 0x201d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42379 << 16));
    // 0x201d60: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x201d60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d64: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x201d64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x201d68: 0xc060570  jal         func_1815C0
    ctx->pc = 0x201D68u;
    SET_GPR_U32(ctx, 31, 0x201D70u);
    ctx->pc = 0x201D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201D68u;
            // 0x201d6c: 0x34a59446  ori         $a1, $a1, 0x9446 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37958);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D70u; }
        if (ctx->pc != 0x201D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D70u; }
        if (ctx->pc != 0x201D70u) { return; }
    }
    ctx->pc = 0x201D70u;
    // 0x201d70: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x201D70u;
    SET_GPR_U32(ctx, 31, 0x201D78u);
    ctx->pc = 0x201D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201D70u;
            // 0x201d74: 0x8e44e438  lw          $a0, -0x1BC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960184)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D78u; }
        if (ctx->pc != 0x201D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D78u; }
        if (ctx->pc != 0x201D78u) { return; }
    }
    ctx->pc = 0x201D78u;
    // 0x201d78: 0x8e44e438  lw          $a0, -0x1BC8($s2)
    ctx->pc = 0x201d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960184)));
    // 0x201d7c: 0x3c0507fa  lui         $a1, 0x7FA
    ctx->pc = 0x201d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2042 << 16));
    // 0x201d80: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x201d80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d84: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x201d84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x201d88: 0xc060570  jal         func_1815C0
    ctx->pc = 0x201D88u;
    SET_GPR_U32(ctx, 31, 0x201D90u);
    ctx->pc = 0x201D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201D88u;
            // 0x201d8c: 0x34a58f27  ori         $a1, $a1, 0x8F27 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36647);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D90u; }
        if (ctx->pc != 0x201D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D90u; }
        if (ctx->pc != 0x201D90u) { return; }
    }
    ctx->pc = 0x201D90u;
    // 0x201d90: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x201D90u;
    SET_GPR_U32(ctx, 31, 0x201D98u);
    ctx->pc = 0x201D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201D90u;
            // 0x201d94: 0x8e44e438  lw          $a0, -0x1BC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960184)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D98u; }
        if (ctx->pc != 0x201D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D98u; }
        if (ctx->pc != 0x201D98u) { return; }
    }
    ctx->pc = 0x201D98u;
    // 0x201d98: 0x8e44e438  lw          $a0, -0x1BC8($s2)
    ctx->pc = 0x201d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960184)));
    // 0x201d9c: 0x3c05df43  lui         $a1, 0xDF43
    ctx->pc = 0x201d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57155 << 16));
    // 0x201da0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x201da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201da4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x201da4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x201da8: 0xc060570  jal         func_1815C0
    ctx->pc = 0x201DA8u;
    SET_GPR_U32(ctx, 31, 0x201DB0u);
    ctx->pc = 0x201DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201DA8u;
            // 0x201dac: 0x34a575e3  ori         $a1, $a1, 0x75E3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30179);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201DB0u; }
        if (ctx->pc != 0x201DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201DB0u; }
        if (ctx->pc != 0x201DB0u) { return; }
    }
    ctx->pc = 0x201DB0u;
    // 0x201db0: 0x8e44e438  lw          $a0, -0x1BC8($s2)
    ctx->pc = 0x201db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960184)));
    // 0x201db4: 0x3c057a4a  lui         $a1, 0x7A4A
    ctx->pc = 0x201db4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31306 << 16));
    // 0x201db8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x201db8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201dbc: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x201dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x201dc0: 0xc060570  jal         func_1815C0
    ctx->pc = 0x201DC0u;
    SET_GPR_U32(ctx, 31, 0x201DC8u);
    ctx->pc = 0x201DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201DC0u;
            // 0x201dc4: 0x34a58930  ori         $a1, $a1, 0x8930 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)35120);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201DC8u; }
        if (ctx->pc != 0x201DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201DC8u; }
        if (ctx->pc != 0x201DC8u) { return; }
    }
    ctx->pc = 0x201DC8u;
    // 0x201dc8: 0x8e44e438  lw          $a0, -0x1BC8($s2)
    ctx->pc = 0x201dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960184)));
    // 0x201dcc: 0x3c0535f4  lui         $a1, 0x35F4
    ctx->pc = 0x201dccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)13812 << 16));
    // 0x201dd0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x201dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201dd4: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x201dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x201dd8: 0xc060570  jal         func_1815C0
    ctx->pc = 0x201DD8u;
    SET_GPR_U32(ctx, 31, 0x201DE0u);
    ctx->pc = 0x201DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201DD8u;
            // 0x201ddc: 0x34a50b1b  ori         $a1, $a1, 0xB1B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2843);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201DE0u; }
        if (ctx->pc != 0x201DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201DE0u; }
        if (ctx->pc != 0x201DE0u) { return; }
    }
    ctx->pc = 0x201DE0u;
    // 0x201de0: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x201DE0u;
    SET_GPR_U32(ctx, 31, 0x201DE8u);
    ctx->pc = 0x201DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201DE0u;
            // 0x201de4: 0x8e44e438  lw          $a0, -0x1BC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960184)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201DE8u; }
        if (ctx->pc != 0x201DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201DE8u; }
        if (ctx->pc != 0x201DE8u) { return; }
    }
    ctx->pc = 0x201DE8u;
    // 0x201de8: 0x27b00034  addiu       $s0, $sp, 0x34
    ctx->pc = 0x201de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x201dec: 0x8e44e438  lw          $a0, -0x1BC8($s2)
    ctx->pc = 0x201decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960184)));
    // 0x201df0: 0x3c054e16  lui         $a1, 0x4E16
    ctx->pc = 0x201df0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19990 << 16));
    // 0x201df4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x201df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201df8: 0x34a5ee9c  ori         $a1, $a1, 0xEE9C
    ctx->pc = 0x201df8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61084);
    // 0x201dfc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x201dfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e00: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x201E00u;
    SET_GPR_U32(ctx, 31, 0x201E08u);
    ctx->pc = 0x201E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201E00u;
            // 0x201e04: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201E08u; }
        if (ctx->pc != 0x201E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201E08u; }
        if (ctx->pc != 0x201E08u) { return; }
    }
    ctx->pc = 0x201E08u;
    // 0x201e08: 0x8e44e438  lw          $a0, -0x1BC8($s2)
    ctx->pc = 0x201e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960184)));
    // 0x201e0c: 0x3c05595a  lui         $a1, 0x595A
    ctx->pc = 0x201e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22874 << 16));
    // 0x201e10: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x201e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e14: 0x34a5d8ad  ori         $a1, $a1, 0xD8AD
    ctx->pc = 0x201e14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55469);
    // 0x201e18: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x201e18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e1c: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x201E1Cu;
    SET_GPR_U32(ctx, 31, 0x201E24u);
    ctx->pc = 0x201E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201E1Cu;
            // 0x201e20: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201E24u; }
        if (ctx->pc != 0x201E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201E24u; }
        if (ctx->pc != 0x201E24u) { return; }
    }
    ctx->pc = 0x201E24u;
    // 0x201e24: 0x8e44e438  lw          $a0, -0x1BC8($s2)
    ctx->pc = 0x201e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960184)));
    // 0x201e28: 0x3c053519  lui         $a1, 0x3519
    ctx->pc = 0x201e28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)13593 << 16));
    // 0x201e2c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x201e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e30: 0x34a59881  ori         $a1, $a1, 0x9881
    ctx->pc = 0x201e30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39041);
    // 0x201e34: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x201e34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e38: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x201E38u;
    SET_GPR_U32(ctx, 31, 0x201E40u);
    ctx->pc = 0x201E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201E38u;
            // 0x201e3c: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201E40u; }
        if (ctx->pc != 0x201E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201E40u; }
        if (ctx->pc != 0x201E40u) { return; }
    }
    ctx->pc = 0x201E40u;
    // 0x201e40: 0x8e44e438  lw          $a0, -0x1BC8($s2)
    ctx->pc = 0x201e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960184)));
    // 0x201e44: 0x3c05b538  lui         $a1, 0xB538
    ctx->pc = 0x201e44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46392 << 16));
    // 0x201e48: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x201e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e4c: 0x34a5db82  ori         $a1, $a1, 0xDB82
    ctx->pc = 0x201e4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)56194);
    // 0x201e50: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x201e50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e54: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x201E54u;
    SET_GPR_U32(ctx, 31, 0x201E5Cu);
    ctx->pc = 0x201E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201E54u;
            // 0x201e58: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201E5Cu; }
        if (ctx->pc != 0x201E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201E5Cu; }
        if (ctx->pc != 0x201E5Cu) { return; }
    }
    ctx->pc = 0x201E5Cu;
    // 0x201e5c: 0x8e44e438  lw          $a0, -0x1BC8($s2)
    ctx->pc = 0x201e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960184)));
    // 0x201e60: 0x3c05ee25  lui         $a1, 0xEE25
    ctx->pc = 0x201e60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60965 << 16));
    // 0x201e64: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x201e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e68: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x201e68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e6c: 0x34a5120b  ori         $a1, $a1, 0x120B
    ctx->pc = 0x201e6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4619);
    // 0x201e70: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x201E70u;
    SET_GPR_U32(ctx, 31, 0x201E78u);
    ctx->pc = 0x201E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201E70u;
            // 0x201e74: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201E78u; }
        if (ctx->pc != 0x201E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201E78u; }
        if (ctx->pc != 0x201E78u) { return; }
    }
    ctx->pc = 0x201E78u;
    // 0x201e78: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x201E78u;
    SET_GPR_U32(ctx, 31, 0x201E80u);
    ctx->pc = 0x201E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201E78u;
            // 0x201e7c: 0x8e44e438  lw          $a0, -0x1BC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960184)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201E80u; }
        if (ctx->pc != 0x201E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201E80u; }
        if (ctx->pc != 0x201E80u) { return; }
    }
    ctx->pc = 0x201E80u;
    // 0x201e80: 0x8e44e438  lw          $a0, -0x1BC8($s2)
    ctx->pc = 0x201e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960184)));
    // 0x201e84: 0x3c059c81  lui         $a1, 0x9C81
    ctx->pc = 0x201e84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40065 << 16));
    // 0x201e88: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x201e88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e8c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x201e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e90: 0x34a51767  ori         $a1, $a1, 0x1767
    ctx->pc = 0x201e90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5991);
    // 0x201e94: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x201e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x201e98: 0xc06074a  jal         func_181D28
    ctx->pc = 0x201E98u;
    SET_GPR_U32(ctx, 31, 0x201EA0u);
    ctx->pc = 0x201E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201E98u;
            // 0x201e9c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181D28u;
    if (runtime->hasFunction(0x181D28u)) {
        auto targetFn = runtime->lookupFunction(0x181D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201EA0u; }
        if (ctx->pc != 0x201EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181D28_0x181d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201EA0u; }
        if (ctx->pc != 0x201EA0u) { return; }
    }
    ctx->pc = 0x201EA0u;
    // 0x201ea0: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x201EA0u;
    SET_GPR_U32(ctx, 31, 0x201EA8u);
    ctx->pc = 0x201EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201EA0u;
            // 0x201ea4: 0x8e44e438  lw          $a0, -0x1BC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960184)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201EA8u; }
        if (ctx->pc != 0x201EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201EA8u; }
        if (ctx->pc != 0x201EA8u) { return; }
    }
    ctx->pc = 0x201EA8u;
    // 0x201ea8: 0x27b10024  addiu       $s1, $sp, 0x24
    ctx->pc = 0x201ea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x201eac: 0x0  nop
    ctx->pc = 0x201eacu;
    // NOP
label_201eb0:
    // 0x201eb0: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x201eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x201eb4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x201eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x201eb8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x201eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ebc: 0x24a57a38  addiu       $a1, $a1, 0x7A38
    ctx->pc = 0x201ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31288));
    // 0x201ec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ec4: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x201EC4u;
    SET_GPR_U32(ctx, 31, 0x201ECCu);
    ctx->pc = 0x201EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201EC4u;
            // 0x201ec8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201ECCu; }
        if (ctx->pc != 0x201ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201ECCu; }
        if (ctx->pc != 0x201ECCu) { return; }
    }
    ctx->pc = 0x201ECCu;
    // 0x201ecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ed0: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x201ED0u;
    SET_GPR_U32(ctx, 31, 0x201ED8u);
    ctx->pc = 0x201ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201ED0u;
            // 0x201ed4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201ED8u; }
        if (ctx->pc != 0x201ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201ED8u; }
        if (ctx->pc != 0x201ED8u) { return; }
    }
    ctx->pc = 0x201ED8u;
    // 0x201ed8: 0x8e44e438  lw          $a0, -0x1BC8($s2)
    ctx->pc = 0x201ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960184)));
    // 0x201edc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x201edcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ee0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x201ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ee4: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x201EE4u;
    SET_GPR_U32(ctx, 31, 0x201EECu);
    ctx->pc = 0x201EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201EE4u;
            // 0x201ee8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201EECu; }
        if (ctx->pc != 0x201EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201EECu; }
        if (ctx->pc != 0x201EECu) { return; }
    }
    ctx->pc = 0x201EECu;
    // 0x201eec: 0x2a620008  slti        $v0, $s3, 0x8
    ctx->pc = 0x201eecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x201ef0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x201EF0u;
    {
        const bool branch_taken_0x201ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201EF0u;
            // 0x201ef4: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ef0) {
            ctx->pc = 0x201EB0u;
            runtime->cooperativeGuestYield();
            goto label_201eb0;
        }
    }
    ctx->pc = 0x201EF8u;
    // 0x201ef8: 0xc04f860  jal         func_13E180
    ctx->pc = 0x201EF8u;
    SET_GPR_U32(ctx, 31, 0x201F00u);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201F00u; }
        if (ctx->pc != 0x201F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201F00u; }
        if (ctx->pc != 0x201F00u) { return; }
    }
    ctx->pc = 0x201F00u;
    // 0x201f00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x201f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201f04: 0xc0807e2  jal         func_201F88
    ctx->pc = 0x201F04u;
    SET_GPR_U32(ctx, 31, 0x201F0Cu);
    ctx->pc = 0x201F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201F04u;
            // 0x201f08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201F88u;
    if (runtime->hasFunction(0x201F88u)) {
        auto targetFn = runtime->lookupFunction(0x201F88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201F0Cu; }
        if (ctx->pc != 0x201F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201F88_0x201f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201F0Cu; }
        if (ctx->pc != 0x201F0Cu) { return; }
    }
    ctx->pc = 0x201F0Cu;
    // 0x201f0c: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x201f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x201f10: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x201f10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x201f14: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x201f14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x201f18: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x201f18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x201f1c: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x201f1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x201f20: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x201f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x201f24: 0x3e00008  jr          $ra
    ctx->pc = 0x201F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201F24u;
            // 0x201f28: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201EB0u: goto label_201eb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201F2Cu;
    // 0x201f2c: 0x0  nop
    ctx->pc = 0x201f2cu;
    // NOP
}
