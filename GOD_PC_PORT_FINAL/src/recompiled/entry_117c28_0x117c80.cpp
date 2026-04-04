#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_117c28
// Address: 0x117c28 - 0x117c80
void entry_117c28_0x117c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_117c28_0x117c80");
#endif

    ctx->pc = 0x117c28u;

    // 0x117c28: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x117c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x117c2c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x117c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x117c30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x117C30u;
    {
        const bool branch_taken_0x117c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117C30u;
            // 0x117c34: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c30) {
            ctx->pc = 0x117C40u;
            goto label_117c40;
        }
    }
    ctx->pc = 0x117C38u;
label_117c38:
    // 0x117c38: 0x3e00008  jr          $ra
    ctx->pc = 0x117C38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117C38u;
            // 0x117c3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117C38u: goto label_117c38;
            case 0x117C40u: goto label_117c40;
            case 0x117C50u: goto label_117c50;
            case 0x117C60u: goto label_117c60;
            case 0x117C78u: goto label_117c78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117C40u;
label_117c40:
    // 0x117c40: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x117C40u;
    {
        const bool branch_taken_0x117c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117c40) {
            ctx->pc = 0x117C44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117C40u;
            // 0x117c44: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117C50u;
            goto label_117c50;
        }
    }
    ctx->pc = 0x117C48u;
    // 0x117c48: 0x3e00008  jr          $ra
    ctx->pc = 0x117C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117C48u;
            // 0x117c4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117C38u: goto label_117c38;
            case 0x117C40u: goto label_117c40;
            case 0x117C50u: goto label_117c50;
            case 0x117C60u: goto label_117c60;
            case 0x117C78u: goto label_117c78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117C50u;
label_117c50:
    // 0x117c50: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x117c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x117c54: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x117C54u;
    {
        const bool branch_taken_0x117c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x117c54) {
            ctx->pc = 0x117C78u;
            goto label_117c78;
        }
    }
    ctx->pc = 0x117C5Cu;
    // 0x117c5c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x117c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_117c60:
    // 0x117c60: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x117c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x117c64: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x117C64u;
    {
        const bool branch_taken_0x117c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117c64) {
            ctx->pc = 0x117C38u;
            runtime->cooperativeGuestYield();
            goto label_117c38;
        }
    }
    ctx->pc = 0x117C6Cu;
    // 0x117c6c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x117c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x117c70: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x117C70u;
    {
        const bool branch_taken_0x117c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x117c70) {
            ctx->pc = 0x117C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117C70u;
            // 0x117c74: 0x8c62002c  lw          $v0, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117C60u;
            runtime->cooperativeGuestYield();
            goto label_117c60;
        }
    }
    ctx->pc = 0x117C78u;
label_117c78:
    // 0x117c78: 0x3e00008  jr          $ra
    ctx->pc = 0x117C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117C78u;
            // 0x117c7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117C38u: goto label_117c38;
            case 0x117C40u: goto label_117c40;
            case 0x117C50u: goto label_117c50;
            case 0x117C60u: goto label_117c60;
            case 0x117C78u: goto label_117c78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117C80u;
}
