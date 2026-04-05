#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1b7ed0
// Address: 0x1b7ed0 - 0x1b7f08
void entry_1b7ed0_0x1b7f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1b7ed0_0x1b7f08");
#endif

    ctx->pc = 0x1b7ed0u;

    // 0x1b7ed0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1b7ed0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7ed4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b7ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7ed8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b7ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7edc: 0x0  nop
    ctx->pc = 0x1b7edcu;
    // NOP
label_1b7ee0:
    // 0x1b7ee0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1b7ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b7ee4: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x1b7ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b7ee8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1b7ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1b7eec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b7eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b7ef0: 0x8c421558  lw          $v0, 0x1558($v0)
    ctx->pc = 0x1b7ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5464)));
    // 0x1b7ef4: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x1b7ef4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b7ef8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B7EF8u;
    {
        const bool branch_taken_0x1b7ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7EF8u;
            // 0x1b7efc: 0x82300b  movn        $a2, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7ef8) {
            ctx->pc = 0x1B7EE0u;
            runtime->cooperativeGuestYield();
            goto label_1b7ee0;
        }
    }
    ctx->pc = 0x1B7F00u;
    // 0x1b7f00: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7F00u;
            // 0x1b7f04: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B7EE0u: goto label_1b7ee0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B7F08u;
}
