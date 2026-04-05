#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001230A8
// Address: 0x1230a8 - 0x1230d8
void sub_001230A8_0x1230a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001230A8_0x1230a8");
#endif

    ctx->pc = 0x1230a8u;

    // 0x1230a8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1230a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1230ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1230acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1230b0: 0x8c44bdec  lw          $a0, -0x4214($v0)
    ctx->pc = 0x1230b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950380)));
    // 0x1230b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1230b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1230b8: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1230B8u;
    SET_GPR_U32(ctx, 31, 0x1230C0u);
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1230C0u; }
        if (ctx->pc != 0x1230C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1230C0u; }
        if (ctx->pc != 0x1230C0u) { return; }
    }
    ctx->pc = 0x1230C0u;
    // 0x1230c0: 0xc08fb74  jal         func_23EDD0
    ctx->pc = 0x1230C0u;
    SET_GPR_U32(ctx, 31, 0x1230C8u);
    ctx->pc = 0x1230C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1230C0u;
            // 0x1230c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EDD0u;
    if (runtime->hasFunction(0x23EDD0u)) {
        auto targetFn = runtime->lookupFunction(0x23EDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1230C8u; }
        if (ctx->pc != 0x1230C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023EDD0_0x23edd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1230C8u; }
        if (ctx->pc != 0x1230C8u) { return; }
    }
    ctx->pc = 0x1230C8u;
    // 0x1230c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1230c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1230cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1230CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1230D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1230CCu;
            // 0x1230d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1230D4u;
    // 0x1230d4: 0x0  nop
    ctx->pc = 0x1230d4u;
    // NOP
}
