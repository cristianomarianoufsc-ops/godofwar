#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00288FA0
// Address: 0x288fa0 - 0x288fc8
void sub_00288FA0_0x288fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288FA0_0x288fa0");
#endif

    ctx->pc = 0x288fa0u;

    // 0x288fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x288fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x288fa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x288fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x288fa8: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x288fa8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x288fac: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x288FACu;
    SET_GPR_U32(ctx, 31, 0x288FB4u);
    ctx->pc = 0x288FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288FACu;
            // 0x288fb0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288FB4u; }
        if (ctx->pc != 0x288FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288FB4u; }
        if (ctx->pc != 0x288FB4u) { return; }
    }
    ctx->pc = 0x288FB4u;
    // 0x288fb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288fb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x288fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x288FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288FBCu;
            // 0x288fc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x288FC4u;
    // 0x288fc4: 0x0  nop
    ctx->pc = 0x288fc4u;
    // NOP
}
