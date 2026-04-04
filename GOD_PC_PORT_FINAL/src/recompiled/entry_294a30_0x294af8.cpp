#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_294a30
// Address: 0x294a30 - 0x294af8
void entry_294a30_0x294af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_294a30_0x294af8");
#endif

    ctx->pc = 0x294a30u;

    // 0x294a30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x294a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x294a34: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x294a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x294a38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x294a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x294a3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x294a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294a40: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x294a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x294a44: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x294a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x294a48: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x294a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x294a4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x294a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x294a50: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x294A50u;
    {
        const bool branch_taken_0x294a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294a50) {
            ctx->pc = 0x294A54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x294A50u;
            // 0x294a54: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x294A64u;
            goto label_294a64;
        }
    }
    ctx->pc = 0x294A58u;
    // 0x294a58: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x294a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x294a5c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x294A5Cu;
    {
        const bool branch_taken_0x294a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294A5Cu;
            // 0x294a60: 0x34428008  ori         $v0, $v0, 0x8008 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32776);
        ctx->in_delay_slot = false;
        if (branch_taken_0x294a5c) {
            ctx->pc = 0x294AE4u;
            goto label_294ae4;
        }
    }
    ctx->pc = 0x294A64u;
label_294a64:
    // 0x294a64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x294a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294a68: 0x244267f0  addiu       $v0, $v0, 0x67F0
    ctx->pc = 0x294a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26608));
    // 0x294a6c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x294a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x294a70: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x294a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x294a74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x294a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294a78: 0xc0a4f08  jal         func_293C20
    ctx->pc = 0x294A78u;
    SET_GPR_U32(ctx, 31, 0x294A80u);
    ctx->pc = 0x294A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294A78u;
            // 0x294a7c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C20u;
    if (runtime->hasFunction(0x293C20u)) {
        auto targetFn = runtime->lookupFunction(0x293C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294A80u; }
        if (ctx->pc != 0x294A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c20_0x293c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294A80u; }
        if (ctx->pc != 0x294A80u) { return; }
    }
    ctx->pc = 0x294A80u;
    // 0x294a80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x294a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294a84: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x294A84u;
    {
        const bool branch_taken_0x294a84 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x294A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294A84u;
            // 0x294a88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294a84) {
            ctx->pc = 0x294A98u;
            goto label_294a98;
        }
    }
    ctx->pc = 0x294A8Cu;
    // 0x294a8c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x294a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x294a90: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x294A90u;
    {
        const bool branch_taken_0x294a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294A90u;
            // 0x294a94: 0x34428003  ori         $v0, $v0, 0x8003 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
        ctx->in_delay_slot = false;
        if (branch_taken_0x294a90) {
            ctx->pc = 0x294AE4u;
            goto label_294ae4;
        }
    }
    ctx->pc = 0x294A98u;
label_294a98:
    // 0x294a98: 0xc0a68de  jal         func_29A378
    ctx->pc = 0x294A98u;
    SET_GPR_U32(ctx, 31, 0x294AA0u);
    ctx->pc = 0x294A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294A98u;
            // 0x294a9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A378u;
    if (runtime->hasFunction(0x29A378u)) {
        auto targetFn = runtime->lookupFunction(0x29A378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294AA0u; }
        if (ctx->pc != 0x294AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029A378_0x29a378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294AA0u; }
        if (ctx->pc != 0x294AA0u) { return; }
    }
    ctx->pc = 0x294AA0u;
    // 0x294aa0: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x294aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x294aa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x294aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294aa8: 0x24a54c70  addiu       $a1, $a1, 0x4C70
    ctx->pc = 0x294aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19568));
    // 0x294aac: 0xc0a692a  jal         func_29A4A8
    ctx->pc = 0x294AACu;
    SET_GPR_U32(ctx, 31, 0x294AB4u);
    ctx->pc = 0x294AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294AACu;
            // 0x294ab0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A4A8u;
    if (runtime->hasFunction(0x29A4A8u)) {
        auto targetFn = runtime->lookupFunction(0x29A4A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294AB4u; }
        if (ctx->pc != 0x294AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029A4A8_0x29a4a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294AB4u; }
        if (ctx->pc != 0x294AB4u) { return; }
    }
    ctx->pc = 0x294AB4u;
    // 0x294ab4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x294ab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294ab8: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x294AB8u;
    {
        const bool branch_taken_0x294ab8 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x294ab8) {
            ctx->pc = 0x294AD0u;
            goto label_294ad0;
        }
    }
    ctx->pc = 0x294AC0u;
    // 0x294ac0: 0xc0a4f0c  jal         func_293C30
    ctx->pc = 0x294AC0u;
    SET_GPR_U32(ctx, 31, 0x294AC8u);
    ctx->pc = 0x294AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294AC0u;
            // 0x294ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C30u;
    if (runtime->hasFunction(0x293C30u)) {
        auto targetFn = runtime->lookupFunction(0x293C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294AC8u; }
        if (ctx->pc != 0x294AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c30_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294AC8u; }
        if (ctx->pc != 0x294AC8u) { return; }
    }
    ctx->pc = 0x294AC8u;
    // 0x294ac8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x294AC8u;
    {
        const bool branch_taken_0x294ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294AC8u;
            // 0x294acc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294ac8) {
            ctx->pc = 0x294AE4u;
            goto label_294ae4;
        }
    }
    ctx->pc = 0x294AD0u;
label_294ad0:
    // 0x294ad0: 0xc0a4f18  jal         func_293C60
    ctx->pc = 0x294AD0u;
    SET_GPR_U32(ctx, 31, 0x294AD8u);
    ctx->pc = 0x294AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294AD0u;
            // 0x294ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294AD8u; }
        if (ctx->pc != 0x294AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294AD8u; }
        if (ctx->pc != 0x294AD8u) { return; }
    }
    ctx->pc = 0x294AD8u;
    // 0x294ad8: 0xc0a4f0c  jal         func_293C30
    ctx->pc = 0x294AD8u;
    SET_GPR_U32(ctx, 31, 0x294AE0u);
    ctx->pc = 0x294ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294AD8u;
            // 0x294adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C30u;
    if (runtime->hasFunction(0x293C30u)) {
        auto targetFn = runtime->lookupFunction(0x293C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294AE0u; }
        if (ctx->pc != 0x294AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c30_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294AE0u; }
        if (ctx->pc != 0x294AE0u) { return; }
    }
    ctx->pc = 0x294AE0u;
    // 0x294ae0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x294ae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294ae4:
    // 0x294ae4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x294ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x294ae8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x294ae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x294aec: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x294aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294af0: 0x3e00008  jr          $ra
    ctx->pc = 0x294AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294AF0u;
            // 0x294af4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x294A64u: goto label_294a64;
            case 0x294A98u: goto label_294a98;
            case 0x294AD0u: goto label_294ad0;
            case 0x294AE4u: goto label_294ae4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x294AF8u;
}
