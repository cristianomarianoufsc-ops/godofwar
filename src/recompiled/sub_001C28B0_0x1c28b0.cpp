#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C28B0
// Address: 0x1c28b0 - 0x1c28d0
void sub_001C28B0_0x1c28b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C28B0_0x1c28b0");
#endif

    ctx->pc = 0x1c28b0u;

    // 0x1c28b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c28b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c28b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c28b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c28b8: 0xc070a16  jal         func_1C2858
    ctx->pc = 0x1C28B8u;
    SET_GPR_U32(ctx, 31, 0x1C28C0u);
    ctx->pc = 0x1C2858u;
    if (runtime->hasFunction(0x1C2858u)) {
        auto targetFn = runtime->lookupFunction(0x1C2858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C28C0u; }
        if (ctx->pc != 0x1C28C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2858_0x1c2858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C28C0u; }
        if (ctx->pc != 0x1C28C0u) { return; }
    }
    ctx->pc = 0x1C28C0u;
    // 0x1c28c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c28c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c28c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C28C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C28C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C28C4u;
            // 0x1c28c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C28CCu;
    // 0x1c28cc: 0x0  nop
    ctx->pc = 0x1c28ccu;
    // NOP
}
