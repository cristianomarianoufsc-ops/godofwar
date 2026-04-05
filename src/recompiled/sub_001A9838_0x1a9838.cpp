#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9838
// Address: 0x1a9838 - 0x1a9870
void sub_001A9838_0x1a9838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9838_0x1a9838");
#endif

    ctx->pc = 0x1a9838u;

    // 0x1a9838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a9838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a983c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a983cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9840: 0x84830048  lh          $v1, 0x48($a0)
    ctx->pc = 0x1a9840u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1a9844: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1a9844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1a9848: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1a9848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a984c: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x1a984cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1a9850: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1a9850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1a9854: 0x24422668  addiu       $v0, $v0, 0x2668
    ctx->pc = 0x1a9854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9832));
    // 0x1a9858: 0xc06cd4e  jal         func_1B3538
    ctx->pc = 0x1A9858u;
    SET_GPR_U32(ctx, 31, 0x1A9860u);
    ctx->pc = 0x1A985Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9858u;
            // 0x1a985c: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3538u;
    if (runtime->hasFunction(0x1B3538u)) {
        auto targetFn = runtime->lookupFunction(0x1B3538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9860u; }
        if (ctx->pc != 0x1A9860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3538_0x1b3538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9860u; }
        if (ctx->pc != 0x1A9860u) { return; }
    }
    ctx->pc = 0x1A9860u;
    // 0x1a9860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9864: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9864u;
            // 0x1a9868: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A986Cu;
    // 0x1a986c: 0x0  nop
    ctx->pc = 0x1a986cu;
    // NOP
}
