#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022C918
// Address: 0x22c918 - 0x22c948
void sub_0022C918_0x22c918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C918_0x22c918");
#endif

    ctx->pc = 0x22c918u;

    // 0x22c918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22c918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22c91c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x22c91cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c924: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x22c924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x22c928: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x22c928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x22c92c: 0x24846eb8  addiu       $a0, $a0, 0x6EB8
    ctx->pc = 0x22c92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28344));
    // 0x22c930: 0xc08b274  jal         func_22C9D0
    ctx->pc = 0x22C930u;
    SET_GPR_U32(ctx, 31, 0x22C938u);
    ctx->pc = 0x22C934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C930u;
            // 0x22c934: 0x34a54000  ori         $a1, $a1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C9D0u;
    if (runtime->hasFunction(0x22C9D0u)) {
        auto targetFn = runtime->lookupFunction(0x22C9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C938u; }
        if (ctx->pc != 0x22C938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022C9D0_0x22c9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C938u; }
        if (ctx->pc != 0x22C938u) { return; }
    }
    ctx->pc = 0x22C938u;
    // 0x22c938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c93c: 0x3e00008  jr          $ra
    ctx->pc = 0x22C93Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C93Cu;
            // 0x22c940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22C944u;
    // 0x22c944: 0x0  nop
    ctx->pc = 0x22c944u;
    // NOP
}
