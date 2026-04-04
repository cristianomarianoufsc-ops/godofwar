#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019BA30
// Address: 0x19ba30 - 0x19baf8
void sub_0019BA30_0x19ba30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BA30_0x19ba30");
#endif

    ctx->pc = 0x19ba30u;

    // 0x19ba30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19ba30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19ba34: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x19ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x19ba38: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x19ba38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x19ba3c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x19ba3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x19ba40: 0x24533a80  addiu       $s3, $v0, 0x3A80
    ctx->pc = 0x19ba40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 14976));
    // 0x19ba44: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x19ba44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x19ba48: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19ba48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba4c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x19ba4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x19ba50: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19ba50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19ba54: 0xc05f9ae  jal         func_17E6B8
    ctx->pc = 0x19BA54u;
    SET_GPR_U32(ctx, 31, 0x19BA5Cu);
    ctx->pc = 0x19BA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BA54u;
            // 0x19ba58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E6B8u;
    if (runtime->hasFunction(0x17E6B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA5Cu; }
        if (ctx->pc != 0x19BA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e6b8_0x17e6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA5Cu; }
        if (ctx->pc != 0x19BA5Cu) { return; }
    }
    ctx->pc = 0x19BA5Cu;
    // 0x19ba5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19ba5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19ba60:
    // 0x19ba60: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x19BA60u;
    SET_GPR_U32(ctx, 31, 0x19BA68u);
    ctx->pc = 0x19BA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BA60u;
            // 0x19ba64: 0x2411001c  addiu       $s1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA68u; }
        if (ctx->pc != 0x19BA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA68u; }
        if (ctx->pc != 0x19BA68u) { return; }
    }
    ctx->pc = 0x19BA68u;
    // 0x19ba68: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19ba68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19ba6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19ba6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba70: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19ba70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba74: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x19BA74u;
    SET_GPR_U32(ctx, 31, 0x19BA7Cu);
    ctx->pc = 0x19BA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BA74u;
            // 0x19ba78: 0x24a53a98  addiu       $a1, $a1, 0x3A98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA7Cu; }
        if (ctx->pc != 0x19BA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA7Cu; }
        if (ctx->pc != 0x19BA7Cu) { return; }
    }
    ctx->pc = 0x19BA7Cu;
    // 0x19ba7c: 0x2513018  mult        $a2, $s2, $s1
    ctx->pc = 0x19ba7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x19ba80: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x19ba80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x19ba84: 0x2610e190  addiu       $s0, $s0, -0x1E70
    ctx->pc = 0x19ba84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959504));
    // 0x19ba88: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19ba88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19ba8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba90: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x19BA90u;
    SET_GPR_U32(ctx, 31, 0x19BA98u);
    ctx->pc = 0x19BA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BA90u;
            // 0x19ba94: 0xd03021  addu        $a2, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA98u; }
        if (ctx->pc != 0x19BA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA98u; }
        if (ctx->pc != 0x19BA98u) { return; }
    }
    ctx->pc = 0x19BA98u;
    // 0x19ba98: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19ba98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19ba9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19ba9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19baa0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19baa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19baa4: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x19BAA4u;
    SET_GPR_U32(ctx, 31, 0x19BAACu);
    ctx->pc = 0x19BAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BAA4u;
            // 0x19baa8: 0x24a53ab8  addiu       $a1, $a1, 0x3AB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BAACu; }
        if (ctx->pc != 0x19BAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BAACu; }
        if (ctx->pc != 0x19BAACu) { return; }
    }
    ctx->pc = 0x19BAACu;
    // 0x19baac: 0x2518818  mult        $s1, $s2, $s1
    ctx->pc = 0x19baacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x19bab0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x19bab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x19bab4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19bab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bab8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19bab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19babc: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x19babcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19bac0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19bac0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19bac4: 0xc05f836  jal         func_17E0D8
    ctx->pc = 0x19BAC4u;
    SET_GPR_U32(ctx, 31, 0x19BACCu);
    ctx->pc = 0x19BAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BAC4u;
            // 0x19bac8: 0x2303021  addu        $a2, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0D8u;
    if (runtime->hasFunction(0x17E0D8u)) {
        auto targetFn = runtime->lookupFunction(0x17E0D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BACCu; }
        if (ctx->pc != 0x19BACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e0d8_0x17e170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BACCu; }
        if (ctx->pc != 0x19BACCu) { return; }
    }
    ctx->pc = 0x19BACCu;
    // 0x19bacc: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x19baccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19bad0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x19BAD0u;
    {
        const bool branch_taken_0x19bad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BAD0u;
            // 0x19bad4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bad0) {
            ctx->pc = 0x19BA60u;
            runtime->cooperativeGuestYield();
            goto label_19ba60;
        }
    }
    ctx->pc = 0x19BAD8u;
    // 0x19bad8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x19bad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19badc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x19badcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19bae0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x19bae0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19bae4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x19bae4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19bae8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19bae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19baec: 0x3e00008  jr          $ra
    ctx->pc = 0x19BAECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BAECu;
            // 0x19baf0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BA60u: goto label_19ba60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19BAF4u;
    // 0x19baf4: 0x0  nop
    ctx->pc = 0x19baf4u;
    // NOP
}
