#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00221660
// Address: 0x221660 - 0x2216a0
void sub_00221660_0x221660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221660_0x221660");
#endif

    ctx->pc = 0x221660u;

    // 0x221660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x221660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x221664: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x221664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x221668: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x221668u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22166c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22166cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221670: 0x8e021190  lw          $v0, 0x1190($s0)
    ctx->pc = 0x221670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4496)));
    // 0x221674: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x221674u;
    {
        const bool branch_taken_0x221674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221674) {
            ctx->pc = 0x221684u;
            goto label_221684;
        }
    }
    ctx->pc = 0x22167Cu;
    // 0x22167c: 0xc0885b2  jal         func_2216C8
    ctx->pc = 0x22167Cu;
    SET_GPR_U32(ctx, 31, 0x221684u);
    ctx->pc = 0x2216C8u;
    if (runtime->hasFunction(0x2216C8u)) {
        auto targetFn = runtime->lookupFunction(0x2216C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221684u; }
        if (ctx->pc != 0x221684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002216C8_0x2216c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221684u; }
        if (ctx->pc != 0x221684u) { return; }
    }
    ctx->pc = 0x221684u;
label_221684:
    // 0x221684: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x221684u;
    SET_GPR_U32(ctx, 31, 0x22168Cu);
    ctx->pc = 0x221688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221684u;
            // 0x221688: 0x8e041190  lw          $a0, 0x1190($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4496)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22168Cu; }
        if (ctx->pc != 0x22168Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22168Cu; }
        if (ctx->pc != 0x22168Cu) { return; }
    }
    ctx->pc = 0x22168Cu;
    // 0x22168c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22168cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221694: 0x3e00008  jr          $ra
    ctx->pc = 0x221694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221694u;
            // 0x221698: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221684u: goto label_221684;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22169Cu;
    // 0x22169c: 0x0  nop
    ctx->pc = 0x22169cu;
    // NOP
}
