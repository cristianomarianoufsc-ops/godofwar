#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00105C30
// Address: 0x105c30 - 0x105f38
void sub_00105C30_0x105c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105C30_0x105c30");
#endif

    ctx->pc = 0x105c30u;

    // 0x105c30: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x105c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x105c34: 0x27bdfc70  addiu       $sp, $sp, -0x390
    ctx->pc = 0x105c34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966384));
    // 0x105c38: 0x8c44ec4c  lw          $a0, -0x13B4($v0)
    ctx->pc = 0x105c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
    // 0x105c3c: 0x7fb00380  sq          $s0, 0x380($sp)
    ctx->pc = 0x105c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 16));
    // 0x105c40: 0x7fb10370  sq          $s1, 0x370($sp)
    ctx->pc = 0x105c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 17));
    // 0x105c44: 0x7fb20360  sq          $s2, 0x360($sp)
    ctx->pc = 0x105c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 18));
    // 0x105c48: 0x7fb40340  sq          $s4, 0x340($sp)
    ctx->pc = 0x105c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 20));
    // 0x105c4c: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x105c4cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x105c50: 0x7fb30350  sq          $s3, 0x350($sp)
    ctx->pc = 0x105c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 19));
    // 0x105c54: 0xffbf0330  sd          $ra, 0x330($sp)
    ctx->pc = 0x105c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 816), GPR_U64(ctx, 31));
    // 0x105c58: 0xc04f856  jal         func_13E158
    ctx->pc = 0x105C58u;
    SET_GPR_U32(ctx, 31, 0x105C60u);
    ctx->pc = 0x105C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105C58u;
            // 0x105c5c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105C60u; }
        if (ctx->pc != 0x105C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105C60u; }
        if (ctx->pc != 0x105C60u) { return; }
    }
    ctx->pc = 0x105C60u;
    // 0x105c60: 0xc08f20a  jal         func_23C828
    ctx->pc = 0x105C60u;
    SET_GPR_U32(ctx, 31, 0x105C68u);
    ctx->pc = 0x105C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105C60u;
            // 0x105c64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C828u;
    if (runtime->hasFunction(0x23C828u)) {
        auto targetFn = runtime->lookupFunction(0x23C828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105C68u; }
        if (ctx->pc != 0x105C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23c828_0x23c850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105C68u; }
        if (ctx->pc != 0x105C68u) { return; }
    }
    ctx->pc = 0x105C68u;
    // 0x105c68: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x105C68u;
    SET_GPR_U32(ctx, 31, 0x105C70u);
    ctx->pc = 0x105C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105C68u;
            // 0x105c6c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105C70u; }
        if (ctx->pc != 0x105C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105C70u; }
        if (ctx->pc != 0x105C70u) { return; }
    }
    ctx->pc = 0x105C70u;
    // 0x105c70: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x105C70u;
    SET_GPR_U32(ctx, 31, 0x105C78u);
    ctx->pc = 0x105C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105C70u;
            // 0x105c74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105C78u; }
        if (ctx->pc != 0x105C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105C78u; }
        if (ctx->pc != 0x105C78u) { return; }
    }
    ctx->pc = 0x105C78u;
    // 0x105c78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x105c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c7c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x105c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x105c80: 0x24a51348  addiu       $a1, $a1, 0x1348
    ctx->pc = 0x105c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4936));
    // 0x105c84: 0xc060978  jal         func_1825E0
    ctx->pc = 0x105C84u;
    SET_GPR_U32(ctx, 31, 0x105C8Cu);
    ctx->pc = 0x105C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105C84u;
            // 0x105c88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105C8Cu; }
        if (ctx->pc != 0x105C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105C8Cu; }
        if (ctx->pc != 0x105C8Cu) { return; }
    }
    ctx->pc = 0x105C8Cu;
    // 0x105c8c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x105c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x105c90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c94: 0x2442ea58  addiu       $v0, $v0, -0x15A8
    ctx->pc = 0x105c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961752));
    // 0x105c98: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x105C98u;
    SET_GPR_U32(ctx, 31, 0x105CA0u);
    ctx->pc = 0x105C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105C98u;
            // 0x105c9c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105CA0u; }
        if (ctx->pc != 0x105CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105CA0u; }
        if (ctx->pc != 0x105CA0u) { return; }
    }
    ctx->pc = 0x105CA0u;
    // 0x105ca0: 0x3c0503eb  lui         $a1, 0x3EB
    ctx->pc = 0x105ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1003 << 16));
    // 0x105ca4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x105ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ca8: 0x27a70154  addiu       $a3, $sp, 0x154
    ctx->pc = 0x105ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x105cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105cb0: 0x34a5b36f  ori         $a1, $a1, 0xB36F
    ctx->pc = 0x105cb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45935);
    // 0x105cb4: 0xc060812  jal         func_182048
    ctx->pc = 0x105CB4u;
    SET_GPR_U32(ctx, 31, 0x105CBCu);
    ctx->pc = 0x105CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105CB4u;
            // 0x105cb8: 0xae50bc08  sw          $s0, -0x43F8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294949896), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182048u;
    if (runtime->hasFunction(0x182048u)) {
        auto targetFn = runtime->lookupFunction(0x182048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105CBCu; }
        if (ctx->pc != 0x105CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182048_0x182048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105CBCu; }
        if (ctx->pc != 0x105CBCu) { return; }
    }
    ctx->pc = 0x105CBCu;
    // 0x105cbc: 0x8e44bc08  lw          $a0, -0x43F8($s2)
    ctx->pc = 0x105cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949896)));
    // 0x105cc0: 0x3c059e0c  lui         $a1, 0x9E0C
    ctx->pc = 0x105cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40460 << 16));
    // 0x105cc4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x105cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105cc8: 0x27a70158  addiu       $a3, $sp, 0x158
    ctx->pc = 0x105cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x105ccc: 0xc060812  jal         func_182048
    ctx->pc = 0x105CCCu;
    SET_GPR_U32(ctx, 31, 0x105CD4u);
    ctx->pc = 0x105CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105CCCu;
            // 0x105cd0: 0x34a5b7bc  ori         $a1, $a1, 0xB7BC (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47036);
        ctx->in_delay_slot = false;
    ctx->pc = 0x182048u;
    if (runtime->hasFunction(0x182048u)) {
        auto targetFn = runtime->lookupFunction(0x182048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105CD4u; }
        if (ctx->pc != 0x105CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182048_0x182048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105CD4u; }
        if (ctx->pc != 0x105CD4u) { return; }
    }
    ctx->pc = 0x105CD4u;
    // 0x105cd4: 0x8e44bc08  lw          $a0, -0x43F8($s2)
    ctx->pc = 0x105cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949896)));
    // 0x105cd8: 0x3c053060  lui         $a1, 0x3060
    ctx->pc = 0x105cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12384 << 16));
    // 0x105cdc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x105cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ce0: 0x27a7015c  addiu       $a3, $sp, 0x15C
    ctx->pc = 0x105ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x105ce4: 0xc060812  jal         func_182048
    ctx->pc = 0x105CE4u;
    SET_GPR_U32(ctx, 31, 0x105CECu);
    ctx->pc = 0x105CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105CE4u;
            // 0x105ce8: 0x34a51824  ori         $a1, $a1, 0x1824 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6180);
        ctx->in_delay_slot = false;
    ctx->pc = 0x182048u;
    if (runtime->hasFunction(0x182048u)) {
        auto targetFn = runtime->lookupFunction(0x182048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105CECu; }
        if (ctx->pc != 0x105CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182048_0x182048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105CECu; }
        if (ctx->pc != 0x105CECu) { return; }
    }
    ctx->pc = 0x105CECu;
    // 0x105cec: 0x8e44bc08  lw          $a0, -0x43F8($s2)
    ctx->pc = 0x105cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949896)));
    // 0x105cf0: 0x3c058aa4  lui         $a1, 0x8AA4
    ctx->pc = 0x105cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35492 << 16));
    // 0x105cf4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x105cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105cf8: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x105cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x105cfc: 0xc060812  jal         func_182048
    ctx->pc = 0x105CFCu;
    SET_GPR_U32(ctx, 31, 0x105D04u);
    ctx->pc = 0x105D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105CFCu;
            // 0x105d00: 0x34a5e8de  ori         $a1, $a1, 0xE8DE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59614);
        ctx->in_delay_slot = false;
    ctx->pc = 0x182048u;
    if (runtime->hasFunction(0x182048u)) {
        auto targetFn = runtime->lookupFunction(0x182048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D04u; }
        if (ctx->pc != 0x105D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182048_0x182048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D04u; }
        if (ctx->pc != 0x105D04u) { return; }
    }
    ctx->pc = 0x105D04u;
    // 0x105d04: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x105D04u;
    SET_GPR_U32(ctx, 31, 0x105D0Cu);
    ctx->pc = 0x105D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105D04u;
            // 0x105d08: 0x8e44bc08  lw          $a0, -0x43F8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D0Cu; }
        if (ctx->pc != 0x105D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D0Cu; }
        if (ctx->pc != 0x105D0Cu) { return; }
    }
    ctx->pc = 0x105D0Cu;
    // 0x105d0c: 0x8e44bc08  lw          $a0, -0x43F8($s2)
    ctx->pc = 0x105d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949896)));
    // 0x105d10: 0x3c0556e1  lui         $a1, 0x56E1
    ctx->pc = 0x105d10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22241 << 16));
    // 0x105d14: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x105d14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d18: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x105d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x105d1c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x105D1Cu;
    SET_GPR_U32(ctx, 31, 0x105D24u);
    ctx->pc = 0x105D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105D1Cu;
            // 0x105d20: 0x34a51d84  ori         $a1, $a1, 0x1D84 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7556);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D24u; }
        if (ctx->pc != 0x105D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D24u; }
        if (ctx->pc != 0x105D24u) { return; }
    }
    ctx->pc = 0x105D24u;
    // 0x105d24: 0x8e44bc08  lw          $a0, -0x43F8($s2)
    ctx->pc = 0x105d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949896)));
    // 0x105d28: 0x3c0556e1  lui         $a1, 0x56E1
    ctx->pc = 0x105d28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22241 << 16));
    // 0x105d2c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x105d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d30: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x105d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x105d34: 0xc060570  jal         func_1815C0
    ctx->pc = 0x105D34u;
    SET_GPR_U32(ctx, 31, 0x105D3Cu);
    ctx->pc = 0x105D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105D34u;
            // 0x105d38: 0x34a51996  ori         $a1, $a1, 0x1996 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6550);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D3Cu; }
        if (ctx->pc != 0x105D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D3Cu; }
        if (ctx->pc != 0x105D3Cu) { return; }
    }
    ctx->pc = 0x105D3Cu;
    // 0x105d3c: 0x8e44bc08  lw          $a0, -0x43F8($s2)
    ctx->pc = 0x105d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949896)));
    // 0x105d40: 0x3c052943  lui         $a1, 0x2943
    ctx->pc = 0x105d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10563 << 16));
    // 0x105d44: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x105d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d48: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x105d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x105d4c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x105D4Cu;
    SET_GPR_U32(ctx, 31, 0x105D54u);
    ctx->pc = 0x105D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105D4Cu;
            // 0x105d50: 0x34a5bc8e  ori         $a1, $a1, 0xBC8E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48270);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D54u; }
        if (ctx->pc != 0x105D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D54u; }
        if (ctx->pc != 0x105D54u) { return; }
    }
    ctx->pc = 0x105D54u;
    // 0x105d54: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x105D54u;
    SET_GPR_U32(ctx, 31, 0x105D5Cu);
    ctx->pc = 0x105D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105D54u;
            // 0x105d58: 0x8e44bc08  lw          $a0, -0x43F8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D5Cu; }
        if (ctx->pc != 0x105D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D5Cu; }
        if (ctx->pc != 0x105D5Cu) { return; }
    }
    ctx->pc = 0x105D5Cu;
    // 0x105d5c: 0x8e44bc08  lw          $a0, -0x43F8($s2)
    ctx->pc = 0x105d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949896)));
    // 0x105d60: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x105d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x105d64: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x105d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d68: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x105d68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x105d6c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x105D6Cu;
    SET_GPR_U32(ctx, 31, 0x105D74u);
    ctx->pc = 0x105D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105D6Cu;
            // 0x105d70: 0x34a58fda  ori         $a1, $a1, 0x8FDA (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36826);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D74u; }
        if (ctx->pc != 0x105D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D74u; }
        if (ctx->pc != 0x105D74u) { return; }
    }
    ctx->pc = 0x105D74u;
    // 0x105d74: 0x8e44bc08  lw          $a0, -0x43F8($s2)
    ctx->pc = 0x105d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949896)));
    // 0x105d78: 0x3c05199e  lui         $a1, 0x199E
    ctx->pc = 0x105d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)6558 << 16));
    // 0x105d7c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x105d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d80: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x105d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x105d84: 0xc060570  jal         func_1815C0
    ctx->pc = 0x105D84u;
    SET_GPR_U32(ctx, 31, 0x105D8Cu);
    ctx->pc = 0x105D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105D84u;
            // 0x105d88: 0x34a5ac0b  ori         $a1, $a1, 0xAC0B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44043);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D8Cu; }
        if (ctx->pc != 0x105D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D8Cu; }
        if (ctx->pc != 0x105D8Cu) { return; }
    }
    ctx->pc = 0x105D8Cu;
    // 0x105d8c: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x105D8Cu;
    SET_GPR_U32(ctx, 31, 0x105D94u);
    ctx->pc = 0x105D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105D8Cu;
            // 0x105d90: 0x8e44bc08  lw          $a0, -0x43F8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D94u; }
        if (ctx->pc != 0x105D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D94u; }
        if (ctx->pc != 0x105D94u) { return; }
    }
    ctx->pc = 0x105D94u;
    // 0x105d94: 0x8e44bc08  lw          $a0, -0x43F8($s2)
    ctx->pc = 0x105d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949896)));
    // 0x105d98: 0x3c05e6b8  lui         $a1, 0xE6B8
    ctx->pc = 0x105d98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59064 << 16));
    // 0x105d9c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x105d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105da0: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x105da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x105da4: 0xc060570  jal         func_1815C0
    ctx->pc = 0x105DA4u;
    SET_GPR_U32(ctx, 31, 0x105DACu);
    ctx->pc = 0x105DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105DA4u;
            // 0x105da8: 0x34a5e1ce  ori         $a1, $a1, 0xE1CE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57806);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105DACu; }
        if (ctx->pc != 0x105DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105DACu; }
        if (ctx->pc != 0x105DACu) { return; }
    }
    ctx->pc = 0x105DACu;
    // 0x105dac: 0x8e44bc08  lw          $a0, -0x43F8($s2)
    ctx->pc = 0x105dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949896)));
    // 0x105db0: 0x3c0554bf  lui         $a1, 0x54BF
    ctx->pc = 0x105db0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21695 << 16));
    // 0x105db4: 0x34a50da3  ori         $a1, $a1, 0xDA3
    ctx->pc = 0x105db4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3491);
    // 0x105db8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x105db8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105dbc: 0xc060570  jal         func_1815C0
    ctx->pc = 0x105DBCu;
    SET_GPR_U32(ctx, 31, 0x105DC4u);
    ctx->pc = 0x105DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105DBCu;
            // 0x105dc0: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105DC4u; }
        if (ctx->pc != 0x105DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105DC4u; }
        if (ctx->pc != 0x105DC4u) { return; }
    }
    ctx->pc = 0x105DC4u;
    // 0x105dc4: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x105DC4u;
    SET_GPR_U32(ctx, 31, 0x105DCCu);
    ctx->pc = 0x105DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105DC4u;
            // 0x105dc8: 0x8e44bc08  lw          $a0, -0x43F8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105DCCu; }
        if (ctx->pc != 0x105DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105DCCu; }
        if (ctx->pc != 0x105DCCu) { return; }
    }
    ctx->pc = 0x105DCCu;
    // 0x105dcc: 0x27b10034  addiu       $s1, $sp, 0x34
    ctx->pc = 0x105dccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_105dd0:
    // 0x105dd0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x105dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x105dd4: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x105dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x105dd8: 0x282001a  div         $zero, $s4, $v0
    ctx->pc = 0x105dd8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x105ddc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x105DDCu;
    {
        const bool branch_taken_0x105ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105ddc) {
            ctx->pc = 0x105DE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x105DDCu;
            // 0x105de0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x105DE4u;
            goto label_105de4;
        }
    }
    ctx->pc = 0x105DE4u;
label_105de4:
    // 0x105de4: 0xdc841350  ld          $a0, 0x1350($a0)
    ctx->pc = 0x105de4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4944)));
    // 0x105de8: 0x27b00170  addiu       $s0, $sp, 0x170
    ctx->pc = 0x105de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x105dec: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x105decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x105df0: 0xa3a00242  sb          $zero, 0x242($sp)
    ctx->pc = 0x105df0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 578), (uint8_t)GPR_U32(ctx, 0));
    // 0x105df4: 0xffa40170  sd          $a0, 0x170($sp)
    ctx->pc = 0x105df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 4));
    // 0x105df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105dfc: 0x1812  mflo        $v1
    ctx->pc = 0x105dfcu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x105e00: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x105e00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x105e04: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x105e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x105e08: 0xa3a30240  sb          $v1, 0x240($sp)
    ctx->pc = 0x105e08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 576), (uint8_t)GPR_U32(ctx, 3));
    // 0x105e0c: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x105e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x105e10: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x105e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x105e14: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x105e14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x105e18: 0xc0a253d  jal         func_2894F4
    ctx->pc = 0x105E18u;
    SET_GPR_U32(ctx, 31, 0x105E20u);
    ctx->pc = 0x105E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105E18u;
            // 0x105e1c: 0xa3a20241  sb          $v0, 0x241($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 577), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2894F4u;
    if (runtime->hasFunction(0x2894F4u)) {
        auto targetFn = runtime->lookupFunction(0x2894F4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105E20u; }
        if (ctx->pc != 0x105E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002894F4_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105E20u; }
        if (ctx->pc != 0x105E20u) { return; }
    }
    ctx->pc = 0x105E20u;
    // 0x105e20: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x105e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x105e24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105e28: 0xc0a253d  jal         func_2894F4
    ctx->pc = 0x105E28u;
    SET_GPR_U32(ctx, 31, 0x105E30u);
    ctx->pc = 0x105E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105E28u;
            // 0x105e2c: 0x24a51358  addiu       $a1, $a1, 0x1358 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2894F4u;
    if (runtime->hasFunction(0x2894F4u)) {
        auto targetFn = runtime->lookupFunction(0x2894F4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105E30u; }
        if (ctx->pc != 0x105E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002894F4_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105E30u; }
        if (ctx->pc != 0x105E30u) { return; }
    }
    ctx->pc = 0x105E30u;
    // 0x105e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105e34: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x105E34u;
    SET_GPR_U32(ctx, 31, 0x105E3Cu);
    ctx->pc = 0x105E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105E34u;
            // 0x105e38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105E3Cu; }
        if (ctx->pc != 0x105E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105E3Cu; }
        if (ctx->pc != 0x105E3Cu) { return; }
    }
    ctx->pc = 0x105E3Cu;
    // 0x105e3c: 0x8e44bc08  lw          $a0, -0x43F8($s2)
    ctx->pc = 0x105e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949896)));
    // 0x105e40: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x105e40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105e44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x105e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105e48: 0xc060570  jal         func_1815C0
    ctx->pc = 0x105E48u;
    SET_GPR_U32(ctx, 31, 0x105E50u);
    ctx->pc = 0x105E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105E48u;
            // 0x105e4c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105E50u; }
        if (ctx->pc != 0x105E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105E50u; }
        if (ctx->pc != 0x105E50u) { return; }
    }
    ctx->pc = 0x105E50u;
    // 0x105e50: 0x2a820030  slti        $v0, $s4, 0x30
    ctx->pc = 0x105e50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x105e54: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x105E54u;
    {
        const bool branch_taken_0x105e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105E54u;
            // 0x105e58: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e54) {
            ctx->pc = 0x105DD0u;
            runtime->cooperativeGuestYield();
            goto label_105dd0;
        }
    }
    ctx->pc = 0x105E5Cu;
    // 0x105e5c: 0x8e44bc08  lw          $a0, -0x43F8($s2)
    ctx->pc = 0x105e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949896)));
    // 0x105e60: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x105e60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105e64: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x105E64u;
    SET_GPR_U32(ctx, 31, 0x105E6Cu);
    ctx->pc = 0x105E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105E64u;
            // 0x105e68: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105E6Cu; }
        if (ctx->pc != 0x105E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105E6Cu; }
        if (ctx->pc != 0x105E6Cu) { return; }
    }
    ctx->pc = 0x105E6Cu;
    // 0x105e6c: 0x27b100f4  addiu       $s1, $sp, 0xF4
    ctx->pc = 0x105e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
label_105e70:
    // 0x105e70: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x105e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x105e74: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x105e74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x105e78: 0x262001a  div         $zero, $s3, $v0
    ctx->pc = 0x105e78u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x105e7c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x105E7Cu;
    {
        const bool branch_taken_0x105e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105e7c) {
            ctx->pc = 0x105E80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x105E7Cu;
            // 0x105e80: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x105E84u;
            goto label_105e84;
        }
    }
    ctx->pc = 0x105E84u;
label_105e84:
    // 0x105e84: 0xdc841360  ld          $a0, 0x1360($a0)
    ctx->pc = 0x105e84u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4960)));
    // 0x105e88: 0x27b00250  addiu       $s0, $sp, 0x250
    ctx->pc = 0x105e88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x105e8c: 0x27a50320  addiu       $a1, $sp, 0x320
    ctx->pc = 0x105e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x105e90: 0xa3a00322  sb          $zero, 0x322($sp)
    ctx->pc = 0x105e90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 802), (uint8_t)GPR_U32(ctx, 0));
    // 0x105e94: 0xffa40250  sd          $a0, 0x250($sp)
    ctx->pc = 0x105e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 4));
    // 0x105e98: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x105e98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x105e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ea0: 0x1812  mflo        $v1
    ctx->pc = 0x105ea0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x105ea4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x105ea4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x105ea8: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x105ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x105eac: 0xa3a30320  sb          $v1, 0x320($sp)
    ctx->pc = 0x105eacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 800), (uint8_t)GPR_U32(ctx, 3));
    // 0x105eb0: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x105eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x105eb4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x105eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x105eb8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x105eb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x105ebc: 0xc0a253d  jal         func_2894F4
    ctx->pc = 0x105EBCu;
    SET_GPR_U32(ctx, 31, 0x105EC4u);
    ctx->pc = 0x105EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105EBCu;
            // 0x105ec0: 0xa3a20321  sb          $v0, 0x321($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 801), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2894F4u;
    if (runtime->hasFunction(0x2894F4u)) {
        auto targetFn = runtime->lookupFunction(0x2894F4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105EC4u; }
        if (ctx->pc != 0x105EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002894F4_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105EC4u; }
        if (ctx->pc != 0x105EC4u) { return; }
    }
    ctx->pc = 0x105EC4u;
    // 0x105ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ec8: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x105EC8u;
    SET_GPR_U32(ctx, 31, 0x105ED0u);
    ctx->pc = 0x105ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105EC8u;
            // 0x105ecc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105ED0u; }
        if (ctx->pc != 0x105ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105ED0u; }
        if (ctx->pc != 0x105ED0u) { return; }
    }
    ctx->pc = 0x105ED0u;
    // 0x105ed0: 0x8e44bc08  lw          $a0, -0x43F8($s2)
    ctx->pc = 0x105ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949896)));
    // 0x105ed4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x105ed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ed8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x105ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105edc: 0xc060570  jal         func_1815C0
    ctx->pc = 0x105EDCu;
    SET_GPR_U32(ctx, 31, 0x105EE4u);
    ctx->pc = 0x105EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105EDCu;
            // 0x105ee0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105EE4u; }
        if (ctx->pc != 0x105EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105EE4u; }
        if (ctx->pc != 0x105EE4u) { return; }
    }
    ctx->pc = 0x105EE4u;
    // 0x105ee4: 0x2a820018  slti        $v0, $s4, 0x18
    ctx->pc = 0x105ee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x105ee8: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x105EE8u;
    {
        const bool branch_taken_0x105ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105EE8u;
            // 0x105eec: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ee8) {
            ctx->pc = 0x105E70u;
            runtime->cooperativeGuestYield();
            goto label_105e70;
        }
    }
    ctx->pc = 0x105EF0u;
    // 0x105ef0: 0xc04f860  jal         func_13E180
    ctx->pc = 0x105EF0u;
    SET_GPR_U32(ctx, 31, 0x105EF8u);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105EF8u; }
        if (ctx->pc != 0x105EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105EF8u; }
        if (ctx->pc != 0x105EF8u) { return; }
    }
    ctx->pc = 0x105EF8u;
    // 0x105ef8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x105ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x105efc: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x105efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105f00: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x105f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x105f04: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x105F04u;
    {
        const bool branch_taken_0x105f04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x105F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105F04u;
            // 0x105f08: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f04) {
            ctx->pc = 0x105F14u;
            goto label_105f14;
        }
    }
    ctx->pc = 0x105F0Cu;
    // 0x105f0c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x105F0Cu;
    SET_GPR_U32(ctx, 31, 0x105F14u);
    ctx->pc = 0x105F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105F0Cu;
            // 0x105f10: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105F14u; }
        if (ctx->pc != 0x105F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105F14u; }
        if (ctx->pc != 0x105F14u) { return; }
    }
    ctx->pc = 0x105F14u;
label_105f14:
    // 0x105f14: 0x7bb00380  lq          $s0, 0x380($sp)
    ctx->pc = 0x105f14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x105f18: 0x7bb10370  lq          $s1, 0x370($sp)
    ctx->pc = 0x105f18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x105f1c: 0x7bb20360  lq          $s2, 0x360($sp)
    ctx->pc = 0x105f1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x105f20: 0x7bb30350  lq          $s3, 0x350($sp)
    ctx->pc = 0x105f20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x105f24: 0x7bb40340  lq          $s4, 0x340($sp)
    ctx->pc = 0x105f24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x105f28: 0xdfbf0330  ld          $ra, 0x330($sp)
    ctx->pc = 0x105f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x105f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x105F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105F2Cu;
            // 0x105f30: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x105DD0u: goto label_105dd0;
            case 0x105DE4u: goto label_105de4;
            case 0x105E70u: goto label_105e70;
            case 0x105E84u: goto label_105e84;
            case 0x105F14u: goto label_105f14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x105F34u;
    // 0x105f34: 0x0  nop
    ctx->pc = 0x105f34u;
    // NOP
}
