#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00189B78
// Address: 0x189b78 - 0x189b98
void sub_00189B78_0x189b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189B78_0x189b78");
#endif

    ctx->pc = 0x189b78u;

    // 0x189b78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x189b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x189b7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189b80: 0xc062b08  jal         func_18AC20
    ctx->pc = 0x189B80u;
    SET_GPR_U32(ctx, 31, 0x189B88u);
    ctx->pc = 0x189B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189B80u;
            // 0x189b84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AC20u;
    if (runtime->hasFunction(0x18AC20u)) {
        auto targetFn = runtime->lookupFunction(0x18AC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B88u; }
        if (ctx->pc != 0x189B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AC20_0x18ac20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B88u; }
        if (ctx->pc != 0x189B88u) { return; }
    }
    ctx->pc = 0x189B88u;
    // 0x189b88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x189B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189B8Cu;
            // 0x189b90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x189B94u;
    // 0x189b94: 0x0  nop
    ctx->pc = 0x189b94u;
    // NOP
}
