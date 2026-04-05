#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002821D8
// Address: 0x2821d8 - 0x282208
void sub_002821D8_0x2821d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002821D8_0x2821d8");
#endif

    ctx->pc = 0x2821d8u;

    // 0x2821d8: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x2821d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x2821dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2821dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2821e0: 0x8c442740  lw          $a0, 0x2740($v0)
    ctx->pc = 0x2821e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10048)));
    // 0x2821e4: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2821E4u;
    {
        const bool branch_taken_0x2821e4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2821E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2821E4u;
            // 0x2821e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2821e4) {
            ctx->pc = 0x2821F4u;
            goto label_2821f4;
        }
    }
    ctx->pc = 0x2821ECu;
    // 0x2821ec: 0xc0a4f0c  jal         func_293C30
    ctx->pc = 0x2821ECu;
    SET_GPR_U32(ctx, 31, 0x2821F4u);
    ctx->pc = 0x293C30u;
    if (runtime->hasFunction(0x293C30u)) {
        auto targetFn = runtime->lookupFunction(0x293C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2821F4u; }
        if (ctx->pc != 0x2821F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c30_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2821F4u; }
        if (ctx->pc != 0x2821F4u) { return; }
    }
    ctx->pc = 0x2821F4u;
label_2821f4:
    // 0x2821f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2821f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2821f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2821f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2821fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2821FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2821FCu;
            // 0x282200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2821F4u: goto label_2821f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282204u;
    // 0x282204: 0x0  nop
    ctx->pc = 0x282204u;
    // NOP
}
