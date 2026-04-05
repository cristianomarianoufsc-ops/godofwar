#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23f000
// Address: 0x23f000 - 0x23f010
void entry_23f000_0x23f010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23f000_0x23f010");
#endif

    ctx->pc = 0x23f000u;

    // 0x23f000: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x23f000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x23f004: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x23f004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x23f008: 0x3e00008  jr          $ra
    ctx->pc = 0x23F008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F008u;
            // 0x23f00c: 0xac820088  sw          $v0, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23F010u;
}
