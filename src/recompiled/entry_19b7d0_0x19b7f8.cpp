#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_19b7d0
// Address: 0x19b7d0 - 0x19b7f8
void entry_19b7d0_0x19b7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_19b7d0_0x19b7f8");
#endif

    ctx->pc = 0x19b7d0u;

    // 0x19b7d0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19b7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b7d4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x19b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x19b7d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19b7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19b7dc: 0x8c44e1e4  lw          $a0, -0x1E1C($v0)
    ctx->pc = 0x19b7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959588)));
    // 0x19b7e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19b7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19b7e4: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x19B7E4u;
    SET_GPR_U32(ctx, 31, 0x19B7ECu);
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B7ECu; }
        if (ctx->pc != 0x19B7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B7ECu; }
        if (ctx->pc != 0x19B7ECu) { return; }
    }
    ctx->pc = 0x19B7ECu;
    // 0x19b7ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19b7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x19B7F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B7F0u;
            // 0x19b7f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B7F8u;
}
