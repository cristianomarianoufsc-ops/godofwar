#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002988E0
// Address: 0x2988e0 - 0x298910
void sub_002988E0_0x2988e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002988E0_0x2988e0");
#endif

    ctx->pc = 0x2988e0u;

    // 0x2988e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2988e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2988e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2988e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2988e8: 0xc0a621a  jal         func_298868
    ctx->pc = 0x2988E8u;
    SET_GPR_U32(ctx, 31, 0x2988F0u);
    ctx->pc = 0x298868u;
    if (runtime->hasFunction(0x298868u)) {
        auto targetFn = runtime->lookupFunction(0x298868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2988F0u; }
        if (ctx->pc != 0x2988F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00298868_0x298868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2988F0u; }
        if (ctx->pc != 0x2988F0u) { return; }
    }
    ctx->pc = 0x2988F0u;
    // 0x2988f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2988f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2988f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2988F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2988F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2988F4u;
            // 0x2988f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2988FCu;
    // 0x2988fc: 0x0  nop
    ctx->pc = 0x2988fcu;
    // NOP
    // 0x298900: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x298900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x298904: 0x0  nop
    ctx->pc = 0x298904u;
    // NOP
    // 0x298908: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x298908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29890c: 0x0  nop
    ctx->pc = 0x29890cu;
    // NOP
}
