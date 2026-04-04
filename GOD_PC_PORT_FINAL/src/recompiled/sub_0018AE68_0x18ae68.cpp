#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018AE68
// Address: 0x18ae68 - 0x18aea8
void sub_0018AE68_0x18ae68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018AE68_0x18ae68");
#endif

    ctx->pc = 0x18ae68u;

    // 0x18ae68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18ae68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18ae6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18ae6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18ae70: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x18ae70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x18ae74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18ae74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18ae78: 0x8e02de3c  lw          $v0, -0x21C4($s0)
    ctx->pc = 0x18ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294958652)));
    // 0x18ae7c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18AE7Cu;
    {
        const bool branch_taken_0x18ae7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ae7c) {
            ctx->pc = 0x18AE90u;
            goto label_18ae90;
        }
    }
    ctx->pc = 0x18AE84u;
    // 0x18ae84: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x18AE84u;
    SET_GPR_U32(ctx, 31, 0x18AE8Cu);
    ctx->pc = 0x18AE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AE84u;
            // 0x18ae88: 0x240400bc  addiu       $a0, $zero, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AE8Cu; }
        if (ctx->pc != 0x18AE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AE8Cu; }
        if (ctx->pc != 0x18AE8Cu) { return; }
    }
    ctx->pc = 0x18AE8Cu;
    // 0x18ae8c: 0xae02de3c  sw          $v0, -0x21C4($s0)
    ctx->pc = 0x18ae8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294958652), GPR_U32(ctx, 2));
label_18ae90:
    // 0x18ae90: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x18AE90u;
    SET_GPR_U32(ctx, 31, 0x18AE98u);
    ctx->pc = 0x18AE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AE90u;
            // 0x18ae94: 0x8e04de3c  lw          $a0, -0x21C4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294958652)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AE98u; }
        if (ctx->pc != 0x18AE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AE98u; }
        if (ctx->pc != 0x18AE98u) { return; }
    }
    ctx->pc = 0x18AE98u;
    // 0x18ae98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18ae98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ae9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ae9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18aea0: 0x3e00008  jr          $ra
    ctx->pc = 0x18AEA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AEA0u;
            // 0x18aea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18AE90u: goto label_18ae90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18AEA8u;
}
