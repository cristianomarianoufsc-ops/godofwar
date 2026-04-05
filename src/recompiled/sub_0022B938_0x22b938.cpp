#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022B938
// Address: 0x22b938 - 0x22bae0
void sub_0022B938_0x22b938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B938_0x22b938");
#endif

    ctx->pc = 0x22b938u;

    // 0x22b938: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x22b938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x22b93c: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x22b93cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x22b940: 0x8c44ec4c  lw          $a0, -0x13B4($v0)
    ctx->pc = 0x22b940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
    // 0x22b944: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x22b944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x22b948: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x22b948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x22b94c: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x22b94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x22b950: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x22b950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x22b954: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22b954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b958: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x22b958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x22b95c: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x22b95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x22b960: 0xc04f856  jal         func_13E158
    ctx->pc = 0x22B960u;
    SET_GPR_U32(ctx, 31, 0x22B968u);
    ctx->pc = 0x22B964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B960u;
            // 0x22b964: 0x3c14002a  lui         $s4, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B968u; }
        if (ctx->pc != 0x22B968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B968u; }
        if (ctx->pc != 0x22B968u) { return; }
    }
    ctx->pc = 0x22B968u;
    // 0x22b968: 0xc08adf2  jal         func_22B7C8
    ctx->pc = 0x22B968u;
    SET_GPR_U32(ctx, 31, 0x22B970u);
    ctx->pc = 0x22B96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B968u;
            // 0x22b96c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B7C8u;
    if (runtime->hasFunction(0x22B7C8u)) {
        auto targetFn = runtime->lookupFunction(0x22B7C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B970u; }
        if (ctx->pc != 0x22B970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22b7c8_0x22b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B970u; }
        if (ctx->pc != 0x22B970u) { return; }
    }
    ctx->pc = 0x22B970u;
    // 0x22b970: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x22b970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b974: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x22B974u;
    SET_GPR_U32(ctx, 31, 0x22B97Cu);
    ctx->pc = 0x22B978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B974u;
            // 0x22b978: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B97Cu; }
        if (ctx->pc != 0x22B97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B97Cu; }
        if (ctx->pc != 0x22B97Cu) { return; }
    }
    ctx->pc = 0x22B97Cu;
    // 0x22b97c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x22B97Cu;
    SET_GPR_U32(ctx, 31, 0x22B984u);
    ctx->pc = 0x22B980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B97Cu;
            // 0x22b980: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B984u; }
        if (ctx->pc != 0x22B984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B984u; }
        if (ctx->pc != 0x22B984u) { return; }
    }
    ctx->pc = 0x22B984u;
    // 0x22b984: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22b984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b988: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x22b988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x22b98c: 0x24a58250  addiu       $a1, $a1, -0x7DB0
    ctx->pc = 0x22b98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935120));
    // 0x22b990: 0xc060978  jal         func_1825E0
    ctx->pc = 0x22B990u;
    SET_GPR_U32(ctx, 31, 0x22B998u);
    ctx->pc = 0x22B994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B990u;
            // 0x22b994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B998u; }
        if (ctx->pc != 0x22B998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B998u; }
        if (ctx->pc != 0x22B998u) { return; }
    }
    ctx->pc = 0x22B998u;
    // 0x22b998: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22b998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x22b99c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b9a0: 0x24428b90  addiu       $v0, $v0, -0x7470
    ctx->pc = 0x22b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937488));
    // 0x22b9a4: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x22B9A4u;
    SET_GPR_U32(ctx, 31, 0x22B9ACu);
    ctx->pc = 0x22B9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B9A4u;
            // 0x22b9a8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B9ACu; }
        if (ctx->pc != 0x22B9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B9ACu; }
        if (ctx->pc != 0x22B9ACu) { return; }
    }
    ctx->pc = 0x22B9ACu;
    // 0x22b9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b9b0: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x22B9B0u;
    SET_GPR_U32(ctx, 31, 0x22B9B8u);
    ctx->pc = 0x22B9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B9B0u;
            // 0x22b9b4: 0xae901204  sw          $s0, 0x1204($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4612), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B9B8u; }
        if (ctx->pc != 0x22B9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B9B8u; }
        if (ctx->pc != 0x22B9B8u) { return; }
    }
    ctx->pc = 0x22B9B8u;
    // 0x22b9b8: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x22b9b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22b9bc: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x22b9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_22b9c0:
    // 0x22b9c0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x22b9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x22b9c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22b9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b9c8: 0x24a58258  addiu       $a1, $a1, -0x7DA8
    ctx->pc = 0x22b9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935128));
    // 0x22b9cc: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x22B9CCu;
    SET_GPR_U32(ctx, 31, 0x22B9D4u);
    ctx->pc = 0x22B9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B9CCu;
            // 0x22b9d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B9D4u; }
        if (ctx->pc != 0x22B9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B9D4u; }
        if (ctx->pc != 0x22B9D4u) { return; }
    }
    ctx->pc = 0x22B9D4u;
    // 0x22b9d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b9d8: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x22B9D8u;
    SET_GPR_U32(ctx, 31, 0x22B9E0u);
    ctx->pc = 0x22B9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B9D8u;
            // 0x22b9dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B9E0u; }
        if (ctx->pc != 0x22B9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B9E0u; }
        if (ctx->pc != 0x22B9E0u) { return; }
    }
    ctx->pc = 0x22B9E0u;
    // 0x22b9e0: 0x8e841204  lw          $a0, 0x1204($s4)
    ctx->pc = 0x22b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4612)));
    // 0x22b9e4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x22b9e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b9e8: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x22b9e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x22b9ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22b9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b9f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x22b9f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b9f4: 0xc06085e  jal         func_182178
    ctx->pc = 0x22B9F4u;
    SET_GPR_U32(ctx, 31, 0x22B9FCu);
    ctx->pc = 0x22B9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B9F4u;
            // 0x22b9f8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182178u;
    if (runtime->hasFunction(0x182178u)) {
        auto targetFn = runtime->lookupFunction(0x182178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B9FCu; }
        if (ctx->pc != 0x22B9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182178_0x182178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B9FCu; }
        if (ctx->pc != 0x22B9FCu) { return; }
    }
    ctx->pc = 0x22B9FCu;
    // 0x22b9fc: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x22b9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x22ba00: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22ba00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba04: 0x24a58270  addiu       $a1, $a1, -0x7D90
    ctx->pc = 0x22ba04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935152));
    // 0x22ba08: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x22BA08u;
    SET_GPR_U32(ctx, 31, 0x22BA10u);
    ctx->pc = 0x22BA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BA08u;
            // 0x22ba0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BA10u; }
        if (ctx->pc != 0x22BA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BA10u; }
        if (ctx->pc != 0x22BA10u) { return; }
    }
    ctx->pc = 0x22BA10u;
    // 0x22ba10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ba10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba14: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x22BA14u;
    SET_GPR_U32(ctx, 31, 0x22BA1Cu);
    ctx->pc = 0x22BA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BA14u;
            // 0x22ba18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BA1Cu; }
        if (ctx->pc != 0x22BA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BA1Cu; }
        if (ctx->pc != 0x22BA1Cu) { return; }
    }
    ctx->pc = 0x22BA1Cu;
    // 0x22ba1c: 0x2533821  addu        $a3, $s2, $s3
    ctx->pc = 0x22ba1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x22ba20: 0x8e841204  lw          $a0, 0x1204($s4)
    ctx->pc = 0x22ba20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4612)));
    // 0x22ba24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22ba24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba28: 0x24e70068  addiu       $a3, $a3, 0x68
    ctx->pc = 0x22ba28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 104));
    // 0x22ba2c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x22ba2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba30: 0xc060706  jal         func_181C18
    ctx->pc = 0x22BA30u;
    SET_GPR_U32(ctx, 31, 0x22BA38u);
    ctx->pc = 0x22BA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BA30u;
            // 0x22ba34: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C18u;
    if (runtime->hasFunction(0x181C18u)) {
        auto targetFn = runtime->lookupFunction(0x181C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BA38u; }
        if (ctx->pc != 0x22BA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181C18_0x181c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BA38u; }
        if (ctx->pc != 0x22BA38u) { return; }
    }
    ctx->pc = 0x22BA38u;
    // 0x22ba38: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x22BA38u;
    SET_GPR_U32(ctx, 31, 0x22BA40u);
    ctx->pc = 0x22BA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BA38u;
            // 0x22ba3c: 0x8e841204  lw          $a0, 0x1204($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4612)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BA40u; }
        if (ctx->pc != 0x22BA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BA40u; }
        if (ctx->pc != 0x22BA40u) { return; }
    }
    ctx->pc = 0x22BA40u;
    // 0x22ba40: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x22ba40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x22ba44: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x22BA44u;
    {
        const bool branch_taken_0x22ba44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BA44u;
            // 0x22ba48: 0x27b00070  addiu       $s0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ba44) {
            ctx->pc = 0x22B9C0u;
            runtime->cooperativeGuestYield();
            goto label_22b9c0;
        }
    }
    ctx->pc = 0x22BA4Cu;
    // 0x22ba4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22ba4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba50: 0x26710018  addiu       $s1, $s3, 0x18
    ctx->pc = 0x22ba50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x22ba54: 0x0  nop
    ctx->pc = 0x22ba54u;
    // NOP
label_22ba58:
    // 0x22ba58: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x22ba58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x22ba5c: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x22ba5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x22ba60: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22ba60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba64: 0x24a58280  addiu       $a1, $a1, -0x7D80
    ctx->pc = 0x22ba64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935168));
    // 0x22ba68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ba68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba6c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x22BA6Cu;
    SET_GPR_U32(ctx, 31, 0x22BA74u);
    ctx->pc = 0x22BA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BA6Cu;
            // 0x22ba70: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BA74u; }
        if (ctx->pc != 0x22BA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BA74u; }
        if (ctx->pc != 0x22BA74u) { return; }
    }
    ctx->pc = 0x22BA74u;
    // 0x22ba74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ba74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba78: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x22BA78u;
    SET_GPR_U32(ctx, 31, 0x22BA80u);
    ctx->pc = 0x22BA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BA78u;
            // 0x22ba7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BA80u; }
        if (ctx->pc != 0x22BA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BA80u; }
        if (ctx->pc != 0x22BA80u) { return; }
    }
    ctx->pc = 0x22BA80u;
    // 0x22ba80: 0x8e841204  lw          $a0, 0x1204($s4)
    ctx->pc = 0x22ba80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4612)));
    // 0x22ba84: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x22ba84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22ba88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba8c: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x22BA8Cu;
    SET_GPR_U32(ctx, 31, 0x22BA94u);
    ctx->pc = 0x22BA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BA8Cu;
            // 0x22ba90: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BA94u; }
        if (ctx->pc != 0x22BA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BA94u; }
        if (ctx->pc != 0x22BA94u) { return; }
    }
    ctx->pc = 0x22BA94u;
    // 0x22ba94: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x22ba94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x22ba98: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x22BA98u;
    {
        const bool branch_taken_0x22ba98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BA98u;
            // 0x22ba9c: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ba98) {
            ctx->pc = 0x22BA58u;
            runtime->cooperativeGuestYield();
            goto label_22ba58;
        }
    }
    ctx->pc = 0x22BAA0u;
    // 0x22baa0: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x22BAA0u;
    SET_GPR_U32(ctx, 31, 0x22BAA8u);
    ctx->pc = 0x22BAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BAA0u;
            // 0x22baa4: 0x8e841204  lw          $a0, 0x1204($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4612)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BAA8u; }
        if (ctx->pc != 0x22BAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BAA8u; }
        if (ctx->pc != 0x22BAA8u) { return; }
    }
    ctx->pc = 0x22BAA8u;
    // 0x22baa8: 0xc04f860  jal         func_13E180
    ctx->pc = 0x22BAA8u;
    SET_GPR_U32(ctx, 31, 0x22BAB0u);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BAB0u; }
        if (ctx->pc != 0x22BAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BAB0u; }
        if (ctx->pc != 0x22BAB0u) { return; }
    }
    ctx->pc = 0x22BAB0u;
    // 0x22bab0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22bab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bab4: 0xc08ae16  jal         func_22B858
    ctx->pc = 0x22BAB4u;
    SET_GPR_U32(ctx, 31, 0x22BABCu);
    ctx->pc = 0x22BAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BAB4u;
            // 0x22bab8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B858u;
    if (runtime->hasFunction(0x22B858u)) {
        auto targetFn = runtime->lookupFunction(0x22B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BABCu; }
        if (ctx->pc != 0x22BABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B858_0x22b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BABCu; }
        if (ctx->pc != 0x22BABCu) { return; }
    }
    ctx->pc = 0x22BABCu;
    // 0x22babc: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x22babcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x22bac0: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x22bac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x22bac4: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x22bac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x22bac8: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x22bac8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x22bacc: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x22baccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x22bad0: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x22bad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x22bad4: 0x3e00008  jr          $ra
    ctx->pc = 0x22BAD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BAD4u;
            // 0x22bad8: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B9C0u: goto label_22b9c0;
            case 0x22BA58u: goto label_22ba58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22BADCu;
    // 0x22badc: 0x0  nop
    ctx->pc = 0x22badcu;
    // NOP
}
