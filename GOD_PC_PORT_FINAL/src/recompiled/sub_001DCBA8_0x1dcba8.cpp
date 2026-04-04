#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCBA8
// Address: 0x1dcba8 - 0x1dcd78
void sub_001DCBA8_0x1dcba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCBA8_0x1dcba8");
#endif

    ctx->pc = 0x1dcba8u;

    // 0x1dcba8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1dcba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1dcbac: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1dcbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1dcbb0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1dcbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbb4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1dcbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1dcbb8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1dcbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1dcbbc: 0xc09102e  jal         func_2440B8
    ctx->pc = 0x1DCBBCu;
    SET_GPR_U32(ctx, 31, 0x1DCBC4u);
    ctx->pc = 0x1DCBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCBBCu;
            // 0x1dcbc0: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2440B8u;
    if (runtime->hasFunction(0x2440B8u)) {
        auto targetFn = runtime->lookupFunction(0x2440B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCBC4u; }
        if (ctx->pc != 0x1DCBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2440b8_0x2440e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCBC4u; }
        if (ctx->pc != 0x1DCBC4u) { return; }
    }
    ctx->pc = 0x1DCBC4u;
    // 0x1dcbc4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1dcbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1dcbc8: 0xc04f856  jal         func_13E158
    ctx->pc = 0x1DCBC8u;
    SET_GPR_U32(ctx, 31, 0x1DCBD0u);
    ctx->pc = 0x1DCBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCBC8u;
            // 0x1dcbcc: 0x8c44ec4c  lw          $a0, -0x13B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCBD0u; }
        if (ctx->pc != 0x1DCBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCBD0u; }
        if (ctx->pc != 0x1DCBD0u) { return; }
    }
    ctx->pc = 0x1DCBD0u;
    // 0x1dcbd0: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x1DCBD0u;
    SET_GPR_U32(ctx, 31, 0x1DCBD8u);
    ctx->pc = 0x1DCBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCBD0u;
            // 0x1dcbd4: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCBD8u; }
        if (ctx->pc != 0x1DCBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCBD8u; }
        if (ctx->pc != 0x1DCBD8u) { return; }
    }
    ctx->pc = 0x1DCBD8u;
    // 0x1dcbd8: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1DCBD8u;
    SET_GPR_U32(ctx, 31, 0x1DCBE0u);
    ctx->pc = 0x1DCBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCBD8u;
            // 0x1dcbdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCBE0u; }
        if (ctx->pc != 0x1DCBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCBE0u; }
        if (ctx->pc != 0x1DCBE0u) { return; }
    }
    ctx->pc = 0x1DCBE0u;
    // 0x1dcbe0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dcbe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbe4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1dcbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1dcbe8: 0x24a56d18  addiu       $a1, $a1, 0x6D18
    ctx->pc = 0x1dcbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27928));
    // 0x1dcbec: 0xc060978  jal         func_1825E0
    ctx->pc = 0x1DCBECu;
    SET_GPR_U32(ctx, 31, 0x1DCBF4u);
    ctx->pc = 0x1DCBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCBECu;
            // 0x1dcbf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCBF4u; }
        if (ctx->pc != 0x1DCBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCBF4u; }
        if (ctx->pc != 0x1DCBF4u) { return; }
    }
    ctx->pc = 0x1DCBF4u;
    // 0x1dcbf4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1dcbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1dcbf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dcbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbfc: 0x24429720  addiu       $v0, $v0, -0x68E0
    ctx->pc = 0x1dcbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940448));
    // 0x1dcc00: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x1DCC00u;
    SET_GPR_U32(ctx, 31, 0x1DCC08u);
    ctx->pc = 0x1DCC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCC00u;
            // 0x1dcc04: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC08u; }
        if (ctx->pc != 0x1DCC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC08u; }
        if (ctx->pc != 0x1DCC08u) { return; }
    }
    ctx->pc = 0x1DCC08u;
    // 0x1dcc08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dcc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc0c: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x1DCC0Cu;
    SET_GPR_U32(ctx, 31, 0x1DCC14u);
    ctx->pc = 0x1DCC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCC0Cu;
            // 0x1dcc10: 0xae30d2a0  sw          $s0, -0x2D60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294955680), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC14u; }
        if (ctx->pc != 0x1DCC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC14u; }
        if (ctx->pc != 0x1DCC14u) { return; }
    }
    ctx->pc = 0x1DCC14u;
    // 0x1dcc14: 0x8e24d2a0  lw          $a0, -0x2D60($s1)
    ctx->pc = 0x1dcc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294955680)));
    // 0x1dcc18: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x1dcc18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x1dcc1c: 0x3c050a5f  lui         $a1, 0xA5F
    ctx->pc = 0x1dcc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2655 << 16));
    // 0x1dcc20: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1dcc20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc24: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x1dcc24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1dcc28: 0x25086260  addiu       $t0, $t0, 0x6260
    ctx->pc = 0x1dcc28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25184));
    // 0x1dcc2c: 0x34a57d1a  ori         $a1, $a1, 0x7D1A
    ctx->pc = 0x1dcc2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32026);
    // 0x1dcc30: 0xc06074a  jal         func_181D28
    ctx->pc = 0x1DCC30u;
    SET_GPR_U32(ctx, 31, 0x1DCC38u);
    ctx->pc = 0x1DCC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCC30u;
            // 0x1dcc34: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181D28u;
    if (runtime->hasFunction(0x181D28u)) {
        auto targetFn = runtime->lookupFunction(0x181D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC38u; }
        if (ctx->pc != 0x1DCC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181D28_0x181d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC38u; }
        if (ctx->pc != 0x1DCC38u) { return; }
    }
    ctx->pc = 0x1DCC38u;
    // 0x1dcc38: 0x8e24d2a0  lw          $a0, -0x2D60($s1)
    ctx->pc = 0x1dcc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294955680)));
    // 0x1dcc3c: 0x3c05cb86  lui         $a1, 0xCB86
    ctx->pc = 0x1dcc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52102 << 16));
    // 0x1dcc40: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1dcc40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc44: 0x27a7001a  addiu       $a3, $sp, 0x1A
    ctx->pc = 0x1dcc44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 26));
    // 0x1dcc48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dcc48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dcc4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc50: 0xc06074a  jal         func_181D28
    ctx->pc = 0x1DCC50u;
    SET_GPR_U32(ctx, 31, 0x1DCC58u);
    ctx->pc = 0x1DCC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCC50u;
            // 0x1dcc54: 0x34a55a1c  ori         $a1, $a1, 0x5A1C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)23068);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181D28u;
    if (runtime->hasFunction(0x181D28u)) {
        auto targetFn = runtime->lookupFunction(0x181D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC58u; }
        if (ctx->pc != 0x1DCC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181D28_0x181d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC58u; }
        if (ctx->pc != 0x1DCC58u) { return; }
    }
    ctx->pc = 0x1DCC58u;
    // 0x1dcc58: 0x8e24d2a0  lw          $a0, -0x2D60($s1)
    ctx->pc = 0x1dcc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294955680)));
    // 0x1dcc5c: 0x3c05883a  lui         $a1, 0x883A
    ctx->pc = 0x1dcc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34874 << 16));
    // 0x1dcc60: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1dcc60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc64: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1dcc64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1dcc68: 0xc060570  jal         func_1815C0
    ctx->pc = 0x1DCC68u;
    SET_GPR_U32(ctx, 31, 0x1DCC70u);
    ctx->pc = 0x1DCC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCC68u;
            // 0x1dcc6c: 0x34a56970  ori         $a1, $a1, 0x6970 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26992);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC70u; }
        if (ctx->pc != 0x1DCC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC70u; }
        if (ctx->pc != 0x1DCC70u) { return; }
    }
    ctx->pc = 0x1DCC70u;
    // 0x1dcc70: 0x8e24d2a0  lw          $a0, -0x2D60($s1)
    ctx->pc = 0x1dcc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294955680)));
    // 0x1dcc74: 0x3c05c344  lui         $a1, 0xC344
    ctx->pc = 0x1dcc74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49988 << 16));
    // 0x1dcc78: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1dcc78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc7c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1dcc7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1dcc80: 0xc060570  jal         func_1815C0
    ctx->pc = 0x1DCC80u;
    SET_GPR_U32(ctx, 31, 0x1DCC88u);
    ctx->pc = 0x1DCC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCC80u;
            // 0x1dcc84: 0x34a51d8c  ori         $a1, $a1, 0x1D8C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7564);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC88u; }
        if (ctx->pc != 0x1DCC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC88u; }
        if (ctx->pc != 0x1DCC88u) { return; }
    }
    ctx->pc = 0x1DCC88u;
    // 0x1dcc88: 0x8e24d2a0  lw          $a0, -0x2D60($s1)
    ctx->pc = 0x1dcc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294955680)));
    // 0x1dcc8c: 0x3c057d92  lui         $a1, 0x7D92
    ctx->pc = 0x1dcc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32146 << 16));
    // 0x1dcc90: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1dcc90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc94: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x1dcc94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1dcc98: 0xc060570  jal         func_1815C0
    ctx->pc = 0x1DCC98u;
    SET_GPR_U32(ctx, 31, 0x1DCCA0u);
    ctx->pc = 0x1DCC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCC98u;
            // 0x1dcc9c: 0x34a59791  ori         $a1, $a1, 0x9791 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)38801);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCCA0u; }
        if (ctx->pc != 0x1DCCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCCA0u; }
        if (ctx->pc != 0x1DCCA0u) { return; }
    }
    ctx->pc = 0x1DCCA0u;
    // 0x1dcca0: 0x8e24d2a0  lw          $a0, -0x2D60($s1)
    ctx->pc = 0x1dcca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294955680)));
    // 0x1dcca4: 0x3c05b9a0  lui         $a1, 0xB9A0
    ctx->pc = 0x1dcca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47520 << 16));
    // 0x1dcca8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1dcca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dccac: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x1dccacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1dccb0: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x1DCCB0u;
    SET_GPR_U32(ctx, 31, 0x1DCCB8u);
    ctx->pc = 0x1DCCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCCB0u;
            // 0x1dccb4: 0x34a5d2ad  ori         $a1, $a1, 0xD2AD (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53933);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCCB8u; }
        if (ctx->pc != 0x1DCCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCCB8u; }
        if (ctx->pc != 0x1DCCB8u) { return; }
    }
    ctx->pc = 0x1DCCB8u;
    // 0x1dccb8: 0x8e24d2a0  lw          $a0, -0x2D60($s1)
    ctx->pc = 0x1dccb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294955680)));
    // 0x1dccbc: 0x3c054932  lui         $a1, 0x4932
    ctx->pc = 0x1dccbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18738 << 16));
    // 0x1dccc0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1dccc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dccc4: 0x27a7002a  addiu       $a3, $sp, 0x2A
    ctx->pc = 0x1dccc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 42));
    // 0x1dccc8: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x1DCCC8u;
    SET_GPR_U32(ctx, 31, 0x1DCCD0u);
    ctx->pc = 0x1DCCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCCC8u;
            // 0x1dcccc: 0x34a52803  ori         $a1, $a1, 0x2803 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)10243);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCCD0u; }
        if (ctx->pc != 0x1DCCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCCD0u; }
        if (ctx->pc != 0x1DCCD0u) { return; }
    }
    ctx->pc = 0x1DCCD0u;
    // 0x1dccd0: 0x8e24d2a0  lw          $a0, -0x2D60($s1)
    ctx->pc = 0x1dccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294955680)));
    // 0x1dccd4: 0x3c05350a  lui         $a1, 0x350A
    ctx->pc = 0x1dccd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)13578 << 16));
    // 0x1dccd8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1dccd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dccdc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1dccdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1dcce0: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x1DCCE0u;
    SET_GPR_U32(ctx, 31, 0x1DCCE8u);
    ctx->pc = 0x1DCCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCCE0u;
            // 0x1dcce4: 0x34a554bc  ori         $a1, $a1, 0x54BC (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21692);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCCE8u; }
        if (ctx->pc != 0x1DCCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCCE8u; }
        if (ctx->pc != 0x1DCCE8u) { return; }
    }
    ctx->pc = 0x1DCCE8u;
    // 0x1dcce8: 0x8e24d2a0  lw          $a0, -0x2D60($s1)
    ctx->pc = 0x1dcce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294955680)));
    // 0x1dccec: 0x3c05c49b  lui         $a1, 0xC49B
    ctx->pc = 0x1dccecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50331 << 16));
    // 0x1dccf0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1dccf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dccf4: 0x27a7002e  addiu       $a3, $sp, 0x2E
    ctx->pc = 0x1dccf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 46));
    // 0x1dccf8: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x1DCCF8u;
    SET_GPR_U32(ctx, 31, 0x1DCD00u);
    ctx->pc = 0x1DCCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCCF8u;
            // 0x1dccfc: 0x34a5aa12  ori         $a1, $a1, 0xAA12 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43538);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCD00u; }
        if (ctx->pc != 0x1DCD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCD00u; }
        if (ctx->pc != 0x1DCD00u) { return; }
    }
    ctx->pc = 0x1DCD00u;
    // 0x1dcd00: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1dcd00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dcd04: 0x8e24d2a0  lw          $a0, -0x2D60($s1)
    ctx->pc = 0x1dcd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294955680)));
    // 0x1dcd08: 0x3c059319  lui         $a1, 0x9319
    ctx->pc = 0x1dcd08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37657 << 16));
    // 0x1dcd0c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1dcd0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd10: 0x34a51d85  ori         $a1, $a1, 0x1D85
    ctx->pc = 0x1dcd10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7557);
    // 0x1dcd14: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1dcd14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd18: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x1DCD18u;
    SET_GPR_U32(ctx, 31, 0x1DCD20u);
    ctx->pc = 0x1DCD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCD18u;
            // 0x1dcd1c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCD20u; }
        if (ctx->pc != 0x1DCD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCD20u; }
        if (ctx->pc != 0x1DCD20u) { return; }
    }
    ctx->pc = 0x1DCD20u;
    // 0x1dcd20: 0x8e24d2a0  lw          $a0, -0x2D60($s1)
    ctx->pc = 0x1dcd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294955680)));
    // 0x1dcd24: 0x3c05fbd4  lui         $a1, 0xFBD4
    ctx->pc = 0x1dcd24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64468 << 16));
    // 0x1dcd28: 0x34a5957a  ori         $a1, $a1, 0x957A
    ctx->pc = 0x1dcd28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)38266);
    // 0x1dcd2c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1dcd2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd30: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1dcd30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd34: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x1DCD34u;
    SET_GPR_U32(ctx, 31, 0x1DCD3Cu);
    ctx->pc = 0x1DCD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCD34u;
            // 0x1dcd38: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCD3Cu; }
        if (ctx->pc != 0x1DCD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCD3Cu; }
        if (ctx->pc != 0x1DCD3Cu) { return; }
    }
    ctx->pc = 0x1DCD3Cu;
    // 0x1dcd3c: 0xc04f860  jal         func_13E180
    ctx->pc = 0x1DCD3Cu;
    SET_GPR_U32(ctx, 31, 0x1DCD44u);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCD44u; }
        if (ctx->pc != 0x1DCD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCD44u; }
        if (ctx->pc != 0x1DCD44u) { return; }
    }
    ctx->pc = 0x1DCD44u;
    // 0x1dcd44: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1dcd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1dcd48: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1dcd48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dcd4c: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x1dcd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x1dcd50: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCD50u;
    {
        const bool branch_taken_0x1dcd50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCD50u;
            // 0x1dcd54: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd50) {
            ctx->pc = 0x1DCD60u;
            goto label_1dcd60;
        }
    }
    ctx->pc = 0x1DCD58u;
    // 0x1dcd58: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1DCD58u;
    SET_GPR_U32(ctx, 31, 0x1DCD60u);
    ctx->pc = 0x1DCD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCD58u;
            // 0x1dcd5c: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCD60u; }
        if (ctx->pc != 0x1DCD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCD60u; }
        if (ctx->pc != 0x1DCD60u) { return; }
    }
    ctx->pc = 0x1DCD60u;
label_1dcd60:
    // 0x1dcd60: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1dcd60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dcd64: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1dcd64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dcd68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1dcd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dcd6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCD6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCD6Cu;
            // 0x1dcd70: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DCD60u: goto label_1dcd60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DCD74u;
    // 0x1dcd74: 0x0  nop
    ctx->pc = 0x1dcd74u;
    // NOP
}
