#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F3390
// Address: 0x1f3390 - 0x1f33c0
void sub_001F3390_0x1f3390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3390_0x1f3390");
#endif

    ctx->pc = 0x1f3390u;

    // 0x1f3390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f3390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f3394: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f3394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f3398: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1f3398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1f339c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f339cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f33a0: 0x24843010  addiu       $a0, $a0, 0x3010
    ctx->pc = 0x1f33a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12304));
    // 0x1f33a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f33a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f33a8: 0x24060320  addiu       $a2, $zero, 0x320
    ctx->pc = 0x1f33a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x1f33ac: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x1F33ACu;
    SET_GPR_U32(ctx, 31, 0x1F33B4u);
    ctx->pc = 0x1F33B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F33ACu;
            // 0x1f33b0: 0xac40e2c4  sw          $zero, -0x1D3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294959812), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F33B4u; }
        if (ctx->pc != 0x1F33B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F33B4u; }
        if (ctx->pc != 0x1F33B4u) { return; }
    }
    ctx->pc = 0x1F33B4u;
    // 0x1f33b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f33b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f33b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F33B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F33BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F33B8u;
            // 0x1f33bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F33C0u;
}
