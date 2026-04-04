#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_11ef28
// Address: 0x11ef28 - 0x11ef98
void entry_11ef28_0x11ef98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_11ef28_0x11ef98");
#endif

    ctx->pc = 0x11ef28u;

    // 0x11ef28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11ef28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11ef2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11ef2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x11ef30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11ef30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11ef34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11ef34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11ef38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11ef38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef3c: 0x8e221050  lw          $v0, 0x1050($s1)
    ctx->pc = 0x11ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4176)));
    // 0x11ef40: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11EF40u;
    {
        const bool branch_taken_0x11ef40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11EF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EF40u;
            // 0x11ef44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef40) {
            ctx->pc = 0x11EF84u;
            goto label_11ef84;
        }
    }
    ctx->pc = 0x11EF48u;
    // 0x11ef48: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x11ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11ef4c: 0x0  nop
    ctx->pc = 0x11ef4cu;
    // NOP
label_11ef50:
    // 0x11ef50: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x11ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x11ef54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11ef54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11ef58: 0x8c42083c  lw          $v0, 0x83C($v0)
    ctx->pc = 0x11ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2108)));
    // 0x11ef5c: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x11ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x11ef60: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x11ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x11ef64: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x11ef64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x11ef68: 0x8c42009c  lw          $v0, 0x9C($v0)
    ctx->pc = 0x11ef68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x11ef6c: 0x40f809  jalr        $v0
    ctx->pc = 0x11EF6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11EF74u);
        ctx->pc = 0x11EF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EF6Cu;
            // 0x11ef70: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11EF74u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EF50u: goto label_11ef50;
            case 0x11EF84u: goto label_11ef84;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11EF74u; }
            if (ctx->pc != 0x11EF74u) { return; }
        }
        }
    }
    ctx->pc = 0x11EF74u;
    // 0x11ef74: 0x8e221050  lw          $v0, 0x1050($s1)
    ctx->pc = 0x11ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4176)));
    // 0x11ef78: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11ef78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11ef7c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x11EF7Cu;
    {
        const bool branch_taken_0x11ef7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EF7Cu;
            // 0x11ef80: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef7c) {
            ctx->pc = 0x11EF50u;
            runtime->cooperativeGuestYield();
            goto label_11ef50;
        }
    }
    ctx->pc = 0x11EF84u;
label_11ef84:
    // 0x11ef84: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11ef84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ef88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11ef88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ef8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ef8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ef90: 0x3e00008  jr          $ra
    ctx->pc = 0x11EF90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EF90u;
            // 0x11ef94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EF50u: goto label_11ef50;
            case 0x11EF84u: goto label_11ef84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11EF98u;
}
