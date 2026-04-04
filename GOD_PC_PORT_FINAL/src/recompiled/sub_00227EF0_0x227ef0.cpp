#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00227EF0
// Address: 0x227ef0 - 0x227f10
void sub_00227EF0_0x227ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227EF0_0x227ef0");
#endif

    ctx->pc = 0x227ef0u;

    // 0x227ef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227ef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227ef8: 0xc089e96  jal         func_227A58
    ctx->pc = 0x227EF8u;
    SET_GPR_U32(ctx, 31, 0x227F00u);
    ctx->pc = 0x227A58u;
    if (runtime->hasFunction(0x227A58u)) {
        auto targetFn = runtime->lookupFunction(0x227A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227F00u; }
        if (ctx->pc != 0x227F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227A58_0x227a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227F00u; }
        if (ctx->pc != 0x227F00u) { return; }
    }
    ctx->pc = 0x227F00u;
    // 0x227f00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227f04: 0x3e00008  jr          $ra
    ctx->pc = 0x227F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227F04u;
            // 0x227f08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x227F0Cu;
    // 0x227f0c: 0x0  nop
    ctx->pc = 0x227f0cu;
    // NOP
}
