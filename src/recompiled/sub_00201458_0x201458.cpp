#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00201458
// Address: 0x201458 - 0x2014a0
void sub_00201458_0x201458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201458_0x201458");
#endif

    ctx->pc = 0x201458u;

    // 0x201458: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x201458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20145c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20145cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x201460: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x201460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x201464: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x201464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20146c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x20146cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x201470: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201470u;
    {
        const bool branch_taken_0x201470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201470u;
            // 0x201474: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201470) {
            ctx->pc = 0x201480u;
            goto label_201480;
        }
    }
    ctx->pc = 0x201478u;
    // 0x201478: 0xc07ea2a  jal         func_1FA8A8
    ctx->pc = 0x201478u;
    SET_GPR_U32(ctx, 31, 0x201480u);
    ctx->pc = 0x1FA8A8u;
    if (runtime->hasFunction(0x1FA8A8u)) {
        auto targetFn = runtime->lookupFunction(0x1FA8A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201480u; }
        if (ctx->pc != 0x201480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FA8A8_0x1fa8a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201480u; }
        if (ctx->pc != 0x201480u) { return; }
    }
    ctx->pc = 0x201480u;
label_201480:
    // 0x201480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201484: 0xc08063e  jal         func_2018F8
    ctx->pc = 0x201484u;
    SET_GPR_U32(ctx, 31, 0x20148Cu);
    ctx->pc = 0x201488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201484u;
            // 0x201488: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2018F8u;
    if (runtime->hasFunction(0x2018F8u)) {
        auto targetFn = runtime->lookupFunction(0x2018F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20148Cu; }
        if (ctx->pc != 0x20148Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002018F8_0x2018f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20148Cu; }
        if (ctx->pc != 0x20148Cu) { return; }
    }
    ctx->pc = 0x20148Cu;
    // 0x20148c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20148cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201490: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x201490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201498: 0x3e00008  jr          $ra
    ctx->pc = 0x201498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20149Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201498u;
            // 0x20149c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201480u: goto label_201480;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2014A0u;
}
