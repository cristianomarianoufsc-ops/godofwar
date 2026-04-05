#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5A78
// Address: 0x1b5a78 - 0x1b5a98
void sub_001B5A78_0x1b5a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5A78_0x1b5a78");
#endif

    ctx->pc = 0x1b5a78u;

    // 0x1b5a78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b5a7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5a80: 0xac850298  sw          $a1, 0x298($a0)
    ctx->pc = 0x1b5a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 664), GPR_U32(ctx, 5));
    // 0x1b5a84: 0xc08a0e2  jal         func_228388
    ctx->pc = 0x1B5A84u;
    SET_GPR_U32(ctx, 31, 0x1B5A8Cu);
    ctx->pc = 0x1B5A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A84u;
            // 0x1b5a88: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228388u;
    if (runtime->hasFunction(0x228388u)) {
        auto targetFn = runtime->lookupFunction(0x228388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A8Cu; }
        if (ctx->pc != 0x1B5A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228388_0x228388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A8Cu; }
        if (ctx->pc != 0x1B5A8Cu) { return; }
    }
    ctx->pc = 0x1B5A8Cu;
    // 0x1b5a8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5a90: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A90u;
            // 0x1b5a94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5A98u;
}
