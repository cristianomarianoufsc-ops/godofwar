#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2340f0
// Address: 0x2340f0 - 0x234128
void entry_2340f0_0x234128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2340f0_0x234128");
#endif

    ctx->pc = 0x2340f0u;

    // 0x2340f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2340f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2340f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2340f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2340f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2340f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2340fc: 0x0  nop
    ctx->pc = 0x2340fcu;
    // NOP
label_234100:
    // 0x234100: 0x0  nop
    ctx->pc = 0x234100u;
    // NOP
    // 0x234104: 0x0  nop
    ctx->pc = 0x234104u;
    // NOP
    // 0x234108: 0x0  nop
    ctx->pc = 0x234108u;
    // NOP
    // 0x23410c: 0x0  nop
    ctx->pc = 0x23410cu;
    // NOP
    // 0x234110: 0x0  nop
    ctx->pc = 0x234110u;
    // NOP
    // 0x234114: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x234114u;
    {
        const bool branch_taken_0x234114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x234118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234114u;
            // 0x234118: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234114) {
            ctx->pc = 0x234100u;
            runtime->cooperativeGuestYield();
            goto label_234100;
        }
    }
    ctx->pc = 0x23411Cu;
    // 0x23411c: 0x3e00008  jr          $ra
    ctx->pc = 0x23411Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23411Cu;
            // 0x234120: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234100u: goto label_234100;
            default: break;
        }
        return;
    }
    ctx->pc = 0x234124u;
    // 0x234124: 0x0  nop
    ctx->pc = 0x234124u;
    // NOP
}
