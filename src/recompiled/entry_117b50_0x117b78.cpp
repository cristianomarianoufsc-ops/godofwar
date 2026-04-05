#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_117b50
// Address: 0x117b50 - 0x117b78
void entry_117b50_0x117b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_117b50_0x117b78");
#endif

    ctx->pc = 0x117b50u;

    // 0x117b50: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x117b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x117b54: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x117b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x117b58: 0x3442ff6f  ori         $v0, $v0, 0xFF6F
    ctx->pc = 0x117b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65391);
    // 0x117b5c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x117b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x117b60: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x117b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x117b64: 0x3e00008  jr          $ra
    ctx->pc = 0x117B64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117B64u;
            // 0x117b68: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117B6Cu;
    // 0x117b6c: 0x0  nop
    ctx->pc = 0x117b6cu;
    // NOP
    // 0x117b70: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x117b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x117b74: 0x0  nop
    ctx->pc = 0x117b74u;
    // NOP
}
