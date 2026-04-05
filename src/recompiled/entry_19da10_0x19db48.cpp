#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_19da10
// Address: 0x19da10 - 0x19db48
void entry_19da10_0x19db48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_19da10_0x19db48");
#endif

    ctx->pc = 0x19da10u;

    // 0x19da10: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x19da10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x19da14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19da14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19da18: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x19da18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x19da1c: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19da1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19da20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19da20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19da24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19da24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19da28: 0x24429ef0  addiu       $v0, $v0, -0x6110
    ctx->pc = 0x19da28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942448));
    // 0x19da2c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x19da2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x19da30: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x19da30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x19da34: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x19da34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x19da38: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x19da38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x19da3c: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x19da3cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x19da40: 0xafa5001c  sw          $a1, 0x1C($sp)
    ctx->pc = 0x19da40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
    // 0x19da44: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x19da44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x19da48: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19da48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19da4c: 0xa7a30020  sh          $v1, 0x20($sp)
    ctx->pc = 0x19da4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x19da50: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x19da50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x19da54: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x19da54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x19da58: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x19da58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x19da5c: 0xa7a00010  sh          $zero, 0x10($sp)
    ctx->pc = 0x19da5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x19da60: 0xa3a00022  sb          $zero, 0x22($sp)
    ctx->pc = 0x19da60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x19da64: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x19DA64u;
    SET_GPR_U32(ctx, 31, 0x19DA6Cu);
    ctx->pc = 0x19DA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DA64u;
            // 0x19da68: 0xa3a0003a  sb          $zero, 0x3A($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 58), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA6Cu; }
        if (ctx->pc != 0x19DA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA6Cu; }
        if (ctx->pc != 0x19DA6Cu) { return; }
    }
    ctx->pc = 0x19DA6Cu;
    // 0x19da6c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x19DA6Cu;
    SET_GPR_U32(ctx, 31, 0x19DA74u);
    ctx->pc = 0x19DA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DA6Cu;
            // 0x19da70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA74u; }
        if (ctx->pc != 0x19DA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA74u; }
        if (ctx->pc != 0x19DA74u) { return; }
    }
    ctx->pc = 0x19DA74u;
    // 0x19da74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19da74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19da78: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19da78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19da7c: 0x24a53d30  addiu       $a1, $a1, 0x3D30
    ctx->pc = 0x19da7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15664));
    // 0x19da80: 0xc060978  jal         func_1825E0
    ctx->pc = 0x19DA80u;
    SET_GPR_U32(ctx, 31, 0x19DA88u);
    ctx->pc = 0x19DA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DA80u;
            // 0x19da84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA88u; }
        if (ctx->pc != 0x19DA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA88u; }
        if (ctx->pc != 0x19DA88u) { return; }
    }
    ctx->pc = 0x19DA88u;
    // 0x19da88: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x19da88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x19da8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19da8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19da90: 0x24429eb0  addiu       $v0, $v0, -0x6150
    ctx->pc = 0x19da90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942384));
    // 0x19da94: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x19DA94u;
    SET_GPR_U32(ctx, 31, 0x19DA9Cu);
    ctx->pc = 0x19DA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DA94u;
            // 0x19da98: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA9Cu; }
        if (ctx->pc != 0x19DA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA9Cu; }
        if (ctx->pc != 0x19DA9Cu) { return; }
    }
    ctx->pc = 0x19DA9Cu;
    // 0x19da9c: 0x3c051de0  lui         $a1, 0x1DE0
    ctx->pc = 0x19da9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7648 << 16));
    // 0x19daa0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19daa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19daa4: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x19daa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x19daa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19daa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19daac: 0xae30c9dc  sw          $s0, -0x3624($s1)
    ctx->pc = 0x19daacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953436), GPR_U32(ctx, 16));
    // 0x19dab0: 0xc060570  jal         func_1815C0
    ctx->pc = 0x19DAB0u;
    SET_GPR_U32(ctx, 31, 0x19DAB8u);
    ctx->pc = 0x19DAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DAB0u;
            // 0x19dab4: 0x34a54a5e  ori         $a1, $a1, 0x4A5E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)19038);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DAB8u; }
        if (ctx->pc != 0x19DAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DAB8u; }
        if (ctx->pc != 0x19DAB8u) { return; }
    }
    ctx->pc = 0x19DAB8u;
    // 0x19dab8: 0x8e24c9dc  lw          $a0, -0x3624($s1)
    ctx->pc = 0x19dab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953436)));
    // 0x19dabc: 0x3c05dc72  lui         $a1, 0xDC72
    ctx->pc = 0x19dabcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56434 << 16));
    // 0x19dac0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19dac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dac4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x19dac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19dac8: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x19DAC8u;
    SET_GPR_U32(ctx, 31, 0x19DAD0u);
    ctx->pc = 0x19DACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DAC8u;
            // 0x19dacc: 0x34a538c6  ori         $a1, $a1, 0x38C6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14534);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DAD0u; }
        if (ctx->pc != 0x19DAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DAD0u; }
        if (ctx->pc != 0x19DAD0u) { return; }
    }
    ctx->pc = 0x19DAD0u;
    // 0x19dad0: 0x8e24c9dc  lw          $a0, -0x3624($s1)
    ctx->pc = 0x19dad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953436)));
    // 0x19dad4: 0x3c05e476  lui         $a1, 0xE476
    ctx->pc = 0x19dad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58486 << 16));
    // 0x19dad8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19dad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dadc: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x19dadcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x19dae0: 0x34a5d966  ori         $a1, $a1, 0xD966
    ctx->pc = 0x19dae0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55654);
    // 0x19dae4: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x19DAE4u;
    SET_GPR_U32(ctx, 31, 0x19DAECu);
    ctx->pc = 0x19DAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DAE4u;
            // 0x19dae8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DAECu; }
        if (ctx->pc != 0x19DAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DAECu; }
        if (ctx->pc != 0x19DAECu) { return; }
    }
    ctx->pc = 0x19DAECu;
    // 0x19daec: 0x8e24c9dc  lw          $a0, -0x3624($s1)
    ctx->pc = 0x19daecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953436)));
    // 0x19daf0: 0x3c056cb0  lui         $a1, 0x6CB0
    ctx->pc = 0x19daf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27824 << 16));
    // 0x19daf4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19daf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19daf8: 0x27a70022  addiu       $a3, $sp, 0x22
    ctx->pc = 0x19daf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 34));
    // 0x19dafc: 0x34a5e238  ori         $a1, $a1, 0xE238
    ctx->pc = 0x19dafcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57912);
    // 0x19db00: 0xc06081c  jal         func_182070
    ctx->pc = 0x19DB00u;
    SET_GPR_U32(ctx, 31, 0x19DB08u);
    ctx->pc = 0x19DB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DB00u;
            // 0x19db04: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB08u; }
        if (ctx->pc != 0x19DB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB08u; }
        if (ctx->pc != 0x19DB08u) { return; }
    }
    ctx->pc = 0x19DB08u;
    // 0x19db08: 0x8e24c9dc  lw          $a0, -0x3624($s1)
    ctx->pc = 0x19db08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953436)));
    // 0x19db0c: 0x3c0551f0  lui         $a1, 0x51F0
    ctx->pc = 0x19db0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20976 << 16));
    // 0x19db10: 0x34a5e2e1  ori         $a1, $a1, 0xE2E1
    ctx->pc = 0x19db10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)58081);
    // 0x19db14: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19db14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db18: 0x27a7003a  addiu       $a3, $sp, 0x3A
    ctx->pc = 0x19db18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 58));
    // 0x19db1c: 0xc06081c  jal         func_182070
    ctx->pc = 0x19DB1Cu;
    SET_GPR_U32(ctx, 31, 0x19DB24u);
    ctx->pc = 0x19DB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DB1Cu;
            // 0x19db20: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB24u; }
        if (ctx->pc != 0x19DB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB24u; }
        if (ctx->pc != 0x19DB24u) { return; }
    }
    ctx->pc = 0x19DB24u;
    // 0x19db24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19db24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db28: 0xc090e14  jal         func_243850
    ctx->pc = 0x19DB28u;
    SET_GPR_U32(ctx, 31, 0x19DB30u);
    ctx->pc = 0x19DB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DB28u;
            // 0x19db2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243850u;
    if (runtime->hasFunction(0x243850u)) {
        auto targetFn = runtime->lookupFunction(0x243850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB30u; }
        if (ctx->pc != 0x19DB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243850_0x243850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB30u; }
        if (ctx->pc != 0x19DB30u) { return; }
    }
    ctx->pc = 0x19DB30u;
    // 0x19db30: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x19db30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19db34: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x19db34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19db38: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x19db38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19db3c: 0x3e00008  jr          $ra
    ctx->pc = 0x19DB3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DB3Cu;
            // 0x19db40: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19DB44u;
    // 0x19db44: 0x0  nop
    ctx->pc = 0x19db44u;
    // NOP
}
