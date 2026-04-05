#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00259380
// Address: 0x259380 - 0x2593a0
void sub_00259380_0x259380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259380_0x259380");
#endif

    ctx->pc = 0x259380u;

    // 0x259380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x259380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x259384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259388: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x259388u;
    SET_GPR_U32(ctx, 31, 0x259390u);
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259390u; }
        if (ctx->pc != 0x259390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259390u; }
        if (ctx->pc != 0x259390u) { return; }
    }
    ctx->pc = 0x259390u;
    // 0x259390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259394: 0x3e00008  jr          $ra
    ctx->pc = 0x259394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259394u;
            // 0x259398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25939Cu;
    // 0x25939c: 0x0  nop
    ctx->pc = 0x25939cu;
    // NOP
}
