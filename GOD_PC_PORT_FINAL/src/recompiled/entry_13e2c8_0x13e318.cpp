#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13e2c8
// Address: 0x13e2c8 - 0x13e318
void entry_13e2c8_0x13e318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13e2c8_0x13e318");
#endif

    ctx->pc = 0x13e2c8u;

    // 0x13e2c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13e2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13e2cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13e2d0: 0xc05e996  jal         func_17A658
    ctx->pc = 0x13E2D0u;
    SET_GPR_U32(ctx, 31, 0x13E2D8u);
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E2D8u; }
        if (ctx->pc != 0x13E2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E2D8u; }
        if (ctx->pc != 0x13E2D8u) { return; }
    }
    ctx->pc = 0x13E2D8u;
    // 0x13e2d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13e2d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e2dc: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x13E2DCu;
    {
        const bool branch_taken_0x13e2dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E2DCu;
            // 0x13e2e0: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e2dc) {
            ctx->pc = 0x13E304u;
            goto label_13e304;
        }
    }
    ctx->pc = 0x13E2E4u;
    // 0x13e2e4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x13e2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13e2e8: 0x24c50010  addiu       $a1, $a2, 0x10
    ctx->pc = 0x13e2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x13e2ec: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x13e2ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x13e2f0: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x13e2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x13e2f4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13e2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x13e2f8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x13e2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x13e2fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13E2FCu;
    {
        const bool branch_taken_0x13e2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E2FCu;
            // 0x13e300: 0xacc3000c  sw          $v1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e2fc) {
            ctx->pc = 0x13E308u;
            goto label_13e308;
        }
    }
    ctx->pc = 0x13E304u;
label_13e304:
    // 0x13e304: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13e304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e308:
    // 0x13e308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e30c: 0x3e00008  jr          $ra
    ctx->pc = 0x13E30Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E30Cu;
            // 0x13e310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13E304u: goto label_13e304;
            case 0x13E308u: goto label_13e308;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13E314u;
    // 0x13e314: 0x0  nop
    ctx->pc = 0x13e314u;
    // NOP
}
