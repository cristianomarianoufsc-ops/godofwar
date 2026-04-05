#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017A7A8
// Address: 0x17a7a8 - 0x17a7f0
void sub_0017A7A8_0x17a7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A7A8_0x17a7a8");
#endif

    ctx->pc = 0x17a7a8u;

    // 0x17a7a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a7ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17a7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17a7b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17a7b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a7b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a7b8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x17a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x17a7bc: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x17a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x17a7c0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x17a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x17a7c4: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x17a7c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x17a7c8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x17a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x17a7cc: 0x40f809  jalr        $v0
    ctx->pc = 0x17A7CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A7D4u);
        ctx->pc = 0x17A7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A7CCu;
            // 0x17a7d0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17A7D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17A7D4u; }
            if (ctx->pc != 0x17A7D4u) { return; }
        }
        }
    }
    ctx->pc = 0x17A7D4u;
    // 0x17a7d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17a7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a7d8: 0xc06199e  jal         func_186678
    ctx->pc = 0x17A7D8u;
    SET_GPR_U32(ctx, 31, 0x17A7E0u);
    ctx->pc = 0x17A7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A7D8u;
            // 0x17a7dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186678u;
    if (runtime->hasFunction(0x186678u)) {
        auto targetFn = runtime->lookupFunction(0x186678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A7E0u; }
        if (ctx->pc != 0x17A7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186678_0x186678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A7E0u; }
        if (ctx->pc != 0x17A7E0u) { return; }
    }
    ctx->pc = 0x17A7E0u;
    // 0x17a7e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17a7e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a7e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x17A7E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A7E8u;
            // 0x17a7ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A7F0u;
}
