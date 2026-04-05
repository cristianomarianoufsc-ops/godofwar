#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002994A0
// Address: 0x2994a0 - 0x2994f8
void sub_002994A0_0x2994a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002994A0_0x2994a0");
#endif

    ctx->pc = 0x2994a0u;

    // 0x2994a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2994a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2994a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2994a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2994a8: 0xc0a64a6  jal         func_299298
    ctx->pc = 0x2994A8u;
    SET_GPR_U32(ctx, 31, 0x2994B0u);
    ctx->pc = 0x299298u;
    if (runtime->hasFunction(0x299298u)) {
        auto targetFn = runtime->lookupFunction(0x299298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2994B0u; }
        if (ctx->pc != 0x2994B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299298_0x299378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2994B0u; }
        if (ctx->pc != 0x2994B0u) { return; }
    }
    ctx->pc = 0x2994B0u;
    // 0x2994b0: 0xc0a64e4  jal         func_299390
    ctx->pc = 0x2994B0u;
    SET_GPR_U32(ctx, 31, 0x2994B8u);
    ctx->pc = 0x299390u;
    if (runtime->hasFunction(0x299390u)) {
        auto targetFn = runtime->lookupFunction(0x299390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2994B8u; }
        if (ctx->pc != 0x2994B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299390_0x299490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2994B8u; }
        if (ctx->pc != 0x2994B8u) { return; }
    }
    ctx->pc = 0x2994B8u;
    // 0x2994b8: 0xc0a65d2  jal         func_299748
    ctx->pc = 0x2994B8u;
    SET_GPR_U32(ctx, 31, 0x2994C0u);
    ctx->pc = 0x299748u;
    if (runtime->hasFunction(0x299748u)) {
        auto targetFn = runtime->lookupFunction(0x299748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2994C0u; }
        if (ctx->pc != 0x2994C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00299748_0x299748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2994C0u; }
        if (ctx->pc != 0x2994C0u) { return; }
    }
    ctx->pc = 0x2994C0u;
    // 0x2994c0: 0xc0a6630  jal         func_2998C0
    ctx->pc = 0x2994C0u;
    SET_GPR_U32(ctx, 31, 0x2994C8u);
    ctx->pc = 0x2994C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2994C0u;
            // 0x2994c4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2998C0u;
    if (runtime->hasFunction(0x2998C0u)) {
        auto targetFn = runtime->lookupFunction(0x2998C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2994C8u; }
        if (ctx->pc != 0x2994C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2998c0_0x299a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2994C8u; }
        if (ctx->pc != 0x2994C8u) { return; }
    }
    ctx->pc = 0x2994C8u;
    // 0x2994c8: 0xc0a6688  jal         func_299A20
    ctx->pc = 0x2994C8u;
    SET_GPR_U32(ctx, 31, 0x2994D0u);
    ctx->pc = 0x299A20u;
    if (runtime->hasFunction(0x299A20u)) {
        auto targetFn = runtime->lookupFunction(0x299A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2994D0u; }
        if (ctx->pc != 0x2994D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299a20_0x299ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2994D0u; }
        if (ctx->pc != 0x2994D0u) { return; }
    }
    ctx->pc = 0x2994D0u;
    // 0x2994d0: 0xc0a5228  jal         func_2948A0
    ctx->pc = 0x2994D0u;
    SET_GPR_U32(ctx, 31, 0x2994D8u);
    ctx->pc = 0x2948A0u;
    if (runtime->hasFunction(0x2948A0u)) {
        auto targetFn = runtime->lookupFunction(0x2948A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2994D8u; }
        if (ctx->pc != 0x2994D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2948a0_0x294990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2994D8u; }
        if (ctx->pc != 0x2994D8u) { return; }
    }
    ctx->pc = 0x2994D8u;
    // 0x2994d8: 0xc0a6572  jal         func_2995C8
    ctx->pc = 0x2994D8u;
    SET_GPR_U32(ctx, 31, 0x2994E0u);
    ctx->pc = 0x2995C8u;
    if (runtime->hasFunction(0x2995C8u)) {
        auto targetFn = runtime->lookupFunction(0x2995C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2994E0u; }
        if (ctx->pc != 0x2994E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002995C8_0x2995c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2994E0u; }
        if (ctx->pc != 0x2994E0u) { return; }
    }
    ctx->pc = 0x2994E0u;
    // 0x2994e0: 0xc0a6a5c  jal         func_29A970
    ctx->pc = 0x2994E0u;
    SET_GPR_U32(ctx, 31, 0x2994E8u);
    ctx->pc = 0x29A970u;
    if (runtime->hasFunction(0x29A970u)) {
        auto targetFn = runtime->lookupFunction(0x29A970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2994E8u; }
        if (ctx->pc != 0x2994E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029A970_0x29a970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2994E8u; }
        if (ctx->pc != 0x2994E8u) { return; }
    }
    ctx->pc = 0x2994E8u;
    // 0x2994e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2994e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2994ec: 0x80a69b2  j           func_29A6C8
    ctx->pc = 0x2994ECu;
    ctx->pc = 0x2994F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2994ECu;
            // 0x2994f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A6C8u;
    if (runtime->hasFunction(0x29A6C8u)) {
        auto targetFn = runtime->lookupFunction(0x29A6C8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_29a6c8_0x29a700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2994F4u;
    // 0x2994f4: 0x0  nop
    ctx->pc = 0x2994f4u;
    // NOP
}
