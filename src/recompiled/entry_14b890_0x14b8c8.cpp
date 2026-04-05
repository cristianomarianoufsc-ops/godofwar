#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_14b890
// Address: 0x14b890 - 0x14b8c8
void entry_14b890_0x14b8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_14b890_0x14b8c8");
#endif

    ctx->pc = 0x14b890u;

    // 0x14b890: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14b890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14b894: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14b894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14b898: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14b898u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14b89c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14b89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14b8a0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x14b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14b8a4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14b8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14b8a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14b8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14b8ac: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x14b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x14b8b0: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x14b8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14b8b4: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x14b8b4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x14b8b8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x14b8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x14b8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x14B8BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B8BCu;
            // 0x14b8c0: 0xaca30018  sw          $v1, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B8C4u;
    // 0x14b8c4: 0x0  nop
    ctx->pc = 0x14b8c4u;
    // NOP
}
