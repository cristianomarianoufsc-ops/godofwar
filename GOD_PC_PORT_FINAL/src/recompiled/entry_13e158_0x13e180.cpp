#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13e158
// Address: 0x13e158 - 0x13e180
void entry_13e158_0x13e180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13e158_0x13e180");
#endif

    ctx->pc = 0x13e158u;

    // 0x13e158: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x13e158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x13e15c: 0x2446b940  addiu       $a2, $v0, -0x46C0
    ctx->pc = 0x13e15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949184));
    // 0x13e160: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x13e160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x13e164: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13e164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13e168: 0x8c45b940  lw          $a1, -0x46C0($v0)
    ctx->pc = 0x13e168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949184)));
    // 0x13e16c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x13e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13e170: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x13e170u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x13e174: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13e174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13e178: 0x3e00008  jr          $ra
    ctx->pc = 0x13E178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E178u;
            // 0x13e17c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E180u;
}
