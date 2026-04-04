#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224878
// Address: 0x224878 - 0x2248b8
void sub_00224878_0x224878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224878_0x224878");
#endif

    ctx->pc = 0x224878u;

    // 0x224878: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22487c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22487cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x224880: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x224880u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x224884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224888: 0x8e02350c  lw          $v0, 0x350C($s0)
    ctx->pc = 0x224888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13580)));
    // 0x22488c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22488Cu;
    {
        const bool branch_taken_0x22488c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22488c) {
            ctx->pc = 0x2248A0u;
            goto label_2248a0;
        }
    }
    ctx->pc = 0x224894u;
    // 0x224894: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x224894u;
    SET_GPR_U32(ctx, 31, 0x22489Cu);
    ctx->pc = 0x224898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224894u;
            // 0x224898: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22489Cu; }
        if (ctx->pc != 0x22489Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22489Cu; }
        if (ctx->pc != 0x22489Cu) { return; }
    }
    ctx->pc = 0x22489Cu;
    // 0x22489c: 0xae02350c  sw          $v0, 0x350C($s0)
    ctx->pc = 0x22489cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13580), GPR_U32(ctx, 2));
label_2248a0:
    // 0x2248a0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x2248A0u;
    SET_GPR_U32(ctx, 31, 0x2248A8u);
    ctx->pc = 0x2248A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2248A0u;
            // 0x2248a4: 0x8e04350c  lw          $a0, 0x350C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13580)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2248A8u; }
        if (ctx->pc != 0x2248A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2248A8u; }
        if (ctx->pc != 0x2248A8u) { return; }
    }
    ctx->pc = 0x2248A8u;
    // 0x2248a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2248a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2248ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2248acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2248b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2248B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2248B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2248B0u;
            // 0x2248b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2248A0u: goto label_2248a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2248B8u;
}
