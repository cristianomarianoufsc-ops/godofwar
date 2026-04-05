#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017DF90
// Address: 0x17df90 - 0x17e040
void sub_0017DF90_0x17df90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DF90_0x17df90");
#endif

    ctx->pc = 0x17df90u;

    // 0x17df90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17df90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17df94: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17df94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17df98: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x17df98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x17df9c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17df9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17dfa0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17dfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17dfa4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17dfa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfa8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x17dfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x17dfac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17dfacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfb0: 0x8e02c700  lw          $v0, -0x3900($s0)
    ctx->pc = 0x17dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952704)));
    // 0x17dfb4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17dfb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfb8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17DFB8u;
    {
        const bool branch_taken_0x17dfb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DFB8u;
            // 0x17dfbc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dfb8) {
            ctx->pc = 0x17DFCCu;
            goto label_17dfcc;
        }
    }
    ctx->pc = 0x17DFC0u;
    // 0x17dfc0: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x17DFC0u;
    SET_GPR_U32(ctx, 31, 0x17DFC8u);
    ctx->pc = 0x17DFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DFC0u;
            // 0x17dfc4: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFC8u; }
        if (ctx->pc != 0x17DFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFC8u; }
        if (ctx->pc != 0x17DFC8u) { return; }
    }
    ctx->pc = 0x17DFC8u;
    // 0x17dfc8: 0xae02c700  sw          $v0, -0x3900($s0)
    ctx->pc = 0x17dfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952704), GPR_U32(ctx, 2));
label_17dfcc:
    // 0x17dfcc: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x17DFCCu;
    SET_GPR_U32(ctx, 31, 0x17DFD4u);
    ctx->pc = 0x17DFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DFCCu;
            // 0x17dfd0: 0x8e04c700  lw          $a0, -0x3900($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952704)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFD4u; }
        if (ctx->pc != 0x17DFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFD4u; }
        if (ctx->pc != 0x17DFD4u) { return; }
    }
    ctx->pc = 0x17DFD4u;
    // 0x17dfd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17dfd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfd8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17dfd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17dfdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17dfdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfe0: 0xc060284  jal         func_180A10
    ctx->pc = 0x17DFE0u;
    SET_GPR_U32(ctx, 31, 0x17DFE8u);
    ctx->pc = 0x17DFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DFE0u;
            // 0x17dfe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A10u;
    if (runtime->hasFunction(0x180A10u)) {
        auto targetFn = runtime->lookupFunction(0x180A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFE8u; }
        if (ctx->pc != 0x17DFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A10_0x180a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFE8u; }
        if (ctx->pc != 0x17DFE8u) { return; }
    }
    ctx->pc = 0x17DFE8u;
    // 0x17dfe8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x17dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x17dfec: 0xae120018  sw          $s2, 0x18($s0)
    ctx->pc = 0x17dfecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x17dff0: 0x2442af48  addiu       $v0, $v0, -0x50B8
    ctx->pc = 0x17dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946632));
    // 0x17dff4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x17dff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17dff8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x17dff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x17dffc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17dffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e000: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17e000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x17e004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e008: 0xc05f652  jal         func_17D948
    ctx->pc = 0x17E008u;
    SET_GPR_U32(ctx, 31, 0x17E010u);
    ctx->pc = 0x17E00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E008u;
            // 0x17e00c: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D948u;
    if (runtime->hasFunction(0x17D948u)) {
        auto targetFn = runtime->lookupFunction(0x17D948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E010u; }
        if (ctx->pc != 0x17E010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17d948_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E010u; }
        if (ctx->pc != 0x17E010u) { return; }
    }
    ctx->pc = 0x17E010u;
    // 0x17e010: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17e010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e014: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17e014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e018: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17e018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e01c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17e01cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e020: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17e020u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e028: 0x3e00008  jr          $ra
    ctx->pc = 0x17E028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E028u;
            // 0x17e02c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DFCCu: goto label_17dfcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E030u;
    // 0x17e030: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x17e030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17e034: 0x0  nop
    ctx->pc = 0x17e034u;
    // NOP
    // 0x17e038: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x17e038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17e03c: 0x0  nop
    ctx->pc = 0x17e03cu;
    // NOP
}
