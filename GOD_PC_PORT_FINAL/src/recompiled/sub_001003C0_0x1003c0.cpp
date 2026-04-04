#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001003C0
// Address: 0x1003c0 - 0x100408
void sub_001003C0_0x1003c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001003C0_0x1003c0");
#endif

    ctx->pc = 0x1003c0u;

    // 0x1003c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1003c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1003c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1003c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1003c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1003c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1003cc: 0xc040102  jal         func_100408
    ctx->pc = 0x1003CCu;
    SET_GPR_U32(ctx, 31, 0x1003D4u);
    ctx->pc = 0x1003D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1003CCu;
            // 0x1003d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100408u;
    if (runtime->hasFunction(0x100408u)) {
        auto targetFn = runtime->lookupFunction(0x100408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1003D4u; }
        if (ctx->pc != 0x1003D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100408_0x100408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1003D4u; }
        if (ctx->pc != 0x1003D4u) { return; }
    }
    ctx->pc = 0x1003D4u;
    // 0x1003d4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1003d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1003d8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1003D8u;
    {
        const bool branch_taken_0x1003d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1003d8) {
            ctx->pc = 0x1003DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1003D8u;
            // 0x1003dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1003ECu;
            goto label_1003ec;
        }
    }
    ctx->pc = 0x1003E0u;
    // 0x1003e0: 0xc04c4a2  jal         func_131288
    ctx->pc = 0x1003E0u;
    SET_GPR_U32(ctx, 31, 0x1003E8u);
    ctx->pc = 0x1003E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1003E0u;
            // 0x1003e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131288u;
    if (runtime->hasFunction(0x131288u)) {
        auto targetFn = runtime->lookupFunction(0x131288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1003E8u; }
        if (ctx->pc != 0x1003E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131288_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1003E8u; }
        if (ctx->pc != 0x1003E8u) { return; }
    }
    ctx->pc = 0x1003E8u;
    // 0x1003e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1003e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1003ec:
    // 0x1003ec: 0xc08e218  jal         func_238860
    ctx->pc = 0x1003ECu;
    SET_GPR_U32(ctx, 31, 0x1003F4u);
    ctx->pc = 0x1003F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1003ECu;
            // 0x1003f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1003F4u; }
        if (ctx->pc != 0x1003F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1003F4u; }
        if (ctx->pc != 0x1003F4u) { return; }
    }
    ctx->pc = 0x1003F4u;
    // 0x1003f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1003f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1003f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1003f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1003fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1003FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1003FCu;
            // 0x100400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1003ECu: goto label_1003ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x100404u;
    // 0x100404: 0x0  nop
    ctx->pc = 0x100404u;
    // NOP
}
