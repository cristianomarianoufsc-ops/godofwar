#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9C78
// Address: 0x1a9c78 - 0x1a9cc8
void sub_001A9C78_0x1a9c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9C78_0x1a9c78");
#endif

    ctx->pc = 0x1a9c78u;

    // 0x1a9c78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a9c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a9c7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a9c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a9c80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a9c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a9c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9c88: 0x8c830094  lw          $v1, 0x94($a0)
    ctx->pc = 0x1a9c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1a9c8c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A9C8Cu;
    {
        const bool branch_taken_0x1a9c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9C8Cu;
            // 0x1a9c90: 0x24900094  addiu       $s0, $a0, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c8c) {
            ctx->pc = 0x1A9CB4u;
            goto label_1a9cb4;
        }
    }
    ctx->pc = 0x1A9C94u;
    // 0x1a9c94: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x1a9c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1a9c98: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a9c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a9c9c: 0xac44cac8  sw          $a0, -0x3538($v0)
    ctx->pc = 0x1a9c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 4));
    // 0x1a9ca0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1a9ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9ca4: 0x24840058  addiu       $a0, $a0, 0x58
    ctx->pc = 0x1a9ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x1a9ca8: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1A9CA8u;
    SET_GPR_U32(ctx, 31, 0x1A9CB0u);
    ctx->pc = 0x1A9CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9CA8u;
            // 0x1a9cac: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9CB0u; }
        if (ctx->pc != 0x1A9CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9CB0u; }
        if (ctx->pc != 0x1A9CB0u) { return; }
    }
    ctx->pc = 0x1A9CB0u;
    // 0x1a9cb0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a9cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a9cb4:
    // 0x1a9cb4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a9cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a9cb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a9cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9cbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9CC0u;
            // 0x1a9cc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9CB4u: goto label_1a9cb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9CC8u;
}
