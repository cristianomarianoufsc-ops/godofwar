#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00200568
// Address: 0x200568 - 0x200598
void sub_00200568_0x200568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200568_0x200568");
#endif

    ctx->pc = 0x200568u;

    // 0x200568: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20056c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20056cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x200570: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200574: 0xc080528  jal         func_2014A0
    ctx->pc = 0x200574u;
    SET_GPR_U32(ctx, 31, 0x20057Cu);
    ctx->pc = 0x200578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200574u;
            // 0x200578: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2014A0u;
    if (runtime->hasFunction(0x2014A0u)) {
        auto targetFn = runtime->lookupFunction(0x2014A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20057Cu; }
        if (ctx->pc != 0x20057Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002014A0_0x2014a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20057Cu; }
        if (ctx->pc != 0x20057Cu) { return; }
    }
    ctx->pc = 0x20057Cu;
    // 0x20057c: 0xc080528  jal         func_2014A0
    ctx->pc = 0x20057Cu;
    SET_GPR_U32(ctx, 31, 0x200584u);
    ctx->pc = 0x200580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20057Cu;
            // 0x200580: 0x26040034  addiu       $a0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2014A0u;
    if (runtime->hasFunction(0x2014A0u)) {
        auto targetFn = runtime->lookupFunction(0x2014A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200584u; }
        if (ctx->pc != 0x200584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002014A0_0x2014a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200584u; }
        if (ctx->pc != 0x200584u) { return; }
    }
    ctx->pc = 0x200584u;
    // 0x200584: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x200584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20058c: 0x3e00008  jr          $ra
    ctx->pc = 0x20058Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20058Cu;
            // 0x200590: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200594u;
    // 0x200594: 0x0  nop
    ctx->pc = 0x200594u;
    // NOP
}
