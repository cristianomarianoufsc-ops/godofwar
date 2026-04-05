#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BF6F0
// Address: 0x1bf6f0 - 0x1bf730
void sub_001BF6F0_0x1bf6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF6F0_0x1bf6f0");
#endif

    ctx->pc = 0x1bf6f0u;

    // 0x1bf6f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bf6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bf6f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bf6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bf6f8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1bf6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1bf6fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bf6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bf700: 0x8e02ccb8  lw          $v0, -0x3348($s0)
    ctx->pc = 0x1bf700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954168)));
    // 0x1bf704: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BF704u;
    {
        const bool branch_taken_0x1bf704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf704) {
            ctx->pc = 0x1BF714u;
            goto label_1bf714;
        }
    }
    ctx->pc = 0x1BF70Cu;
    // 0x1bf70c: 0xc06fdd6  jal         func_1BF758
    ctx->pc = 0x1BF70Cu;
    SET_GPR_U32(ctx, 31, 0x1BF714u);
    ctx->pc = 0x1BF758u;
    if (runtime->hasFunction(0x1BF758u)) {
        auto targetFn = runtime->lookupFunction(0x1BF758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF714u; }
        if (ctx->pc != 0x1BF714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF758_0x1bf758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF714u; }
        if (ctx->pc != 0x1BF714u) { return; }
    }
    ctx->pc = 0x1BF714u;
label_1bf714:
    // 0x1bf714: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1BF714u;
    SET_GPR_U32(ctx, 31, 0x1BF71Cu);
    ctx->pc = 0x1BF718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF714u;
            // 0x1bf718: 0x8e04ccb8  lw          $a0, -0x3348($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954168)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF71Cu; }
        if (ctx->pc != 0x1BF71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF71Cu; }
        if (ctx->pc != 0x1BF71Cu) { return; }
    }
    ctx->pc = 0x1BF71Cu;
    // 0x1bf71c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bf71cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bf720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf724: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF724u;
            // 0x1bf728: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BF714u: goto label_1bf714;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BF72Cu;
    // 0x1bf72c: 0x0  nop
    ctx->pc = 0x1bf72cu;
    // NOP
}
