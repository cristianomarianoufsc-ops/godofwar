#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026D330
// Address: 0x26d330 - 0x26d360
void sub_0026D330_0x26d330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D330_0x26d330");
#endif

    ctx->pc = 0x26d330u;

    // 0x26d330: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26d330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26d334: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26d334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26d338: 0x8c43a468  lw          $v1, -0x5B98($v0)
    ctx->pc = 0x26d338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943848)));
    // 0x26d33c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26D33Cu;
    {
        const bool branch_taken_0x26d33c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D33Cu;
            // 0x26d340: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d33c) {
            ctx->pc = 0x26D350u;
            goto label_26d350;
        }
    }
    ctx->pc = 0x26D344u;
    // 0x26d344: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26d344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26d348: 0x60f809  jalr        $v1
    ctx->pc = 0x26D348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26D350u);
        ctx->pc = 0x26D34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D348u;
            // 0x26d34c: 0x8c44a46c  lw          $a0, -0x5B94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943852)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26D350u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26D350u: goto label_26d350;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26D350u; }
            if (ctx->pc != 0x26D350u) { return; }
        }
        }
    }
    ctx->pc = 0x26D350u;
label_26d350:
    // 0x26d350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26d350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d354: 0x3e00008  jr          $ra
    ctx->pc = 0x26D354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D354u;
            // 0x26d358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26D350u: goto label_26d350;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26D35Cu;
    // 0x26d35c: 0x0  nop
    ctx->pc = 0x26d35cu;
    // NOP
}
