#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_243c18
// Address: 0x243c18 - 0x243c40
void entry_243c18_0x243c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_243c18_0x243c40");
#endif

    ctx->pc = 0x243c18u;

    // 0x243c18: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x243c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x243c1c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x243c1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243c20: 0x24632150  addiu       $v1, $v1, 0x2150
    ctx->pc = 0x243c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8528));
    // 0x243c24: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x243c24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x243c28: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x243c28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x243c2c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x243c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x243c30: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x243c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x243c34: 0x3e00008  jr          $ra
    ctx->pc = 0x243C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243C34u;
            // 0x243c38: 0xa4800010  sh          $zero, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243C3Cu;
    // 0x243c3c: 0x0  nop
    ctx->pc = 0x243c3cu;
    // NOP
}
