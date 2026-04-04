#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017A830
// Address: 0x17a830 - 0x17a8b8
void sub_0017A830_0x17a830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A830_0x17a830");
#endif

    ctx->pc = 0x17a830u;

    // 0x17a830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a834: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17a834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17a838: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x17a838u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x17a83c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a840: 0x8e03e848  lw          $v1, -0x17B8($s0)
    ctx->pc = 0x17a840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961224)));
    // 0x17a844: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x17a844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x17a848: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x17A848u;
    {
        const bool branch_taken_0x17a848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a848) {
            ctx->pc = 0x17A84Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17A848u;
            // 0x17a84c: 0x8c620034  lw          $v0, 0x34($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17A86Cu;
            goto label_17a86c;
        }
    }
    ctx->pc = 0x17A850u;
    // 0x17a850: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x17a850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x17a854: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x17a854u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x17a858: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x17a858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x17a85c: 0x40f809  jalr        $v0
    ctx->pc = 0x17A85Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A864u);
        ctx->pc = 0x17A860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A85Cu;
            // 0x17a860: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17A864u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A86Cu: goto label_17a86c;
            case 0x17A88Cu: goto label_17a88c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17A864u; }
            if (ctx->pc != 0x17A864u) { return; }
        }
        }
    }
    ctx->pc = 0x17A864u;
    // 0x17a864: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17A864u;
    {
        const bool branch_taken_0x17a864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A864u;
            // 0x17a868: 0x2602e848  addiu       $v0, $s0, -0x17B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a864) {
            ctx->pc = 0x17A88Cu;
            goto label_17a88c;
        }
    }
    ctx->pc = 0x17A86Cu;
label_17a86c:
    // 0x17a86c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17A86Cu;
    {
        const bool branch_taken_0x17a86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A86Cu;
            // 0x17a870: 0x2602e848  addiu       $v0, $s0, -0x17B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a86c) {
            ctx->pc = 0x17A88Cu;
            goto label_17a88c;
        }
    }
    ctx->pc = 0x17A874u;
    // 0x17a874: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x17a874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x17a878: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x17a878u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x17a87c: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x17a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x17a880: 0x40f809  jalr        $v0
    ctx->pc = 0x17A880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A888u);
        ctx->pc = 0x17A884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A880u;
            // 0x17a884: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17A888u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A86Cu: goto label_17a86c;
            case 0x17A88Cu: goto label_17a88c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17A888u; }
            if (ctx->pc != 0x17A888u) { return; }
        }
        }
    }
    ctx->pc = 0x17A888u;
    // 0x17a888: 0x2602e848  addiu       $v0, $s0, -0x17B8
    ctx->pc = 0x17a888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
label_17a88c:
    // 0x17a88c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x17a88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x17a890: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x17a890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x17a894: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x17a894u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x17a898: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x17a898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x17a89c: 0x40f809  jalr        $v0
    ctx->pc = 0x17A89Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A8A4u);
        ctx->pc = 0x17A8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A89Cu;
            // 0x17a8a0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17A8A4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A86Cu: goto label_17a86c;
            case 0x17A88Cu: goto label_17a88c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17A8A4u; }
            if (ctx->pc != 0x17A8A4u) { return; }
        }
        }
    }
    ctx->pc = 0x17A8A4u;
    // 0x17a8a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17a8a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a8a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x17A8ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A8ACu;
            // 0x17a8b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A86Cu: goto label_17a86c;
            case 0x17A88Cu: goto label_17a88c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A8B4u;
    // 0x17a8b4: 0x0  nop
    ctx->pc = 0x17a8b4u;
    // NOP
}
