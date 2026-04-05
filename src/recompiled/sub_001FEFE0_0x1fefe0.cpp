#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FEFE0
// Address: 0x1fefe0 - 0x1ff090
void sub_001FEFE0_0x1fefe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEFE0_0x1fefe0");
#endif

    ctx->pc = 0x1fefe0u;

    // 0x1fefe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fefe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fefe4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fefe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1fefe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fefe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fefec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fefecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feff0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1feff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1feff4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1feff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feff8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1feff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1feffc: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1feffcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ff000: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ff000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ff004: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FF004u;
    {
        const bool branch_taken_0x1ff004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF004u;
            // 0x1ff008: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff004) {
            ctx->pc = 0x1FF038u;
            goto label_1ff038;
        }
    }
    ctx->pc = 0x1FF00Cu;
    // 0x1ff00c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1ff00cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff010: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1ff010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1ff014: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ff014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ff018: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ff018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ff01c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ff01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ff020: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ff020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ff024: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ff024u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1ff028: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1ff028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1ff02c: 0x40f809  jalr        $v0
    ctx->pc = 0x1FF02Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF034u);
        ctx->pc = 0x1FF030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF02Cu;
            // 0x1ff030: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FF034u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FF038u: goto label_1ff038;
            case 0x1FF080u: goto label_1ff080;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FF034u; }
            if (ctx->pc != 0x1FF034u) { return; }
        }
        }
    }
    ctx->pc = 0x1FF034u;
    // 0x1ff034: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1ff034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ff038:
    // 0x1ff038: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1ff038u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff03c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ff03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ff040: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1ff040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1ff044: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ff044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ff048: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ff048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ff04c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ff04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ff050: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ff050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ff054: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1ff054u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1ff058: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1ff058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1ff05c: 0x40f809  jalr        $v0
    ctx->pc = 0x1FF05Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF064u);
        ctx->pc = 0x1FF060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF05Cu;
            // 0x1ff060: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FF064u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FF038u: goto label_1ff038;
            case 0x1FF080u: goto label_1ff080;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FF064u; }
            if (ctx->pc != 0x1FF064u) { return; }
        }
        }
    }
    ctx->pc = 0x1FF064u;
    // 0x1ff064: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1ff064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1ff068: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF068u;
    {
        const bool branch_taken_0x1ff068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff068) {
            ctx->pc = 0x1FF06Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF068u;
            // 0x1ff06c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF080u;
            goto label_1ff080;
        }
    }
    ctx->pc = 0x1FF070u;
    // 0x1ff070: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x1FF070u;
    SET_GPR_U32(ctx, 31, 0x1FF078u);
    ctx->pc = 0x1FF074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF070u;
            // 0x1ff074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF078u; }
        if (ctx->pc != 0x1FF078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF078u; }
        if (ctx->pc != 0x1FF078u) { return; }
    }
    ctx->pc = 0x1FF078u;
    // 0x1ff078: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ff078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff07c: 0x0  nop
    ctx->pc = 0x1ff07cu;
    // NOP
label_1ff080:
    // 0x1ff080: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ff080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff088: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF088u;
            // 0x1ff08c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FF038u: goto label_1ff038;
            case 0x1FF080u: goto label_1ff080;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FF090u;
}
