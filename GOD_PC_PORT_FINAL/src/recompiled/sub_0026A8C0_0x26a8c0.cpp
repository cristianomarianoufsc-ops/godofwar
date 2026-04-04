#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026A8C0
// Address: 0x26a8c0 - 0x26a8f8
void sub_0026A8C0_0x26a8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A8C0_0x26a8c0");
#endif

    ctx->pc = 0x26a8c0u;

    // 0x26a8c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26a8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26a8c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26a8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a8c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26a8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26a8cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x26a8ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a8d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26a8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26a8d4: 0xc072f2e  jal         func_1CBCB8
    ctx->pc = 0x26A8D4u;
    SET_GPR_U32(ctx, 31, 0x26A8DCu);
    ctx->pc = 0x26A8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A8D4u;
            // 0x26a8d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCB8u;
    if (runtime->hasFunction(0x1CBCB8u)) {
        auto targetFn = runtime->lookupFunction(0x1CBCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8DCu; }
        if (ctx->pc != 0x26A8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBCB8_0x1cbcb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8DCu; }
        if (ctx->pc != 0x26A8DCu) { return; }
    }
    ctx->pc = 0x26A8DCu;
    // 0x26a8dc: 0xc072f50  jal         func_1CBD40
    ctx->pc = 0x26A8DCu;
    SET_GPR_U32(ctx, 31, 0x26A8E4u);
    ctx->pc = 0x26A8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A8DCu;
            // 0x26a8e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD40u;
    if (runtime->hasFunction(0x1CBD40u)) {
        auto targetFn = runtime->lookupFunction(0x1CBD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8E4u; }
        if (ctx->pc != 0x26A8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBD40_0x1cbd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8E4u; }
        if (ctx->pc != 0x26A8E4u) { return; }
    }
    ctx->pc = 0x26A8E4u;
    // 0x26a8e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26a8e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a8e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26a8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x26A8ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A8ECu;
            // 0x26a8f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26A8F4u;
    // 0x26a8f4: 0x0  nop
    ctx->pc = 0x26a8f4u;
    // NOP
}
