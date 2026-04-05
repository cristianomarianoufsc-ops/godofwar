#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_20fa20
// Address: 0x20fa20 - 0x20fa40
void entry_20fa20_0x20fa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_20fa20_0x20fa40");
#endif

    ctx->pc = 0x20fa20u;

    // 0x20fa20: 0x8c820174  lw          $v0, 0x174($a0)
    ctx->pc = 0x20fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x20fa24: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x20fa24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x20fa28: 0x3463f800  ori         $v1, $v1, 0xF800
    ctx->pc = 0x20fa28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63488);
    // 0x20fa2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20fa2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20fa30: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x20fa30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x20fa34: 0x3e00008  jr          $ra
    ctx->pc = 0x20FA34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FA34u;
            // 0x20fa38: 0xac820174  sw          $v0, 0x174($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20FA3Cu;
    // 0x20fa3c: 0x0  nop
    ctx->pc = 0x20fa3cu;
    // NOP
}
