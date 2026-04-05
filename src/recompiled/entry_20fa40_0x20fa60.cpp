#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_20fa40
// Address: 0x20fa40 - 0x20fa60
void entry_20fa40_0x20fa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_20fa40_0x20fa60");
#endif

    ctx->pc = 0x20fa40u;

    // 0x20fa40: 0x8c820174  lw          $v0, 0x174($a0)
    ctx->pc = 0x20fa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x20fa44: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x20fa44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x20fa48: 0x3463f800  ori         $v1, $v1, 0xF800
    ctx->pc = 0x20fa48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63488);
    // 0x20fa4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20fa4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20fa50: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x20fa50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x20fa54: 0x3e00008  jr          $ra
    ctx->pc = 0x20FA54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FA54u;
            // 0x20fa58: 0xac820174  sw          $v0, 0x174($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20FA5Cu;
    // 0x20fa5c: 0x0  nop
    ctx->pc = 0x20fa5cu;
    // NOP
}
