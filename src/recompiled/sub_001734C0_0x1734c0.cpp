#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001734C0
// Address: 0x1734c0 - 0x173510
void sub_001734C0_0x1734c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001734C0_0x1734c0");
#endif

    ctx->pc = 0x1734c0u;

    // 0x1734c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1734c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1734c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1734c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1734c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1734c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1734cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1734ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1734d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1734d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1734d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1734d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1734d8: 0xc05cd2a  jal         func_1734A8
    ctx->pc = 0x1734D8u;
    SET_GPR_U32(ctx, 31, 0x1734E0u);
    ctx->pc = 0x1734DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1734D8u;
            // 0x1734dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1734A8u;
    if (runtime->hasFunction(0x1734A8u)) {
        auto targetFn = runtime->lookupFunction(0x1734A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1734E0u; }
        if (ctx->pc != 0x1734E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1734a8_0x1734c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1734E0u; }
        if (ctx->pc != 0x1734E0u) { return; }
    }
    ctx->pc = 0x1734E0u;
    // 0x1734e0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1734e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1734e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1734e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1734e8: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1734E8u;
    SET_GPR_U32(ctx, 31, 0x1734F0u);
    ctx->pc = 0x1734ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1734E8u;
            // 0x1734ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1734F0u; }
        if (ctx->pc != 0x1734F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1734F0u; }
        if (ctx->pc != 0x1734F0u) { return; }
    }
    ctx->pc = 0x1734F0u;
    // 0x1734f0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1734f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1734f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1734f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1734f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1734f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1734fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1734fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173504: 0x3e00008  jr          $ra
    ctx->pc = 0x173504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173504u;
            // 0x173508: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17350Cu;
    // 0x17350c: 0x0  nop
    ctx->pc = 0x17350cu;
    // NOP
}
