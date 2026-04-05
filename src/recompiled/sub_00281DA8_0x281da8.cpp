#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00281DA8
// Address: 0x281da8 - 0x281dc8
void sub_00281DA8_0x281da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281DA8_0x281da8");
#endif

    ctx->pc = 0x281da8u;

    // 0x281da8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x281da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x281dac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281db0: 0xc0a071a  jal         func_281C68
    ctx->pc = 0x281DB0u;
    SET_GPR_U32(ctx, 31, 0x281DB8u);
    ctx->pc = 0x281C68u;
    if (runtime->hasFunction(0x281C68u)) {
        auto targetFn = runtime->lookupFunction(0x281C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281DB8u; }
        if (ctx->pc != 0x281DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_281c68_0x281da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281DB8u; }
        if (ctx->pc != 0x281DB8u) { return; }
    }
    ctx->pc = 0x281DB8u;
    // 0x281db8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x281DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281DBCu;
            // 0x281dc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281DC4u;
    // 0x281dc4: 0x0  nop
    ctx->pc = 0x281dc4u;
    // NOP
}
