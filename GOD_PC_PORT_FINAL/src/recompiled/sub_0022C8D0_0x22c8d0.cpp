#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022C8D0
// Address: 0x22c8d0 - 0x22c8f8
void sub_0022C8D0_0x22c8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C8D0_0x22c8d0");
#endif

    ctx->pc = 0x22c8d0u;

    // 0x22c8d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22c8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22c8d4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x22c8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x22c8d8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x22c8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x22c8dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c8e0: 0x24846eb8  addiu       $a0, $a0, 0x6EB8
    ctx->pc = 0x22c8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28344));
    // 0x22c8e4: 0xc08b252  jal         func_22C948
    ctx->pc = 0x22C8E4u;
    SET_GPR_U32(ctx, 31, 0x22C8ECu);
    ctx->pc = 0x22C8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C8E4u;
            // 0x22c8e8: 0x34a54000  ori         $a1, $a1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C948u;
    if (runtime->hasFunction(0x22C948u)) {
        auto targetFn = runtime->lookupFunction(0x22C948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C8ECu; }
        if (ctx->pc != 0x22C8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022C948_0x22c948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C8ECu; }
        if (ctx->pc != 0x22C8ECu) { return; }
    }
    ctx->pc = 0x22C8ECu;
    // 0x22c8ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x22C8F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C8F0u;
            // 0x22c8f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22C8F8u;
}
