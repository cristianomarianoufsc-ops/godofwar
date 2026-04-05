#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100A60
// Address: 0x100a60 - 0x100ab8
void sub_00100A60_0x100a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100A60_0x100a60");
#endif

    ctx->pc = 0x100a60u;

    // 0x100a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x100a64: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x100a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x100a68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x100a6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x100a6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100a70: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x100a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x100a74: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x100a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x100a78: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x100a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x100a7c: 0x1044000a  beq         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x100A7Cu;
    {
        const bool branch_taken_0x100a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x100A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100A7Cu;
            // 0x100a80: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a7c) {
            ctx->pc = 0x100AA8u;
            goto label_100aa8;
        }
    }
    ctx->pc = 0x100A84u;
    // 0x100a84: 0x0  nop
    ctx->pc = 0x100a84u;
    // NOP
label_100a88:
    // 0x100a88: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x100a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x100a8c: 0xc041d20  jal         func_107480
    ctx->pc = 0x100A8Cu;
    SET_GPR_U32(ctx, 31, 0x100A94u);
    ctx->pc = 0x100A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100A8Cu;
            // 0x100a90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107480u;
    if (runtime->hasFunction(0x107480u)) {
        auto targetFn = runtime->lookupFunction(0x107480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100A94u; }
        if (ctx->pc != 0x100A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_107480_0x1074d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100A94u; }
        if (ctx->pc != 0x100A94u) { return; }
    }
    ctx->pc = 0x100A94u;
    // 0x100a94: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x100a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x100a98: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x100a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100a9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x100a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100aa0: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x100AA0u;
    {
        const bool branch_taken_0x100aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x100AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100AA0u;
            // 0x100aa4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100aa0) {
            ctx->pc = 0x100A88u;
            runtime->cooperativeGuestYield();
            goto label_100a88;
        }
    }
    ctx->pc = 0x100AA8u;
label_100aa8:
    // 0x100aa8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x100aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100aac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x100AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100AB0u;
            // 0x100ab4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100A88u: goto label_100a88;
            case 0x100AA8u: goto label_100aa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x100AB8u;
}
