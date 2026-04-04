#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018FB60
// Address: 0x18fb60 - 0x18fba0
void sub_0018FB60_0x18fb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018FB60_0x18fb60");
#endif

    ctx->pc = 0x18fb60u;

    // 0x18fb60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18fb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18fb64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18fb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18fb68: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x18fb68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x18fb6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18fb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18fb70: 0x8e02de60  lw          $v0, -0x21A0($s0)
    ctx->pc = 0x18fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294958688)));
    // 0x18fb74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FB74u;
    {
        const bool branch_taken_0x18fb74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fb74) {
            ctx->pc = 0x18FB88u;
            goto label_18fb88;
        }
    }
    ctx->pc = 0x18FB7Cu;
    // 0x18fb7c: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x18FB7Cu;
    SET_GPR_U32(ctx, 31, 0x18FB84u);
    ctx->pc = 0x18FB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FB7Cu;
            // 0x18fb80: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FB84u; }
        if (ctx->pc != 0x18FB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FB84u; }
        if (ctx->pc != 0x18FB84u) { return; }
    }
    ctx->pc = 0x18FB84u;
    // 0x18fb84: 0xae02de60  sw          $v0, -0x21A0($s0)
    ctx->pc = 0x18fb84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294958688), GPR_U32(ctx, 2));
label_18fb88:
    // 0x18fb88: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x18FB88u;
    SET_GPR_U32(ctx, 31, 0x18FB90u);
    ctx->pc = 0x18FB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FB88u;
            // 0x18fb8c: 0x8e04de60  lw          $a0, -0x21A0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294958688)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FB90u; }
        if (ctx->pc != 0x18FB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FB90u; }
        if (ctx->pc != 0x18FB90u) { return; }
    }
    ctx->pc = 0x18FB90u;
    // 0x18fb90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18fb90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18fb94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18fb94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fb98: 0x3e00008  jr          $ra
    ctx->pc = 0x18FB98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FB98u;
            // 0x18fb9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18FB88u: goto label_18fb88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18FBA0u;
}
