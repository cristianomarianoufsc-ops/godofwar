#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001837B8
// Address: 0x1837b8 - 0x1837d8
void sub_001837B8_0x1837b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001837B8_0x1837b8");
#endif

    ctx->pc = 0x1837b8u;

    // 0x1837b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1837b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1837bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1837bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1837c0: 0xc060cd8  jal         func_183360
    ctx->pc = 0x1837C0u;
    SET_GPR_U32(ctx, 31, 0x1837C8u);
    ctx->pc = 0x183360u;
    if (runtime->hasFunction(0x183360u)) {
        auto targetFn = runtime->lookupFunction(0x183360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1837C8u; }
        if (ctx->pc != 0x1837C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183360_0x183360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1837C8u; }
        if (ctx->pc != 0x1837C8u) { return; }
    }
    ctx->pc = 0x1837C8u;
    // 0x1837c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1837c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1837cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1837CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1837D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1837CCu;
            // 0x1837d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1837D4u;
    // 0x1837d4: 0x0  nop
    ctx->pc = 0x1837d4u;
    // NOP
}
