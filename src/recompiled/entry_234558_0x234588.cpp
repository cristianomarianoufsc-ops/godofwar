#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_234558
// Address: 0x234558 - 0x234588
void entry_234558_0x234588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_234558_0x234588");
#endif

    ctx->pc = 0x234558u;

    // 0x234558: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x234558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23455c: 0x24830018  addiu       $v1, $a0, 0x18
    ctx->pc = 0x23455cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_234560:
    // 0x234560: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x234560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x234564: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x234564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x234568: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x234568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x23456c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23456cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x234570: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x234570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x234574: 0x14a2fffa  bne         $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x234574u;
    {
        const bool branch_taken_0x234574 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x234578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234574u;
            // 0x234578: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234574) {
            ctx->pc = 0x234560u;
            runtime->cooperativeGuestYield();
            goto label_234560;
        }
    }
    ctx->pc = 0x23457Cu;
    // 0x23457c: 0x3e00008  jr          $ra
    ctx->pc = 0x23457Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23457Cu;
            // 0x234580: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234560u: goto label_234560;
            default: break;
        }
        return;
    }
    ctx->pc = 0x234584u;
    // 0x234584: 0x0  nop
    ctx->pc = 0x234584u;
    // NOP
}
