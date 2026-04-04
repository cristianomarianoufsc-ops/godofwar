#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00101828
// Address: 0x101828 - 0x101888
void sub_00101828_0x101828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101828_0x101828");
#endif

    ctx->pc = 0x101828u;

    // 0x101828: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x101828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x10182c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10182cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x101830: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x101830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x101834: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x101834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101838: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10183c: 0x8c43e854  lw          $v1, -0x17AC($v0)
    ctx->pc = 0x10183cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961236)));
    // 0x101840: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x101840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x101844: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x101844u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x101848: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x101848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x10184c: 0x40f809  jalr        $v0
    ctx->pc = 0x10184Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x101854u);
        ctx->pc = 0x101850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10184Cu;
            // 0x101850: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x101854u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101878u: goto label_101878;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x101854u; }
            if (ctx->pc != 0x101854u) { return; }
        }
        }
    }
    ctx->pc = 0x101854u;
    // 0x101854: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101858: 0x24900100  addiu       $s0, $a0, 0x100
    ctx->pc = 0x101858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x10185c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x10185cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x101860: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x101860u;
    {
        const bool branch_taken_0x101860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101860u;
            // 0x101864: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101860) {
            ctx->pc = 0x101878u;
            goto label_101878;
        }
    }
    ctx->pc = 0x101868u;
    // 0x101868: 0xc046044  jal         func_118110
    ctx->pc = 0x101868u;
    SET_GPR_U32(ctx, 31, 0x101870u);
    ctx->pc = 0x118110u;
    if (runtime->hasFunction(0x118110u)) {
        auto targetFn = runtime->lookupFunction(0x118110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101870u; }
        if (ctx->pc != 0x101870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118110_0x118110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101870u; }
        if (ctx->pc != 0x101870u) { return; }
    }
    ctx->pc = 0x101870u;
    // 0x101870: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x101870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101874: 0x0  nop
    ctx->pc = 0x101874u;
    // NOP
label_101878:
    // 0x101878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10187c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10187cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101880: 0x3e00008  jr          $ra
    ctx->pc = 0x101880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101880u;
            // 0x101884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101878u: goto label_101878;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101888u;
}
