#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00195770
// Address: 0x195770 - 0x1957b0
void sub_00195770_0x195770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195770_0x195770");
#endif

    ctx->pc = 0x195770u;

    // 0x195770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x195770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x195774: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x195774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x195778: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x195778u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x19577c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19577cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195780: 0x8e02e184  lw          $v0, -0x1E7C($s0)
    ctx->pc = 0x195780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294959492)));
    // 0x195784: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x195784u;
    {
        const bool branch_taken_0x195784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195784) {
            ctx->pc = 0x195798u;
            goto label_195798;
        }
    }
    ctx->pc = 0x19578Cu;
    // 0x19578c: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x19578Cu;
    SET_GPR_U32(ctx, 31, 0x195794u);
    ctx->pc = 0x195790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19578Cu;
            // 0x195790: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195794u; }
        if (ctx->pc != 0x195794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195794u; }
        if (ctx->pc != 0x195794u) { return; }
    }
    ctx->pc = 0x195794u;
    // 0x195794: 0xae02e184  sw          $v0, -0x1E7C($s0)
    ctx->pc = 0x195794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294959492), GPR_U32(ctx, 2));
label_195798:
    // 0x195798: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x195798u;
    SET_GPR_U32(ctx, 31, 0x1957A0u);
    ctx->pc = 0x19579Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195798u;
            // 0x19579c: 0x8e04e184  lw          $a0, -0x1E7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294959492)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1957A0u; }
        if (ctx->pc != 0x1957A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1957A0u; }
        if (ctx->pc != 0x1957A0u) { return; }
    }
    ctx->pc = 0x1957A0u;
    // 0x1957a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1957a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1957a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1957a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1957a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1957A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1957ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1957A8u;
            // 0x1957ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195798u: goto label_195798;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1957B0u;
}
