#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00279E30
// Address: 0x279e30 - 0x279e50
void sub_00279E30_0x279e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279E30_0x279e30");
#endif

    ctx->pc = 0x279e30u;

    // 0x279e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x279e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x279e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x279e38: 0xc0a4fd0  jal         func_293F40
    ctx->pc = 0x279E38u;
    SET_GPR_U32(ctx, 31, 0x279E40u);
    ctx->pc = 0x293F40u;
    if (runtime->hasFunction(0x293F40u)) {
        auto targetFn = runtime->lookupFunction(0x293F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279E40u; }
        if (ctx->pc != 0x279E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293f40_0x293f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279E40u; }
        if (ctx->pc != 0x279E40u) { return; }
    }
    ctx->pc = 0x279E40u;
    // 0x279e40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279e44: 0x3e00008  jr          $ra
    ctx->pc = 0x279E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279E44u;
            // 0x279e48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x279E4Cu;
    // 0x279e4c: 0x0  nop
    ctx->pc = 0x279e4cu;
    // NOP
}
