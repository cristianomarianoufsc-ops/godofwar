#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B59B0
// Address: 0x1b59b0 - 0x1b59f8
void sub_001B59B0_0x1b59b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B59B0_0x1b59b0");
#endif

    ctx->pc = 0x1b59b0u;

    // 0x1b59b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b59b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b59b4: 0x24a50320  addiu       $a1, $a1, 0x320
    ctx->pc = 0x1b59b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 800));
    // 0x1b59b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b59b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b59bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b59bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b59c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b59c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b59c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b59c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b59c8: 0xc06e362  jal         func_1B8D88
    ctx->pc = 0x1B59C8u;
    SET_GPR_U32(ctx, 31, 0x1B59D0u);
    ctx->pc = 0x1B59CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B59C8u;
            // 0x1b59cc: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8D88u;
    if (runtime->hasFunction(0x1B8D88u)) {
        auto targetFn = runtime->lookupFunction(0x1B8D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B59D0u; }
        if (ctx->pc != 0x1B59D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8D88_0x1b8d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B59D0u; }
        if (ctx->pc != 0x1B59D0u) { return; }
    }
    ctx->pc = 0x1B59D0u;
    // 0x1b59d0: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B59D0u;
    {
        const bool branch_taken_0x1b59d0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1B59D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B59D0u;
            // 0x1b59d4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b59d0) {
            ctx->pc = 0x1B59E0u;
            goto label_1b59e0;
        }
    }
    ctx->pc = 0x1B59D8u;
    // 0x1b59d8: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1b59d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1b59dc: 0x24424848  addiu       $v0, $v0, 0x4848
    ctx->pc = 0x1b59dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18504));
label_1b59e0:
    // 0x1b59e0: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x1b59e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    // 0x1b59e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b59e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b59e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b59e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b59ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1B59ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B59F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B59ECu;
            // 0x1b59f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B59E0u: goto label_1b59e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B59F4u;
    // 0x1b59f4: 0x0  nop
    ctx->pc = 0x1b59f4u;
    // NOP
}
