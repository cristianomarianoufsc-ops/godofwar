#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00259410
// Address: 0x259410 - 0x259430
void sub_00259410_0x259410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259410_0x259410");
#endif

    ctx->pc = 0x259410u;

    // 0x259410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x259410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x259414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259418: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x259418u;
    SET_GPR_U32(ctx, 31, 0x259420u);
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259420u; }
        if (ctx->pc != 0x259420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259420u; }
        if (ctx->pc != 0x259420u) { return; }
    }
    ctx->pc = 0x259420u;
    // 0x259420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259424: 0x3e00008  jr          $ra
    ctx->pc = 0x259424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259424u;
            // 0x259428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25942Cu;
    // 0x25942c: 0x0  nop
    ctx->pc = 0x25942cu;
    // NOP
}
