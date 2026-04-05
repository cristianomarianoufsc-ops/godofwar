#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26ce98
// Address: 0x26ce98 - 0x26cef8
void entry_26ce98_0x26cef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26ce98_0x26cef8");
#endif

    ctx->pc = 0x26ce98u;

    // 0x26ce98: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26ce9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26ce9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26cea0: 0x8c43a318  lw          $v1, -0x5CE8($v0)
    ctx->pc = 0x26cea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943512)));
    // 0x26cea4: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26CEA4u;
    {
        const bool branch_taken_0x26cea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x26CEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CEA4u;
            // 0x26cea8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cea4) {
            ctx->pc = 0x26CEB4u;
            goto label_26ceb4;
        }
    }
    ctx->pc = 0x26CEACu;
    // 0x26ceac: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26CEACu;
    {
        const bool branch_taken_0x26ceac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26ceac) {
            ctx->pc = 0x26CEECu;
            goto label_26ceec;
        }
    }
    ctx->pc = 0x26CEB4u;
label_26ceb4:
    // 0x26ceb4: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26ceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26ceb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26ceb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cebc: 0x8c42a440  lw          $v0, -0x5BC0($v0)
    ctx->pc = 0x26cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943808)));
    // 0x26cec0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26CEC0u;
    {
        const bool branch_taken_0x26cec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CEC0u;
            // 0x26cec4: 0x3c020031  lui         $v0, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cec0) {
            ctx->pc = 0x26CEE4u;
            goto label_26cee4;
        }
    }
    ctx->pc = 0x26CEC8u;
    // 0x26cec8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x26cec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cecc: 0x8c43a464  lw          $v1, -0x5B9C($v0)
    ctx->pc = 0x26ceccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943844)));
    // 0x26ced0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x26ced0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ced4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26ced4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26ced8: 0x28840002  slti        $a0, $a0, 0x2
    ctx->pc = 0x26ced8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26cedc: 0xac43a464  sw          $v1, -0x5B9C($v0)
    ctx->pc = 0x26cedcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943844), GPR_U32(ctx, 3));
    // 0x26cee0: 0x4280b  movn        $a1, $zero, $a0
    ctx->pc = 0x26cee0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_26cee4:
    // 0x26cee4: 0x3e00008  jr          $ra
    ctx->pc = 0x26CEE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CEE4u;
            // 0x26cee8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26CEB4u: goto label_26ceb4;
            case 0x26CEE4u: goto label_26cee4;
            case 0x26CEECu: goto label_26ceec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26CEECu;
label_26ceec:
    // 0x26ceec: 0x3e00008  jr          $ra
    ctx->pc = 0x26CEECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CEECu;
            // 0x26cef0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26CEB4u: goto label_26ceb4;
            case 0x26CEE4u: goto label_26cee4;
            case 0x26CEECu: goto label_26ceec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26CEF4u;
    // 0x26cef4: 0x0  nop
    ctx->pc = 0x26cef4u;
    // NOP
}
