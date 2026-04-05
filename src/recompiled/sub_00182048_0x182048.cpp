#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00182048
// Address: 0x182048 - 0x182070
void sub_00182048_0x182048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182048_0x182048");
#endif

    ctx->pc = 0x182048u;

    // 0x182048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x182048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18204c: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x18204cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x182050: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182054: 0x2508c730  addiu       $t0, $t0, -0x38D0
    ctx->pc = 0x182054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952752));
    // 0x182058: 0xc06074a  jal         func_181D28
    ctx->pc = 0x182058u;
    SET_GPR_U32(ctx, 31, 0x182060u);
    ctx->pc = 0x18205Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182058u;
            // 0x18205c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181D28u;
    if (runtime->hasFunction(0x181D28u)) {
        auto targetFn = runtime->lookupFunction(0x181D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182060u; }
        if (ctx->pc != 0x182060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181D28_0x181d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182060u; }
        if (ctx->pc != 0x182060u) { return; }
    }
    ctx->pc = 0x182060u;
    // 0x182060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182064: 0x3e00008  jr          $ra
    ctx->pc = 0x182064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182064u;
            // 0x182068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18206Cu;
    // 0x18206c: 0x0  nop
    ctx->pc = 0x18206cu;
    // NOP
}
