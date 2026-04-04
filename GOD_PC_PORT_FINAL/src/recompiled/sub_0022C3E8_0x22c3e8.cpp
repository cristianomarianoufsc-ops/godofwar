#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022C3E8
// Address: 0x22c3e8 - 0x22c410
void sub_0022C3E8_0x22c3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C3E8_0x22c3e8");
#endif

    ctx->pc = 0x22c3e8u;

    // 0x22c3e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22c3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22c3ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c3f0: 0xc08b154  jal         func_22C550
    ctx->pc = 0x22C3F0u;
    SET_GPR_U32(ctx, 31, 0x22C3F8u);
    ctx->pc = 0x22C550u;
    if (runtime->hasFunction(0x22C550u)) {
        auto targetFn = runtime->lookupFunction(0x22C550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C3F8u; }
        if (ctx->pc != 0x22C3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022C550_0x22c550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C3F8u; }
        if (ctx->pc != 0x22C3F8u) { return; }
    }
    ctx->pc = 0x22C3F8u;
    // 0x22c3f8: 0xc084a8c  jal         func_212A30
    ctx->pc = 0x22C3F8u;
    SET_GPR_U32(ctx, 31, 0x22C400u);
    ctx->pc = 0x212A30u;
    if (runtime->hasFunction(0x212A30u)) {
        auto targetFn = runtime->lookupFunction(0x212A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C400u; }
        if (ctx->pc != 0x22C400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_212a30_0x212de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C400u; }
        if (ctx->pc != 0x22C400u) { return; }
    }
    ctx->pc = 0x22C400u;
    // 0x22c400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c404: 0x3e00008  jr          $ra
    ctx->pc = 0x22C404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C404u;
            // 0x22c408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22C40Cu;
    // 0x22c40c: 0x0  nop
    ctx->pc = 0x22c40cu;
    // NOP
}
