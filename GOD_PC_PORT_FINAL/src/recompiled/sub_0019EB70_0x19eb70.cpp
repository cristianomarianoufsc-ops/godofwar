#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019EB70
// Address: 0x19eb70 - 0x19ec78
void sub_0019EB70_0x19eb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EB70_0x19eb70");
#endif

    ctx->pc = 0x19eb70u;

    // 0x19eb70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x19eb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19eb74: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19eb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19eb78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19eb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eb7c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19eb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19eb80: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19eb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19eb84: 0xc090e5e  jal         func_243978
    ctx->pc = 0x19EB84u;
    SET_GPR_U32(ctx, 31, 0x19EB8Cu);
    ctx->pc = 0x19EB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EB84u;
            // 0x19eb88: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243978u;
    if (runtime->hasFunction(0x243978u)) {
        auto targetFn = runtime->lookupFunction(0x243978u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EB8Cu; }
        if (ctx->pc != 0x19EB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243978_0x2439a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EB8Cu; }
        if (ctx->pc != 0x19EB8Cu) { return; }
    }
    ctx->pc = 0x19EB8Cu;
    // 0x19eb8c: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x19EB8Cu;
    SET_GPR_U32(ctx, 31, 0x19EB94u);
    ctx->pc = 0x19EB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EB8Cu;
            // 0x19eb90: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EB94u; }
        if (ctx->pc != 0x19EB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EB94u; }
        if (ctx->pc != 0x19EB94u) { return; }
    }
    ctx->pc = 0x19EB94u;
    // 0x19eb94: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x19EB94u;
    SET_GPR_U32(ctx, 31, 0x19EB9Cu);
    ctx->pc = 0x19EB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EB94u;
            // 0x19eb98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EB9Cu; }
        if (ctx->pc != 0x19EB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EB9Cu; }
        if (ctx->pc != 0x19EB9Cu) { return; }
    }
    ctx->pc = 0x19EB9Cu;
    // 0x19eb9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19eb9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eba0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19eba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19eba4: 0x24a53d50  addiu       $a1, $a1, 0x3D50
    ctx->pc = 0x19eba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15696));
    // 0x19eba8: 0xc060978  jal         func_1825E0
    ctx->pc = 0x19EBA8u;
    SET_GPR_U32(ctx, 31, 0x19EBB0u);
    ctx->pc = 0x19EBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EBA8u;
            // 0x19ebac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EBB0u; }
        if (ctx->pc != 0x19EBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EBB0u; }
        if (ctx->pc != 0x19EBB0u) { return; }
    }
    ctx->pc = 0x19EBB0u;
    // 0x19ebb0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x19ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x19ebb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ebb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ebb8: 0x24429e10  addiu       $v0, $v0, -0x61F0
    ctx->pc = 0x19ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942224));
    // 0x19ebbc: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x19EBBCu;
    SET_GPR_U32(ctx, 31, 0x19EBC4u);
    ctx->pc = 0x19EBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EBBCu;
            // 0x19ebc0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EBC4u; }
        if (ctx->pc != 0x19EBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EBC4u; }
        if (ctx->pc != 0x19EBC4u) { return; }
    }
    ctx->pc = 0x19EBC4u;
    // 0x19ebc4: 0x3c05a721  lui         $a1, 0xA721
    ctx->pc = 0x19ebc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42785 << 16));
    // 0x19ebc8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19ebc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ebcc: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x19ebccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x19ebd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ebd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ebd4: 0xae30c9e4  sw          $s0, -0x361C($s1)
    ctx->pc = 0x19ebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953444), GPR_U32(ctx, 16));
    // 0x19ebd8: 0x34a55288  ori         $a1, $a1, 0x5288
    ctx->pc = 0x19ebd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21128);
    // 0x19ebdc: 0xc06081c  jal         func_182070
    ctx->pc = 0x19EBDCu;
    SET_GPR_U32(ctx, 31, 0x19EBE4u);
    ctx->pc = 0x19EBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EBDCu;
            // 0x19ebe0: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EBE4u; }
        if (ctx->pc != 0x19EBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EBE4u; }
        if (ctx->pc != 0x19EBE4u) { return; }
    }
    ctx->pc = 0x19EBE4u;
    // 0x19ebe4: 0x8e24c9e4  lw          $a0, -0x361C($s1)
    ctx->pc = 0x19ebe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953444)));
    // 0x19ebe8: 0x3c0551f0  lui         $a1, 0x51F0
    ctx->pc = 0x19ebe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20976 << 16));
    // 0x19ebec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19ebecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ebf0: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x19ebf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x19ebf4: 0x34a5e2e1  ori         $a1, $a1, 0xE2E1
    ctx->pc = 0x19ebf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)58081);
    // 0x19ebf8: 0xc06081c  jal         func_182070
    ctx->pc = 0x19EBF8u;
    SET_GPR_U32(ctx, 31, 0x19EC00u);
    ctx->pc = 0x19EBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EBF8u;
            // 0x19ebfc: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC00u; }
        if (ctx->pc != 0x19EC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC00u; }
        if (ctx->pc != 0x19EC00u) { return; }
    }
    ctx->pc = 0x19EC00u;
    // 0x19ec00: 0x27b00018  addiu       $s0, $sp, 0x18
    ctx->pc = 0x19ec00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x19ec04: 0x8e24c9e4  lw          $a0, -0x361C($s1)
    ctx->pc = 0x19ec04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953444)));
    // 0x19ec08: 0x3c057e7f  lui         $a1, 0x7E7F
    ctx->pc = 0x19ec08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32383 << 16));
    // 0x19ec0c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19ec0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec10: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19ec10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec14: 0x34a5d1ec  ori         $a1, $a1, 0xD1EC
    ctx->pc = 0x19ec14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53740);
    // 0x19ec18: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x19EC18u;
    SET_GPR_U32(ctx, 31, 0x19EC20u);
    ctx->pc = 0x19EC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EC18u;
            // 0x19ec1c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC20u; }
        if (ctx->pc != 0x19EC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC20u; }
        if (ctx->pc != 0x19EC20u) { return; }
    }
    ctx->pc = 0x19EC20u;
    // 0x19ec20: 0x8e24c9e4  lw          $a0, -0x361C($s1)
    ctx->pc = 0x19ec20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953444)));
    // 0x19ec24: 0x3c05d066  lui         $a1, 0xD066
    ctx->pc = 0x19ec24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53350 << 16));
    // 0x19ec28: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19ec28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec2c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19ec2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec30: 0x34a50fb7  ori         $a1, $a1, 0xFB7
    ctx->pc = 0x19ec30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4023);
    // 0x19ec34: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x19EC34u;
    SET_GPR_U32(ctx, 31, 0x19EC3Cu);
    ctx->pc = 0x19EC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EC34u;
            // 0x19ec38: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC3Cu; }
        if (ctx->pc != 0x19EC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC3Cu; }
        if (ctx->pc != 0x19EC3Cu) { return; }
    }
    ctx->pc = 0x19EC3Cu;
    // 0x19ec3c: 0x8e24c9e4  lw          $a0, -0x361C($s1)
    ctx->pc = 0x19ec3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953444)));
    // 0x19ec40: 0x3c053663  lui         $a1, 0x3663
    ctx->pc = 0x19ec40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)13923 << 16));
    // 0x19ec44: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19ec44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec48: 0x34a52ecc  ori         $a1, $a1, 0x2ECC
    ctx->pc = 0x19ec48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11980);
    // 0x19ec4c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19ec4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec50: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x19EC50u;
    SET_GPR_U32(ctx, 31, 0x19EC58u);
    ctx->pc = 0x19EC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EC50u;
            // 0x19ec54: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC58u; }
        if (ctx->pc != 0x19EC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC58u; }
        if (ctx->pc != 0x19EC58u) { return; }
    }
    ctx->pc = 0x19EC58u;
    // 0x19ec58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19ec58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec5c: 0xc090e46  jal         func_243918
    ctx->pc = 0x19EC5Cu;
    SET_GPR_U32(ctx, 31, 0x19EC64u);
    ctx->pc = 0x19EC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EC5Cu;
            // 0x19ec60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243918u;
    if (runtime->hasFunction(0x243918u)) {
        auto targetFn = runtime->lookupFunction(0x243918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC64u; }
        if (ctx->pc != 0x19EC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243918_0x243918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC64u; }
        if (ctx->pc != 0x19EC64u) { return; }
    }
    ctx->pc = 0x19EC64u;
    // 0x19ec64: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19ec64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19ec68: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19ec68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19ec6c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19ec6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19ec70: 0x3e00008  jr          $ra
    ctx->pc = 0x19EC70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EC70u;
            // 0x19ec74: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19EC78u;
}
