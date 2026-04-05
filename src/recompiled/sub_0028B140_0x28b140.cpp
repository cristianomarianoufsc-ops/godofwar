#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028B140
// Address: 0x28b140 - 0x28b150
void sub_0028B140_0x28b140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B140_0x28b140");
#endif

    ctx->pc = 0x28b140u;

    // 0x28b140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28b140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28b144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28b144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28b148: 0xc040074  jal         func_1001D0
    ctx->pc = 0x28B148u;
    SET_GPR_U32(ctx, 31, 0x28B150u);
    ctx->pc = 0x28B14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B148u;
            // 0x28b14c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001D0u;
    if (runtime->hasFunction(0x1001D0u)) {
        auto targetFn = runtime->lookupFunction(0x1001D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B150u; }
        if (ctx->pc != 0x28B150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1001d0_0x1003c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B150u; }
        if (ctx->pc != 0x28B150u) { return; }
    }
    ctx->pc = 0x28B150u;
}
