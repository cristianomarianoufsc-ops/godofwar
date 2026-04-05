#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002248E8
// Address: 0x2248e8 - 0x224928
void sub_002248E8_0x2248e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002248E8_0x2248e8");
#endif

    ctx->pc = 0x2248e8u;

    // 0x2248e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2248e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2248ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2248ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2248f0: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x2248f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x2248f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2248f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2248f8: 0x8e023510  lw          $v0, 0x3510($s0)
    ctx->pc = 0x2248f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13584)));
    // 0x2248fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2248FCu;
    {
        const bool branch_taken_0x2248fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2248fc) {
            ctx->pc = 0x224910u;
            goto label_224910;
        }
    }
    ctx->pc = 0x224904u;
    // 0x224904: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x224904u;
    SET_GPR_U32(ctx, 31, 0x22490Cu);
    ctx->pc = 0x224908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224904u;
            // 0x224908: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22490Cu; }
        if (ctx->pc != 0x22490Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22490Cu; }
        if (ctx->pc != 0x22490Cu) { return; }
    }
    ctx->pc = 0x22490Cu;
    // 0x22490c: 0xae023510  sw          $v0, 0x3510($s0)
    ctx->pc = 0x22490cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13584), GPR_U32(ctx, 2));
label_224910:
    // 0x224910: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x224910u;
    SET_GPR_U32(ctx, 31, 0x224918u);
    ctx->pc = 0x224914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224910u;
            // 0x224914: 0x8e043510  lw          $a0, 0x3510($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13584)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224918u; }
        if (ctx->pc != 0x224918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224918u; }
        if (ctx->pc != 0x224918u) { return; }
    }
    ctx->pc = 0x224918u;
    // 0x224918: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x224918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22491c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22491cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224920: 0x3e00008  jr          $ra
    ctx->pc = 0x224920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224920u;
            // 0x224924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224910u: goto label_224910;
            default: break;
        }
        return;
    }
    ctx->pc = 0x224928u;
}
