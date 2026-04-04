#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A5B10
// Address: 0x1a5b10 - 0x1a5bc0
void sub_001A5B10_0x1a5b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5B10_0x1a5b10");
#endif

    ctx->pc = 0x1a5b10u;

    // 0x1a5b10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a5b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a5b14: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1a5b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1a5b18: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a5b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a5b1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a5b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5b20: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1a5b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1a5b24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a5b24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5b28: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1a5b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1a5b2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a5b2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5b30: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a5b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1a5b34: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1a5b34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5b38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a5b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a5b3c: 0x26620038  addiu       $v0, $s3, 0x38
    ctx->pc = 0x1a5b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
label_1a5b40:
    // 0x1a5b40: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1a5b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1a5b44: 0x528821  addu        $s1, $v0, $s2
    ctx->pc = 0x1a5b44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a5b48: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a5b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a5b4c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1a5b4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1a5b50: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A5B50u;
    {
        const bool branch_taken_0x1a5b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5B50u;
            // 0x1a5b54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b50) {
            ctx->pc = 0x1A5B90u;
            goto label_1a5b90;
        }
    }
    ctx->pc = 0x1A5B58u;
    // 0x1a5b58: 0x8c63e84c  lw          $v1, -0x17B4($v1)
    ctx->pc = 0x1a5b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961228)));
    // 0x1a5b5c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a5b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a5b60: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1a5b60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1a5b64: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1a5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1a5b68: 0x40f809  jalr        $v0
    ctx->pc = 0x1A5B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5B70u);
        ctx->pc = 0x1A5B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5B68u;
            // 0x1a5b6c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5B70u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5B40u: goto label_1a5b40;
            case 0x1A5B90u: goto label_1a5b90;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5B70u; }
            if (ctx->pc != 0x1A5B70u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5B70u;
    // 0x1a5b70: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1a5b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a5b74: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x1a5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1a5b78: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1a5b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a5b7c: 0x14540004  bne         $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5B7Cu;
    {
        const bool branch_taken_0x1a5b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1A5B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5B7Cu;
            // 0x1a5b80: 0x2631821  addu        $v1, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b7c) {
            ctx->pc = 0x1A5B90u;
            goto label_1a5b90;
        }
    }
    ctx->pc = 0x1A5B84u;
    // 0x1a5b84: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x1a5b84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a5b88: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1a5b88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1a5b8c: 0x0  nop
    ctx->pc = 0x1a5b8cu;
    // NOP
label_1a5b90:
    // 0x1a5b90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a5b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a5b94: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x1a5b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1a5b98: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1A5B98u;
    {
        const bool branch_taken_0x1a5b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5b98) {
            ctx->pc = 0x1A5B9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5B98u;
            // 0x1a5b9c: 0x26620038  addiu       $v0, $s3, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A5B40u;
            runtime->cooperativeGuestYield();
            goto label_1a5b40;
        }
    }
    ctx->pc = 0x1A5BA0u;
    // 0x1a5ba0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1a5ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5ba4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a5ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a5ba8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a5ba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5bac: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1a5bacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5bb0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1a5bb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a5bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5BB8u;
            // 0x1a5bbc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5B40u: goto label_1a5b40;
            case 0x1A5B90u: goto label_1a5b90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5BC0u;
}
