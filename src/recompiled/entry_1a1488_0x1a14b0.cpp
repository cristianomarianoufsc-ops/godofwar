#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1a1488
// Address: 0x1a1488 - 0x1a14b0
void entry_1a1488_0x1a14b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1a1488_0x1a14b0");
#endif

    ctx->pc = 0x1a1488u;

    // 0x1a1488: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a1488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a148c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1a148cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1a1490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1494: 0x8c44e6a8  lw          $a0, -0x1958($v0)
    ctx->pc = 0x1a1494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960808)));
    // 0x1a1498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a149c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1A149Cu;
    SET_GPR_U32(ctx, 31, 0x1A14A4u);
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A14A4u; }
        if (ctx->pc != 0x1A14A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A14A4u; }
        if (ctx->pc != 0x1A14A4u) { return; }
    }
    ctx->pc = 0x1A14A4u;
    // 0x1a14a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a14a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a14a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A14A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A14ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A14A8u;
            // 0x1a14ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A14B0u;
}
