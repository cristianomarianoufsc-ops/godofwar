#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027B7C0
// Address: 0x27b7c0 - 0x27b7e8
void sub_0027B7C0_0x27b7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B7C0_0x27b7c0");
#endif

    ctx->pc = 0x27b7c0u;

    // 0x27b7c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x27b7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x27b7c4: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x27b7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x27b7c8: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x27b7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
    // 0x27b7cc: 0xffa70058  sd          $a3, 0x58($sp)
    ctx->pc = 0x27b7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
    // 0x27b7d0: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x27b7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x27b7d4: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x27b7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x27b7d8: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x27b7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x27b7dc: 0xffab0078  sd          $t3, 0x78($sp)
    ctx->pc = 0x27b7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    // 0x27b7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x27B7E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B7E0u;
            // 0x27b7e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27B7E8u;
}
