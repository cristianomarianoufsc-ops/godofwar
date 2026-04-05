#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13d6e0
// Address: 0x13d6e0 - 0x13d710
void entry_13d6e0_0x13d710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13d6e0_0x13d710");
#endif

    ctx->pc = 0x13d6e0u;

    // 0x13d6e0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x13d6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x13d6e4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x13d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x13d6e8: 0x24a4b940  addiu       $a0, $a1, -0x46C0
    ctx->pc = 0x13d6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949184));
    // 0x13d6ec: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x13d6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13d6f0: 0x24424728  addiu       $v0, $v0, 0x4728
    ctx->pc = 0x13d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18216));
    // 0x13d6f4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x13d6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x13d6f8: 0xaca2b940  sw          $v0, -0x46C0($a1)
    ctx->pc = 0x13d6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294949184), GPR_U32(ctx, 2));
    // 0x13d6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x13D6FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D6FCu;
            // 0x13d700: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D704u;
    // 0x13d704: 0x0  nop
    ctx->pc = 0x13d704u;
    // NOP
    // 0x13d708: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x13d708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13d70c: 0x0  nop
    ctx->pc = 0x13d70cu;
    // NOP
}
