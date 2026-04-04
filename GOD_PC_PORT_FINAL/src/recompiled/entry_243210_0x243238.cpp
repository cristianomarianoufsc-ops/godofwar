#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_243210
// Address: 0x243210 - 0x243238
void entry_243210_0x243238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_243210_0x243238");
#endif

    ctx->pc = 0x243210u;

    // 0x243210: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x243210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x243214: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x243214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243218: 0x246322b8  addiu       $v1, $v1, 0x22B8
    ctx->pc = 0x243218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8888));
    // 0x24321c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x24321cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x243220: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x243220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x243224: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x243224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x243228: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x243228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x24322c: 0x3e00008  jr          $ra
    ctx->pc = 0x24322Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24322Cu;
            // 0x243230: 0xa4800010  sh          $zero, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243234u;
    // 0x243234: 0x0  nop
    ctx->pc = 0x243234u;
    // NOP
}
