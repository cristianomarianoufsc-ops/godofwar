#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3BE8
// Address: 0x1b3be8 - 0x1b3d30
void sub_001B3BE8_0x1b3be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3BE8_0x1b3be8");
#endif

    ctx->pc = 0x1b3be8u;

    // 0x1b3be8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b3be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b3bec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b3becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b3bf0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1b3bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1b3bf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b3bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b3bf8: 0x8e02cb88  lw          $v0, -0x3478($s0)
    ctx->pc = 0x1b3bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953864)));
    // 0x1b3bfc: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1B3BFCu;
    {
        const bool branch_taken_0x1b3bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3BFCu;
            // 0x1b3c00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3bfc) {
            ctx->pc = 0x1B3D1Cu;
            goto label_1b3d1c;
        }
    }
    ctx->pc = 0x1B3C04u;
    // 0x1b3c04: 0xc069fbc  jal         func_1A7EF0
    ctx->pc = 0x1B3C04u;
    SET_GPR_U32(ctx, 31, 0x1B3C0Cu);
    ctx->pc = 0x1B3C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C04u;
            // 0x1b3c08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7EF0u;
    if (runtime->hasFunction(0x1A7EF0u)) {
        auto targetFn = runtime->lookupFunction(0x1A7EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C0Cu; }
        if (ctx->pc != 0x1B3C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7EF0_0x1a7ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C0Cu; }
        if (ctx->pc != 0x1B3C0Cu) { return; }
    }
    ctx->pc = 0x1B3C0Cu;
    // 0x1b3c0c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1b3c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1b3c10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b3c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b3c14: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b3c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b3c18: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1b3c18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1b3c1c: 0xaca2cab0  sw          $v0, -0x3550($a1)
    ctx->pc = 0x1b3c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294953648), GPR_U32(ctx, 2));
    // 0x1b3c20: 0xac60cab4  sw          $zero, -0x354C($v1)
    ctx->pc = 0x1b3c20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953652), GPR_U32(ctx, 0));
    // 0x1b3c24: 0xc08b510  jal         func_22D440
    ctx->pc = 0x1B3C24u;
    SET_GPR_U32(ctx, 31, 0x1B3C2Cu);
    ctx->pc = 0x1B3C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C24u;
            // 0x1b3c28: 0xac80cab8  sw          $zero, -0x3548($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294953656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D440u;
    if (runtime->hasFunction(0x22D440u)) {
        auto targetFn = runtime->lookupFunction(0x22D440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C2Cu; }
        if (ctx->pc != 0x1B3C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22d440_0x22d458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C2Cu; }
        if (ctx->pc != 0x1B3C2Cu) { return; }
    }
    ctx->pc = 0x1B3C2Cu;
    // 0x1b3c2c: 0xae00cb88  sw          $zero, -0x3478($s0)
    ctx->pc = 0x1b3c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953864), GPR_U32(ctx, 0));
    // 0x1b3c30: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b3c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b3c34: 0x0  nop
    ctx->pc = 0x1b3c34u;
    // NOP
label_1b3c38:
    // 0x1b3c38: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x1b3c38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1b3c3c: 0x244252a8  addiu       $v0, $v0, 0x52A8
    ctx->pc = 0x1b3c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21160));
    // 0x1b3c40: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b3c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b3c44: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1b3c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b3c48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b3c48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b3c4c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b3c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b3c50: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1b3c50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3c54: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x1b3c54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x1b3c58: 0x2a220078  slti        $v0, $s1, 0x78
    ctx->pc = 0x1b3c58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x1b3c5c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B3C5Cu;
    {
        const bool branch_taken_0x1b3c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C5Cu;
            // 0x1b3c60: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3c5c) {
            ctx->pc = 0x1B3C38u;
            runtime->cooperativeGuestYield();
            goto label_1b3c38;
        }
    }
    ctx->pc = 0x1B3C64u;
    // 0x1b3c64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b3c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c68: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x1b3c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1b3c6c: 0x0  nop
    ctx->pc = 0x1b3c6cu;
    // NOP
label_1b3c70:
    // 0x1b3c70: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1b3c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1b3c74: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1b3c74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b3c78: 0x24422668  addiu       $v0, $v0, 0x2668
    ctx->pc = 0x1b3c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9832));
    // 0x1b3c7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c80: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1b3c80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b3c84: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1b3c84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b3c88:
    // 0x1b3c88: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1b3c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b3c8c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b3c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b3c90: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b3c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b3c94: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1b3c94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1b3c98: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1b3c98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1b3c9c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1b3c9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b3ca0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B3CA0u;
    {
        const bool branch_taken_0x1b3ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3CA0u;
            // 0x1b3ca4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ca0) {
            ctx->pc = 0x1B3C88u;
            runtime->cooperativeGuestYield();
            goto label_1b3c88;
        }
    }
    ctx->pc = 0x1B3CA8u;
    // 0x1b3ca8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b3ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b3cac: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x1b3cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1b3cb0: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x1b3cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b3cb4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b3cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b3cb8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1b3cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1b3cbc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1b3cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1b3cc0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1b3cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1b3cc4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1b3cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1b3cc8: 0xa6000062  sh          $zero, 0x62($s0)
    ctx->pc = 0x1b3cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 98), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b3ccc: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1b3cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1b3cd0: 0xc06d29e  jal         func_1B4A78
    ctx->pc = 0x1B3CD0u;
    SET_GPR_U32(ctx, 31, 0x1B3CD8u);
    ctx->pc = 0x1B3CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3CD0u;
            // 0x1b3cd4: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A78u;
    if (runtime->hasFunction(0x1B4A78u)) {
        auto targetFn = runtime->lookupFunction(0x1B4A78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3CD8u; }
        if (ctx->pc != 0x1B3CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4A78_0x1b4a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3CD8u; }
        if (ctx->pc != 0x1B3CD8u) { return; }
    }
    ctx->pc = 0x1B3CD8u;
    // 0x1b3cd8: 0xc06d29e  jal         func_1B4A78
    ctx->pc = 0x1B3CD8u;
    SET_GPR_U32(ctx, 31, 0x1B3CE0u);
    ctx->pc = 0x1B3CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3CD8u;
            // 0x1b3cdc: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A78u;
    if (runtime->hasFunction(0x1B4A78u)) {
        auto targetFn = runtime->lookupFunction(0x1B4A78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3CE0u; }
        if (ctx->pc != 0x1B3CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4A78_0x1b4a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3CE0u; }
        if (ctx->pc != 0x1B3CE0u) { return; }
    }
    ctx->pc = 0x1B3CE0u;
    // 0x1b3ce0: 0xc06d29e  jal         func_1B4A78
    ctx->pc = 0x1B3CE0u;
    SET_GPR_U32(ctx, 31, 0x1B3CE8u);
    ctx->pc = 0x1B3CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3CE0u;
            // 0x1b3ce4: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A78u;
    if (runtime->hasFunction(0x1B4A78u)) {
        auto targetFn = runtime->lookupFunction(0x1B4A78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3CE8u; }
        if (ctx->pc != 0x1B3CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4A78_0x1b4a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3CE8u; }
        if (ctx->pc != 0x1B3CE8u) { return; }
    }
    ctx->pc = 0x1B3CE8u;
    // 0x1b3ce8: 0xc06d29e  jal         func_1B4A78
    ctx->pc = 0x1B3CE8u;
    SET_GPR_U32(ctx, 31, 0x1B3CF0u);
    ctx->pc = 0x1B3CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3CE8u;
            // 0x1b3cec: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A78u;
    if (runtime->hasFunction(0x1B4A78u)) {
        auto targetFn = runtime->lookupFunction(0x1B4A78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3CF0u; }
        if (ctx->pc != 0x1B3CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4A78_0x1b4a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3CF0u; }
        if (ctx->pc != 0x1B3CF0u) { return; }
    }
    ctx->pc = 0x1B3CF0u;
    // 0x1b3cf0: 0xc06d29e  jal         func_1B4A78
    ctx->pc = 0x1B3CF0u;
    SET_GPR_U32(ctx, 31, 0x1B3CF8u);
    ctx->pc = 0x1B3CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3CF0u;
            // 0x1b3cf4: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A78u;
    if (runtime->hasFunction(0x1B4A78u)) {
        auto targetFn = runtime->lookupFunction(0x1B4A78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3CF8u; }
        if (ctx->pc != 0x1B3CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4A78_0x1b4a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3CF8u; }
        if (ctx->pc != 0x1B3CF8u) { return; }
    }
    ctx->pc = 0x1B3CF8u;
    // 0x1b3cf8: 0xc06d29e  jal         func_1B4A78
    ctx->pc = 0x1B3CF8u;
    SET_GPR_U32(ctx, 31, 0x1B3D00u);
    ctx->pc = 0x1B3CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3CF8u;
            // 0x1b3cfc: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A78u;
    if (runtime->hasFunction(0x1B4A78u)) {
        auto targetFn = runtime->lookupFunction(0x1B4A78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D00u; }
        if (ctx->pc != 0x1B3D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4A78_0x1b4a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D00u; }
        if (ctx->pc != 0x1B3D00u) { return; }
    }
    ctx->pc = 0x1B3D00u;
    // 0x1b3d00: 0xc06d29e  jal         func_1B4A78
    ctx->pc = 0x1B3D00u;
    SET_GPR_U32(ctx, 31, 0x1B3D08u);
    ctx->pc = 0x1B3D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D00u;
            // 0x1b3d04: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A78u;
    if (runtime->hasFunction(0x1B4A78u)) {
        auto targetFn = runtime->lookupFunction(0x1B4A78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D08u; }
        if (ctx->pc != 0x1B3D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4A78_0x1b4a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D08u; }
        if (ctx->pc != 0x1B3D08u) { return; }
    }
    ctx->pc = 0x1B3D08u;
    // 0x1b3d08: 0xc06999c  jal         func_1A6670
    ctx->pc = 0x1B3D08u;
    SET_GPR_U32(ctx, 31, 0x1B3D10u);
    ctx->pc = 0x1B3D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D08u;
            // 0x1b3d0c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6670u;
    if (runtime->hasFunction(0x1A6670u)) {
        auto targetFn = runtime->lookupFunction(0x1A6670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D10u; }
        if (ctx->pc != 0x1B3D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6670_0x1a6670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D10u; }
        if (ctx->pc != 0x1B3D10u) { return; }
    }
    ctx->pc = 0x1B3D10u;
    // 0x1b3d10: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1b3d10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b3d14: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1B3D14u;
    {
        const bool branch_taken_0x1b3d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D14u;
            // 0x1b3d18: 0x2403006c  addiu       $v1, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d14) {
            ctx->pc = 0x1B3C70u;
            runtime->cooperativeGuestYield();
            goto label_1b3c70;
        }
    }
    ctx->pc = 0x1B3D1Cu;
label_1b3d1c:
    // 0x1b3d1c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b3d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3d20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b3d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3d24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3d28: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D28u;
            // 0x1b3d2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3C38u: goto label_1b3c38;
            case 0x1B3C70u: goto label_1b3c70;
            case 0x1B3C88u: goto label_1b3c88;
            case 0x1B3D1Cu: goto label_1b3d1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B3D30u;
}
