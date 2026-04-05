#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1C48
// Address: 0x1b1c48 - 0x1b1cf8
void sub_001B1C48_0x1b1c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1C48_0x1b1c48");
#endif

    ctx->pc = 0x1b1c48u;

    // 0x1b1c48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b1c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b1c4c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1b1c4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c50: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b1c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b1c54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b1c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b1c58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b1c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c5c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1b1c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1b1c60: 0x94650042  lhu         $a1, 0x42($v1)
    ctx->pc = 0x1b1c60u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    // 0x1b1c64: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x1b1c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1b1c68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1C68u;
    {
        const bool branch_taken_0x1b1c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C68u;
            // 0x1b1c6c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c68) {
            ctx->pc = 0x1B1C78u;
            goto label_1b1c78;
        }
    }
    ctx->pc = 0x1B1C70u;
label_1b1c70:
    // 0x1b1c70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b1c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b1c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b1c78:
    // 0x1b1c78: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1C78u;
    {
        const bool branch_taken_0x1b1c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B1C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C78u;
            // 0x1b1c7c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c78) {
            ctx->pc = 0x1B1C90u;
            goto label_1b1c90;
        }
    }
    ctx->pc = 0x1B1C80u;
    // 0x1b1c80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c84: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x1b1c84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b1c88: 0x1445fff9  bne         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B1C88u;
    {
        const bool branch_taken_0x1b1c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B1C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C88u;
            // 0x1b1c8c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c88) {
            ctx->pc = 0x1B1C70u;
            runtime->cooperativeGuestYield();
            goto label_1b1c70;
        }
    }
    ctx->pc = 0x1B1C90u;
label_1b1c90:
    // 0x1b1c90: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B1C90u;
    {
        const bool branch_taken_0x1b1c90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C90u;
            // 0x1b1c94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c90) {
            ctx->pc = 0x1B1CE8u;
            goto label_1b1ce8;
        }
    }
    ctx->pc = 0x1B1C98u;
    // 0x1b1c98: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x1b1c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x1b1c9c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1b1c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b1ca0: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1b1ca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1b1ca4: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1b1ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1b1ca8: 0x40f809  jalr        $v0
    ctx->pc = 0x1B1CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1CB0u);
        ctx->pc = 0x1B1CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1CA8u;
            // 0x1b1cac: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B1CB0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1C70u: goto label_1b1c70;
            case 0x1B1C78u: goto label_1b1c78;
            case 0x1B1C90u: goto label_1b1c90;
            case 0x1B1CE8u: goto label_1b1ce8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B1CB0u; }
            if (ctx->pc != 0x1B1CB0u) { return; }
        }
        }
    }
    ctx->pc = 0x1B1CB0u;
    // 0x1b1cb0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b1cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b1cb4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b1cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b1cb8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b1cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1cbc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b1cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b1cc0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b1cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1b1cc4: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x1b1cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1b1cc8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b1cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1ccc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b1cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b1cd0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b1cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1b1cd4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b1cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1b1cd8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1b1cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1b1cdc: 0x84840008  lh          $a0, 0x8($a0)
    ctx->pc = 0x1b1cdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b1ce0: 0xc0f809  jalr        $a2
    ctx->pc = 0x1B1CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1B1CE8u);
        ctx->pc = 0x1B1CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1CE0u;
            // 0x1b1ce4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B1CE8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1C70u: goto label_1b1c70;
            case 0x1B1C78u: goto label_1b1c78;
            case 0x1B1C90u: goto label_1b1c90;
            case 0x1B1CE8u: goto label_1b1ce8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B1CE8u; }
            if (ctx->pc != 0x1B1CE8u) { return; }
        }
        }
    }
    ctx->pc = 0x1B1CE8u;
label_1b1ce8:
    // 0x1b1ce8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b1ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1cec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b1cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1CF0u;
            // 0x1b1cf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1C70u: goto label_1b1c70;
            case 0x1B1C78u: goto label_1b1c78;
            case 0x1B1C90u: goto label_1b1c90;
            case 0x1B1CE8u: goto label_1b1ce8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1CF8u;
}
