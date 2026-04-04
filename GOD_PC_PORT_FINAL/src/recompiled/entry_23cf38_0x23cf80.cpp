#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23cf38
// Address: 0x23cf38 - 0x23cf80
void entry_23cf38_0x23cf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23cf38_0x23cf80");
#endif

    ctx->pc = 0x23cf38u;

    // 0x23cf38: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23cf38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cf3c: 0xac840000  sw          $a0, 0x0($a0)
    ctx->pc = 0x23cf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
    // 0x23cf40: 0x3e00008  jr          $ra
    ctx->pc = 0x23CF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CF40u;
            // 0x23cf44: 0xac840004  sw          $a0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23CF48u;
    // 0x23cf48: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23cf48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x23cf4c: 0x0  nop
    ctx->pc = 0x23cf4cu;
    // NOP
    // 0x23cf50: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23cf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23cf54: 0x0  nop
    ctx->pc = 0x23cf54u;
    // NOP
    // 0x23cf58: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x23cf58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23cf5c: 0x0  nop
    ctx->pc = 0x23cf5cu;
    // NOP
    // 0x23cf60: 0x0  nop
    ctx->pc = 0x23cf60u;
    // NOP
    // 0x23cf64: 0x0  nop
    ctx->pc = 0x23cf64u;
    // NOP
    // 0x23cf68: 0x8c42084c  lw          $v0, 0x84C($v0)
    ctx->pc = 0x23cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2124)));
    // 0x23cf6c: 0x0  nop
    ctx->pc = 0x23cf6cu;
    // NOP
    // 0x23cf70: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x23cf70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x23cf74: 0x0  nop
    ctx->pc = 0x23cf74u;
    // NOP
    // 0x23cf78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23cf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23cf7c: 0x0  nop
    ctx->pc = 0x23cf7cu;
    // NOP
}
