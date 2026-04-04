#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00191768
// Address: 0x191768 - 0x1917a8
void sub_00191768_0x191768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191768_0x191768");
#endif

    ctx->pc = 0x191768u;

    // 0x191768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x191768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19176c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19176cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x191770: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x191770u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x191774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191778: 0x8e02de8c  lw          $v0, -0x2174($s0)
    ctx->pc = 0x191778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294958732)));
    // 0x19177c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19177Cu;
    {
        const bool branch_taken_0x19177c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19177c) {
            ctx->pc = 0x191790u;
            goto label_191790;
        }
    }
    ctx->pc = 0x191784u;
    // 0x191784: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x191784u;
    SET_GPR_U32(ctx, 31, 0x19178Cu);
    ctx->pc = 0x191788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191784u;
            // 0x191788: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19178Cu; }
        if (ctx->pc != 0x19178Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19178Cu; }
        if (ctx->pc != 0x19178Cu) { return; }
    }
    ctx->pc = 0x19178Cu;
    // 0x19178c: 0xae02de8c  sw          $v0, -0x2174($s0)
    ctx->pc = 0x19178cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294958732), GPR_U32(ctx, 2));
label_191790:
    // 0x191790: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x191790u;
    SET_GPR_U32(ctx, 31, 0x191798u);
    ctx->pc = 0x191794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191790u;
            // 0x191794: 0x8e04de8c  lw          $a0, -0x2174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294958732)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191798u; }
        if (ctx->pc != 0x191798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191798u; }
        if (ctx->pc != 0x191798u) { return; }
    }
    ctx->pc = 0x191798u;
    // 0x191798: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x191798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19179c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19179cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1917a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1917A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1917A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1917A0u;
            // 0x1917a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191790u: goto label_191790;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1917A8u;
}
