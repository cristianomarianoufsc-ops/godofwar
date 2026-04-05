#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022C848
// Address: 0x22c848 - 0x22c8d0
void sub_0022C848_0x22c848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C848_0x22c848");
#endif

    ctx->pc = 0x22c848u;

    // 0x22c848: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22c848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22c84c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22c84cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22c850: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22c850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22c854: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x22c854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x22c858: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22c858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22c85c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x22C85Cu;
    {
        const bool branch_taken_0x22c85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C85Cu;
            // 0x22c860: 0xac64122c  sw          $a0, 0x122C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4652), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c85c) {
            ctx->pc = 0x22C8B4u;
            goto label_22c8b4;
        }
    }
    ctx->pc = 0x22C864u;
    // 0x22c864: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x22c864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22c868: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x22C868u;
    {
        const bool branch_taken_0x22c868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c868) {
            ctx->pc = 0x22C8B4u;
            goto label_22c8b4;
        }
    }
    ctx->pc = 0x22C870u;
    // 0x22c870: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x22c870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22c874: 0x78640020  lq          $a0, 0x20($v1)
    ctx->pc = 0x22c874u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x22c878: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x22c878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x22c87c: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x22c87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x22c880: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x22c880u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x22c884: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x22c884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x22c888: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x22c888u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x22c88c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x22c88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x22c890: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x22c890u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x22c894: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x22c894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x22c898: 0x7ca40010  sq          $a0, 0x10($a1)
    ctx->pc = 0x22c898u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 4));
    // 0x22c89c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x22c89cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c8a0: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x22c8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x22c8a4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x22c8a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c8a8: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x22c8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x22c8ac: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x22c8acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c8b0: 0x7ca20040  sq          $v0, 0x40($a1)
    ctx->pc = 0x22c8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 2));
label_22c8b4:
    // 0x22c8b4: 0xc08b234  jal         func_22C8D0
    ctx->pc = 0x22C8B4u;
    SET_GPR_U32(ctx, 31, 0x22C8BCu);
    ctx->pc = 0x22C8D0u;
    if (runtime->hasFunction(0x22C8D0u)) {
        auto targetFn = runtime->lookupFunction(0x22C8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C8BCu; }
        if (ctx->pc != 0x22C8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022C8D0_0x22c8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C8BCu; }
        if (ctx->pc != 0x22C8BCu) { return; }
    }
    ctx->pc = 0x22C8BCu;
    // 0x22c8bc: 0xc08733e  jal         func_21CCF8
    ctx->pc = 0x22C8BCu;
    SET_GPR_U32(ctx, 31, 0x22C8C4u);
    ctx->pc = 0x22C8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C8BCu;
            // 0x22c8c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CCF8u;
    if (runtime->hasFunction(0x21CCF8u)) {
        auto targetFn = runtime->lookupFunction(0x21CCF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C8C4u; }
        if (ctx->pc != 0x22C8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CCF8_0x21ccf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C8C4u; }
        if (ctx->pc != 0x22C8C4u) { return; }
    }
    ctx->pc = 0x22C8C4u;
    // 0x22c8c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22c8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22c8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x22C8C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C8C8u;
            // 0x22c8cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22C8B4u: goto label_22c8b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22C8D0u;
}
