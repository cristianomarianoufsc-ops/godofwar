#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019E138
// Address: 0x19e138 - 0x19e178
void sub_0019E138_0x19e138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E138_0x19e138");
#endif

    ctx->pc = 0x19e138u;

    // 0x19e138: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19e138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19e13c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19e13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19e140: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x19e140u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x19e144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e148: 0x8e02e434  lw          $v0, -0x1BCC($s0)
    ctx->pc = 0x19e148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960180)));
    // 0x19e14c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19E14Cu;
    {
        const bool branch_taken_0x19e14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e14c) {
            ctx->pc = 0x19E160u;
            goto label_19e160;
        }
    }
    ctx->pc = 0x19E154u;
    // 0x19e154: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x19E154u;
    SET_GPR_U32(ctx, 31, 0x19E15Cu);
    ctx->pc = 0x19E158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E154u;
            // 0x19e158: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E15Cu; }
        if (ctx->pc != 0x19E15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E15Cu; }
        if (ctx->pc != 0x19E15Cu) { return; }
    }
    ctx->pc = 0x19E15Cu;
    // 0x19e15c: 0xae02e434  sw          $v0, -0x1BCC($s0)
    ctx->pc = 0x19e15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960180), GPR_U32(ctx, 2));
label_19e160:
    // 0x19e160: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x19E160u;
    SET_GPR_U32(ctx, 31, 0x19E168u);
    ctx->pc = 0x19E164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E160u;
            // 0x19e164: 0x8e04e434  lw          $a0, -0x1BCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960180)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E168u; }
        if (ctx->pc != 0x19E168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E168u; }
        if (ctx->pc != 0x19E168u) { return; }
    }
    ctx->pc = 0x19E168u;
    // 0x19e168: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19e168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e16c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e16cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e170: 0x3e00008  jr          $ra
    ctx->pc = 0x19E170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E170u;
            // 0x19e174: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E160u: goto label_19e160;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E178u;
}
