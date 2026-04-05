#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2951e0
// Address: 0x2951e0 - 0x295218
void entry_2951e0_0x295218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2951e0_0x295218");
#endif

    ctx->pc = 0x2951e0u;

    // 0x2951e0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2951e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2951e4: 0x3463f130  ori         $v1, $v1, 0xF130
    ctx->pc = 0x2951e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61744);
label_2951e8:
    // 0x2951e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2951e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2951ec: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2951ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2951f0: 0x0  nop
    ctx->pc = 0x2951f0u;
    // NOP
    // 0x2951f4: 0x0  nop
    ctx->pc = 0x2951f4u;
    // NOP
    // 0x2951f8: 0x0  nop
    ctx->pc = 0x2951f8u;
    // NOP
    // 0x2951fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2951FCu;
    {
        const bool branch_taken_0x2951fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2951fc) {
            ctx->pc = 0x2951E8u;
            runtime->cooperativeGuestYield();
            goto label_2951e8;
        }
    }
    ctx->pc = 0x295204u;
    // 0x295204: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x295204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x295208: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x295208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29520c: 0x3463f180  ori         $v1, $v1, 0xF180
    ctx->pc = 0x29520cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61824);
    // 0x295210: 0x3e00008  jr          $ra
    ctx->pc = 0x295210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295210u;
            // 0x295214: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2951E8u: goto label_2951e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x295218u;
}
