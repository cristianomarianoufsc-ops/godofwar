#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1a5e50
// Address: 0x1a5e50 - 0x1a5e88
void entry_1a5e50_0x1a5e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1a5e50_0x1a5e88");
#endif

    ctx->pc = 0x1a5e50u;

    // 0x1a5e50: 0x94a60004  lhu         $a2, 0x4($a1)
    ctx->pc = 0x1a5e50u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a5e54: 0x24830014  addiu       $v1, $a0, 0x14
    ctx->pc = 0x1a5e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1a5e58: 0x8ca70098  lw          $a3, 0x98($a1)
    ctx->pc = 0x1a5e58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 152)));
    // 0x1a5e5c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a5e5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5e60: 0x30c60004  andi        $a2, $a2, 0x4
    ctx->pc = 0x1a5e60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x1a5e64: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a5e64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a5e68: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1a5e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1a5e6c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1a5e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1a5e70: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x1a5e70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x1a5e74: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x1a5e74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x1a5e78: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x1a5e78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x1a5e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5E7Cu;
            // 0x1a5e80: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5E84u;
    // 0x1a5e84: 0x0  nop
    ctx->pc = 0x1a5e84u;
    // NOP
}
