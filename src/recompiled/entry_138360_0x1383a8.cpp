#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_138360
// Address: 0x138360 - 0x1383a8
void entry_138360_0x1383a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_138360_0x1383a8");
#endif

    ctx->pc = 0x138360u;

    // 0x138360: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x138360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x138364: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138368: 0x9487005c  lhu         $a3, 0x5C($a0)
    ctx->pc = 0x138368u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x13836c: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x13836Cu;
    {
        const bool branch_taken_0x13836c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x138370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13836Cu;
            // 0x138370: 0x8c420034  lw          $v0, 0x34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13836c) {
            ctx->pc = 0x138398u;
            goto label_138398;
        }
    }
    ctx->pc = 0x138374u;
    // 0x138374: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x138374u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_138378:
    // 0x138378: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x138378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13837c: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13837Cu;
    {
        const bool branch_taken_0x13837c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x13837c) {
            ctx->pc = 0x138380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13837Cu;
            // 0x138380: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13838Cu;
            goto label_13838c;
        }
    }
    ctx->pc = 0x138384u;
    // 0x138384: 0x3e00008  jr          $ra
    ctx->pc = 0x138384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138384u;
            // 0x138388: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138378u: goto label_138378;
            case 0x13838Cu: goto label_13838c;
            case 0x138398u: goto label_138398;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13838Cu;
label_13838c:
    // 0x13838c: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x13838cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x138390: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x138390u;
    {
        const bool branch_taken_0x138390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x138394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138390u;
            // 0x138394: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138390) {
            ctx->pc = 0x138378u;
            runtime->cooperativeGuestYield();
            goto label_138378;
        }
    }
    ctx->pc = 0x138398u;
label_138398:
    // 0x138398: 0x3e00008  jr          $ra
    ctx->pc = 0x138398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13839Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138398u;
            // 0x13839c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138378u: goto label_138378;
            case 0x13838Cu: goto label_13838c;
            case 0x138398u: goto label_138398;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1383A0u;
    // 0x1383a0: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1383a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1383a4: 0x0  nop
    ctx->pc = 0x1383a4u;
    // NOP
}
