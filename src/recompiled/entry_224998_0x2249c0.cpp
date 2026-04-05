#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_224998
// Address: 0x224998 - 0x2249c0
void entry_224998_0x2249c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_224998_0x2249c0");
#endif

    ctx->pc = 0x224998u;

    // 0x224998: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x224998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22499c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x22499cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x2249a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2249a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2249a4: 0x8c443514  lw          $a0, 0x3514($v0)
    ctx->pc = 0x2249a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13588)));
    // 0x2249a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2249a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2249ac: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x2249ACu;
    SET_GPR_U32(ctx, 31, 0x2249B4u);
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2249B4u; }
        if (ctx->pc != 0x2249B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2249B4u; }
        if (ctx->pc != 0x2249B4u) { return; }
    }
    ctx->pc = 0x2249B4u;
    // 0x2249b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2249b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2249b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2249B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2249BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2249B8u;
            // 0x2249bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2249C0u;
}
