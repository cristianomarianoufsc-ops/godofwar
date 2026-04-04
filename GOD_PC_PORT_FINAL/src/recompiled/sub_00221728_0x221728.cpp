#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00221728
// Address: 0x221728 - 0x221768
void sub_00221728_0x221728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221728_0x221728");
#endif

    ctx->pc = 0x221728u;

    // 0x221728: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x221728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22172c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22172cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x221730: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x221730u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x221734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221738: 0x8e023504  lw          $v0, 0x3504($s0)
    ctx->pc = 0x221738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13572)));
    // 0x22173c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22173Cu;
    {
        const bool branch_taken_0x22173c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22173c) {
            ctx->pc = 0x221750u;
            goto label_221750;
        }
    }
    ctx->pc = 0x221744u;
    // 0x221744: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x221744u;
    SET_GPR_U32(ctx, 31, 0x22174Cu);
    ctx->pc = 0x221748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221744u;
            // 0x221748: 0x24040194  addiu       $a0, $zero, 0x194 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 404));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22174Cu; }
        if (ctx->pc != 0x22174Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22174Cu; }
        if (ctx->pc != 0x22174Cu) { return; }
    }
    ctx->pc = 0x22174Cu;
    // 0x22174c: 0xae023504  sw          $v0, 0x3504($s0)
    ctx->pc = 0x22174cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13572), GPR_U32(ctx, 2));
label_221750:
    // 0x221750: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x221750u;
    SET_GPR_U32(ctx, 31, 0x221758u);
    ctx->pc = 0x221754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221750u;
            // 0x221754: 0x8e043504  lw          $a0, 0x3504($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13572)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221758u; }
        if (ctx->pc != 0x221758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221758u; }
        if (ctx->pc != 0x221758u) { return; }
    }
    ctx->pc = 0x221758u;
    // 0x221758: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x221758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22175c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22175cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221760: 0x3e00008  jr          $ra
    ctx->pc = 0x221760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221760u;
            // 0x221764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221750u: goto label_221750;
            default: break;
        }
        return;
    }
    ctx->pc = 0x221768u;
}
