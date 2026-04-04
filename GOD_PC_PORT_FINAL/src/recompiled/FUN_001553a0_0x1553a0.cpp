#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001553a0
// Address: 0x1553a0 - 0x155408
void FUN_001553a0_0x1553a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001553a0_0x1553a0");
#endif

    ctx->pc = 0x1553a0u;

    // 0x1553a0: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x1553a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1553a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1553a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1553a8: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1553A8u;
    {
        const bool branch_taken_0x1553a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1553ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1553A8u;
            // 0x1553ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1553a8) {
            ctx->pc = 0x1553FCu;
            goto label_1553fc;
        }
    }
    ctx->pc = 0x1553B0u;
    // 0x1553b0: 0x24a2fff8  addiu       $v0, $a1, -0x8
    ctx->pc = 0x1553b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x1553b4: 0x0  nop
    ctx->pc = 0x1553b4u;
    // NOP
label_1553b8:
    // 0x1553b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1553b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1553bc: 0x45300b  movn        $a2, $v0, $a1
    ctx->pc = 0x1553bcu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1553c0: 0x8cc40060  lw          $a0, 0x60($a2)
    ctx->pc = 0x1553c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x1553c4: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x1553c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x1553c8: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x1553c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x1553cc: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1553ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1553d0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1553d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1553d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1553d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1553d8: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x1553d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1553dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1553DCu;
    {
        const bool branch_taken_0x1553dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1553E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1553DCu;
            // 0x1553e0: 0xffa30008  sd          $v1, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1553dc) {
            ctx->pc = 0x1553F0u;
            goto label_1553f0;
        }
    }
    ctx->pc = 0x1553E4u;
    // 0x1553e4: 0x84c20040  lh          $v0, 0x40($a2)
    ctx->pc = 0x1553e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x1553e8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1553e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1553ec: 0x0  nop
    ctx->pc = 0x1553ecu;
    // NOP
label_1553f0:
    // 0x1553f0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1553f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1553f4: 0x14a0fff0  bnez        $a1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1553F4u;
    {
        const bool branch_taken_0x1553f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1553F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1553F4u;
            // 0x1553f8: 0x24a2fff8  addiu       $v0, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1553f4) {
            ctx->pc = 0x1553B8u;
            runtime->cooperativeGuestYield();
            goto label_1553b8;
        }
    }
    ctx->pc = 0x1553FCu;
label_1553fc:
    // 0x1553fc: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1553fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155400: 0x3e00008  jr          $ra
    ctx->pc = 0x155400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155400u;
            // 0x155404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1553B8u: goto label_1553b8;
            case 0x1553F0u: goto label_1553f0;
            case 0x1553FCu: goto label_1553fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155408u;
}
