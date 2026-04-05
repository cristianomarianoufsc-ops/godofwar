#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0E40
// Address: 0x1b0e40 - 0x1b0e70
void sub_001B0E40_0x1b0e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0E40_0x1b0e40");
#endif

    ctx->pc = 0x1b0e40u;

    // 0x1b0e40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b0e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b0e48: 0xc06ba76  jal         func_1AE9D8
    ctx->pc = 0x1B0E48u;
    SET_GPR_U32(ctx, 31, 0x1B0E50u);
    ctx->pc = 0x1AE9D8u;
    if (runtime->hasFunction(0x1AE9D8u)) {
        auto targetFn = runtime->lookupFunction(0x1AE9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E50u; }
        if (ctx->pc != 0x1B0E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE9D8_0x1ae9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E50u; }
        if (ctx->pc != 0x1B0E50u) { return; }
    }
    ctx->pc = 0x1B0E50u;
    // 0x1b0e50: 0xc06bb8a  jal         func_1AEE28
    ctx->pc = 0x1B0E50u;
    SET_GPR_U32(ctx, 31, 0x1B0E58u);
    ctx->pc = 0x1AEE28u;
    if (runtime->hasFunction(0x1AEE28u)) {
        auto targetFn = runtime->lookupFunction(0x1AEE28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E58u; }
        if (ctx->pc != 0x1B0E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEE28_0x1aee28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E58u; }
        if (ctx->pc != 0x1B0E58u) { return; }
    }
    ctx->pc = 0x1B0E58u;
    // 0x1b0e58: 0xc06bc02  jal         func_1AF008
    ctx->pc = 0x1B0E58u;
    SET_GPR_U32(ctx, 31, 0x1B0E60u);
    ctx->pc = 0x1AF008u;
    if (runtime->hasFunction(0x1AF008u)) {
        auto targetFn = runtime->lookupFunction(0x1AF008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E60u; }
        if (ctx->pc != 0x1B0E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF008_0x1af008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E60u; }
        if (ctx->pc != 0x1B0E60u) { return; }
    }
    ctx->pc = 0x1B0E60u;
    // 0x1b0e60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0e64: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E64u;
            // 0x1b0e68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0E6Cu;
    // 0x1b0e6c: 0x0  nop
    ctx->pc = 0x1b0e6cu;
    // NOP
}
