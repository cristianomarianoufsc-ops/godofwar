#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020CC50
// Address: 0x20cc50 - 0x20cdc0
void sub_0020CC50_0x20cc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CC50_0x20cc50");
#endif

    ctx->pc = 0x20cc50u;

    // 0x20cc50: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x20cc54: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x20cc54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x20cc58: 0x8c44ec4c  lw          $a0, -0x13B4($v0)
    ctx->pc = 0x20cc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
    // 0x20cc5c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x20cc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x20cc60: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x20cc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x20cc64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x20cc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x20cc68: 0xc04f856  jal         func_13E158
    ctx->pc = 0x20CC68u;
    SET_GPR_U32(ctx, 31, 0x20CC70u);
    ctx->pc = 0x20CC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CC68u;
            // 0x20cc6c: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CC70u; }
        if (ctx->pc != 0x20CC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CC70u; }
        if (ctx->pc != 0x20CC70u) { return; }
    }
    ctx->pc = 0x20CC70u;
    // 0x20cc70: 0xc091008  jal         func_244020
    ctx->pc = 0x20CC70u;
    SET_GPR_U32(ctx, 31, 0x20CC78u);
    ctx->pc = 0x20CC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CC70u;
            // 0x20cc74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244020u;
    if (runtime->hasFunction(0x244020u)) {
        auto targetFn = runtime->lookupFunction(0x244020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CC78u; }
        if (ctx->pc != 0x20CC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244020_0x244020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CC78u; }
        if (ctx->pc != 0x20CC78u) { return; }
    }
    ctx->pc = 0x20CC78u;
    // 0x20cc78: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x20CC78u;
    SET_GPR_U32(ctx, 31, 0x20CC80u);
    ctx->pc = 0x20CC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CC78u;
            // 0x20cc7c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CC80u; }
        if (ctx->pc != 0x20CC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CC80u; }
        if (ctx->pc != 0x20CC80u) { return; }
    }
    ctx->pc = 0x20CC80u;
    // 0x20cc80: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x20CC80u;
    SET_GPR_U32(ctx, 31, 0x20CC88u);
    ctx->pc = 0x20CC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CC80u;
            // 0x20cc84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CC88u; }
        if (ctx->pc != 0x20CC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CC88u; }
        if (ctx->pc != 0x20CC88u) { return; }
    }
    ctx->pc = 0x20CC88u;
    // 0x20cc88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20cc88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cc8c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x20cc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x20cc90: 0x24a57c78  addiu       $a1, $a1, 0x7C78
    ctx->pc = 0x20cc90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31864));
    // 0x20cc94: 0xc060978  jal         func_1825E0
    ctx->pc = 0x20CC94u;
    SET_GPR_U32(ctx, 31, 0x20CC9Cu);
    ctx->pc = 0x20CC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CC94u;
            // 0x20cc98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CC9Cu; }
        if (ctx->pc != 0x20CC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CC9Cu; }
        if (ctx->pc != 0x20CC9Cu) { return; }
    }
    ctx->pc = 0x20CC9Cu;
    // 0x20cc9c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x20cc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x20cca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20cca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cca4: 0x24429760  addiu       $v0, $v0, -0x68A0
    ctx->pc = 0x20cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940512));
    // 0x20cca8: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x20CCA8u;
    SET_GPR_U32(ctx, 31, 0x20CCB0u);
    ctx->pc = 0x20CCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CCA8u;
            // 0x20ccac: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CCB0u; }
        if (ctx->pc != 0x20CCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CCB0u; }
        if (ctx->pc != 0x20CCB0u) { return; }
    }
    ctx->pc = 0x20CCB0u;
    // 0x20ccb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ccb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ccb4: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x20CCB4u;
    SET_GPR_U32(ctx, 31, 0x20CCBCu);
    ctx->pc = 0x20CCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CCB4u;
            // 0x20ccb8: 0xae30e458  sw          $s0, -0x1BA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294960216), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CCBCu; }
        if (ctx->pc != 0x20CCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CCBCu; }
        if (ctx->pc != 0x20CCBCu) { return; }
    }
    ctx->pc = 0x20CCBCu;
    // 0x20ccbc: 0x8e24e458  lw          $a0, -0x1BA8($s1)
    ctx->pc = 0x20ccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960216)));
    // 0x20ccc0: 0x3c054b0f  lui         $a1, 0x4B0F
    ctx->pc = 0x20ccc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19215 << 16));
    // 0x20ccc4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20ccc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ccc8: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x20ccc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20cccc: 0xc060570  jal         func_1815C0
    ctx->pc = 0x20CCCCu;
    SET_GPR_U32(ctx, 31, 0x20CCD4u);
    ctx->pc = 0x20CCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CCCCu;
            // 0x20ccd0: 0x34a56331  ori         $a1, $a1, 0x6331 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25393);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CCD4u; }
        if (ctx->pc != 0x20CCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CCD4u; }
        if (ctx->pc != 0x20CCD4u) { return; }
    }
    ctx->pc = 0x20CCD4u;
    // 0x20ccd4: 0x8e24e458  lw          $a0, -0x1BA8($s1)
    ctx->pc = 0x20ccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960216)));
    // 0x20ccd8: 0x3c054b0f  lui         $a1, 0x4B0F
    ctx->pc = 0x20ccd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19215 << 16));
    // 0x20ccdc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20ccdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cce0: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x20cce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x20cce4: 0xc060570  jal         func_1815C0
    ctx->pc = 0x20CCE4u;
    SET_GPR_U32(ctx, 31, 0x20CCECu);
    ctx->pc = 0x20CCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CCE4u;
            // 0x20cce8: 0x34a56326  ori         $a1, $a1, 0x6326 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25382);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CCECu; }
        if (ctx->pc != 0x20CCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CCECu; }
        if (ctx->pc != 0x20CCECu) { return; }
    }
    ctx->pc = 0x20CCECu;
    // 0x20ccec: 0x8e24e458  lw          $a0, -0x1BA8($s1)
    ctx->pc = 0x20ccecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960216)));
    // 0x20ccf0: 0x3c054b0f  lui         $a1, 0x4B0F
    ctx->pc = 0x20ccf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19215 << 16));
    // 0x20ccf4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20ccf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ccf8: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x20ccf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x20ccfc: 0xc060570  jal         func_1815C0
    ctx->pc = 0x20CCFCu;
    SET_GPR_U32(ctx, 31, 0x20CD04u);
    ctx->pc = 0x20CD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CCFCu;
            // 0x20cd00: 0x34a56321  ori         $a1, $a1, 0x6321 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25377);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CD04u; }
        if (ctx->pc != 0x20CD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CD04u; }
        if (ctx->pc != 0x20CD04u) { return; }
    }
    ctx->pc = 0x20CD04u;
    // 0x20cd04: 0x8e24e458  lw          $a0, -0x1BA8($s1)
    ctx->pc = 0x20cd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960216)));
    // 0x20cd08: 0x3c054b0f  lui         $a1, 0x4B0F
    ctx->pc = 0x20cd08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19215 << 16));
    // 0x20cd0c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20cd0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cd10: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x20cd10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x20cd14: 0xc060570  jal         func_1815C0
    ctx->pc = 0x20CD14u;
    SET_GPR_U32(ctx, 31, 0x20CD1Cu);
    ctx->pc = 0x20CD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CD14u;
            // 0x20cd18: 0x34a56320  ori         $a1, $a1, 0x6320 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25376);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CD1Cu; }
        if (ctx->pc != 0x20CD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CD1Cu; }
        if (ctx->pc != 0x20CD1Cu) { return; }
    }
    ctx->pc = 0x20CD1Cu;
    // 0x20cd1c: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x20CD1Cu;
    SET_GPR_U32(ctx, 31, 0x20CD24u);
    ctx->pc = 0x20CD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CD1Cu;
            // 0x20cd20: 0x8e24e458  lw          $a0, -0x1BA8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960216)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CD24u; }
        if (ctx->pc != 0x20CD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CD24u; }
        if (ctx->pc != 0x20CD24u) { return; }
    }
    ctx->pc = 0x20CD24u;
    // 0x20cd24: 0x8e24e458  lw          $a0, -0x1BA8($s1)
    ctx->pc = 0x20cd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960216)));
    // 0x20cd28: 0x3c05cea9  lui         $a1, 0xCEA9
    ctx->pc = 0x20cd28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52905 << 16));
    // 0x20cd2c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20cd2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cd30: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x20cd30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20cd34: 0xc0605b2  jal         func_1816C8
    ctx->pc = 0x20CD34u;
    SET_GPR_U32(ctx, 31, 0x20CD3Cu);
    ctx->pc = 0x20CD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CD34u;
            // 0x20cd38: 0x34a5063f  ori         $a1, $a1, 0x63F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1599);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816C8u;
    if (runtime->hasFunction(0x1816C8u)) {
        auto targetFn = runtime->lookupFunction(0x1816C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CD3Cu; }
        if (ctx->pc != 0x20CD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001816C8_0x1816c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CD3Cu; }
        if (ctx->pc != 0x20CD3Cu) { return; }
    }
    ctx->pc = 0x20CD3Cu;
    // 0x20cd3c: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x20CD3Cu;
    SET_GPR_U32(ctx, 31, 0x20CD44u);
    ctx->pc = 0x20CD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CD3Cu;
            // 0x20cd40: 0x8e24e458  lw          $a0, -0x1BA8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960216)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CD44u; }
        if (ctx->pc != 0x20CD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CD44u; }
        if (ctx->pc != 0x20CD44u) { return; }
    }
    ctx->pc = 0x20CD44u;
    // 0x20cd44: 0x8e24e458  lw          $a0, -0x1BA8($s1)
    ctx->pc = 0x20cd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960216)));
    // 0x20cd48: 0x3c080030  lui         $t0, 0x30
    ctx->pc = 0x20cd48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48 << 16));
    // 0x20cd4c: 0x3c058dc4  lui         $a1, 0x8DC4
    ctx->pc = 0x20cd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36292 << 16));
    // 0x20cd50: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20cd50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cd54: 0x27a70054  addiu       $a3, $sp, 0x54
    ctx->pc = 0x20cd54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x20cd58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20cd58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cd5c: 0x25084648  addiu       $t0, $t0, 0x4648
    ctx->pc = 0x20cd5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 17992));
    // 0x20cd60: 0xc06074a  jal         func_181D28
    ctx->pc = 0x20CD60u;
    SET_GPR_U32(ctx, 31, 0x20CD68u);
    ctx->pc = 0x20CD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CD60u;
            // 0x20cd64: 0x34a5c112  ori         $a1, $a1, 0xC112 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49426);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181D28u;
    if (runtime->hasFunction(0x181D28u)) {
        auto targetFn = runtime->lookupFunction(0x181D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CD68u; }
        if (ctx->pc != 0x20CD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181D28_0x181d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CD68u; }
        if (ctx->pc != 0x20CD68u) { return; }
    }
    ctx->pc = 0x20CD68u;
    // 0x20cd68: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x20CD68u;
    SET_GPR_U32(ctx, 31, 0x20CD70u);
    ctx->pc = 0x20CD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CD68u;
            // 0x20cd6c: 0x8e24e458  lw          $a0, -0x1BA8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960216)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CD70u; }
        if (ctx->pc != 0x20CD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CD70u; }
        if (ctx->pc != 0x20CD70u) { return; }
    }
    ctx->pc = 0x20CD70u;
    // 0x20cd70: 0x8e24e458  lw          $a0, -0x1BA8($s1)
    ctx->pc = 0x20cd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960216)));
    // 0x20cd74: 0x3c059857  lui         $a1, 0x9857
    ctx->pc = 0x20cd74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38999 << 16));
    // 0x20cd78: 0x34a52077  ori         $a1, $a1, 0x2077
    ctx->pc = 0x20cd78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8311);
    // 0x20cd7c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20cd7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cd80: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x20CD80u;
    SET_GPR_U32(ctx, 31, 0x20CD88u);
    ctx->pc = 0x20CD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CD80u;
            // 0x20cd84: 0x27a70058  addiu       $a3, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CD88u; }
        if (ctx->pc != 0x20CD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CD88u; }
        if (ctx->pc != 0x20CD88u) { return; }
    }
    ctx->pc = 0x20CD88u;
    // 0x20cd88: 0xc04f860  jal         func_13E180
    ctx->pc = 0x20CD88u;
    SET_GPR_U32(ctx, 31, 0x20CD90u);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CD90u; }
        if (ctx->pc != 0x20CD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CD90u; }
        if (ctx->pc != 0x20CD90u) { return; }
    }
    ctx->pc = 0x20CD90u;
    // 0x20cd90: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x20cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x20cd94: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x20cd94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20cd98: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x20cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x20cd9c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20CD9Cu;
    {
        const bool branch_taken_0x20cd9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CD9Cu;
            // 0x20cda0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cd9c) {
            ctx->pc = 0x20CDACu;
            goto label_20cdac;
        }
    }
    ctx->pc = 0x20CDA4u;
    // 0x20cda4: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x20CDA4u;
    SET_GPR_U32(ctx, 31, 0x20CDACu);
    ctx->pc = 0x20CDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CDA4u;
            // 0x20cda8: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CDACu; }
        if (ctx->pc != 0x20CDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CDACu; }
        if (ctx->pc != 0x20CDACu) { return; }
    }
    ctx->pc = 0x20CDACu;
label_20cdac:
    // 0x20cdac: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x20cdacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20cdb0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x20cdb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20cdb4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x20cdb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20cdb8: 0x3e00008  jr          $ra
    ctx->pc = 0x20CDB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CDB8u;
            // 0x20cdbc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20CDACu: goto label_20cdac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20CDC0u;
}
