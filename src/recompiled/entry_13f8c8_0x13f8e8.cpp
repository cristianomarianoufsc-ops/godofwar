#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13f8c8
// Address: 0x13f8c8 - 0x13f8e8
void entry_13f8c8_0x13f8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13f8c8_0x13f8e8");
#endif

    ctx->pc = 0x13f8c8u;

    // 0x13f8c8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x13f8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13f8cc: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x13f8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x13f8d0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x13f8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13f8d4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13f8d8: 0xac45101c  sw          $a1, 0x101C($v0)
    ctx->pc = 0x13f8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4124), GPR_U32(ctx, 5));
    // 0x13f8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x13F8DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F8DCu;
            // 0x13f8e0: 0xacc3f168  sw          $v1, -0xE98($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294963560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F8E4u;
    // 0x13f8e4: 0x0  nop
    ctx->pc = 0x13f8e4u;
    // NOP
}
