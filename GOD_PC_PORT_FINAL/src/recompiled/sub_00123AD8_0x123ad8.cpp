#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00123AD8
// Address: 0x123ad8 - 0x123b08
void sub_00123AD8_0x123ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123AD8_0x123ad8");
#endif

    ctx->pc = 0x123ad8u;

    // 0x123ad8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x123ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x123adc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x123adcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x123ae0: 0x8c44bdec  lw          $a0, -0x4214($v0)
    ctx->pc = 0x123ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950380)));
    // 0x123ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x123ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x123ae8: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x123AE8u;
    SET_GPR_U32(ctx, 31, 0x123AF0u);
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123AF0u; }
        if (ctx->pc != 0x123AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123AF0u; }
        if (ctx->pc != 0x123AF0u) { return; }
    }
    ctx->pc = 0x123AF0u;
    // 0x123af0: 0xc08fb90  jal         func_23EE40
    ctx->pc = 0x123AF0u;
    SET_GPR_U32(ctx, 31, 0x123AF8u);
    ctx->pc = 0x123AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123AF0u;
            // 0x123af4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EE40u;
    if (runtime->hasFunction(0x23EE40u)) {
        auto targetFn = runtime->lookupFunction(0x23EE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123AF8u; }
        if (ctx->pc != 0x123AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023EE40_0x23ee40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123AF8u; }
        if (ctx->pc != 0x123AF8u) { return; }
    }
    ctx->pc = 0x123AF8u;
    // 0x123af8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x123af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123afc: 0x3e00008  jr          $ra
    ctx->pc = 0x123AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123AFCu;
            // 0x123b00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x123B04u;
    // 0x123b04: 0x0  nop
    ctx->pc = 0x123b04u;
    // NOP
}
