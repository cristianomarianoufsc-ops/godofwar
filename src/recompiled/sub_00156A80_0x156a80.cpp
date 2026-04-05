#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00156A80
// Address: 0x156a80 - 0x156b00
void sub_00156A80_0x156a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156A80_0x156a80");
#endif

    ctx->pc = 0x156a80u;

    // 0x156a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x156a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x156a84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x156a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x156a88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x156a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x156a8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x156a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156a90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156a94: 0xc055a8c  jal         func_156A30
    ctx->pc = 0x156A94u;
    SET_GPR_U32(ctx, 31, 0x156A9Cu);
    ctx->pc = 0x156A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156A94u;
            // 0x156a98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156A30u;
    if (runtime->hasFunction(0x156A30u)) {
        auto targetFn = runtime->lookupFunction(0x156A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156A9Cu; }
        if (ctx->pc != 0x156A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156A30_0x156a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156A9Cu; }
        if (ctx->pc != 0x156A9Cu) { return; }
    }
    ctx->pc = 0x156A9Cu;
    // 0x156a9c: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x156a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x156aa0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x156aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x156aa4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x156aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x156aa8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x156AA8u;
    {
        const bool branch_taken_0x156aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156AA8u;
            // 0x156aac: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156aa8) {
            ctx->pc = 0x156AC0u;
            goto label_156ac0;
        }
    }
    ctx->pc = 0x156AB0u;
    // 0x156ab0: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x156ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x156ab4: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x156AB4u;
    SET_GPR_U32(ctx, 31, 0x156ABCu);
    ctx->pc = 0x156AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156AB4u;
            // 0x156ab8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156ABCu; }
        if (ctx->pc != 0x156ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156ABCu; }
        if (ctx->pc != 0x156ABCu) { return; }
    }
    ctx->pc = 0x156ABCu;
    // 0x156abc: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x156abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_156ac0:
    // 0x156ac0: 0xc08f22c  jal         func_23C8B0
    ctx->pc = 0x156AC0u;
    SET_GPR_U32(ctx, 31, 0x156AC8u);
    ctx->pc = 0x156AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156AC0u;
            // 0x156ac4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C8B0u;
    if (runtime->hasFunction(0x23C8B0u)) {
        auto targetFn = runtime->lookupFunction(0x23C8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156AC8u; }
        if (ctx->pc != 0x156AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023C8B0_0x23c8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156AC8u; }
        if (ctx->pc != 0x156AC8u) { return; }
    }
    ctx->pc = 0x156AC8u;
    // 0x156ac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156acc: 0xc08e4b2  jal         func_2392C8
    ctx->pc = 0x156ACCu;
    SET_GPR_U32(ctx, 31, 0x156AD4u);
    ctx->pc = 0x156AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156ACCu;
            // 0x156ad0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2392C8u;
    if (runtime->hasFunction(0x2392C8u)) {
        auto targetFn = runtime->lookupFunction(0x2392C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156AD4u; }
        if (ctx->pc != 0x156AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002392C8_0x2392c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156AD4u; }
        if (ctx->pc != 0x156AD4u) { return; }
    }
    ctx->pc = 0x156AD4u;
    // 0x156ad4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x156ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x156ad8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x156AD8u;
    {
        const bool branch_taken_0x156ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156ad8) {
            ctx->pc = 0x156ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156AD8u;
            // 0x156adc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156AECu;
            goto label_156aec;
        }
    }
    ctx->pc = 0x156AE0u;
    // 0x156ae0: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x156AE0u;
    SET_GPR_U32(ctx, 31, 0x156AE8u);
    ctx->pc = 0x156AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156AE0u;
            // 0x156ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156AE8u; }
        if (ctx->pc != 0x156AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156AE8u; }
        if (ctx->pc != 0x156AE8u) { return; }
    }
    ctx->pc = 0x156AE8u;
    // 0x156ae8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x156ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_156aec:
    // 0x156aec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x156aecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156af0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156af4: 0x3e00008  jr          $ra
    ctx->pc = 0x156AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156AF4u;
            // 0x156af8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x156AC0u: goto label_156ac0;
            case 0x156AECu: goto label_156aec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x156AFCu;
    // 0x156afc: 0x0  nop
    ctx->pc = 0x156afcu;
    // NOP
}
