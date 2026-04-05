#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_243d70
// Address: 0x243d70 - 0x243da8
void entry_243d70_0x243da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_243d70_0x243da8");
#endif

    ctx->pc = 0x243d70u;

    // 0x243d70: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x243d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x243d74: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x243d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243d78: 0x246320d0  addiu       $v1, $v1, 0x20D0
    ctx->pc = 0x243d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8400));
    // 0x243d7c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x243d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x243d80: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x243d80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x243d84: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x243d84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x243d88: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x243d88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x243d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x243D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243D8Cu;
            // 0x243d90: 0xa4800010  sh          $zero, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243D94u;
    // 0x243d94: 0x0  nop
    ctx->pc = 0x243d94u;
    // NOP
    // 0x243d98: 0x8c4255a4  lw          $v0, 0x55A4($v0)
    ctx->pc = 0x243d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21924)));
    // 0x243d9c: 0x0  nop
    ctx->pc = 0x243d9cu;
    // NOP
    // 0x243da0: 0x3e00008  jr          $ra
    ctx->pc = 0x243DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243DA0u;
            // 0x243da4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243DA8u;
}
