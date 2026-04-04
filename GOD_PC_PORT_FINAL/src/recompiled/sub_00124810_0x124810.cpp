#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00124810
// Address: 0x124810 - 0x124840
void sub_00124810_0x124810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124810_0x124810");
#endif

    ctx->pc = 0x124810u;

    // 0x124810: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x124810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x124814: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x124814u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x124818: 0x8c44bdec  lw          $a0, -0x4214($v0)
    ctx->pc = 0x124818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950380)));
    // 0x12481c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12481cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x124820: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x124820u;
    SET_GPR_U32(ctx, 31, 0x124828u);
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124828u; }
        if (ctx->pc != 0x124828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124828u; }
        if (ctx->pc != 0x124828u) { return; }
    }
    ctx->pc = 0x124828u;
    // 0x124828: 0xc08fbc8  jal         func_23EF20
    ctx->pc = 0x124828u;
    SET_GPR_U32(ctx, 31, 0x124830u);
    ctx->pc = 0x12482Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124828u;
            // 0x12482c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EF20u;
    if (runtime->hasFunction(0x23EF20u)) {
        auto targetFn = runtime->lookupFunction(0x23EF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124830u; }
        if (ctx->pc != 0x124830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023EF20_0x23ef20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124830u; }
        if (ctx->pc != 0x124830u) { return; }
    }
    ctx->pc = 0x124830u;
    // 0x124830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x124830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124834: 0x3e00008  jr          $ra
    ctx->pc = 0x124834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124834u;
            // 0x124838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12483Cu;
    // 0x12483c: 0x0  nop
    ctx->pc = 0x12483cu;
    // NOP
}
