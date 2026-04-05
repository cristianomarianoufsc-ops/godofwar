#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F3E40
// Address: 0x1f3e40 - 0x1f3f40
void sub_001F3E40_0x1f3e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3E40_0x1f3e40");
#endif

    ctx->pc = 0x1f3e40u;

    // 0x1f3e40: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1f3e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1f3e44: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f3e44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f3e48: 0x8c44ec4c  lw          $a0, -0x13B4($v0)
    ctx->pc = 0x1f3e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
    // 0x1f3e4c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f3e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1f3e50: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f3e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1f3e54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f3e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f3e58: 0xc04f856  jal         func_13E158
    ctx->pc = 0x1F3E58u;
    SET_GPR_U32(ctx, 31, 0x1F3E60u);
    ctx->pc = 0x1F3E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3E58u;
            // 0x1f3e5c: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E60u; }
        if (ctx->pc != 0x1F3E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E60u; }
        if (ctx->pc != 0x1F3E60u) { return; }
    }
    ctx->pc = 0x1F3E60u;
    // 0x1f3e60: 0xc0912d8  jal         func_244B60
    ctx->pc = 0x1F3E60u;
    SET_GPR_U32(ctx, 31, 0x1F3E68u);
    ctx->pc = 0x1F3E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3E60u;
            // 0x1f3e64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244B60u;
    if (runtime->hasFunction(0x244B60u)) {
        auto targetFn = runtime->lookupFunction(0x244B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E68u; }
        if (ctx->pc != 0x1F3E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_244b60_0x244b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E68u; }
        if (ctx->pc != 0x1F3E68u) { return; }
    }
    ctx->pc = 0x1F3E68u;
    // 0x1f3e68: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x1F3E68u;
    SET_GPR_U32(ctx, 31, 0x1F3E70u);
    ctx->pc = 0x1F3E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3E68u;
            // 0x1f3e6c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E70u; }
        if (ctx->pc != 0x1F3E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E70u; }
        if (ctx->pc != 0x1F3E70u) { return; }
    }
    ctx->pc = 0x1F3E70u;
    // 0x1f3e70: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1F3E70u;
    SET_GPR_U32(ctx, 31, 0x1F3E78u);
    ctx->pc = 0x1F3E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3E70u;
            // 0x1f3e74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E78u; }
        if (ctx->pc != 0x1F3E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E78u; }
        if (ctx->pc != 0x1F3E78u) { return; }
    }
    ctx->pc = 0x1F3E78u;
    // 0x1f3e78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f3e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3e7c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f3e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f3e80: 0x24a57328  addiu       $a1, $a1, 0x7328
    ctx->pc = 0x1f3e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29480));
    // 0x1f3e84: 0xc060978  jal         func_1825E0
    ctx->pc = 0x1F3E84u;
    SET_GPR_U32(ctx, 31, 0x1F3E8Cu);
    ctx->pc = 0x1F3E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3E84u;
            // 0x1f3e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E8Cu; }
        if (ctx->pc != 0x1F3E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E8Cu; }
        if (ctx->pc != 0x1F3E8Cu) { return; }
    }
    ctx->pc = 0x1F3E8Cu;
    // 0x1f3e8c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1f3e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1f3e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3e94: 0x24428b50  addiu       $v0, $v0, -0x74B0
    ctx->pc = 0x1f3e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937424));
    // 0x1f3e98: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x1F3E98u;
    SET_GPR_U32(ctx, 31, 0x1F3EA0u);
    ctx->pc = 0x1F3E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3E98u;
            // 0x1f3e9c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3EA0u; }
        if (ctx->pc != 0x1F3EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3EA0u; }
        if (ctx->pc != 0x1F3EA0u) { return; }
    }
    ctx->pc = 0x1F3EA0u;
    // 0x1f3ea0: 0x3c05d109  lui         $a1, 0xD109
    ctx->pc = 0x1f3ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53513 << 16));
    // 0x1f3ea4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f3ea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3ea8: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x1f3ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1f3eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3eb0: 0x34a5e694  ori         $a1, $a1, 0xE694
    ctx->pc = 0x1f3eb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59028);
    // 0x1f3eb4: 0xc060570  jal         func_1815C0
    ctx->pc = 0x1F3EB4u;
    SET_GPR_U32(ctx, 31, 0x1F3EBCu);
    ctx->pc = 0x1F3EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3EB4u;
            // 0x1f3eb8: 0xae30e2c8  sw          $s0, -0x1D38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294959816), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3EBCu; }
        if (ctx->pc != 0x1F3EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3EBCu; }
        if (ctx->pc != 0x1F3EBCu) { return; }
    }
    ctx->pc = 0x1F3EBCu;
    // 0x1f3ebc: 0x8e24e2c8  lw          $a0, -0x1D38($s1)
    ctx->pc = 0x1f3ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294959816)));
    // 0x1f3ec0: 0x3c0597f0  lui         $a1, 0x97F0
    ctx->pc = 0x1f3ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38896 << 16));
    // 0x1f3ec4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f3ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3ec8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1f3ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1f3ecc: 0xc060570  jal         func_1815C0
    ctx->pc = 0x1F3ECCu;
    SET_GPR_U32(ctx, 31, 0x1F3ED4u);
    ctx->pc = 0x1F3ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3ECCu;
            // 0x1f3ed0: 0x34a553d6  ori         $a1, $a1, 0x53D6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21462);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3ED4u; }
        if (ctx->pc != 0x1F3ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3ED4u; }
        if (ctx->pc != 0x1F3ED4u) { return; }
    }
    ctx->pc = 0x1F3ED4u;
    // 0x1f3ed4: 0x8e24e2c8  lw          $a0, -0x1D38($s1)
    ctx->pc = 0x1f3ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294959816)));
    // 0x1f3ed8: 0x3c050ee2  lui         $a1, 0xEE2
    ctx->pc = 0x1f3ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3810 << 16));
    // 0x1f3edc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f3edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3ee0: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1f3ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f3ee4: 0xc060570  jal         func_1815C0
    ctx->pc = 0x1F3EE4u;
    SET_GPR_U32(ctx, 31, 0x1F3EECu);
    ctx->pc = 0x1F3EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3EE4u;
            // 0x1f3ee8: 0x34a5a477  ori         $a1, $a1, 0xA477 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42103);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3EECu; }
        if (ctx->pc != 0x1F3EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3EECu; }
        if (ctx->pc != 0x1F3EECu) { return; }
    }
    ctx->pc = 0x1F3EECu;
    // 0x1f3eec: 0x8e24e2c8  lw          $a0, -0x1D38($s1)
    ctx->pc = 0x1f3eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294959816)));
    // 0x1f3ef0: 0x3c05fc12  lui         $a1, 0xFC12
    ctx->pc = 0x1f3ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64530 << 16));
    // 0x1f3ef4: 0x34a5d3dc  ori         $a1, $a1, 0xD3DC
    ctx->pc = 0x1f3ef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54236);
    // 0x1f3ef8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f3ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3efc: 0xc060570  jal         func_1815C0
    ctx->pc = 0x1F3EFCu;
    SET_GPR_U32(ctx, 31, 0x1F3F04u);
    ctx->pc = 0x1F3F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3EFCu;
            // 0x1f3f00: 0x27a70024  addiu       $a3, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F04u; }
        if (ctx->pc != 0x1F3F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F04u; }
        if (ctx->pc != 0x1F3F04u) { return; }
    }
    ctx->pc = 0x1F3F04u;
    // 0x1f3f04: 0xc04f860  jal         func_13E180
    ctx->pc = 0x1F3F04u;
    SET_GPR_U32(ctx, 31, 0x1F3F0Cu);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F0Cu; }
        if (ctx->pc != 0x1F3F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F0Cu; }
        if (ctx->pc != 0x1F3F0Cu) { return; }
    }
    ctx->pc = 0x1F3F0Cu;
    // 0x1f3f0c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1f3f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1f3f10: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1f3f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f3f14: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x1f3f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x1f3f18: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3F18u;
    {
        const bool branch_taken_0x1f3f18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3F18u;
            // 0x1f3f1c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3f18) {
            ctx->pc = 0x1F3F28u;
            goto label_1f3f28;
        }
    }
    ctx->pc = 0x1F3F20u;
    // 0x1f3f20: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1F3F20u;
    SET_GPR_U32(ctx, 31, 0x1F3F28u);
    ctx->pc = 0x1F3F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3F20u;
            // 0x1f3f24: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F28u; }
        if (ctx->pc != 0x1F3F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F28u; }
        if (ctx->pc != 0x1F3F28u) { return; }
    }
    ctx->pc = 0x1F3F28u;
label_1f3f28:
    // 0x1f3f28: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f3f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f3f2c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f3f2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f3f30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f3f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3f34: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3F34u;
            // 0x1f3f38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3F28u: goto label_1f3f28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F3F3Cu;
    // 0x1f3f3c: 0x0  nop
    ctx->pc = 0x1f3f3cu;
    // NOP
}
