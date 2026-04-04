#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017A9B0
// Address: 0x17a9b0 - 0x17a9e8
void sub_0017A9B0_0x17a9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A9B0_0x17a9b0");
#endif

    ctx->pc = 0x17a9b0u;

    // 0x17a9b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17a9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a9b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a9b8: 0xc087fbc  jal         func_21FEF0
    ctx->pc = 0x17A9B8u;
    SET_GPR_U32(ctx, 31, 0x17A9C0u);
    ctx->pc = 0x21FEF0u;
    if (runtime->hasFunction(0x21FEF0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A9C0u; }
        if (ctx->pc != 0x17A9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_21fef0_0x21fef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A9C0u; }
        if (ctx->pc != 0x17A9C0u) { return; }
    }
    ctx->pc = 0x17A9C0u;
    // 0x17a9c0: 0xc09aecc  jal         func_26BB30
    ctx->pc = 0x17A9C0u;
    SET_GPR_U32(ctx, 31, 0x17A9C8u);
    ctx->pc = 0x26BB30u;
    if (runtime->hasFunction(0x26BB30u)) {
        auto targetFn = runtime->lookupFunction(0x26BB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A9C8u; }
        if (ctx->pc != 0x17A9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026BB30_0x26bb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A9C8u; }
        if (ctx->pc != 0x17A9C8u) { return; }
    }
    ctx->pc = 0x17A9C8u;
    // 0x17a9c8: 0xc060ccc  jal         func_183330
    ctx->pc = 0x17A9C8u;
    SET_GPR_U32(ctx, 31, 0x17A9D0u);
    ctx->pc = 0x183330u;
    if (runtime->hasFunction(0x183330u)) {
        auto targetFn = runtime->lookupFunction(0x183330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A9D0u; }
        if (ctx->pc != 0x17A9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183330_0x183330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A9D0u; }
        if (ctx->pc != 0x17A9D0u) { return; }
    }
    ctx->pc = 0x17A9D0u;
    // 0x17a9d0: 0xc05f014  jal         func_17C050
    ctx->pc = 0x17A9D0u;
    SET_GPR_U32(ctx, 31, 0x17A9D8u);
    ctx->pc = 0x17C050u;
    if (runtime->hasFunction(0x17C050u)) {
        auto targetFn = runtime->lookupFunction(0x17C050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A9D8u; }
        if (ctx->pc != 0x17A9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C050_0x17c050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A9D8u; }
        if (ctx->pc != 0x17A9D8u) { return; }
    }
    ctx->pc = 0x17A9D8u;
    // 0x17a9d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x17A9DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A9DCu;
            // 0x17a9e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A9E4u;
    // 0x17a9e4: 0x0  nop
    ctx->pc = 0x17a9e4u;
    // NOP
}
