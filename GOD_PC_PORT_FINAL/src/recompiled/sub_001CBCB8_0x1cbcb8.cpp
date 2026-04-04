#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CBCB8
// Address: 0x1cbcb8 - 0x1cbd00
void sub_001CBCB8_0x1cbcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CBCB8_0x1cbcb8");
#endif

    ctx->pc = 0x1cbcb8u;

    // 0x1cbcb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cbcb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cbcbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cbcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cbcc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cbcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cbcc4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cbcc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbcc8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cbcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cbccc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cbcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cbcd0: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1cbcd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1cbcd4: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1cbcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1cbcd8: 0x40f809  jalr        $v0
    ctx->pc = 0x1CBCD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CBCE0u);
        ctx->pc = 0x1CBCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBCD8u;
            // 0x1cbcdc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CBCE0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CBCF0u: goto label_1cbcf0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CBCE0u; }
            if (ctx->pc != 0x1CBCE0u) { return; }
        }
        }
    }
    ctx->pc = 0x1CBCE0u;
    // 0x1cbce0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBCE0u;
    {
        const bool branch_taken_0x1cbce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBCE0u;
            // 0x1cbce4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbce0) {
            ctx->pc = 0x1CBCF0u;
            goto label_1cbcf0;
        }
    }
    ctx->pc = 0x1CBCE8u;
    // 0x1cbce8: 0xc07fd12  jal         func_1FF448
    ctx->pc = 0x1CBCE8u;
    SET_GPR_U32(ctx, 31, 0x1CBCF0u);
    ctx->pc = 0x1CBCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBCE8u;
            // 0x1cbcec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF448u;
    if (runtime->hasFunction(0x1FF448u)) {
        auto targetFn = runtime->lookupFunction(0x1FF448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBCF0u; }
        if (ctx->pc != 0x1CBCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF448_0x1ff448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBCF0u; }
        if (ctx->pc != 0x1CBCF0u) { return; }
    }
    ctx->pc = 0x1CBCF0u;
label_1cbcf0:
    // 0x1cbcf0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cbcf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cbcf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cbcf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbcf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBCF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBCF8u;
            // 0x1cbcfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CBCF0u: goto label_1cbcf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CBD00u;
}
