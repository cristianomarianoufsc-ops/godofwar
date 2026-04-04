#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0E70
// Address: 0x1b0e70 - 0x1b0ea0
void sub_001B0E70_0x1b0e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0E70_0x1b0e70");
#endif

    ctx->pc = 0x1b0e70u;

    // 0x1b0e70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b0e74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b0e78: 0xc06ba96  jal         func_1AEA58
    ctx->pc = 0x1B0E78u;
    SET_GPR_U32(ctx, 31, 0x1B0E80u);
    ctx->pc = 0x1AEA58u;
    if (runtime->hasFunction(0x1AEA58u)) {
        auto targetFn = runtime->lookupFunction(0x1AEA58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E80u; }
        if (ctx->pc != 0x1B0E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEA58_0x1aea58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E80u; }
        if (ctx->pc != 0x1B0E80u) { return; }
    }
    ctx->pc = 0x1B0E80u;
    // 0x1b0e80: 0xc06bb9c  jal         func_1AEE70
    ctx->pc = 0x1B0E80u;
    SET_GPR_U32(ctx, 31, 0x1B0E88u);
    ctx->pc = 0x1AEE70u;
    if (runtime->hasFunction(0x1AEE70u)) {
        auto targetFn = runtime->lookupFunction(0x1AEE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E88u; }
        if (ctx->pc != 0x1B0E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEE70_0x1aee70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E88u; }
        if (ctx->pc != 0x1B0E88u) { return; }
    }
    ctx->pc = 0x1B0E88u;
    // 0x1b0e88: 0xc06bc2a  jal         func_1AF0A8
    ctx->pc = 0x1B0E88u;
    SET_GPR_U32(ctx, 31, 0x1B0E90u);
    ctx->pc = 0x1AF0A8u;
    if (runtime->hasFunction(0x1AF0A8u)) {
        auto targetFn = runtime->lookupFunction(0x1AF0A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E90u; }
        if (ctx->pc != 0x1B0E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF0A8_0x1af0a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E90u; }
        if (ctx->pc != 0x1B0E90u) { return; }
    }
    ctx->pc = 0x1B0E90u;
    // 0x1b0e90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0e94: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E94u;
            // 0x1b0e98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0E9Cu;
    // 0x1b0e9c: 0x0  nop
    ctx->pc = 0x1b0e9cu;
    // NOP
}
