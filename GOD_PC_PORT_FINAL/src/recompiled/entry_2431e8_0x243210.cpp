#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2431e8
// Address: 0x2431e8 - 0x243210
void entry_2431e8_0x243210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2431e8_0x243210");
#endif

    ctx->pc = 0x2431e8u;

    // 0x2431e8: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x2431e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x2431ec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2431ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2431f0: 0x246322d8  addiu       $v1, $v1, 0x22D8
    ctx->pc = 0x2431f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8920));
    // 0x2431f4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2431f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2431f8: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2431f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2431fc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2431fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x243200: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x243200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x243204: 0x3e00008  jr          $ra
    ctx->pc = 0x243204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243204u;
            // 0x243208: 0xa4800010  sh          $zero, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24320Cu;
    // 0x24320c: 0x0  nop
    ctx->pc = 0x24320cu;
    // NOP
}
