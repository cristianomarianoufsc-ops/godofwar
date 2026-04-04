#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00228528
// Address: 0x228528 - 0x228568
void sub_00228528_0x228528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228528_0x228528");
#endif

    ctx->pc = 0x228528u;

    // 0x228528: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x228528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22852c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22852cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x228530: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x228530u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x228534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228538: 0x8e023520  lw          $v0, 0x3520($s0)
    ctx->pc = 0x228538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13600)));
    // 0x22853c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22853Cu;
    {
        const bool branch_taken_0x22853c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22853c) {
            ctx->pc = 0x228550u;
            goto label_228550;
        }
    }
    ctx->pc = 0x228544u;
    // 0x228544: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x228544u;
    SET_GPR_U32(ctx, 31, 0x22854Cu);
    ctx->pc = 0x228548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228544u;
            // 0x228548: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22854Cu; }
        if (ctx->pc != 0x22854Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22854Cu; }
        if (ctx->pc != 0x22854Cu) { return; }
    }
    ctx->pc = 0x22854Cu;
    // 0x22854c: 0xae023520  sw          $v0, 0x3520($s0)
    ctx->pc = 0x22854cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13600), GPR_U32(ctx, 2));
label_228550:
    // 0x228550: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x228550u;
    SET_GPR_U32(ctx, 31, 0x228558u);
    ctx->pc = 0x228554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228550u;
            // 0x228554: 0x8e043520  lw          $a0, 0x3520($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13600)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228558u; }
        if (ctx->pc != 0x228558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228558u; }
        if (ctx->pc != 0x228558u) { return; }
    }
    ctx->pc = 0x228558u;
    // 0x228558: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x228558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22855c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22855cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228560: 0x3e00008  jr          $ra
    ctx->pc = 0x228560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228560u;
            // 0x228564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228550u: goto label_228550;
            default: break;
        }
        return;
    }
    ctx->pc = 0x228568u;
}
