#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_12f7b8
// Address: 0x12f7b8 - 0x12f7f8
void entry_12f7b8_0x12f7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_12f7b8_0x12f7f8");
#endif

    ctx->pc = 0x12f7b8u;

    // 0x12f7b8: 0x8c870014  lw          $a3, 0x14($a0)
    ctx->pc = 0x12f7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x12f7bc: 0x18e0000b  blez        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x12F7BCu;
    {
        const bool branch_taken_0x12f7bc = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x12F7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F7BCu;
            // 0x12f7c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f7bc) {
            ctx->pc = 0x12F7ECu;
            goto label_12f7ec;
        }
    }
    ctx->pc = 0x12F7C4u;
    // 0x12f7c4: 0x0  nop
    ctx->pc = 0x12f7c4u;
    // NOP
label_12f7c8:
    // 0x12f7c8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12f7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12f7cc: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x12f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x12f7d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x12f7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x12f7d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12f7d8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x12f7d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f7dc: 0xc7182a  slt         $v1, $a2, $a3
    ctx->pc = 0x12f7dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x12f7e0: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x12f7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x12f7e4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12F7E4u;
    {
        const bool branch_taken_0x12f7e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F7E4u;
            // 0x12f7e8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f7e4) {
            ctx->pc = 0x12F7C8u;
            runtime->cooperativeGuestYield();
            goto label_12f7c8;
        }
    }
    ctx->pc = 0x12F7ECu;
label_12f7ec:
    // 0x12f7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x12F7ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F7C8u: goto label_12f7c8;
            case 0x12F7ECu: goto label_12f7ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12F7F4u;
    // 0x12f7f4: 0x0  nop
    ctx->pc = 0x12f7f4u;
    // NOP
}
