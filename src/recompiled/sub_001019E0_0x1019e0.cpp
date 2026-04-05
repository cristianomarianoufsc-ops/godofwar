#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001019E0
// Address: 0x1019e0 - 0x101a00
void sub_001019E0_0x1019e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001019E0_0x1019e0");
#endif

    ctx->pc = 0x1019e0u;

    // 0x1019e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1019e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1019e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1019e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1019e8: 0xc04226a  jal         func_1089A8
    ctx->pc = 0x1019E8u;
    SET_GPR_U32(ctx, 31, 0x1019F0u);
    ctx->pc = 0x1019ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1019E8u;
            // 0x1019ec: 0x8c840020  lw          $a0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1089A8u;
    if (runtime->hasFunction(0x1089A8u)) {
        auto targetFn = runtime->lookupFunction(0x1089A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1019F0u; }
        if (ctx->pc != 0x1019F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001089A8_0x1089a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1019F0u; }
        if (ctx->pc != 0x1019F0u) { return; }
    }
    ctx->pc = 0x1019F0u;
    // 0x1019f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1019f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1019f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1019F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1019F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1019F4u;
            // 0x1019f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1019FCu;
    // 0x1019fc: 0x0  nop
    ctx->pc = 0x1019fcu;
    // NOP
}
