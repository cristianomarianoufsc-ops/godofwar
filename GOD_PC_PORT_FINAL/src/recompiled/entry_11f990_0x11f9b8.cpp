#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_11f990
// Address: 0x11f990 - 0x11f9b8
void entry_11f990_0x11f9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_11f990_0x11f9b8");
#endif

    ctx->pc = 0x11f990u;

    // 0x11f990: 0x90a3001c  lbu         $v1, 0x1C($a1)
    ctx->pc = 0x11f990u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x11f994: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x11f994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x11f998: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F998u;
    {
        const bool branch_taken_0x11f998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F998u;
            // 0x11f99c: 0x306200f7  andi        $v0, $v1, 0xF7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)247);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f998) {
            ctx->pc = 0x11F9B0u;
            goto label_11f9b0;
        }
    }
    ctx->pc = 0x11F9A0u;
    // 0x11f9a0: 0xa0a2001c  sb          $v0, 0x1C($a1)
    ctx->pc = 0x11f9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x11f9a4: 0x9482462c  lhu         $v0, 0x462C($a0)
    ctx->pc = 0x11f9a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 17964)));
    // 0x11f9a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11f9ac: 0xa482462c  sh          $v0, 0x462C($a0)
    ctx->pc = 0x11f9acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 17964), (uint16_t)GPR_U32(ctx, 2));
label_11f9b0:
    // 0x11f9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x11F9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F9B0u: goto label_11f9b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F9B8u;
}
