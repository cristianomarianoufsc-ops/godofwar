#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ECE78
// Address: 0x1ece78 - 0x1eceb8
void sub_001ECE78_0x1ece78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECE78_0x1ece78");
#endif

    ctx->pc = 0x1ece78u;

    // 0x1ece78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ece78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ece7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ece7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ece80: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1ece80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1ece84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ece84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ece88: 0x8e023000  lw          $v0, 0x3000($s0)
    ctx->pc = 0x1ece88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12288)));
    // 0x1ece8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ECE8Cu;
    {
        const bool branch_taken_0x1ece8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ece8c) {
            ctx->pc = 0x1ECEA0u;
            goto label_1ecea0;
        }
    }
    ctx->pc = 0x1ECE94u;
    // 0x1ece94: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x1ECE94u;
    SET_GPR_U32(ctx, 31, 0x1ECE9Cu);
    ctx->pc = 0x1ECE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECE94u;
            // 0x1ece98: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECE9Cu; }
        if (ctx->pc != 0x1ECE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECE9Cu; }
        if (ctx->pc != 0x1ECE9Cu) { return; }
    }
    ctx->pc = 0x1ECE9Cu;
    // 0x1ece9c: 0xae023000  sw          $v0, 0x3000($s0)
    ctx->pc = 0x1ece9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12288), GPR_U32(ctx, 2));
label_1ecea0:
    // 0x1ecea0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1ECEA0u;
    SET_GPR_U32(ctx, 31, 0x1ECEA8u);
    ctx->pc = 0x1ECEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECEA0u;
            // 0x1ecea4: 0x8e043000  lw          $a0, 0x3000($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12288)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECEA8u; }
        if (ctx->pc != 0x1ECEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECEA8u; }
        if (ctx->pc != 0x1ECEA8u) { return; }
    }
    ctx->pc = 0x1ECEA8u;
    // 0x1ecea8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ecea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eceac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eceacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eceb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECEB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECEB0u;
            // 0x1eceb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ECEA0u: goto label_1ecea0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ECEB8u;
}
