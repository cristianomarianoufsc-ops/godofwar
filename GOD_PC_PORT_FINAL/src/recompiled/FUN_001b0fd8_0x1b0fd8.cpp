#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001b0fd8
// Address: 0x1b0fd8 - 0x1b1018
void FUN_001b0fd8_0x1b0fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b0fd8_0x1b0fd8");
#endif

    ctx->pc = 0x1b0fd8u;

    // 0x1b0fd8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1b0fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0fdc: 0x2402f3ff  addiu       $v0, $zero, -0xC01
    ctx->pc = 0x1b0fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964223));
    // 0x1b0fe0: 0x8cc300f8  lw          $v1, 0xF8($a2)
    ctx->pc = 0x1b0fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 248)));
    // 0x1b0fe4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b0fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0fe8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1b0fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b0fec: 0x14a40004  bne         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0FECu;
    {
        const bool branch_taken_0x1b0fec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B0FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0FECu;
            // 0x1b0ff0: 0xacc300f8  sw          $v1, 0xF8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 248), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0fec) {
            ctx->pc = 0x1B1000u;
            goto label_1b1000;
        }
    }
    ctx->pc = 0x1B0FF4u;
    // 0x1b0ff4: 0x34620400  ori         $v0, $v1, 0x400
    ctx->pc = 0x1b0ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x1b0ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0FF8u;
            // 0x1b0ffc: 0xacc200f8  sw          $v0, 0xF8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1000u: goto label_1b1000;
            case 0x1B1010u: goto label_1b1010;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1000u;
label_1b1000:
    // 0x1b1000: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b1000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b1004: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1004u;
    {
        const bool branch_taken_0x1b1004 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B1008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1004u;
            // 0x1b1008: 0x34620800  ori         $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1004) {
            ctx->pc = 0x1B1010u;
            goto label_1b1010;
        }
    }
    ctx->pc = 0x1B100Cu;
    // 0x1b100c: 0xacc200f8  sw          $v0, 0xF8($a2)
    ctx->pc = 0x1b100cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 248), GPR_U32(ctx, 2));
label_1b1010:
    // 0x1b1010: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1000u: goto label_1b1000;
            case 0x1B1010u: goto label_1b1010;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1018u;
}
