#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002014D8
// Address: 0x2014d8 - 0x201500
void sub_002014D8_0x2014d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002014D8_0x2014d8");
#endif

    ctx->pc = 0x2014d8u;

    // 0x2014d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2014d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2014dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2014dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2014e0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2014e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2014e4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2014E4u;
    {
        const bool branch_taken_0x2014e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2014E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2014E4u;
            // 0x2014e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2014e4) {
            ctx->pc = 0x2014F8u;
            goto label_2014f8;
        }
    }
    ctx->pc = 0x2014ECu;
    // 0x2014ec: 0xc07f3d8  jal         func_1FCF60
    ctx->pc = 0x2014ECu;
    SET_GPR_U32(ctx, 31, 0x2014F4u);
    ctx->pc = 0x1FCF60u;
    if (runtime->hasFunction(0x1FCF60u)) {
        auto targetFn = runtime->lookupFunction(0x1FCF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2014F4u; }
        if (ctx->pc != 0x2014F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FCF60_0x1fcf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2014F4u; }
        if (ctx->pc != 0x2014F4u) { return; }
    }
    ctx->pc = 0x2014F4u;
    // 0x2014f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2014f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2014f8:
    // 0x2014f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2014F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2014FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2014F8u;
            // 0x2014fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2014F8u: goto label_2014f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201500u;
}
