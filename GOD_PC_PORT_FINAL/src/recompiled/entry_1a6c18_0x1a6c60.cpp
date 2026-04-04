#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1a6c18
// Address: 0x1a6c18 - 0x1a6c60
void entry_1a6c18_0x1a6c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1a6c18_0x1a6c60");
#endif

    ctx->pc = 0x1a6c18u;

    // 0x1a6c18: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1a6c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1a6c1c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a6c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6c20: 0x244248b0  addiu       $v0, $v0, 0x48B0
    ctx->pc = 0x1a6c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18608));
    // 0x1a6c24: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6C24u;
    {
        const bool branch_taken_0x1a6c24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A6C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6C24u;
            // 0x1a6c28: 0x3c05002a  lui         $a1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c24) {
            ctx->pc = 0x1A6C3Cu;
            goto label_1a6c3c;
        }
    }
    ctx->pc = 0x1A6C2Cu;
    // 0x1a6c2c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a6c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a6c30: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a6c34: 0x8c42ca9c  lw          $v0, -0x3564($v0)
    ctx->pc = 0x1a6c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953628)));
    // 0x1a6c38: 0xac62caa0  sw          $v0, -0x3560($v1)
    ctx->pc = 0x1a6c38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953632), GPR_U32(ctx, 2));
label_1a6c3c:
    // 0x1a6c3c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1a6c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1a6c40: 0x8ca2ca9c  lw          $v0, -0x3564($a1)
    ctx->pc = 0x1a6c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294953628)));
    // 0x1a6c44: 0x24845240  addiu       $a0, $a0, 0x5240
    ctx->pc = 0x1a6c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21056));
    // 0x1a6c48: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a6c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6c4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a6c50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a6c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6c54: 0xaca2ca9c  sw          $v0, -0x3564($a1)
    ctx->pc = 0x1a6c54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294953628), GPR_U32(ctx, 2));
    // 0x1a6c58: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6C58u;
            // 0x1a6c5c: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6C3Cu: goto label_1a6c3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A6C60u;
}
