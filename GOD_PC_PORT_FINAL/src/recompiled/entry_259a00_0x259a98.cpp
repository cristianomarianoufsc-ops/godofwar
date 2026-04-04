#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_259a00
// Address: 0x259a00 - 0x259a98
void entry_259a00_0x259a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_259a00_0x259a98");
#endif

    ctx->pc = 0x259a00u;

    // 0x259a00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x259a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x259a04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x259a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x259a08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x259a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x259a0c: 0x0  nop
    ctx->pc = 0x259a0cu;
    // NOP
label_259a10:
    // 0x259a10: 0x0  nop
    ctx->pc = 0x259a10u;
    // NOP
    // 0x259a14: 0x0  nop
    ctx->pc = 0x259a14u;
    // NOP
    // 0x259a18: 0x0  nop
    ctx->pc = 0x259a18u;
    // NOP
    // 0x259a1c: 0x0  nop
    ctx->pc = 0x259a1cu;
    // NOP
    // 0x259a20: 0x0  nop
    ctx->pc = 0x259a20u;
    // NOP
    // 0x259a24: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x259A24u;
    {
        const bool branch_taken_0x259a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x259A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259A24u;
            // 0x259a28: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259a24) {
            ctx->pc = 0x259A10u;
            runtime->cooperativeGuestYield();
            goto label_259a10;
        }
    }
    ctx->pc = 0x259A2Cu;
    // 0x259a2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x259a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x259a30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x259a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x259a34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x259a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_259a38:
    // 0x259a38: 0x0  nop
    ctx->pc = 0x259a38u;
    // NOP
    // 0x259a3c: 0x0  nop
    ctx->pc = 0x259a3cu;
    // NOP
    // 0x259a40: 0x0  nop
    ctx->pc = 0x259a40u;
    // NOP
    // 0x259a44: 0x0  nop
    ctx->pc = 0x259a44u;
    // NOP
    // 0x259a48: 0x0  nop
    ctx->pc = 0x259a48u;
    // NOP
    // 0x259a4c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x259A4Cu;
    {
        const bool branch_taken_0x259a4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x259A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259A4Cu;
            // 0x259a50: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259a4c) {
            ctx->pc = 0x259A38u;
            runtime->cooperativeGuestYield();
            goto label_259a38;
        }
    }
    ctx->pc = 0x259A54u;
    // 0x259a54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x259a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x259a58: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x259a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x259a5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x259a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_259a60:
    // 0x259a60: 0x0  nop
    ctx->pc = 0x259a60u;
    // NOP
    // 0x259a64: 0x0  nop
    ctx->pc = 0x259a64u;
    // NOP
    // 0x259a68: 0x0  nop
    ctx->pc = 0x259a68u;
    // NOP
    // 0x259a6c: 0x0  nop
    ctx->pc = 0x259a6cu;
    // NOP
    // 0x259a70: 0x0  nop
    ctx->pc = 0x259a70u;
    // NOP
    // 0x259a74: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x259A74u;
    {
        const bool branch_taken_0x259a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x259A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259A74u;
            // 0x259a78: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259a74) {
            ctx->pc = 0x259A60u;
            runtime->cooperativeGuestYield();
            goto label_259a60;
        }
    }
    ctx->pc = 0x259A7Cu;
    // 0x259a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x259A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259A7Cu;
            // 0x259a80: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259A10u: goto label_259a10;
            case 0x259A38u: goto label_259a38;
            case 0x259A60u: goto label_259a60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259A84u;
    // 0x259a84: 0x0  nop
    ctx->pc = 0x259a84u;
    // NOP
    // 0x259a88: 0x3e00008  jr          $ra
    ctx->pc = 0x259A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259A10u: goto label_259a10;
            case 0x259A38u: goto label_259a38;
            case 0x259A60u: goto label_259a60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259A90u;
    // 0x259a90: 0x3e00008  jr          $ra
    ctx->pc = 0x259A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259A90u;
            // 0x259a94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259A10u: goto label_259a10;
            case 0x259A38u: goto label_259a38;
            case 0x259A60u: goto label_259a60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259A98u;
}
