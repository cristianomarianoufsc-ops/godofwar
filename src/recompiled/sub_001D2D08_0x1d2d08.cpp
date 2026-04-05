#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D2D08
// Address: 0x1d2d08 - 0x1d2d28
void sub_001D2D08_0x1d2d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2D08_0x1d2d08");
#endif

    ctx->pc = 0x1d2d08u;

    // 0x1d2d08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d2d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d2d0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d2d10: 0xc079fd0  jal         func_1E7F40
    ctx->pc = 0x1D2D10u;
    SET_GPR_U32(ctx, 31, 0x1D2D18u);
    ctx->pc = 0x1D2D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2D10u;
            // 0x1d2d14: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7F40u;
    if (runtime->hasFunction(0x1E7F40u)) {
        auto targetFn = runtime->lookupFunction(0x1E7F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D18u; }
        if (ctx->pc != 0x1D2D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7F40_0x1e7f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D18u; }
        if (ctx->pc != 0x1D2D18u) { return; }
    }
    ctx->pc = 0x1D2D18u;
    // 0x1d2d18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2D1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2D1Cu;
            // 0x1d2d20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D2D24u;
    // 0x1d2d24: 0x0  nop
    ctx->pc = 0x1d2d24u;
    // NOP
}
