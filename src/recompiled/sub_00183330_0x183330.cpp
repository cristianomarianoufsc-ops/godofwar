#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00183330
// Address: 0x183330 - 0x183360
void sub_00183330_0x183330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183330_0x183330");
#endif

    ctx->pc = 0x183330u;

    // 0x183330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x183330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x183334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183338: 0xc060cba  jal         func_1832E8
    ctx->pc = 0x183338u;
    SET_GPR_U32(ctx, 31, 0x183340u);
    ctx->pc = 0x1832E8u;
    if (runtime->hasFunction(0x1832E8u)) {
        auto targetFn = runtime->lookupFunction(0x1832E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183340u; }
        if (ctx->pc != 0x183340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1832e8_0x183330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183340u; }
        if (ctx->pc != 0x183340u) { return; }
    }
    ctx->pc = 0x183340u;
    // 0x183340: 0xc060bba  jal         func_182EE8
    ctx->pc = 0x183340u;
    SET_GPR_U32(ctx, 31, 0x183348u);
    ctx->pc = 0x182EE8u;
    if (runtime->hasFunction(0x182EE8u)) {
        auto targetFn = runtime->lookupFunction(0x182EE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183348u; }
        if (ctx->pc != 0x183348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182EE8_0x182ee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183348u; }
        if (ctx->pc != 0x183348u) { return; }
    }
    ctx->pc = 0x183348u;
    // 0x183348: 0xc060bec  jal         func_182FB0
    ctx->pc = 0x183348u;
    SET_GPR_U32(ctx, 31, 0x183350u);
    ctx->pc = 0x182FB0u;
    if (runtime->hasFunction(0x182FB0u)) {
        auto targetFn = runtime->lookupFunction(0x182FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183350u; }
        if (ctx->pc != 0x183350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182FB0_0x182fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183350u; }
        if (ctx->pc != 0x183350u) { return; }
    }
    ctx->pc = 0x183350u;
    // 0x183350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183354: 0x3e00008  jr          $ra
    ctx->pc = 0x183354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183354u;
            // 0x183358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18335Cu;
    // 0x18335c: 0x0  nop
    ctx->pc = 0x18335cu;
    // NOP
}
