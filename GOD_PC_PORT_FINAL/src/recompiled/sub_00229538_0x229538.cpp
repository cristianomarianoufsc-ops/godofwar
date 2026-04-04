#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00229538
// Address: 0x229538 - 0x229560
void sub_00229538_0x229538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229538_0x229538");
#endif

    ctx->pc = 0x229538u;

    // 0x229538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x229538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22953c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22953cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x229540: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x229540u;
    SET_GPR_U32(ctx, 31, 0x229548u);
    ctx->pc = 0x229544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229540u;
            // 0x229544: 0x2404018c  addiu       $a0, $zero, 0x18C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 396));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229548u; }
        if (ctx->pc != 0x229548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229548u; }
        if (ctx->pc != 0x229548u) { return; }
    }
    ctx->pc = 0x229548u;
    // 0x229548: 0xc08a558  jal         func_229560
    ctx->pc = 0x229548u;
    SET_GPR_U32(ctx, 31, 0x229550u);
    ctx->pc = 0x22954Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229548u;
            // 0x22954c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229560u;
    if (runtime->hasFunction(0x229560u)) {
        auto targetFn = runtime->lookupFunction(0x229560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229550u; }
        if (ctx->pc != 0x229550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229560_0x229560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229550u; }
        if (ctx->pc != 0x229550u) { return; }
    }
    ctx->pc = 0x229550u;
    // 0x229550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x229550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229554: 0x3e00008  jr          $ra
    ctx->pc = 0x229554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229554u;
            // 0x229558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22955Cu;
    // 0x22955c: 0x0  nop
    ctx->pc = 0x22955cu;
    // NOP
}
