#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBFE0
// Address: 0x1bbfe0 - 0x1bc028
void sub_001BBFE0_0x1bbfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBFE0_0x1bbfe0");
#endif

    ctx->pc = 0x1bbfe0u;

    // 0x1bbfe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bbfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bbfe4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bbfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bbfe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bbfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bbfec: 0x24425280  addiu       $v0, $v0, 0x5280
    ctx->pc = 0x1bbfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x1bbff0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1bbff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bbff4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bbff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bbff8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bbff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bbffc: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1bbffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1bc000: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bc000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bc004: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC004u;
    {
        const bool branch_taken_0x1bc004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC004u;
            // 0x1bc008: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc004) {
            ctx->pc = 0x1BC01Cu;
            goto label_1bc01c;
        }
    }
    ctx->pc = 0x1BC00Cu;
    // 0x1bc00c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1bc00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc010: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bc010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc014: 0xc06ec3e  jal         func_1BB0F8
    ctx->pc = 0x1BC014u;
    SET_GPR_U32(ctx, 31, 0x1BC01Cu);
    ctx->pc = 0x1BC018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC014u;
            // 0x1bc018: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB0F8u;
    if (runtime->hasFunction(0x1BB0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC01Cu; }
        if (ctx->pc != 0x1BC01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bb0f8_0x1bb1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC01Cu; }
        if (ctx->pc != 0x1BC01Cu) { return; }
    }
    ctx->pc = 0x1BC01Cu;
label_1bc01c:
    // 0x1bc01c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bc01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc020: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC020u;
            // 0x1bc024: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC01Cu: goto label_1bc01c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BC028u;
}
