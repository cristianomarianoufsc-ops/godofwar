#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00201A48
// Address: 0x201a48 - 0x201a88
void sub_00201A48_0x201a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201A48_0x201a48");
#endif

    ctx->pc = 0x201a48u;

    // 0x201a48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x201a4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x201a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x201a50: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x201a50u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x201a54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201a58: 0x8e023488  lw          $v0, 0x3488($s0)
    ctx->pc = 0x201a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13448)));
    // 0x201a5c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x201A5Cu;
    {
        const bool branch_taken_0x201a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201a5c) {
            ctx->pc = 0x201A70u;
            goto label_201a70;
        }
    }
    ctx->pc = 0x201A64u;
    // 0x201a64: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x201A64u;
    SET_GPR_U32(ctx, 31, 0x201A6Cu);
    ctx->pc = 0x201A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201A64u;
            // 0x201a68: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A6Cu; }
        if (ctx->pc != 0x201A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A6Cu; }
        if (ctx->pc != 0x201A6Cu) { return; }
    }
    ctx->pc = 0x201A6Cu;
    // 0x201a6c: 0xae023488  sw          $v0, 0x3488($s0)
    ctx->pc = 0x201a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13448), GPR_U32(ctx, 2));
label_201a70:
    // 0x201a70: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x201A70u;
    SET_GPR_U32(ctx, 31, 0x201A78u);
    ctx->pc = 0x201A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201A70u;
            // 0x201a74: 0x8e043488  lw          $a0, 0x3488($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A78u; }
        if (ctx->pc != 0x201A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A78u; }
        if (ctx->pc != 0x201A78u) { return; }
    }
    ctx->pc = 0x201A78u;
    // 0x201a78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x201a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201a7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201a80: 0x3e00008  jr          $ra
    ctx->pc = 0x201A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201A80u;
            // 0x201a84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201A70u: goto label_201a70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201A88u;
}
