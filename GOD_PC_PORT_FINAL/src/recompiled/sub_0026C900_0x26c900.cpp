#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026C900
// Address: 0x26c900 - 0x26c940
void sub_0026C900_0x26c900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C900_0x26c900");
#endif

    ctx->pc = 0x26c900u;

    // 0x26c900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26c900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26c904: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x26c904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x26c908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26c908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26c90c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26c90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c910: 0xc09afca  jal         func_26BF28
    ctx->pc = 0x26C910u;
    SET_GPR_U32(ctx, 31, 0x26C918u);
    ctx->pc = 0x26C914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C910u;
            // 0x26c914: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BF28u;
    if (runtime->hasFunction(0x26BF28u)) {
        auto targetFn = runtime->lookupFunction(0x26BF28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C918u; }
        if (ctx->pc != 0x26C918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026BF28_0x26bf28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C918u; }
        if (ctx->pc != 0x26C918u) { return; }
    }
    ctx->pc = 0x26C918u;
    // 0x26c918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26c918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c91c: 0x3e00008  jr          $ra
    ctx->pc = 0x26C91Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C91Cu;
            // 0x26c920: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26C924u;
    // 0x26c924: 0x0  nop
    ctx->pc = 0x26c924u;
    // NOP
    // 0x26c928: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26c928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26c92c: 0x0  nop
    ctx->pc = 0x26c92cu;
    // NOP
    // 0x26c930: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26c930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26c934: 0x0  nop
    ctx->pc = 0x26c934u;
    // NOP
    // 0x26c938: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26c938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26c93c: 0x0  nop
    ctx->pc = 0x26c93cu;
    // NOP
}
