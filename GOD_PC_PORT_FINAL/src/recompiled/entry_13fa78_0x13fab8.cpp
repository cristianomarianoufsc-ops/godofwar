#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13fa78
// Address: 0x13fa78 - 0x13fab8
void entry_13fa78_0x13fab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13fa78_0x13fab8");
#endif

    ctx->pc = 0x13fa78u;

    // 0x13fa78: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13fa7c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x13fa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x13fa80: 0x8c441014  lw          $a0, 0x1014($v0)
    ctx->pc = 0x13fa80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4116)));
    // 0x13fa84: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x13fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x13fa88: 0x8ca2f168  lw          $v0, -0xE98($a1)
    ctx->pc = 0x13fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294963560)));
    // 0x13fa8c: 0x8c631010  lw          $v1, 0x1010($v1)
    ctx->pc = 0x13fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4112)));
    // 0x13fa90: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x13fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13fa94: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x13fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x13fa98: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13FA98u;
    {
        const bool branch_taken_0x13fa98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fa98) {
            ctx->pc = 0x13FA9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13FA98u;
            // 0x13fa9c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13FAA0u;
            goto label_13faa0;
        }
    }
    ctx->pc = 0x13FAA0u;
label_13faa0:
    // 0x13faa0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x13faa0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x13faa4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13faa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13faa8: 0x1012  mflo        $v0
    ctx->pc = 0x13faa8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x13faac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13faacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13fab0: 0x3e00008  jr          $ra
    ctx->pc = 0x13FAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FAB0u;
            // 0x13fab4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13FAA0u: goto label_13faa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13FAB8u;
}
