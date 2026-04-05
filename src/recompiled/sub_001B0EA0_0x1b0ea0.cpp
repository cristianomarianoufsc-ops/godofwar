#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0EA0
// Address: 0x1b0ea0 - 0x1b0ec8
void sub_001B0EA0_0x1b0ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0EA0_0x1b0ea0");
#endif

    ctx->pc = 0x1b0ea0u;

    // 0x1b0ea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b0ea4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1b0ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1b0ea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b0eac: 0x24a55078  addiu       $a1, $a1, 0x5078
    ctx->pc = 0x1b0eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20600));
    // 0x1b0eb0: 0xc0a24d0  jal         func_289340
    ctx->pc = 0x1B0EB0u;
    SET_GPR_U32(ctx, 31, 0x1B0EB8u);
    ctx->pc = 0x1B0EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0EB0u;
            // 0x1b0eb4: 0x240601c4  addiu       $a2, $zero, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289340u;
    if (runtime->hasFunction(0x289340u)) {
        auto targetFn = runtime->lookupFunction(0x289340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0EB8u; }
        if (ctx->pc != 0x1B0EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289340_0x28943c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0EB8u; }
        if (ctx->pc != 0x1B0EB8u) { return; }
    }
    ctx->pc = 0x1B0EB8u;
    // 0x1b0eb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0EBCu;
            // 0x1b0ec0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0EC4u;
    // 0x1b0ec4: 0x0  nop
    ctx->pc = 0x1b0ec4u;
    // NOP
}
