#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D3368
// Address: 0x1d3368 - 0x1d3390
void sub_001D3368_0x1d3368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3368_0x1d3368");
#endif

    ctx->pc = 0x1d3368u;

    // 0x1d3368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d336c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1d336cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1d3370: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D3370u;
    {
        const bool branch_taken_0x1d3370 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3370u;
            // 0x1d3374: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3370) {
            ctx->pc = 0x1D3380u;
            goto label_1d3380;
        }
    }
    ctx->pc = 0x1D3378u;
    // 0x1d3378: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x1D3378u;
    SET_GPR_U32(ctx, 31, 0x1D3380u);
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3380u; }
        if (ctx->pc != 0x1D3380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3380u; }
        if (ctx->pc != 0x1D3380u) { return; }
    }
    ctx->pc = 0x1D3380u;
label_1d3380:
    // 0x1d3380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3384: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3384u;
            // 0x1d3388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3380u: goto label_1d3380;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D338Cu;
    // 0x1d338c: 0x0  nop
    ctx->pc = 0x1d338cu;
    // NOP
}
