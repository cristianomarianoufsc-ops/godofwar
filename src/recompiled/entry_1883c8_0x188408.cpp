#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1883c8
// Address: 0x1883c8 - 0x188408
void entry_1883c8_0x188408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1883c8_0x188408");
#endif

    ctx->pc = 0x1883c8u;

    // 0x1883c8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1883c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1883cc: 0x8c434d08  lw          $v1, 0x4D08($v0)
    ctx->pc = 0x1883ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19720)));
    // 0x1883d0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1883D0u;
    {
        const bool branch_taken_0x1883d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1883D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1883D0u;
            // 0x1883d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883d0) {
            ctx->pc = 0x188400u;
            goto label_188400;
        }
    }
    ctx->pc = 0x1883D8u;
    // 0x1883d8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1883D8u;
    {
        const bool branch_taken_0x1883d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1883DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1883D8u;
            // 0x1883dc: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883d8) {
            ctx->pc = 0x1883E8u;
            goto label_1883e8;
        }
    }
    ctx->pc = 0x1883E0u;
    // 0x1883e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1883E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1883E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1883E0u;
            // 0x1883e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1883E8u: goto label_1883e8;
            case 0x188400u: goto label_188400;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1883E8u;
label_1883e8:
    // 0x1883e8: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1883e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1883ec: 0x8c424cf8  lw          $v0, 0x4CF8($v0)
    ctx->pc = 0x1883ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19704)));
    // 0x1883f0: 0x8c634cf0  lw          $v1, 0x4CF0($v1)
    ctx->pc = 0x1883f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 19696)));
    // 0x1883f4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1883f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1883f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1883f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1883fc: 0x0  nop
    ctx->pc = 0x1883fcu;
    // NOP
label_188400:
    // 0x188400: 0x3e00008  jr          $ra
    ctx->pc = 0x188400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1883E8u: goto label_1883e8;
            case 0x188400u: goto label_188400;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188408u;
}
