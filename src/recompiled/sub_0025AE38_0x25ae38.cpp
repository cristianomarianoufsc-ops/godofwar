#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025AE38
// Address: 0x25ae38 - 0x25ae58
void sub_0025AE38_0x25ae38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AE38_0x25ae38");
#endif

    ctx->pc = 0x25ae38u;

    // 0x25ae38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25ae38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25ae3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25ae3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25ae40: 0xc0742ec  jal         func_1D0BB0
    ctx->pc = 0x25AE40u;
    SET_GPR_U32(ctx, 31, 0x25AE48u);
    ctx->pc = 0x25AE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AE40u;
            // 0x25ae44: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BB0u;
    if (runtime->hasFunction(0x1D0BB0u)) {
        auto targetFn = runtime->lookupFunction(0x1D0BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AE48u; }
        if (ctx->pc != 0x25AE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0BB0_0x1d0bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AE48u; }
        if (ctx->pc != 0x25AE48u) { return; }
    }
    ctx->pc = 0x25AE48u;
    // 0x25ae48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25ae48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ae4c: 0x3e00008  jr          $ra
    ctx->pc = 0x25AE4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AE4Cu;
            // 0x25ae50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25AE54u;
    // 0x25ae54: 0x0  nop
    ctx->pc = 0x25ae54u;
    // NOP
}
