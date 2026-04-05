#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1734a8
// Address: 0x1734a8 - 0x1734c0
void entry_1734a8_0x1734c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1734a8_0x1734c0");
#endif

    ctx->pc = 0x1734a8u;

    // 0x1734a8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1734a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1734ac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1734acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1734b0: 0x34a50018  ori         $a1, $a1, 0x18
    ctx->pc = 0x1734b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
    // 0x1734b4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1734b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1734b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1734B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1734BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1734B8u;
            // 0x1734bc: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1734C0u;
}
