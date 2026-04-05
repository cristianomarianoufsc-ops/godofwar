#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_213290
// Address: 0x213290 - 0x2132c0
void entry_213290_0x2132c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_213290_0x2132c0");
#endif

    ctx->pc = 0x213290u;

    // 0x213290: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x213290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x213294: 0x3c068020  lui         $a2, 0x8020
    ctx->pc = 0x213294u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32800 << 16));
    // 0x213298: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x213298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x21329c: 0xac8001e4  sw          $zero, 0x1E4($a0)
    ctx->pc = 0x21329cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 484), GPR_U32(ctx, 0));
    // 0x2132a0: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x2132a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
    // 0x2132a4: 0x3463fffb  ori         $v1, $v1, 0xFFFB
    ctx->pc = 0x2132a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65531);
    // 0x2132a8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2132a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2132ac: 0xaca200f4  sw          $v0, 0xF4($a1)
    ctx->pc = 0x2132acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 2));
    // 0x2132b0: 0x8c8201f4  lw          $v0, 0x1F4($a0)
    ctx->pc = 0x2132b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 500)));
    // 0x2132b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2132b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2132b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2132B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2132BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2132B8u;
            // 0x2132bc: 0xac8201f4  sw          $v0, 0x1F4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2132C0u;
}
