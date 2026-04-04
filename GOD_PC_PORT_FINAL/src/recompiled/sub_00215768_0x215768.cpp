#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00215768
// Address: 0x215768 - 0x2157a8
void sub_00215768_0x215768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215768_0x215768");
#endif

    ctx->pc = 0x215768u;

    // 0x215768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x215768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21576c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21576cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x215770: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x215770u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x215774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x215774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x215778: 0x8e0234ac  lw          $v0, 0x34AC($s0)
    ctx->pc = 0x215778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13484)));
    // 0x21577c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21577Cu;
    {
        const bool branch_taken_0x21577c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21577c) {
            ctx->pc = 0x215790u;
            goto label_215790;
        }
    }
    ctx->pc = 0x215784u;
    // 0x215784: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x215784u;
    SET_GPR_U32(ctx, 31, 0x21578Cu);
    ctx->pc = 0x215788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215784u;
            // 0x215788: 0x24040114  addiu       $a0, $zero, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21578Cu; }
        if (ctx->pc != 0x21578Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21578Cu; }
        if (ctx->pc != 0x21578Cu) { return; }
    }
    ctx->pc = 0x21578Cu;
    // 0x21578c: 0xae0234ac  sw          $v0, 0x34AC($s0)
    ctx->pc = 0x21578cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13484), GPR_U32(ctx, 2));
label_215790:
    // 0x215790: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x215790u;
    SET_GPR_U32(ctx, 31, 0x215798u);
    ctx->pc = 0x215794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215790u;
            // 0x215794: 0x8e0434ac  lw          $a0, 0x34AC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13484)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215798u; }
        if (ctx->pc != 0x215798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215798u; }
        if (ctx->pc != 0x215798u) { return; }
    }
    ctx->pc = 0x215798u;
    // 0x215798: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x215798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21579c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21579cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2157a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2157A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2157A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2157A0u;
            // 0x2157a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x215790u: goto label_215790;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2157A8u;
}
