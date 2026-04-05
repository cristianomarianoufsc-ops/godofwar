#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00123290
// Address: 0x123290 - 0x1232c0
void sub_00123290_0x123290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123290_0x123290");
#endif

    ctx->pc = 0x123290u;

    // 0x123290: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x123290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x123294: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x123294u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x123298: 0x8c44bdec  lw          $a0, -0x4214($v0)
    ctx->pc = 0x123298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950380)));
    // 0x12329c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12329cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1232a0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1232A0u;
    SET_GPR_U32(ctx, 31, 0x1232A8u);
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1232A8u; }
        if (ctx->pc != 0x1232A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1232A8u; }
        if (ctx->pc != 0x1232A8u) { return; }
    }
    ctx->pc = 0x1232A8u;
    // 0x1232a8: 0xc08fb82  jal         func_23EE08
    ctx->pc = 0x1232A8u;
    SET_GPR_U32(ctx, 31, 0x1232B0u);
    ctx->pc = 0x1232ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1232A8u;
            // 0x1232ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EE08u;
    if (runtime->hasFunction(0x23EE08u)) {
        auto targetFn = runtime->lookupFunction(0x23EE08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1232B0u; }
        if (ctx->pc != 0x1232B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023EE08_0x23ee08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1232B0u; }
        if (ctx->pc != 0x1232B0u) { return; }
    }
    ctx->pc = 0x1232B0u;
    // 0x1232b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1232b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1232b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1232B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1232B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1232B4u;
            // 0x1232b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1232BCu;
    // 0x1232bc: 0x0  nop
    ctx->pc = 0x1232bcu;
    // NOP
}
