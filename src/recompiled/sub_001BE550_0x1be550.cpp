#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE550
// Address: 0x1be550 - 0x1be5a8
void sub_001BE550_0x1be550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE550_0x1be550");
#endif

    ctx->pc = 0x1be550u;

    // 0x1be550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1be554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be558: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x1be558u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1be55c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1be55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1be560: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1BE560u;
    {
        const bool branch_taken_0x1be560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE560u;
            // 0x1be564: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be560) {
            ctx->pc = 0x1BE5A0u;
            goto label_1be5a0;
        }
    }
    ctx->pc = 0x1BE568u;
    // 0x1be568: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x1be568u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1be56c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1be56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1be570: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1be570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1be574: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1be574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1be578: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1be578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1be57c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1be57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be580: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1be580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be584: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1be584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1be588: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1be588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1be58c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1be58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1be590: 0x40f809  jalr        $v0
    ctx->pc = 0x1BE590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BE598u);
        ctx->pc = 0x1BE594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE590u;
            // 0x1be594: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BE598u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BE5A0u: goto label_1be5a0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BE598u; }
            if (ctx->pc != 0x1BE598u) { return; }
        }
        }
    }
    ctx->pc = 0x1BE598u;
    // 0x1be598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be59c: 0x0  nop
    ctx->pc = 0x1be59cu;
    // NOP
label_1be5a0:
    // 0x1be5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE5A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE5A0u;
            // 0x1be5a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BE5A0u: goto label_1be5a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BE5A8u;
}
