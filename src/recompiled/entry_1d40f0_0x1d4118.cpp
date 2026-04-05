#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1d40f0
// Address: 0x1d40f0 - 0x1d4118
void entry_1d40f0_0x1d4118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1d40f0_0x1d4118");
#endif

    ctx->pc = 0x1d40f0u;

    // 0x1d40f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d40f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d40f4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d40f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d40f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d40f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d40fc: 0x8c442da0  lw          $a0, 0x2DA0($v0)
    ctx->pc = 0x1d40fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11680)));
    // 0x1d4100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d4104: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1D4104u;
    SET_GPR_U32(ctx, 31, 0x1D410Cu);
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D410Cu; }
        if (ctx->pc != 0x1D410Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D410Cu; }
        if (ctx->pc != 0x1D410Cu) { return; }
    }
    ctx->pc = 0x1D410Cu;
    // 0x1d410c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d410cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4110: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4110u;
            // 0x1d4114: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4118u;
}
