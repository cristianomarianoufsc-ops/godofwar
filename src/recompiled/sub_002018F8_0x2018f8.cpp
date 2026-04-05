#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002018F8
// Address: 0x2018f8 - 0x201930
void sub_002018F8_0x2018f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002018F8_0x2018f8");
#endif

    ctx->pc = 0x2018f8u;

    // 0x2018f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2018f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2018fc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2018fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x201900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201904: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x201904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x201908: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x201908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x20190c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20190cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201910: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x201910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x201914: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x201914u;
    {
        const bool branch_taken_0x201914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201914u;
            // 0x201918: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201914) {
            ctx->pc = 0x201928u;
            goto label_201928;
        }
    }
    ctx->pc = 0x20191Cu;
    // 0x20191c: 0xc08064c  jal         func_201930
    ctx->pc = 0x20191Cu;
    SET_GPR_U32(ctx, 31, 0x201924u);
    ctx->pc = 0x201930u;
    if (runtime->hasFunction(0x201930u)) {
        auto targetFn = runtime->lookupFunction(0x201930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201924u; }
        if (ctx->pc != 0x201924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201930_0x201930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201924u; }
        if (ctx->pc != 0x201924u) { return; }
    }
    ctx->pc = 0x201924u;
    // 0x201924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_201928:
    // 0x201928: 0x3e00008  jr          $ra
    ctx->pc = 0x201928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20192Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201928u;
            // 0x20192c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201928u: goto label_201928;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201930u;
}
