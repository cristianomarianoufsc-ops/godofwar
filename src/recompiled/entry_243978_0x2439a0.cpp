#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_243978
// Address: 0x243978 - 0x2439a0
void entry_243978_0x2439a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_243978_0x2439a0");
#endif

    ctx->pc = 0x243978u;

    // 0x243978: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x243978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x24397c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24397cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243980: 0x246321f8  addiu       $v1, $v1, 0x21F8
    ctx->pc = 0x243980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8696));
    // 0x243984: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x243984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x243988: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x243988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x24398c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x24398cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x243990: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x243990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x243994: 0x3e00008  jr          $ra
    ctx->pc = 0x243994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243994u;
            // 0x243998: 0xa4800010  sh          $zero, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24399Cu;
    // 0x24399c: 0x0  nop
    ctx->pc = 0x24399cu;
    // NOP
}
