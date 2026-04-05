#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26bb68
// Address: 0x26bb68 - 0x26bb98
void entry_26bb68_0x26bb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26bb68_0x26bb98");
#endif

    ctx->pc = 0x26bb68u;

    // 0x26bb68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26bb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26bb6c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x26bb6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bb70: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x26bb70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bb74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26bb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26bb78: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x26bb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x26bb7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26bb7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bb80: 0xc09b054  jal         func_26C150
    ctx->pc = 0x26BB80u;
    SET_GPR_U32(ctx, 31, 0x26BB88u);
    ctx->pc = 0x26BB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BB80u;
            // 0x26bb84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C150u;
    if (runtime->hasFunction(0x26C150u)) {
        auto targetFn = runtime->lookupFunction(0x26C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BB88u; }
        if (ctx->pc != 0x26BB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C150_0x26c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BB88u; }
        if (ctx->pc != 0x26BB88u) { return; }
    }
    ctx->pc = 0x26BB88u;
    // 0x26bb88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26bb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bb8c: 0x3e00008  jr          $ra
    ctx->pc = 0x26BB8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BB8Cu;
            // 0x26bb90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26BB94u;
    // 0x26bb94: 0x0  nop
    ctx->pc = 0x26bb94u;
    // NOP
}
