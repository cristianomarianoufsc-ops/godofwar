#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00188380
// Address: 0x188380 - 0x1883b8
void FUN_00188380_0x188380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00188380_0x188380");
#endif

    ctx->pc = 0x188380u;

    // 0x188380: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x188380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x188384: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188384u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x188388: 0x8c434d08  lw          $v1, 0x4D08($v0)
    ctx->pc = 0x188388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19720)));
    // 0x18838c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18838Cu;
    {
        const bool branch_taken_0x18838c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18838Cu;
            // 0x188390: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18838c) {
            ctx->pc = 0x1883B0u;
            goto label_1883b0;
        }
    }
    ctx->pc = 0x188394u;
    // 0x188394: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188398: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x188398u;
    {
        const bool branch_taken_0x188398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18839Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188398u;
            // 0x18839c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188398) {
            ctx->pc = 0x1883B8u;
            return;
        }
    }
    ctx->pc = 0x1883A0u;
    // 0x1883a0: 0xc0621a2  jal         func_188688
    ctx->pc = 0x1883A0u;
    SET_GPR_U32(ctx, 31, 0x1883A8u);
    ctx->pc = 0x188688u;
    if (runtime->hasFunction(0x188688u)) {
        auto targetFn = runtime->lookupFunction(0x188688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1883A8u; }
        if (ctx->pc != 0x1883A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188688_0x188688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1883A8u; }
        if (ctx->pc != 0x1883A8u) { return; }
    }
    ctx->pc = 0x1883A8u;
    // 0x1883a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1883A8u;
    {
        const bool branch_taken_0x1883a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1883ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1883A8u;
            // 0x1883ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883a8) {
            ctx->pc = 0x1883BCu;
            return;
        }
    }
    ctx->pc = 0x1883B0u;
label_1883b0:
    // 0x1883b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1883b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1883b4: 0x0  nop
    ctx->pc = 0x1883b4u;
    // NOP
}
