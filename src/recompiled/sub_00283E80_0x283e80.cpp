#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00283E80
// Address: 0x283e80 - 0x283eb0
void sub_00283E80_0x283e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283E80_0x283e80");
#endif

    ctx->pc = 0x283e80u;

    // 0x283e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x283e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x283e84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x283e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x283e88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x283e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x283e8c: 0xc0a0d9a  jal         func_283668
    ctx->pc = 0x283E8Cu;
    SET_GPR_U32(ctx, 31, 0x283E94u);
    ctx->pc = 0x283E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283E8Cu;
            // 0x283e90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283668u;
    if (runtime->hasFunction(0x283668u)) {
        auto targetFn = runtime->lookupFunction(0x283668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283E94u; }
        if (ctx->pc != 0x283E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283668_0x283668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283E94u; }
        if (ctx->pc != 0x283E94u) { return; }
    }
    ctx->pc = 0x283E94u;
    // 0x283e94: 0xc0a27cc  jal         func_289F30
    ctx->pc = 0x283E94u;
    SET_GPR_U32(ctx, 31, 0x283E9Cu);
    ctx->pc = 0x289F30u;
    if (runtime->hasFunction(0x289F30u)) {
        auto targetFn = runtime->lookupFunction(0x289F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283E9Cu; }
        if (ctx->pc != 0x283E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00289F30_0x289f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283E9Cu; }
        if (ctx->pc != 0x283E9Cu) { return; }
    }
    ctx->pc = 0x283E9Cu;
    // 0x283e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283ea0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x283ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283ea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x283ea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283ea8: 0x8040074  j           func_1001D0
    ctx->pc = 0x283EA8u;
    ctx->pc = 0x283EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283EA8u;
            // 0x283eac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001D0u;
    if (runtime->hasFunction(0x1001D0u)) {
        auto targetFn = runtime->lookupFunction(0x1001D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_1001d0_0x1003c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x283EB0u;
}
