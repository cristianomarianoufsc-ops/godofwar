#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00143C58
// Address: 0x143c58 - 0x143c78
void sub_00143C58_0x143c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143C58_0x143c58");
#endif

    ctx->pc = 0x143c58u;

    // 0x143c58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x143c5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x143c60: 0xc05309e  jal         func_14C278
    ctx->pc = 0x143C60u;
    SET_GPR_U32(ctx, 31, 0x143C68u);
    ctx->pc = 0x14C278u;
    if (runtime->hasFunction(0x14C278u)) {
        auto targetFn = runtime->lookupFunction(0x14C278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143C68u; }
        if (ctx->pc != 0x143C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C278_0x14c278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143C68u; }
        if (ctx->pc != 0x143C68u) { return; }
    }
    ctx->pc = 0x143C68u;
    // 0x143c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x143C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143C6Cu;
            // 0x143c70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143C74u;
    // 0x143c74: 0x0  nop
    ctx->pc = 0x143c74u;
    // NOP
}
