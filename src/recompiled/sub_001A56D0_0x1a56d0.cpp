#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A56D0
// Address: 0x1a56d0 - 0x1a56f8
void sub_001A56D0_0x1a56d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A56D0_0x1a56d0");
#endif

    ctx->pc = 0x1a56d0u;

    // 0x1a56d0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a56d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a56d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a56d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a56d8: 0x8c44ca44  lw          $a0, -0x35BC($v0)
    ctx->pc = 0x1a56d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953540)));
    // 0x1a56dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a56dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a56e0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1A56E0u;
    SET_GPR_U32(ctx, 31, 0x1A56E8u);
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A56E8u; }
        if (ctx->pc != 0x1A56E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A56E8u; }
        if (ctx->pc != 0x1A56E8u) { return; }
    }
    ctx->pc = 0x1A56E8u;
    // 0x1a56e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a56e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a56ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1A56ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A56F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A56ECu;
            // 0x1a56f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A56F4u;
    // 0x1a56f4: 0x0  nop
    ctx->pc = 0x1a56f4u;
    // NOP
}
