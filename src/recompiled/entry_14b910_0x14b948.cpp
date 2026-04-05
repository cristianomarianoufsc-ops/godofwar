#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_14b910
// Address: 0x14b910 - 0x14b948
void entry_14b910_0x14b948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_14b910_0x14b948");
#endif

    ctx->pc = 0x14b910u;

    // 0x14b910: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14b910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14b914: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14b914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14b918: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14b918u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14b91c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14b91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14b920: 0x21023  negu        $v0, $v0
    ctx->pc = 0x14b920u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14b924: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14b924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14b928: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14b928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14b92c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14b92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14b930: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x14b930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14b934: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x14b934u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x14b938: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x14b938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x14b93c: 0x3e00008  jr          $ra
    ctx->pc = 0x14B93Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B93Cu;
            // 0x14b940: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B944u;
    // 0x14b944: 0x0  nop
    ctx->pc = 0x14b944u;
    // NOP
}
