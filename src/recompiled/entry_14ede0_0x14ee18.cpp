#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_14ede0
// Address: 0x14ede0 - 0x14ee18
void entry_14ede0_0x14ee18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_14ede0_0x14ee18");
#endif

    ctx->pc = 0x14ede0u;

    // 0x14ede0: 0x90820030  lbu         $v0, 0x30($a0)
    ctx->pc = 0x14ede0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x14ede4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14ede4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14ede8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14EDE8u;
    {
        const bool branch_taken_0x14ede8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EDE8u;
            // 0x14edec: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ede8) {
            ctx->pc = 0x14EE10u;
            goto label_14ee10;
        }
    }
    ctx->pc = 0x14EDF0u;
    // 0x14edf0: 0x94820026  lhu         $v0, 0x26($a0)
    ctx->pc = 0x14edf0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x14edf4: 0x24631800  addiu       $v1, $v1, 0x1800
    ctx->pc = 0x14edf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6144));
    // 0x14edf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14edfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14ee00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ee04: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14EE04u;
    {
        const bool branch_taken_0x14ee04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EE04u;
            // 0x14ee08: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ee04) {
            ctx->pc = 0x14EE10u;
            goto label_14ee10;
        }
    }
    ctx->pc = 0x14EE0Cu;
    // 0x14ee0c: 0xac441908  sw          $a0, 0x1908($v0)
    ctx->pc = 0x14ee0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6408), GPR_U32(ctx, 4));
label_14ee10:
    // 0x14ee10: 0x3e00008  jr          $ra
    ctx->pc = 0x14EE10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14EE10u: goto label_14ee10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14EE18u;
}
