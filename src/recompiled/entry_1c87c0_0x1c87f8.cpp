#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1c87c0
// Address: 0x1c87c0 - 0x1c87f8
void entry_1c87c0_0x1c87f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1c87c0_0x1c87f8");
#endif

    ctx->pc = 0x1c87c0u;

    // 0x1c87c0: 0x8c830174  lw          $v1, 0x174($a0)
    ctx->pc = 0x1c87c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x1c87c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c87c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c87c8: 0x8c8502d8  lw          $a1, 0x2D8($a0)
    ctx->pc = 0x1c87c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 728)));
    // 0x1c87cc: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x1c87ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x1c87d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c87d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c87d4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1c87d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1c87d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c87d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c87dc: 0x34a50020  ori         $a1, $a1, 0x20
    ctx->pc = 0x1c87dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
    // 0x1c87e0: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1c87e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1c87e4: 0xac830174  sw          $v1, 0x174($a0)
    ctx->pc = 0x1c87e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 3));
    // 0x1c87e8: 0xac8502d8  sw          $a1, 0x2D8($a0)
    ctx->pc = 0x1c87e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 5));
    // 0x1c87ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C87ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C87F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C87ECu;
            // 0x1c87f0: 0xe48002a0  swc1        $f0, 0x2A0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 672), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C87F4u;
    // 0x1c87f4: 0x0  nop
    ctx->pc = 0x1c87f4u;
    // NOP
}
