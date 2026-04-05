#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_117450
// Address: 0x117450 - 0x117470
void entry_117450_0x117470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_117450_0x117470");
#endif

    ctx->pc = 0x117450u;

    // 0x117450: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x117450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x117454: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x117454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x117458: 0x3442ff6f  ori         $v0, $v0, 0xFF6F
    ctx->pc = 0x117458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65391);
    // 0x11745c: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x11745cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x117460: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x117460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x117464: 0x3e00008  jr          $ra
    ctx->pc = 0x117464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117464u;
            // 0x117468: 0xac83002c  sw          $v1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11746Cu;
    // 0x11746c: 0x0  nop
    ctx->pc = 0x11746cu;
    // NOP
}
