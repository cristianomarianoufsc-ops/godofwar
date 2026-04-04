#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1d0e48
// Address: 0x1d0e48 - 0x1d0e78
void entry_1d0e48_0x1d0e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1d0e48_0x1d0e78");
#endif

    ctx->pc = 0x1d0e48u;

    // 0x1d0e48: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1d0e48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d0e4c: 0x8ce302d8  lw          $v1, 0x2D8($a3)
    ctx->pc = 0x1d0e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 728)));
    // 0x1d0e50: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d0e54: 0x94850072  lhu         $a1, 0x72($a0)
    ctx->pc = 0x1d0e54u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 114)));
    // 0x1d0e58: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x1d0e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x1d0e5c: 0x94860074  lhu         $a2, 0x74($a0)
    ctx->pc = 0x1d0e5cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1d0e60: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d0e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d0e64: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x1d0e64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x1d0e68: 0xace302d8  sw          $v1, 0x2D8($a3)
    ctx->pc = 0x1d0e68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 728), GPR_U32(ctx, 3));
    // 0x1d0e6c: 0xa486006c  sh          $a2, 0x6C($a0)
    ctx->pc = 0x1d0e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 108), (uint16_t)GPR_U32(ctx, 6));
    // 0x1d0e70: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0E70u;
            // 0x1d0e74: 0xa4850072  sh          $a1, 0x72($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 114), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D0E78u;
}
