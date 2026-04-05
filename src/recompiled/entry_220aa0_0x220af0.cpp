#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_220aa0
// Address: 0x220aa0 - 0x220af0
void entry_220aa0_0x220af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_220aa0_0x220af0");
#endif

    ctx->pc = 0x220aa0u;

    // 0x220aa0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x220aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x220aa4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x220aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220aa8: 0x8c43ed58  lw          $v1, -0x12A8($v0)
    ctx->pc = 0x220aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x220aac: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x220aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x220ab0: 0xa4850022  sh          $a1, 0x22($a0)
    ctx->pc = 0x220ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 5));
    // 0x220ab4: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x220ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x220ab8: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x220ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x220abc: 0xa0800024  sb          $zero, 0x24($a0)
    ctx->pc = 0x220abcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x220ac0: 0xa4850020  sh          $a1, 0x20($a0)
    ctx->pc = 0x220ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x220ac4: 0xa0800025  sb          $zero, 0x25($a0)
    ctx->pc = 0x220ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 37), (uint8_t)GPR_U32(ctx, 0));
    // 0x220ac8: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x220ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x220acc: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x220accu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x220ad0: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x220ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x220ad4: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x220ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x220ad8: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x220ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x220adc: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x220adcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x220ae0: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x220ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x220ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x220AE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220AE4u;
            // 0x220ae8: 0xac800044  sw          $zero, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x220AECu;
    // 0x220aec: 0x0  nop
    ctx->pc = 0x220aecu;
    // NOP
}
