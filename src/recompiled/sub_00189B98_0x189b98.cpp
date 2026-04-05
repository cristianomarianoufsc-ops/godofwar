#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00189B98
// Address: 0x189b98 - 0x189bd0
void sub_00189B98_0x189b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189B98_0x189b98");
#endif

    ctx->pc = 0x189b98u;

    // 0x189b98: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x189b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x189b9c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x189b9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x189ba0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189ba4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x189ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189ba8: 0x8c444f20  lw          $a0, 0x4F20($v0)
    ctx->pc = 0x189ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20256)));
    // 0x189bac: 0x8c820140  lw          $v0, 0x140($a0)
    ctx->pc = 0x189bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x189bb0: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x189BB0u;
    {
        const bool branch_taken_0x189bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x189BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189BB0u;
            // 0x189bb4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189bb0) {
            ctx->pc = 0x189BC4u;
            goto label_189bc4;
        }
    }
    ctx->pc = 0x189BB8u;
    // 0x189bb8: 0xc09bf94  jal         func_26FE50
    ctx->pc = 0x189BB8u;
    SET_GPR_U32(ctx, 31, 0x189BC0u);
    ctx->pc = 0x26FE50u;
    if (runtime->hasFunction(0x26FE50u)) {
        auto targetFn = runtime->lookupFunction(0x26FE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189BC0u; }
        if (ctx->pc != 0x189BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26fe50_0x26fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189BC0u; }
        if (ctx->pc != 0x189BC0u) { return; }
    }
    ctx->pc = 0x189BC0u;
    // 0x189bc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_189bc4:
    // 0x189bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x189BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189BC4u;
            // 0x189bc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189BC4u: goto label_189bc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189BCCu;
    // 0x189bcc: 0x0  nop
    ctx->pc = 0x189bccu;
    // NOP
}
