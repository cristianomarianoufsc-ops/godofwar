#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017A9E8
// Address: 0x17a9e8 - 0x17aa18
void sub_0017A9E8_0x17a9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A9E8_0x17a9e8");
#endif

    ctx->pc = 0x17a9e8u;

    // 0x17a9e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17a9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a9ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a9f0: 0xc05ea0c  jal         func_17A830
    ctx->pc = 0x17A9F0u;
    SET_GPR_U32(ctx, 31, 0x17A9F8u);
    ctx->pc = 0x17A830u;
    if (runtime->hasFunction(0x17A830u)) {
        auto targetFn = runtime->lookupFunction(0x17A830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A9F8u; }
        if (ctx->pc != 0x17A9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A830_0x17a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A9F8u; }
        if (ctx->pc != 0x17A9F8u) { return; }
    }
    ctx->pc = 0x17A9F8u;
    // 0x17a9f8: 0xc087f48  jal         func_21FD20
    ctx->pc = 0x17A9F8u;
    SET_GPR_U32(ctx, 31, 0x17AA00u);
    ctx->pc = 0x21FD20u;
    if (runtime->hasFunction(0x21FD20u)) {
        auto targetFn = runtime->lookupFunction(0x21FD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AA00u; }
        if (ctx->pc != 0x17AA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FD20_0x21fd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AA00u; }
        if (ctx->pc != 0x17AA00u) { return; }
    }
    ctx->pc = 0x17AA00u;
    // 0x17aa00: 0xc05f5de  jal         func_17D778
    ctx->pc = 0x17AA00u;
    SET_GPR_U32(ctx, 31, 0x17AA08u);
    ctx->pc = 0x17D778u;
    if (runtime->hasFunction(0x17D778u)) {
        auto targetFn = runtime->lookupFunction(0x17D778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AA08u; }
        if (ctx->pc != 0x17AA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17d778_0x17d948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AA08u; }
        if (ctx->pc != 0x17AA08u) { return; }
    }
    ctx->pc = 0x17AA08u;
    // 0x17aa08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17aa08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17aa0c: 0x3e00008  jr          $ra
    ctx->pc = 0x17AA0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AA0Cu;
            // 0x17aa10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17AA14u;
    // 0x17aa14: 0x0  nop
    ctx->pc = 0x17aa14u;
    // NOP
}
