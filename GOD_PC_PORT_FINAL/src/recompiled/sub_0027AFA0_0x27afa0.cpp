#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027AFA0
// Address: 0x27afa0 - 0x27b010
void sub_0027AFA0_0x27afa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027AFA0_0x27afa0");
#endif

    ctx->pc = 0x27afa0u;

    // 0x27afa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27afa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27afa4: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x27afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x27afa8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27afa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27afac: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x27afacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x27afb0: 0x3c100031  lui         $s0, 0x31
    ctx->pc = 0x27afb0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49 << 16));
    // 0x27afb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27afb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27afb8: 0x2607ac40  addiu       $a3, $s0, -0x53C0
    ctx->pc = 0x27afb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945856));
    // 0x27afbc: 0x34a51304  ori         $a1, $a1, 0x1304
    ctx->pc = 0x27afbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4868);
    // 0x27afc0: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x27afc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x27afc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27afc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27afc8: 0x2444ab48  addiu       $a0, $v0, -0x54B8
    ctx->pc = 0x27afc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945608));
    // 0x27afcc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x27afccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x27afd0: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x27afd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x27afd4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x27afd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27afd8: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x27afd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x27afdc: 0xc0a5d1c  jal         func_297470
    ctx->pc = 0x27AFDCu;
    SET_GPR_U32(ctx, 31, 0x27AFE4u);
    ctx->pc = 0x27AFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AFDCu;
            // 0x27afe0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297470u;
    if (runtime->hasFunction(0x297470u)) {
        auto targetFn = runtime->lookupFunction(0x297470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AFE4u; }
        if (ctx->pc != 0x27AFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297470_0x297470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AFE4u; }
        if (ctx->pc != 0x27AFE4u) { return; }
    }
    ctx->pc = 0x27AFE4u;
    // 0x27afe4: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27AFE4u;
    {
        const bool branch_taken_0x27afe4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x27AFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AFE4u;
            // 0x27afe8: 0x8e02ac40  lw          $v0, -0x53C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27afe4) {
            ctx->pc = 0x27AFFCu;
            goto label_27affc;
        }
    }
    ctx->pc = 0x27AFECu;
    // 0x27afec: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x27afecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x27aff0: 0xc09edf0  jal         func_27B7C0
    ctx->pc = 0x27AFF0u;
    SET_GPR_U32(ctx, 31, 0x27AFF8u);
    ctx->pc = 0x27AFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AFF0u;
            // 0x27aff4: 0x24844da8  addiu       $a0, $a0, 0x4DA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B7C0u;
    if (runtime->hasFunction(0x27B7C0u)) {
        auto targetFn = runtime->lookupFunction(0x27B7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AFF8u; }
        if (ctx->pc != 0x27AFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B7C0_0x27b7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AFF8u; }
        if (ctx->pc != 0x27AFF8u) { return; }
    }
    ctx->pc = 0x27AFF8u;
    // 0x27aff8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27aff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27affc:
    // 0x27affc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27affcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b000: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27b000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b004: 0x3e00008  jr          $ra
    ctx->pc = 0x27B004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B004u;
            // 0x27b008: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27AFFCu: goto label_27affc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27B00Cu;
    // 0x27b00c: 0x0  nop
    ctx->pc = 0x27b00cu;
    // NOP
}
