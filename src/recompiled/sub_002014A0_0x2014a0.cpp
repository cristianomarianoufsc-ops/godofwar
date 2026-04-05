#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002014A0
// Address: 0x2014a0 - 0x2014d8
void sub_002014A0_0x2014a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002014A0_0x2014a0");
#endif

    ctx->pc = 0x2014a0u;

    // 0x2014a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2014a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2014a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2014a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2014a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2014a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2014ac: 0xc08066e  jal         func_2019B8
    ctx->pc = 0x2014ACu;
    SET_GPR_U32(ctx, 31, 0x2014B4u);
    ctx->pc = 0x2014B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2014ACu;
            // 0x2014b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2019B8u;
    if (runtime->hasFunction(0x2019B8u)) {
        auto targetFn = runtime->lookupFunction(0x2019B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2014B4u; }
        if (ctx->pc != 0x2014B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2019b8_0x2019d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2014B4u; }
        if (ctx->pc != 0x2014B4u) { return; }
    }
    ctx->pc = 0x2014B4u;
    // 0x2014b4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2014b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2014b8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2014B8u;
    {
        const bool branch_taken_0x2014b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2014BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2014B8u;
            // 0x2014bc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2014b8) {
            ctx->pc = 0x2014CCu;
            goto label_2014cc;
        }
    }
    ctx->pc = 0x2014C0u;
    // 0x2014c0: 0xc07e67e  jal         func_1F99F8
    ctx->pc = 0x2014C0u;
    SET_GPR_U32(ctx, 31, 0x2014C8u);
    ctx->pc = 0x1F99F8u;
    if (runtime->hasFunction(0x1F99F8u)) {
        auto targetFn = runtime->lookupFunction(0x1F99F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2014C8u; }
        if (ctx->pc != 0x2014C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F99F8_0x1f99f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2014C8u; }
        if (ctx->pc != 0x2014C8u) { return; }
    }
    ctx->pc = 0x2014C8u;
    // 0x2014c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2014c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2014cc:
    // 0x2014cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2014ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2014d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2014D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2014D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2014D0u;
            // 0x2014d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2014CCu: goto label_2014cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2014D8u;
}
