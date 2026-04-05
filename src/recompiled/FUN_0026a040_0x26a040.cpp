#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0026a040
// Address: 0x26a040 - 0x26a078
void FUN_0026a040_0x26a040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0026a040_0x26a040");
#endif

    ctx->pc = 0x26a040u;

    // 0x26a040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26a040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26a044: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x26a044u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26a048: 0x240203f1  addiu       $v0, $zero, 0x3F1
    ctx->pc = 0x26a048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1009));
    // 0x26a04c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26A04Cu;
    {
        const bool branch_taken_0x26a04c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A04Cu;
            // 0x26a050: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a04c) {
            ctx->pc = 0x26A074u;
            goto label_26a074;
        }
    }
    ctx->pc = 0x26A054u;
    // 0x26a054: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26a054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26a058: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26a058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26a05c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x26a05cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26a060: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x26a060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26a064: 0x40f809  jalr        $v0
    ctx->pc = 0x26A064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26A06Cu);
        ctx->pc = 0x26A068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A064u;
            // 0x26a068: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26A06Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A074u: goto label_26a074;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26A06Cu; }
            if (ctx->pc != 0x26A06Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26A06Cu;
    // 0x26a06c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26A06Cu;
    {
        const bool branch_taken_0x26a06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A06Cu;
            // 0x26a070: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a06c) {
            ctx->pc = 0x26A07Cu;
            return;
        }
    }
    ctx->pc = 0x26A074u;
label_26a074:
    // 0x26a074: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26a074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
}
