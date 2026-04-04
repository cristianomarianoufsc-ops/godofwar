#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13e180
// Address: 0x13e180 - 0x13e1c0
void entry_13e180_0x13e1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13e180_0x13e1c0");
#endif

    ctx->pc = 0x13e180u;

    // 0x13e180: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x13e180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x13e184: 0x2445b940  addiu       $a1, $v0, -0x46C0
    ctx->pc = 0x13e184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949184));
    // 0x13e188: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x13e188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13e18c: 0x8c44b940  lw          $a0, -0x46C0($v0)
    ctx->pc = 0x13e18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949184)));
    // 0x13e190: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x13e190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13e194: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13e194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13e198: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13e198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e19c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13e19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13e1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x13E1A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E1A0u;
            // 0x13e1a4: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E1A8u;
    // 0x13e1a8: 0xacc3fffc  sw          $v1, -0x4($a2)
    ctx->pc = 0x13e1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967292), GPR_U32(ctx, 3));
    // 0x13e1ac: 0x0  nop
    ctx->pc = 0x13e1acu;
    // NOP
    // 0x13e1b0: 0xacc3fffc  sw          $v1, -0x4($a2)
    ctx->pc = 0x13e1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967292), GPR_U32(ctx, 3));
    // 0x13e1b4: 0x0  nop
    ctx->pc = 0x13e1b4u;
    // NOP
    // 0x13e1b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13e1bc: 0x0  nop
    ctx->pc = 0x13e1bcu;
    // NOP
}
