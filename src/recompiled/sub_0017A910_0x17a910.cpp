#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017A910
// Address: 0x17a910 - 0x17a940
void sub_0017A910_0x17a910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A910_0x17a910");
#endif

    ctx->pc = 0x17a910u;

    // 0x17a910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17a910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a918: 0xc04fe28  jal         func_13F8A0
    ctx->pc = 0x17A918u;
    SET_GPR_U32(ctx, 31, 0x17A920u);
    ctx->pc = 0x13F8A0u;
    if (runtime->hasFunction(0x13F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x13F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A920u; }
        if (ctx->pc != 0x17A920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F8A0_0x13f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A920u; }
        if (ctx->pc != 0x17A920u) { return; }
    }
    ctx->pc = 0x17A920u;
    // 0x17a920: 0xc05e8e6  jal         func_17A398
    ctx->pc = 0x17A920u;
    SET_GPR_U32(ctx, 31, 0x17A928u);
    ctx->pc = 0x17A398u;
    if (runtime->hasFunction(0x17A398u)) {
        auto targetFn = runtime->lookupFunction(0x17A398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A928u; }
        if (ctx->pc != 0x17A928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A398_0x17a398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A928u; }
        if (ctx->pc != 0x17A928u) { return; }
    }
    ctx->pc = 0x17A928u;
    // 0x17a928: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x17a928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x17a92c: 0xc060bfc  jal         func_182FF0
    ctx->pc = 0x17A92Cu;
    SET_GPR_U32(ctx, 31, 0x17A934u);
    ctx->pc = 0x17A930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A92Cu;
            // 0x17a930: 0x2484d900  addiu       $a0, $a0, -0x2700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182FF0u;
    if (runtime->hasFunction(0x182FF0u)) {
        auto targetFn = runtime->lookupFunction(0x182FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A934u; }
        if (ctx->pc != 0x17A934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_182ff0_0x1830d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A934u; }
        if (ctx->pc != 0x17A934u) { return; }
    }
    ctx->pc = 0x17A934u;
    // 0x17a934: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a938: 0x3e00008  jr          $ra
    ctx->pc = 0x17A938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A938u;
            // 0x17a93c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A940u;
}
