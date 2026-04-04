#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00229510
// Address: 0x229510 - 0x229538
void sub_00229510_0x229510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229510_0x229510");
#endif

    ctx->pc = 0x229510u;

    // 0x229510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x229510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x229514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x229514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x229518: 0xc08a3d6  jal         func_228F58
    ctx->pc = 0x229518u;
    SET_GPR_U32(ctx, 31, 0x229520u);
    ctx->pc = 0x228F58u;
    if (runtime->hasFunction(0x228F58u)) {
        auto targetFn = runtime->lookupFunction(0x228F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229520u; }
        if (ctx->pc != 0x229520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228F58_0x228f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229520u; }
        if (ctx->pc != 0x229520u) { return; }
    }
    ctx->pc = 0x229520u;
    // 0x229520: 0xc08a4a4  jal         func_229290
    ctx->pc = 0x229520u;
    SET_GPR_U32(ctx, 31, 0x229528u);
    ctx->pc = 0x229290u;
    if (runtime->hasFunction(0x229290u)) {
        auto targetFn = runtime->lookupFunction(0x229290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229528u; }
        if (ctx->pc != 0x229528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229290_0x229290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229528u; }
        if (ctx->pc != 0x229528u) { return; }
    }
    ctx->pc = 0x229528u;
    // 0x229528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x229528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22952c: 0x3e00008  jr          $ra
    ctx->pc = 0x22952Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22952Cu;
            // 0x229530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x229534u;
    // 0x229534: 0x0  nop
    ctx->pc = 0x229534u;
    // NOP
}
