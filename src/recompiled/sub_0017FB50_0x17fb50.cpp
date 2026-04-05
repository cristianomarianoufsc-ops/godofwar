#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017FB50
// Address: 0x17fb50 - 0x17fbc0
void sub_0017FB50_0x17fb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FB50_0x17fb50");
#endif

    ctx->pc = 0x17fb50u;

    // 0x17fb50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17fb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17fb54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17fb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17fb58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17fb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17fb5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17fb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17fb60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17fb60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb64: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x17fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x17fb68: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x17fb68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x17fb6c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x17fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x17fb70: 0x40f809  jalr        $v0
    ctx->pc = 0x17FB70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17FB78u);
        ctx->pc = 0x17FB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FB70u;
            // 0x17fb74: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17FB78u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FB88u: goto label_17fb88;
            case 0x17FBB0u: goto label_17fbb0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17FB78u; }
            if (ctx->pc != 0x17FB78u) { return; }
        }
        }
    }
    ctx->pc = 0x17FB78u;
    // 0x17fb78: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x17fb78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17fb7c: 0x602000c  bltzl       $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x17FB7Cu;
    {
        const bool branch_taken_0x17fb7c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x17fb7c) {
            ctx->pc = 0x17FB80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FB7Cu;
            // 0x17fb80: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FBB0u;
            goto label_17fbb0;
        }
    }
    ctx->pc = 0x17FB84u;
    // 0x17fb84: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x17fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_17fb88:
    // 0x17fb88: 0x102c00  sll         $a1, $s0, 16
    ctx->pc = 0x17fb88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x17fb8c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x17fb8cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x17fb90: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x17fb90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x17fb94: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x17fb94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x17fb98: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x17fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x17fb9c: 0x40f809  jalr        $v0
    ctx->pc = 0x17FB9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17FBA4u);
        ctx->pc = 0x17FBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FB9Cu;
            // 0x17fba0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17FBA4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FB88u: goto label_17fb88;
            case 0x17FBB0u: goto label_17fbb0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17FBA4u; }
            if (ctx->pc != 0x17FBA4u) { return; }
        }
        }
    }
    ctx->pc = 0x17FBA4u;
    // 0x17fba4: 0x603fff8  bgezl       $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17FBA4u;
    {
        const bool branch_taken_0x17fba4 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x17fba4) {
            ctx->pc = 0x17FBA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FBA4u;
            // 0x17fba8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FB88u;
            runtime->cooperativeGuestYield();
            goto label_17fb88;
        }
    }
    ctx->pc = 0x17FBACu;
    // 0x17fbac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17fbacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17fbb0:
    // 0x17fbb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17fbb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fbb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17fbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fbb8: 0x3e00008  jr          $ra
    ctx->pc = 0x17FBB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FBB8u;
            // 0x17fbbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FB88u: goto label_17fb88;
            case 0x17FBB0u: goto label_17fbb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17FBC0u;
}
