#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2440b8
// Address: 0x2440b8 - 0x2440e0
void entry_2440b8_0x2440e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2440b8_0x2440e0");
#endif

    ctx->pc = 0x2440b8u;

    // 0x2440b8: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x2440b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x2440bc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2440bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2440c0: 0x24632070  addiu       $v1, $v1, 0x2070
    ctx->pc = 0x2440c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8304));
    // 0x2440c4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2440c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2440c8: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2440c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2440cc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2440ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2440d0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2440d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2440d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2440D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2440D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2440D4u;
            // 0x2440d8: 0xa4800010  sh          $zero, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2440DCu;
    // 0x2440dc: 0x0  nop
    ctx->pc = 0x2440dcu;
    // NOP
}
