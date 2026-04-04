#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00281588
// Address: 0x281588 - 0x2815a8
void sub_00281588_0x281588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281588_0x281588");
#endif

    ctx->pc = 0x281588u;

    // 0x281588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x281588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28158c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28158cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281590: 0xc0a0988  jal         func_282620
    ctx->pc = 0x281590u;
    SET_GPR_U32(ctx, 31, 0x281598u);
    ctx->pc = 0x282620u;
    if (runtime->hasFunction(0x282620u)) {
        auto targetFn = runtime->lookupFunction(0x282620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281598u; }
        if (ctx->pc != 0x281598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_282620_0x282710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281598u; }
        if (ctx->pc != 0x281598u) { return; }
    }
    ctx->pc = 0x281598u;
    // 0x281598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28159c: 0x3e00008  jr          $ra
    ctx->pc = 0x28159Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2815A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28159Cu;
            // 0x2815a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2815A4u;
    // 0x2815a4: 0x0  nop
    ctx->pc = 0x2815a4u;
    // NOP
}
