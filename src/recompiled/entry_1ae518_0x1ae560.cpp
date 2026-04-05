#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1ae518
// Address: 0x1ae518 - 0x1ae560
void entry_1ae518_0x1ae560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1ae518_0x1ae560");
#endif

    ctx->pc = 0x1ae518u;

    // 0x1ae518: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1ae518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1ae51c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AE51Cu;
    {
        const bool branch_taken_0x1ae51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE51Cu;
            // 0x1ae520: 0xa63821  addu        $a3, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae51c) {
            ctx->pc = 0x1AE534u;
            goto label_1ae534;
        }
    }
    ctx->pc = 0x1AE524u;
    // 0x1ae524: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1ae524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1ae528: 0x8c42fdbc  lw          $v0, -0x244($v0)
    ctx->pc = 0x1ae528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966716)));
    // 0x1ae52c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1ae52cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1ae530: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1ae530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1ae534:
    // 0x1ae534: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x1ae534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1ae538: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE538u;
    {
        const bool branch_taken_0x1ae538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE538u;
            // 0x1ae53c: 0x3c030030  lui         $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae538) {
            ctx->pc = 0x1AE558u;
            goto label_1ae558;
        }
    }
    ctx->pc = 0x1AE540u;
    // 0x1ae540: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1ae540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ae544: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x1ae544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
    // 0x1ae548: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ae548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ae54c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1ae54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ae550: 0xac62fdbc  sw          $v0, -0x244($v1)
    ctx->pc = 0x1ae550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966716), GPR_U32(ctx, 2));
    // 0x1ae554: 0x0  nop
    ctx->pc = 0x1ae554u;
    // NOP
label_1ae558:
    // 0x1ae558: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AE534u: goto label_1ae534;
            case 0x1AE558u: goto label_1ae558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AE560u;
}
