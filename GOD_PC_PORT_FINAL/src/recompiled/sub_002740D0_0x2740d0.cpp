#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002740D0
// Address: 0x2740d0 - 0x2740f0
void sub_002740D0_0x2740d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002740D0_0x2740d0");
#endif

    ctx->pc = 0x2740d0u;

    // 0x2740d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2740d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2740d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2740d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2740d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2740d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2740dc: 0xc09cf3c  jal         func_273CF0
    ctx->pc = 0x2740DCu;
    SET_GPR_U32(ctx, 31, 0x2740E4u);
    ctx->pc = 0x2740E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2740DCu;
            // 0x2740e0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x273CF0u;
    if (runtime->hasFunction(0x273CF0u)) {
        auto targetFn = runtime->lookupFunction(0x273CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2740E4u; }
        if (ctx->pc != 0x2740E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00273CF0_0x273cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2740E4u; }
        if (ctx->pc != 0x2740E4u) { return; }
    }
    ctx->pc = 0x2740E4u;
    // 0x2740e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2740e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2740e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2740E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2740ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2740E8u;
            // 0x2740ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2740F0u;
}
