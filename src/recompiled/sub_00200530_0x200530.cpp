#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00200530
// Address: 0x200530 - 0x200568
void sub_00200530_0x200530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200530_0x200530");
#endif

    ctx->pc = 0x200530u;

    // 0x200530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x200534: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x200534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x200538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20053c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20053cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200540: 0xc080516  jal         func_201458
    ctx->pc = 0x200540u;
    SET_GPR_U32(ctx, 31, 0x200548u);
    ctx->pc = 0x200544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200540u;
            // 0x200544: 0x8e05006c  lw          $a1, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201458u;
    if (runtime->hasFunction(0x201458u)) {
        auto targetFn = runtime->lookupFunction(0x201458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200548u; }
        if (ctx->pc != 0x200548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201458_0x201458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200548u; }
        if (ctx->pc != 0x200548u) { return; }
    }
    ctx->pc = 0x200548u;
    // 0x200548: 0x8e05006c  lw          $a1, 0x6C($s0)
    ctx->pc = 0x200548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x20054c: 0xc080516  jal         func_201458
    ctx->pc = 0x20054Cu;
    SET_GPR_U32(ctx, 31, 0x200554u);
    ctx->pc = 0x200550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20054Cu;
            // 0x200550: 0x26040034  addiu       $a0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201458u;
    if (runtime->hasFunction(0x201458u)) {
        auto targetFn = runtime->lookupFunction(0x201458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200554u; }
        if (ctx->pc != 0x200554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201458_0x201458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200554u; }
        if (ctx->pc != 0x200554u) { return; }
    }
    ctx->pc = 0x200554u;
    // 0x200554: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x200554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20055c: 0x3e00008  jr          $ra
    ctx->pc = 0x20055Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20055Cu;
            // 0x200560: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200564u;
    // 0x200564: 0x0  nop
    ctx->pc = 0x200564u;
    // NOP
}
