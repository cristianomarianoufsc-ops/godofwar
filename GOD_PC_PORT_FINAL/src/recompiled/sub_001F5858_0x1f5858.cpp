#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F5858
// Address: 0x1f5858 - 0x1f5878
void sub_001F5858_0x1f5858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5858_0x1f5858");
#endif

    ctx->pc = 0x1f5858u;

    // 0x1f5858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f5858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f585c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f585cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f5860: 0xc07d5cc  jal         func_1F5730
    ctx->pc = 0x1F5860u;
    SET_GPR_U32(ctx, 31, 0x1F5868u);
    ctx->pc = 0x1F5730u;
    if (runtime->hasFunction(0x1F5730u)) {
        auto targetFn = runtime->lookupFunction(0x1F5730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5868u; }
        if (ctx->pc != 0x1F5868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5730_0x1f5730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5868u; }
        if (ctx->pc != 0x1F5868u) { return; }
    }
    ctx->pc = 0x1F5868u;
    // 0x1f5868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f586c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F586Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F586Cu;
            // 0x1f5870: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F5874u;
    // 0x1f5874: 0x0  nop
    ctx->pc = 0x1f5874u;
    // NOP
}
