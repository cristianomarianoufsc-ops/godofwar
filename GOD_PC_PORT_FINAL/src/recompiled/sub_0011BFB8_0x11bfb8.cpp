#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011BFB8
// Address: 0x11bfb8 - 0x11bfe0
void sub_0011BFB8_0x11bfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BFB8_0x11bfb8");
#endif

    ctx->pc = 0x11bfb8u;

    // 0x11bfb8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11bfbc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11bfbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11bfc0: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x11bfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x11bfc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11bfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11bfc8: 0xc047d66  jal         func_11F598
    ctx->pc = 0x11BFC8u;
    SET_GPR_U32(ctx, 31, 0x11BFD0u);
    ctx->pc = 0x11F598u;
    if (runtime->hasFunction(0x11F598u)) {
        auto targetFn = runtime->lookupFunction(0x11F598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BFD0u; }
        if (ctx->pc != 0x11BFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f598_0x11f5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BFD0u; }
        if (ctx->pc != 0x11BFD0u) { return; }
    }
    ctx->pc = 0x11BFD0u;
    // 0x11bfd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11bfd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bfd4: 0x3e00008  jr          $ra
    ctx->pc = 0x11BFD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BFD4u;
            // 0x11bfd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11BFDCu;
    // 0x11bfdc: 0x0  nop
    ctx->pc = 0x11bfdcu;
    // NOP
}
