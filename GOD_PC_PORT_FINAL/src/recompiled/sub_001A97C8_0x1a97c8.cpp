#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A97C8
// Address: 0x1a97c8 - 0x1a9838
void sub_001A97C8_0x1a97c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A97C8_0x1a97c8");
#endif

    ctx->pc = 0x1a97c8u;

    // 0x1a97c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a97c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a97cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a97ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a97d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a97d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a97d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a97d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a97d8: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x1a97d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1a97dc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a97dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a97e0: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1a97e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1a97e4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a97e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a97e8: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1a97e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1a97ec: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1a97ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1a97f0: 0x40f809  jalr        $v0
    ctx->pc = 0x1A97F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A97F8u);
        ctx->pc = 0x1A97F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A97F0u;
            // 0x1a97f4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A97F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A97F8u; }
            if (ctx->pc != 0x1A97F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1A97F8u;
    // 0x1a97f8: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x1a97f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1a97fc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1a97fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1a9800: 0x24a54278  addiu       $a1, $a1, 0x4278
    ctx->pc = 0x1a9800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17016));
    // 0x1a9804: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1a9804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a9808: 0x8c500034  lw          $s0, 0x34($v0)
    ctx->pc = 0x1a9808u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1a980c: 0x26110034  addiu       $s1, $s0, 0x34
    ctx->pc = 0x1a980cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x1a9810: 0xc0a26dc  jal         func_289B70
    ctx->pc = 0x1A9810u;
    SET_GPR_U32(ctx, 31, 0x1A9818u);
    ctx->pc = 0x1A9814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9810u;
            // 0x1a9814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289B70u;
    if (runtime->hasFunction(0x289B70u)) {
        auto targetFn = runtime->lookupFunction(0x289B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9818u; }
        if (ctx->pc != 0x1A9818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289b70_0x289d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9818u; }
        if (ctx->pc != 0x1A9818u) { return; }
    }
    ctx->pc = 0x1A9818u;
    // 0x1a9818: 0x26100038  addiu       $s0, $s0, 0x38
    ctx->pc = 0x1a9818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1a981c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a981cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9820: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x1a9820u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    // 0x1a9824: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a9824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a9828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a982c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a982cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9830: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9830u;
            // 0x1a9834: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9838u;
}
