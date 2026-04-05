#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE600
// Address: 0x1be600 - 0x1be6a0
void sub_001BE600_0x1be600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE600_0x1be600");
#endif

    ctx->pc = 0x1be600u;

    // 0x1be600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1be600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1be604: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1be604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1be608: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1be608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1be60c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1be60cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be614: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x1be614u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1be618: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x1be618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x1be61c: 0x3043ffcf  andi        $v1, $v0, 0xFFCF
    ctx->pc = 0x1be61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65487);
    // 0x1be620: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1be620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1be624: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BE624u;
    {
        const bool branch_taken_0x1be624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE624u;
            // 0x1be628: 0xa6230004  sh          $v1, 0x4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be624) {
            ctx->pc = 0x1BE688u;
            goto label_1be688;
        }
    }
    ctx->pc = 0x1BE62Cu;
    // 0x1be62c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1be62cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1be630: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1be630u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1be634: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x1be634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x1be638: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1be638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1be63c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1be63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1be640: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1be640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be644: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1be644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be648: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1be648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1be64c: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1be64cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1be650: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1be650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1be654: 0x40f809  jalr        $v0
    ctx->pc = 0x1BE654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BE65Cu);
        ctx->pc = 0x1BE658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE654u;
            // 0x1be658: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BE65Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BE688u: goto label_1be688;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BE65Cu; }
            if (ctx->pc != 0x1BE65Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1BE65Cu;
    // 0x1be65c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1be65cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1be660: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1be660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1be664: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1be664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1be668: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1be668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be66c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1be66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be670: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1be670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1be674: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1be674u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1be678: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1be678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1be67c: 0x40f809  jalr        $v0
    ctx->pc = 0x1BE67Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BE684u);
        ctx->pc = 0x1BE680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE67Cu;
            // 0x1be680: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BE684u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BE688u: goto label_1be688;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BE684u; }
            if (ctx->pc != 0x1BE684u) { return; }
        }
        }
    }
    ctx->pc = 0x1BE684u;
    // 0x1be684: 0x0  nop
    ctx->pc = 0x1be684u;
    // NOP
label_1be688:
    // 0x1be688: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1be688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be68c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1be68cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be694: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE694u;
            // 0x1be698: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BE688u: goto label_1be688;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BE69Cu;
    // 0x1be69c: 0x0  nop
    ctx->pc = 0x1be69cu;
    // NOP
}
