#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028D408
// Address: 0x28d408 - 0x28d430
void sub_0028D408_0x28d408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D408_0x28d408");
#endif

    ctx->pc = 0x28d408u;

    // 0x28d408: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x28d408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x28d40c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28d40cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28d410: 0x8c464294  lw          $a2, 0x4294($v0)
    ctx->pc = 0x28d410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17044)));
    // 0x28d414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28d414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28d418: 0xc0a350c  jal         func_28D430
    ctx->pc = 0x28D418u;
    SET_GPR_U32(ctx, 31, 0x28D420u);
    ctx->pc = 0x28D41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D418u;
            // 0x28d41c: 0x24c6005c  addiu       $a2, $a2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D430u;
    if (runtime->hasFunction(0x28D430u)) {
        auto targetFn = runtime->lookupFunction(0x28D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D420u; }
        if (ctx->pc != 0x28D420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28d430_0x28d4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D420u; }
        if (ctx->pc != 0x28D420u) { return; }
    }
    ctx->pc = 0x28D420u;
    // 0x28d420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28d420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d424: 0x3e00008  jr          $ra
    ctx->pc = 0x28D424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D424u;
            // 0x28d428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28D42Cu;
    // 0x28d42c: 0x0  nop
    ctx->pc = 0x28d42cu;
    // NOP
}
