#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022C230
// Address: 0x22c230 - 0x22c258
void sub_0022C230_0x22c230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C230_0x22c230");
#endif

    ctx->pc = 0x22c230u;

    // 0x22c230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22c230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22c234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c238: 0xc08b0e6  jal         func_22C398
    ctx->pc = 0x22C238u;
    SET_GPR_U32(ctx, 31, 0x22C240u);
    ctx->pc = 0x22C398u;
    if (runtime->hasFunction(0x22C398u)) {
        auto targetFn = runtime->lookupFunction(0x22C398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C240u; }
        if (ctx->pc != 0x22C240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022C398_0x22c398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C240u; }
        if (ctx->pc != 0x22C240u) { return; }
    }
    ctx->pc = 0x22C240u;
    // 0x22c240: 0xc0855f4  jal         func_2157D0
    ctx->pc = 0x22C240u;
    SET_GPR_U32(ctx, 31, 0x22C248u);
    ctx->pc = 0x2157D0u;
    if (runtime->hasFunction(0x2157D0u)) {
        auto targetFn = runtime->lookupFunction(0x2157D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C248u; }
        if (ctx->pc != 0x22C248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002157D0_0x2157d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C248u; }
        if (ctx->pc != 0x22C248u) { return; }
    }
    ctx->pc = 0x22C248u;
    // 0x22c248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c24c: 0x3e00008  jr          $ra
    ctx->pc = 0x22C24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C24Cu;
            // 0x22c250: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22C254u;
    // 0x22c254: 0x0  nop
    ctx->pc = 0x22c254u;
    // NOP
}
