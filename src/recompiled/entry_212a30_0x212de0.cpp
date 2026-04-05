#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_212a30
// Address: 0x212a30 - 0x212de0
void entry_212a30_0x212de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_212a30_0x212de0");
#endif

    ctx->pc = 0x212a30u;

    // 0x212a30: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x212a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x212a34: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x212a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x212a38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x212a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a3c: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x212a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x212a40: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x212a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x212a44: 0xc091104  jal         func_244410
    ctx->pc = 0x212A44u;
    SET_GPR_U32(ctx, 31, 0x212A4Cu);
    ctx->pc = 0x212A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212A44u;
            // 0x212a48: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244410u;
    if (runtime->hasFunction(0x244410u)) {
        auto targetFn = runtime->lookupFunction(0x244410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A4Cu; }
        if (ctx->pc != 0x212A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_244410_0x2444d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A4Cu; }
        if (ctx->pc != 0x212A4Cu) { return; }
    }
    ctx->pc = 0x212A4Cu;
    // 0x212a4c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x212a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x212a50: 0xc04f856  jal         func_13E158
    ctx->pc = 0x212A50u;
    SET_GPR_U32(ctx, 31, 0x212A58u);
    ctx->pc = 0x212A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212A50u;
            // 0x212a54: 0x8c44ec4c  lw          $a0, -0x13B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A58u; }
        if (ctx->pc != 0x212A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A58u; }
        if (ctx->pc != 0x212A58u) { return; }
    }
    ctx->pc = 0x212A58u;
    // 0x212a58: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x212A58u;
    SET_GPR_U32(ctx, 31, 0x212A60u);
    ctx->pc = 0x212A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212A58u;
            // 0x212a5c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A60u; }
        if (ctx->pc != 0x212A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A60u; }
        if (ctx->pc != 0x212A60u) { return; }
    }
    ctx->pc = 0x212A60u;
    // 0x212a60: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x212A60u;
    SET_GPR_U32(ctx, 31, 0x212A68u);
    ctx->pc = 0x212A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212A60u;
            // 0x212a64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A68u; }
        if (ctx->pc != 0x212A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A68u; }
        if (ctx->pc != 0x212A68u) { return; }
    }
    ctx->pc = 0x212A68u;
    // 0x212a68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x212a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a6c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x212a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x212a70: 0x24a57d98  addiu       $a1, $a1, 0x7D98
    ctx->pc = 0x212a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32152));
    // 0x212a74: 0xc060978  jal         func_1825E0
    ctx->pc = 0x212A74u;
    SET_GPR_U32(ctx, 31, 0x212A7Cu);
    ctx->pc = 0x212A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212A74u;
            // 0x212a78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A7Cu; }
        if (ctx->pc != 0x212A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A7Cu; }
        if (ctx->pc != 0x212A7Cu) { return; }
    }
    ctx->pc = 0x212A7Cu;
    // 0x212a7c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x212a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x212a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a84: 0x24429310  addiu       $v0, $v0, -0x6CF0
    ctx->pc = 0x212a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939408));
    // 0x212a88: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x212A88u;
    SET_GPR_U32(ctx, 31, 0x212A90u);
    ctx->pc = 0x212A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212A88u;
            // 0x212a8c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A90u; }
        if (ctx->pc != 0x212A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A90u; }
        if (ctx->pc != 0x212A90u) { return; }
    }
    ctx->pc = 0x212A90u;
    // 0x212a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a94: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x212A94u;
    SET_GPR_U32(ctx, 31, 0x212A9Cu);
    ctx->pc = 0x212A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212A94u;
            // 0x212a98: 0xae30e464  sw          $s0, -0x1B9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294960228), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A9Cu; }
        if (ctx->pc != 0x212A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A9Cu; }
        if (ctx->pc != 0x212A9Cu) { return; }
    }
    ctx->pc = 0x212A9Cu;
    // 0x212a9c: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212aa0: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x212aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x212aa4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212aa8: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x212aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x212aac: 0xc060570  jal         func_1815C0
    ctx->pc = 0x212AACu;
    SET_GPR_U32(ctx, 31, 0x212AB4u);
    ctx->pc = 0x212AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212AACu;
            // 0x212ab0: 0x34a530c1  ori         $a1, $a1, 0x30C1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12481);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212AB4u; }
        if (ctx->pc != 0x212AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212AB4u; }
        if (ctx->pc != 0x212AB4u) { return; }
    }
    ctx->pc = 0x212AB4u;
    // 0x212ab4: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212ab8: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x212ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x212abc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212ac0: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x212ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x212ac4: 0xc060570  jal         func_1815C0
    ctx->pc = 0x212AC4u;
    SET_GPR_U32(ctx, 31, 0x212ACCu);
    ctx->pc = 0x212AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212AC4u;
            // 0x212ac8: 0x34a5eec2  ori         $a1, $a1, 0xEEC2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61122);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212ACCu; }
        if (ctx->pc != 0x212ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212ACCu; }
        if (ctx->pc != 0x212ACCu) { return; }
    }
    ctx->pc = 0x212ACCu;
    // 0x212acc: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x212ACCu;
    SET_GPR_U32(ctx, 31, 0x212AD4u);
    ctx->pc = 0x212AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212ACCu;
            // 0x212ad0: 0x8e24e464  lw          $a0, -0x1B9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212AD4u; }
        if (ctx->pc != 0x212AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212AD4u; }
        if (ctx->pc != 0x212AD4u) { return; }
    }
    ctx->pc = 0x212AD4u;
    // 0x212ad4: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212ad8: 0x3c056096  lui         $a1, 0x6096
    ctx->pc = 0x212ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24726 << 16));
    // 0x212adc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212ae0: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x212ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x212ae4: 0xc060570  jal         func_1815C0
    ctx->pc = 0x212AE4u;
    SET_GPR_U32(ctx, 31, 0x212AECu);
    ctx->pc = 0x212AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212AE4u;
            // 0x212ae8: 0x34a5febb  ori         $a1, $a1, 0xFEBB (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65211);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212AECu; }
        if (ctx->pc != 0x212AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212AECu; }
        if (ctx->pc != 0x212AECu) { return; }
    }
    ctx->pc = 0x212AECu;
    // 0x212aec: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212af0: 0x3c05fe46  lui         $a1, 0xFE46
    ctx->pc = 0x212af0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65094 << 16));
    // 0x212af4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212af8: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x212af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x212afc: 0xc060570  jal         func_1815C0
    ctx->pc = 0x212AFCu;
    SET_GPR_U32(ctx, 31, 0x212B04u);
    ctx->pc = 0x212B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212AFCu;
            // 0x212b00: 0x34a57fe6  ori         $a1, $a1, 0x7FE6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32742);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B04u; }
        if (ctx->pc != 0x212B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B04u; }
        if (ctx->pc != 0x212B04u) { return; }
    }
    ctx->pc = 0x212B04u;
    // 0x212b04: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212b08: 0x3c05b503  lui         $a1, 0xB503
    ctx->pc = 0x212b08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46339 << 16));
    // 0x212b0c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b10: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x212b10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x212b14: 0xc060570  jal         func_1815C0
    ctx->pc = 0x212B14u;
    SET_GPR_U32(ctx, 31, 0x212B1Cu);
    ctx->pc = 0x212B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212B14u;
            // 0x212b18: 0x34a5fbe4  ori         $a1, $a1, 0xFBE4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64484);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B1Cu; }
        if (ctx->pc != 0x212B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B1Cu; }
        if (ctx->pc != 0x212B1Cu) { return; }
    }
    ctx->pc = 0x212B1Cu;
    // 0x212b1c: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x212B1Cu;
    SET_GPR_U32(ctx, 31, 0x212B24u);
    ctx->pc = 0x212B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212B1Cu;
            // 0x212b20: 0x8e24e464  lw          $a0, -0x1B9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B24u; }
        if (ctx->pc != 0x212B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B24u; }
        if (ctx->pc != 0x212B24u) { return; }
    }
    ctx->pc = 0x212B24u;
    // 0x212b24: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212b28: 0x3c05ff5f  lui         $a1, 0xFF5F
    ctx->pc = 0x212b28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65375 << 16));
    // 0x212b2c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212b2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b30: 0x27a7008c  addiu       $a3, $sp, 0x8C
    ctx->pc = 0x212b30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x212b34: 0x34a55921  ori         $a1, $a1, 0x5921
    ctx->pc = 0x212b34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)22817);
    // 0x212b38: 0xc06081c  jal         func_182070
    ctx->pc = 0x212B38u;
    SET_GPR_U32(ctx, 31, 0x212B40u);
    ctx->pc = 0x212B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212B38u;
            // 0x212b3c: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B40u; }
        if (ctx->pc != 0x212B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B40u; }
        if (ctx->pc != 0x212B40u) { return; }
    }
    ctx->pc = 0x212B40u;
    // 0x212b40: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212b44: 0x3c05dc77  lui         $a1, 0xDC77
    ctx->pc = 0x212b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56439 << 16));
    // 0x212b48: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b4c: 0x27a700a4  addiu       $a3, $sp, 0xA4
    ctx->pc = 0x212b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x212b50: 0x34a5f412  ori         $a1, $a1, 0xF412
    ctx->pc = 0x212b50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62482);
    // 0x212b54: 0xc06081c  jal         func_182070
    ctx->pc = 0x212B54u;
    SET_GPR_U32(ctx, 31, 0x212B5Cu);
    ctx->pc = 0x212B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212B54u;
            // 0x212b58: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B5Cu; }
        if (ctx->pc != 0x212B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B5Cu; }
        if (ctx->pc != 0x212B5Cu) { return; }
    }
    ctx->pc = 0x212B5Cu;
    // 0x212b5c: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212b60: 0x3c054e2b  lui         $a1, 0x4E2B
    ctx->pc = 0x212b60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20011 << 16));
    // 0x212b64: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b68: 0x27a700bc  addiu       $a3, $sp, 0xBC
    ctx->pc = 0x212b68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x212b6c: 0x34a58035  ori         $a1, $a1, 0x8035
    ctx->pc = 0x212b6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32821);
    // 0x212b70: 0xc06081c  jal         func_182070
    ctx->pc = 0x212B70u;
    SET_GPR_U32(ctx, 31, 0x212B78u);
    ctx->pc = 0x212B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212B70u;
            // 0x212b74: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B78u; }
        if (ctx->pc != 0x212B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B78u; }
        if (ctx->pc != 0x212B78u) { return; }
    }
    ctx->pc = 0x212B78u;
    // 0x212b78: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212b7c: 0x3c05d7f2  lui         $a1, 0xD7F2
    ctx->pc = 0x212b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55282 << 16));
    // 0x212b80: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b84: 0x27a700d4  addiu       $a3, $sp, 0xD4
    ctx->pc = 0x212b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x212b88: 0x34a5bea8  ori         $a1, $a1, 0xBEA8
    ctx->pc = 0x212b88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48808);
    // 0x212b8c: 0xc06081c  jal         func_182070
    ctx->pc = 0x212B8Cu;
    SET_GPR_U32(ctx, 31, 0x212B94u);
    ctx->pc = 0x212B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212B8Cu;
            // 0x212b90: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B94u; }
        if (ctx->pc != 0x212B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B94u; }
        if (ctx->pc != 0x212B94u) { return; }
    }
    ctx->pc = 0x212B94u;
    // 0x212b94: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212b98: 0x3c05c5b0  lui         $a1, 0xC5B0
    ctx->pc = 0x212b98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50608 << 16));
    // 0x212b9c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212ba0: 0x27a700ec  addiu       $a3, $sp, 0xEC
    ctx->pc = 0x212ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x212ba4: 0x34a5169f  ori         $a1, $a1, 0x169F
    ctx->pc = 0x212ba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5791);
    // 0x212ba8: 0xc06081c  jal         func_182070
    ctx->pc = 0x212BA8u;
    SET_GPR_U32(ctx, 31, 0x212BB0u);
    ctx->pc = 0x212BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212BA8u;
            // 0x212bac: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212BB0u; }
        if (ctx->pc != 0x212BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212BB0u; }
        if (ctx->pc != 0x212BB0u) { return; }
    }
    ctx->pc = 0x212BB0u;
    // 0x212bb0: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212bb4: 0x3c053e92  lui         $a1, 0x3E92
    ctx->pc = 0x212bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16018 << 16));
    // 0x212bb8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212bbc: 0x27a70104  addiu       $a3, $sp, 0x104
    ctx->pc = 0x212bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x212bc0: 0x34a5b123  ori         $a1, $a1, 0xB123
    ctx->pc = 0x212bc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45347);
    // 0x212bc4: 0xc06081c  jal         func_182070
    ctx->pc = 0x212BC4u;
    SET_GPR_U32(ctx, 31, 0x212BCCu);
    ctx->pc = 0x212BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212BC4u;
            // 0x212bc8: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212BCCu; }
        if (ctx->pc != 0x212BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212BCCu; }
        if (ctx->pc != 0x212BCCu) { return; }
    }
    ctx->pc = 0x212BCCu;
    // 0x212bcc: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x212BCCu;
    SET_GPR_U32(ctx, 31, 0x212BD4u);
    ctx->pc = 0x212BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212BCCu;
            // 0x212bd0: 0x8e24e464  lw          $a0, -0x1B9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212BD4u; }
        if (ctx->pc != 0x212BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212BD4u; }
        if (ctx->pc != 0x212BD4u) { return; }
    }
    ctx->pc = 0x212BD4u;
    // 0x212bd4: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212bd8: 0x3c050b47  lui         $a1, 0xB47
    ctx->pc = 0x212bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2887 << 16));
    // 0x212bdc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212be0: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x212be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x212be4: 0x34a577db  ori         $a1, $a1, 0x77DB
    ctx->pc = 0x212be4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30683);
    // 0x212be8: 0xc06081c  jal         func_182070
    ctx->pc = 0x212BE8u;
    SET_GPR_U32(ctx, 31, 0x212BF0u);
    ctx->pc = 0x212BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212BE8u;
            // 0x212bec: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212BF0u; }
        if (ctx->pc != 0x212BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212BF0u; }
        if (ctx->pc != 0x212BF0u) { return; }
    }
    ctx->pc = 0x212BF0u;
    // 0x212bf0: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212bf4: 0x3c05d888  lui         $a1, 0xD888
    ctx->pc = 0x212bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55432 << 16));
    // 0x212bf8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212bf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212bfc: 0x27a70074  addiu       $a3, $sp, 0x74
    ctx->pc = 0x212bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x212c00: 0x34a5391e  ori         $a1, $a1, 0x391E
    ctx->pc = 0x212c00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14622);
    // 0x212c04: 0xc06081c  jal         func_182070
    ctx->pc = 0x212C04u;
    SET_GPR_U32(ctx, 31, 0x212C0Cu);
    ctx->pc = 0x212C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212C04u;
            // 0x212c08: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212C0Cu; }
        if (ctx->pc != 0x212C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212C0Cu; }
        if (ctx->pc != 0x212C0Cu) { return; }
    }
    ctx->pc = 0x212C0Cu;
    // 0x212c0c: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212c10: 0x3c052f2c  lui         $a1, 0x2F2C
    ctx->pc = 0x212c10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12076 << 16));
    // 0x212c14: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c18: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x212c18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x212c1c: 0x34a5e2c7  ori         $a1, $a1, 0xE2C7
    ctx->pc = 0x212c1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)58055);
    // 0x212c20: 0xc06081c  jal         func_182070
    ctx->pc = 0x212C20u;
    SET_GPR_U32(ctx, 31, 0x212C28u);
    ctx->pc = 0x212C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212C20u;
            // 0x212c24: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212C28u; }
        if (ctx->pc != 0x212C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212C28u; }
        if (ctx->pc != 0x212C28u) { return; }
    }
    ctx->pc = 0x212C28u;
    // 0x212c28: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212c2c: 0x3c05218d  lui         $a1, 0x218D
    ctx->pc = 0x212c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8589 << 16));
    // 0x212c30: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c34: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x212c34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x212c38: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x212c38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x212c3c: 0xc06081c  jal         func_182070
    ctx->pc = 0x212C3Cu;
    SET_GPR_U32(ctx, 31, 0x212C44u);
    ctx->pc = 0x212C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212C3Cu;
            // 0x212c40: 0x34a53481  ori         $a1, $a1, 0x3481 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13441);
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212C44u; }
        if (ctx->pc != 0x212C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212C44u; }
        if (ctx->pc != 0x212C44u) { return; }
    }
    ctx->pc = 0x212C44u;
    // 0x212c44: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212c48: 0x3c0593be  lui         $a1, 0x93BE
    ctx->pc = 0x212c48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37822 << 16));
    // 0x212c4c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c50: 0x27a7016c  addiu       $a3, $sp, 0x16C
    ctx->pc = 0x212c50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    // 0x212c54: 0xc060570  jal         func_1815C0
    ctx->pc = 0x212C54u;
    SET_GPR_U32(ctx, 31, 0x212C5Cu);
    ctx->pc = 0x212C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212C54u;
            // 0x212c58: 0x34a58101  ori         $a1, $a1, 0x8101 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33025);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212C5Cu; }
        if (ctx->pc != 0x212C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212C5Cu; }
        if (ctx->pc != 0x212C5Cu) { return; }
    }
    ctx->pc = 0x212C5Cu;
    // 0x212c5c: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212c60: 0x3c05432a  lui         $a1, 0x432A
    ctx->pc = 0x212c60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17194 << 16));
    // 0x212c64: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c68: 0x27a70170  addiu       $a3, $sp, 0x170
    ctx->pc = 0x212c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x212c6c: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x212C6Cu;
    SET_GPR_U32(ctx, 31, 0x212C74u);
    ctx->pc = 0x212C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212C6Cu;
            // 0x212c70: 0x34a544fa  ori         $a1, $a1, 0x44FA (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17658);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212C74u; }
        if (ctx->pc != 0x212C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212C74u; }
        if (ctx->pc != 0x212C74u) { return; }
    }
    ctx->pc = 0x212C74u;
    // 0x212c74: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x212C74u;
    SET_GPR_U32(ctx, 31, 0x212C7Cu);
    ctx->pc = 0x212C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212C74u;
            // 0x212c78: 0x8e24e464  lw          $a0, -0x1B9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212C7Cu; }
        if (ctx->pc != 0x212C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212C7Cu; }
        if (ctx->pc != 0x212C7Cu) { return; }
    }
    ctx->pc = 0x212C7Cu;
    // 0x212c7c: 0x27b00158  addiu       $s0, $sp, 0x158
    ctx->pc = 0x212c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x212c80: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212c84: 0x3c05a6e8  lui         $a1, 0xA6E8
    ctx->pc = 0x212c84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42728 << 16));
    // 0x212c88: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c8c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x212c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x212c90: 0x34a51c1e  ori         $a1, $a1, 0x1C1E
    ctx->pc = 0x212c90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7198);
    // 0x212c94: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x212C94u;
    SET_GPR_U32(ctx, 31, 0x212C9Cu);
    ctx->pc = 0x212C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212C94u;
            // 0x212c98: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212C9Cu; }
        if (ctx->pc != 0x212C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212C9Cu; }
        if (ctx->pc != 0x212C9Cu) { return; }
    }
    ctx->pc = 0x212C9Cu;
    // 0x212c9c: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212ca0: 0x3c058743  lui         $a1, 0x8743
    ctx->pc = 0x212ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34627 << 16));
    // 0x212ca4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212ca8: 0x27a7011c  addiu       $a3, $sp, 0x11C
    ctx->pc = 0x212ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x212cac: 0xc060570  jal         func_1815C0
    ctx->pc = 0x212CACu;
    SET_GPR_U32(ctx, 31, 0x212CB4u);
    ctx->pc = 0x212CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212CACu;
            // 0x212cb0: 0x34a5c048  ori         $a1, $a1, 0xC048 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49224);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212CB4u; }
        if (ctx->pc != 0x212CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212CB4u; }
        if (ctx->pc != 0x212CB4u) { return; }
    }
    ctx->pc = 0x212CB4u;
    // 0x212cb4: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x212CB4u;
    SET_GPR_U32(ctx, 31, 0x212CBCu);
    ctx->pc = 0x212CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212CB4u;
            // 0x212cb8: 0x8e24e464  lw          $a0, -0x1B9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212CBCu; }
        if (ctx->pc != 0x212CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212CBCu; }
        if (ctx->pc != 0x212CBCu) { return; }
    }
    ctx->pc = 0x212CBCu;
    // 0x212cbc: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212cc0: 0x3c0525bb  lui         $a1, 0x25BB
    ctx->pc = 0x212cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9659 << 16));
    // 0x212cc4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212cc8: 0x27a7015c  addiu       $a3, $sp, 0x15C
    ctx->pc = 0x212cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x212ccc: 0xc060570  jal         func_1815C0
    ctx->pc = 0x212CCCu;
    SET_GPR_U32(ctx, 31, 0x212CD4u);
    ctx->pc = 0x212CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212CCCu;
            // 0x212cd0: 0x34a5317e  ori         $a1, $a1, 0x317E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12670);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212CD4u; }
        if (ctx->pc != 0x212CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212CD4u; }
        if (ctx->pc != 0x212CD4u) { return; }
    }
    ctx->pc = 0x212CD4u;
    // 0x212cd4: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212cd8: 0x3c052b2d  lui         $a1, 0x2B2D
    ctx->pc = 0x212cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)11053 << 16));
    // 0x212cdc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212ce0: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x212ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x212ce4: 0xc060570  jal         func_1815C0
    ctx->pc = 0x212CE4u;
    SET_GPR_U32(ctx, 31, 0x212CECu);
    ctx->pc = 0x212CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212CE4u;
            // 0x212ce8: 0x34a52457  ori         $a1, $a1, 0x2457 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9303);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212CECu; }
        if (ctx->pc != 0x212CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212CECu; }
        if (ctx->pc != 0x212CECu) { return; }
    }
    ctx->pc = 0x212CECu;
    // 0x212cec: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212cf0: 0x3c05b4a0  lui         $a1, 0xB4A0
    ctx->pc = 0x212cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46240 << 16));
    // 0x212cf4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212cf8: 0x27a70164  addiu       $a3, $sp, 0x164
    ctx->pc = 0x212cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
    // 0x212cfc: 0xc060570  jal         func_1815C0
    ctx->pc = 0x212CFCu;
    SET_GPR_U32(ctx, 31, 0x212D04u);
    ctx->pc = 0x212D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212CFCu;
            // 0x212d00: 0x34a5531b  ori         $a1, $a1, 0x531B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21275);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D04u; }
        if (ctx->pc != 0x212D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D04u; }
        if (ctx->pc != 0x212D04u) { return; }
    }
    ctx->pc = 0x212D04u;
    // 0x212d04: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212d08: 0x3c05b2a8  lui         $a1, 0xB2A8
    ctx->pc = 0x212d08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45736 << 16));
    // 0x212d0c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212d0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d10: 0x27a70168  addiu       $a3, $sp, 0x168
    ctx->pc = 0x212d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x212d14: 0xc060570  jal         func_1815C0
    ctx->pc = 0x212D14u;
    SET_GPR_U32(ctx, 31, 0x212D1Cu);
    ctx->pc = 0x212D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212D14u;
            // 0x212d18: 0x34a5856f  ori         $a1, $a1, 0x856F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34159);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D1Cu; }
        if (ctx->pc != 0x212D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D1Cu; }
        if (ctx->pc != 0x212D1Cu) { return; }
    }
    ctx->pc = 0x212D1Cu;
    // 0x212d1c: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212d20: 0x3c05ca68  lui         $a1, 0xCA68
    ctx->pc = 0x212d20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51816 << 16));
    // 0x212d24: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d28: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x212d28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x212d2c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212d2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d30: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x212D30u;
    SET_GPR_U32(ctx, 31, 0x212D38u);
    ctx->pc = 0x212D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212D30u;
            // 0x212d34: 0x34a56863  ori         $a1, $a1, 0x6863 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26723);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D38u; }
        if (ctx->pc != 0x212D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D38u; }
        if (ctx->pc != 0x212D38u) { return; }
    }
    ctx->pc = 0x212D38u;
    // 0x212d38: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x212D38u;
    SET_GPR_U32(ctx, 31, 0x212D40u);
    ctx->pc = 0x212D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212D38u;
            // 0x212d3c: 0x8e24e464  lw          $a0, -0x1B9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D40u; }
        if (ctx->pc != 0x212D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D40u; }
        if (ctx->pc != 0x212D40u) { return; }
    }
    ctx->pc = 0x212D40u;
    // 0x212d40: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212d44: 0x3c05afd8  lui         $a1, 0xAFD8
    ctx->pc = 0x212d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45016 << 16));
    // 0x212d48: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d4c: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x212d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x212d50: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x212D50u;
    SET_GPR_U32(ctx, 31, 0x212D58u);
    ctx->pc = 0x212D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212D50u;
            // 0x212d54: 0x34a54e97  ori         $a1, $a1, 0x4E97 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20119);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D58u; }
        if (ctx->pc != 0x212D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D58u; }
        if (ctx->pc != 0x212D58u) { return; }
    }
    ctx->pc = 0x212D58u;
    // 0x212d58: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212d5c: 0x3c057459  lui         $a1, 0x7459
    ctx->pc = 0x212d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29785 << 16));
    // 0x212d60: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212d60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d64: 0x27a70128  addiu       $a3, $sp, 0x128
    ctx->pc = 0x212d64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x212d68: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x212d68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x212d6c: 0xc06081c  jal         func_182070
    ctx->pc = 0x212D6Cu;
    SET_GPR_U32(ctx, 31, 0x212D74u);
    ctx->pc = 0x212D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212D6Cu;
            // 0x212d70: 0x34a5231e  ori         $a1, $a1, 0x231E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8990);
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D74u; }
        if (ctx->pc != 0x212D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D74u; }
        if (ctx->pc != 0x212D74u) { return; }
    }
    ctx->pc = 0x212D74u;
    // 0x212d74: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212d78: 0x3c05eae2  lui         $a1, 0xEAE2
    ctx->pc = 0x212d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60130 << 16));
    // 0x212d7c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d80: 0x27a70124  addiu       $a3, $sp, 0x124
    ctx->pc = 0x212d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x212d84: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x212D84u;
    SET_GPR_U32(ctx, 31, 0x212D8Cu);
    ctx->pc = 0x212D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212D84u;
            // 0x212d88: 0x34a5449b  ori         $a1, $a1, 0x449B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17563);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D8Cu; }
        if (ctx->pc != 0x212D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D8Cu; }
        if (ctx->pc != 0x212D8Cu) { return; }
    }
    ctx->pc = 0x212D8Cu;
    // 0x212d8c: 0x8e24e464  lw          $a0, -0x1B9C($s1)
    ctx->pc = 0x212d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960228)));
    // 0x212d90: 0x3c05171a  lui         $a1, 0x171A
    ctx->pc = 0x212d90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5914 << 16));
    // 0x212d94: 0x34a5c968  ori         $a1, $a1, 0xC968
    ctx->pc = 0x212d94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)51560);
    // 0x212d98: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d9c: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x212d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x212da0: 0xc06081c  jal         func_182070
    ctx->pc = 0x212DA0u;
    SET_GPR_U32(ctx, 31, 0x212DA8u);
    ctx->pc = 0x212DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212DA0u;
            // 0x212da4: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DA8u; }
        if (ctx->pc != 0x212DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DA8u; }
        if (ctx->pc != 0x212DA8u) { return; }
    }
    ctx->pc = 0x212DA8u;
    // 0x212da8: 0xc04f860  jal         func_13E180
    ctx->pc = 0x212DA8u;
    SET_GPR_U32(ctx, 31, 0x212DB0u);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DB0u; }
        if (ctx->pc != 0x212DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DB0u; }
        if (ctx->pc != 0x212DB0u) { return; }
    }
    ctx->pc = 0x212DB0u;
    // 0x212db0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x212db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x212db4: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x212db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x212db8: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x212db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x212dbc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x212DBCu;
    {
        const bool branch_taken_0x212dbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x212DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212DBCu;
            // 0x212dc0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212dbc) {
            ctx->pc = 0x212DCCu;
            goto label_212dcc;
        }
    }
    ctx->pc = 0x212DC4u;
    // 0x212dc4: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x212DC4u;
    SET_GPR_U32(ctx, 31, 0x212DCCu);
    ctx->pc = 0x212DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212DC4u;
            // 0x212dc8: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DCCu; }
        if (ctx->pc != 0x212DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DCCu; }
        if (ctx->pc != 0x212DCCu) { return; }
    }
    ctx->pc = 0x212DCCu;
label_212dcc:
    // 0x212dcc: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x212dccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x212dd0: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x212dd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x212dd4: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x212dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x212dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x212DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212DD8u;
            // 0x212ddc: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212DCCu: goto label_212dcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x212DE0u;
}
