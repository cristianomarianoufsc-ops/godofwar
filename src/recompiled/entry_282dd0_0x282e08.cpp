#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_282dd0
// Address: 0x282dd0 - 0x282e08
void entry_282dd0_0x282e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_282dd0_0x282e08");
#endif

    ctx->pc = 0x282dd0u;

    // 0x282dd0: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x282dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x282dd4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x282dd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x282dd8: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x282dd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x282ddc: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x282ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x282de0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282de4: 0x24422748  addiu       $v0, $v0, 0x2748
    ctx->pc = 0x282de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10056));
    // 0x282de8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x282de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x282dec: 0xc09ecae  jal         func_27B2B8
    ctx->pc = 0x282DECu;
    SET_GPR_U32(ctx, 31, 0x282DF4u);
    ctx->pc = 0x282DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282DECu;
            // 0x282df0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B2B8u;
    if (runtime->hasFunction(0x27B2B8u)) {
        auto targetFn = runtime->lookupFunction(0x27B2B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282DF4u; }
        if (ctx->pc != 0x282DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B2B8_0x27b2b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282DF4u; }
        if (ctx->pc != 0x282DF4u) { return; }
    }
    ctx->pc = 0x282DF4u;
    // 0x282df4: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x282df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x282df8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282dfc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x282dfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x282e00: 0x3e00008  jr          $ra
    ctx->pc = 0x282E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282E00u;
            // 0x282e04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x282E08u;
}
