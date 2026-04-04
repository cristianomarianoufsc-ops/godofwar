#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCDD0
// Address: 0x1dcdd0 - 0x1dcdf8
void sub_001DCDD0_0x1dcdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCDD0_0x1dcdd0");
#endif

    ctx->pc = 0x1dcdd0u;

    // 0x1dcdd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dcdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dcdd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dcdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dcdd8: 0xc08b1ee  jal         func_22C7B8
    ctx->pc = 0x1DCDD8u;
    SET_GPR_U32(ctx, 31, 0x1DCDE0u);
    ctx->pc = 0x22C7B8u;
    if (runtime->hasFunction(0x22C7B8u)) {
        auto targetFn = runtime->lookupFunction(0x22C7B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCDE0u; }
        if (ctx->pc != 0x1DCDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022C7B8_0x22c7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCDE0u; }
        if (ctx->pc != 0x1DCDE0u) { return; }
    }
    ctx->pc = 0x1DCDE0u;
    // 0x1dcde0: 0xc0772ea  jal         func_1DCBA8
    ctx->pc = 0x1DCDE0u;
    SET_GPR_U32(ctx, 31, 0x1DCDE8u);
    ctx->pc = 0x1DCBA8u;
    if (runtime->hasFunction(0x1DCBA8u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCDE8u; }
        if (ctx->pc != 0x1DCDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBA8_0x1dcba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCDE8u; }
        if (ctx->pc != 0x1DCDE8u) { return; }
    }
    ctx->pc = 0x1DCDE8u;
    // 0x1dcde8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dcde8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcdec: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCDECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCDECu;
            // 0x1dcdf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DCDF4u;
    // 0x1dcdf4: 0x0  nop
    ctx->pc = 0x1dcdf4u;
    // NOP
}
