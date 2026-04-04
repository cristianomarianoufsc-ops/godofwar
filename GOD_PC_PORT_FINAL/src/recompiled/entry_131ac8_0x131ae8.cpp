#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_131ac8
// Address: 0x131ac8 - 0x131ae8
void entry_131ac8_0x131ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_131ac8_0x131ae8");
#endif

    ctx->pc = 0x131ac8u;

    // 0x131ac8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x131ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x131acc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x131accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x131ad0: 0xc08c78c  jal         func_231E30
    ctx->pc = 0x131AD0u;
    SET_GPR_U32(ctx, 31, 0x131AD8u);
    ctx->pc = 0x131AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131AD0u;
            // 0x131ad4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E30u;
    if (runtime->hasFunction(0x231E30u)) {
        auto targetFn = runtime->lookupFunction(0x231E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131AD8u; }
        if (ctx->pc != 0x131AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E30_0x231e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131AD8u; }
        if (ctx->pc != 0x131AD8u) { return; }
    }
    ctx->pc = 0x131AD8u;
    // 0x131ad8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x131ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131adc: 0x3e00008  jr          $ra
    ctx->pc = 0x131ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131ADCu;
            // 0x131ae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131AE4u;
    // 0x131ae4: 0x0  nop
    ctx->pc = 0x131ae4u;
    // NOP
}
