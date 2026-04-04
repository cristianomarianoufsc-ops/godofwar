#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1491a0
// Address: 0x1491a0 - 0x1491c8
void entry_1491a0_0x1491c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1491a0_0x1491c8");
#endif

    ctx->pc = 0x1491a0u;

    // 0x1491a0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1491a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1491a4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1491a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1491a8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1491a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1491ac: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1491acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1491b0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1491b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1491b4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1491b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1491b8: 0xa4c80006  sh          $t0, 0x6($a2)
    ctx->pc = 0x1491b8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 8));
    // 0x1491bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1491BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1491C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1491BCu;
            // 0x1491c0: 0xa4c70004  sh          $a3, 0x4($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1491C4u;
    // 0x1491c4: 0x0  nop
    ctx->pc = 0x1491c4u;
    // NOP
}
