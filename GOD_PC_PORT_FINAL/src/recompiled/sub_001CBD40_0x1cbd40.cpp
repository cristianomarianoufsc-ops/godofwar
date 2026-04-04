#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CBD40
// Address: 0x1cbd40 - 0x1cbdc0
void sub_001CBD40_0x1cbd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CBD40_0x1cbd40");
#endif

    ctx->pc = 0x1cbd40u;

    // 0x1cbd40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cbd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cbd44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cbd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cbd48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cbd48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbd4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cbd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cbd50: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1cbd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1cbd54: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1cbd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1cbd58: 0xa6020072  sh          $v0, 0x72($s0)
    ctx->pc = 0x1cbd58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 114), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cbd5c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1cbd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x1cbd60: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1cbd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1cbd64: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CBD64u;
    {
        const bool branch_taken_0x1cbd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd64) {
            ctx->pc = 0x1CBDA8u;
            goto label_1cbda8;
        }
    }
    ctx->pc = 0x1CBD6Cu;
    // 0x1cbd6c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cbd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cbd70: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cbd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cbd74: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1cbd74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1cbd78: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1cbd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1cbd7c: 0x40f809  jalr        $v0
    ctx->pc = 0x1CBD7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CBD84u);
        ctx->pc = 0x1CBD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBD7Cu;
            // 0x1cbd80: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CBD84u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CBDA8u: goto label_1cbda8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CBD84u; }
            if (ctx->pc != 0x1CBD84u) { return; }
        }
        }
    }
    ctx->pc = 0x1CBD84u;
    // 0x1cbd84: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1cbd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cbd88: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CBD88u;
    {
        const bool branch_taken_0x1cbd88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBD88u;
            // 0x1cbd8c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd88) {
            ctx->pc = 0x1CBDA8u;
            goto label_1cbda8;
        }
    }
    ctx->pc = 0x1CBD90u;
    // 0x1cbd90: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1cbd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x1cbd94: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1cbd94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cbd98: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1cbd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1cbd9c: 0x40f809  jalr        $v0
    ctx->pc = 0x1CBD9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CBDA4u);
        ctx->pc = 0x1CBDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBD9Cu;
            // 0x1cbda0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CBDA4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CBDA8u: goto label_1cbda8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CBDA4u; }
            if (ctx->pc != 0x1CBDA4u) { return; }
        }
        }
    }
    ctx->pc = 0x1CBDA4u;
    // 0x1cbda4: 0x0  nop
    ctx->pc = 0x1cbda4u;
    // NOP
label_1cbda8:
    // 0x1cbda8: 0xc079cbc  jal         func_1E72F0
    ctx->pc = 0x1CBDA8u;
    SET_GPR_U32(ctx, 31, 0x1CBDB0u);
    ctx->pc = 0x1CBDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBDA8u;
            // 0x1cbdac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E72F0u;
    if (runtime->hasFunction(0x1E72F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E72F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBDB0u; }
        if (ctx->pc != 0x1CBDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E72F0_0x1e72f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBDB0u; }
        if (ctx->pc != 0x1CBDB0u) { return; }
    }
    ctx->pc = 0x1CBDB0u;
    // 0x1cbdb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cbdb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cbdb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cbdb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbdb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBDB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBDB8u;
            // 0x1cbdbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CBDA8u: goto label_1cbda8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CBDC0u;
}
