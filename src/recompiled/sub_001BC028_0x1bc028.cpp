#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC028
// Address: 0x1bc028 - 0x1bc070
void sub_001BC028_0x1bc028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC028_0x1bc028");
#endif

    ctx->pc = 0x1bc028u;

    // 0x1bc028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bc028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bc02c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bc02cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1bc030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bc030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bc034: 0x24635280  addiu       $v1, $v1, 0x5280
    ctx->pc = 0x1bc034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21120));
    // 0x1bc038: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1bc038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bc03c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc040: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bc040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc044: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1bc044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1bc048: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bc048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bc04c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC04Cu;
    {
        const bool branch_taken_0x1bc04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC04Cu;
            // 0x1bc050: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc04c) {
            ctx->pc = 0x1BC064u;
            goto label_1bc064;
        }
    }
    ctx->pc = 0x1BC054u;
    // 0x1bc054: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1bc054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bc058: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bc058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc05c: 0xc06ec3e  jal         func_1BB0F8
    ctx->pc = 0x1BC05Cu;
    SET_GPR_U32(ctx, 31, 0x1BC064u);
    ctx->pc = 0x1BC060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC05Cu;
            // 0x1bc060: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB0F8u;
    if (runtime->hasFunction(0x1BB0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC064u; }
        if (ctx->pc != 0x1BC064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bb0f8_0x1bb1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC064u; }
        if (ctx->pc != 0x1BC064u) { return; }
    }
    ctx->pc = 0x1BC064u;
label_1bc064:
    // 0x1bc064: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bc064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc068: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC068u;
            // 0x1bc06c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC064u: goto label_1bc064;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BC070u;
}
