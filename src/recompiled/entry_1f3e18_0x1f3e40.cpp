#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1f3e18
// Address: 0x1f3e18 - 0x1f3e40
void entry_1f3e18_0x1f3e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1f3e18_0x1f3e40");
#endif

    ctx->pc = 0x1f3e18u;

    // 0x1f3e18: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1f3e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3e1c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1f3e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1f3e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f3e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f3e24: 0x8c44336c  lw          $a0, 0x336C($v0)
    ctx->pc = 0x1f3e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13164)));
    // 0x1f3e28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f3e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f3e2c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1F3E2Cu;
    SET_GPR_U32(ctx, 31, 0x1F3E34u);
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E34u; }
        if (ctx->pc != 0x1F3E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E34u; }
        if (ctx->pc != 0x1F3E34u) { return; }
    }
    ctx->pc = 0x1F3E34u;
    // 0x1f3e34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f3e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3e38: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3E38u;
            // 0x1f3e3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F3E40u;
}
