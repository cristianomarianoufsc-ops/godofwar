#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001516F8
// Address: 0x1516f8 - 0x151718
void sub_001516F8_0x1516f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001516F8_0x1516f8");
#endif

    ctx->pc = 0x1516f8u;

    // 0x1516f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1516f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1516fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1516fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151700: 0xc0545c6  jal         func_151718
    ctx->pc = 0x151700u;
    SET_GPR_U32(ctx, 31, 0x151708u);
    ctx->pc = 0x151718u;
    if (runtime->hasFunction(0x151718u)) {
        auto targetFn = runtime->lookupFunction(0x151718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151708u; }
        if (ctx->pc != 0x151708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151718_0x151718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151708u; }
        if (ctx->pc != 0x151708u) { return; }
    }
    ctx->pc = 0x151708u;
    // 0x151708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15170c: 0x3e00008  jr          $ra
    ctx->pc = 0x15170Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15170Cu;
            // 0x151710: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x151714u;
    // 0x151714: 0x0  nop
    ctx->pc = 0x151714u;
    // NOP
}
