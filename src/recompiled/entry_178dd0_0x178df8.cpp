#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_178dd0
// Address: 0x178dd0 - 0x178df8
void entry_178dd0_0x178df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_178dd0_0x178df8");
#endif

    ctx->pc = 0x178dd0u;

    // 0x178dd0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x178dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178dd4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x178dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x178dd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178ddc: 0x8c44c4c4  lw          $a0, -0x3B3C($v0)
    ctx->pc = 0x178ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952132)));
    // 0x178de0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178de4: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x178DE4u;
    SET_GPR_U32(ctx, 31, 0x178DECu);
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178DECu; }
        if (ctx->pc != 0x178DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178DECu; }
        if (ctx->pc != 0x178DECu) { return; }
    }
    ctx->pc = 0x178DECu;
    // 0x178dec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178df0: 0x3e00008  jr          $ra
    ctx->pc = 0x178DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178DF0u;
            // 0x178df4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178DF8u;
}
