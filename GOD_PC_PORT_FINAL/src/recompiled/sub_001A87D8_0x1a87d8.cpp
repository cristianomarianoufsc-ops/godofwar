#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A87D8
// Address: 0x1a87d8 - 0x1a8878
void sub_001A87D8_0x1a87d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A87D8_0x1a87d8");
#endif

    ctx->pc = 0x1a87d8u;

    // 0x1a87d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a87d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a87dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a87dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a87e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a87e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a87e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a87e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a87e8: 0xc0697f0  jal         func_1A5FC0
    ctx->pc = 0x1A87E8u;
    SET_GPR_U32(ctx, 31, 0x1A87F0u);
    ctx->pc = 0x1A87ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A87E8u;
            // 0x1a87ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5FC0u;
    if (runtime->hasFunction(0x1A5FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A5FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A87F0u; }
        if (ctx->pc != 0x1A87F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5FC0_0x1a5fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A87F0u; }
        if (ctx->pc != 0x1A87F0u) { return; }
    }
    ctx->pc = 0x1A87F0u;
    // 0x1a87f0: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A87F0u;
    {
        const bool branch_taken_0x1a87f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a87f0) {
            ctx->pc = 0x1A87F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A87F0u;
            // 0x1a87f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A8860u;
            goto label_1a8860;
        }
    }
    ctx->pc = 0x1A87F8u;
    // 0x1a87f8: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1a87f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1a87fc: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A87FCu;
    {
        const bool branch_taken_0x1a87fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a87fc) {
            ctx->pc = 0x1A8800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A87FCu;
            // 0x1a8800: 0x8c440024  lw          $a0, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A880Cu;
            goto label_1a880c;
        }
    }
    ctx->pc = 0x1A8804u;
    // 0x1a8804: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1A8804u;
    {
        const bool branch_taken_0x1a8804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8804u;
            // 0x1a8808: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8804) {
            ctx->pc = 0x1A8860u;
            goto label_1a8860;
        }
    }
    ctx->pc = 0x1A880Cu;
label_1a880c:
    // 0x1a880c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A880Cu;
    {
        const bool branch_taken_0x1a880c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A880Cu;
            // 0x1a8810: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a880c) {
            ctx->pc = 0x1A8858u;
            goto label_1a8858;
        }
    }
    ctx->pc = 0x1A8814u;
    // 0x1a8814: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x1a8814u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a8818: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1a8818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1a881c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a881cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8820: 0x86110028  lh          $s1, 0x28($s0)
    ctx->pc = 0x1a8820u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a8824: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a8824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a8828: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x1a8828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1a882c: 0x918821  addu        $s1, $a0, $s1
    ctx->pc = 0x1a882cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1a8830: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1a8830u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1a8834: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1a8834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1a8838: 0x40f809  jalr        $v0
    ctx->pc = 0x1A8838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A8840u);
        ctx->pc = 0x1A883Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8838u;
            // 0x1a883c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A8840u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A880Cu: goto label_1a880c;
            case 0x1A8858u: goto label_1a8858;
            case 0x1A8860u: goto label_1a8860;
            case 0x1A8864u: goto label_1a8864;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A8840u; }
            if (ctx->pc != 0x1A8840u) { return; }
        }
        }
    }
    ctx->pc = 0x1A8840u;
    // 0x1a8840: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a8840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a8844: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8848: 0x60f809  jalr        $v1
    ctx->pc = 0x1A8848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A8850u);
        ctx->pc = 0x1A884Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8848u;
            // 0x1a884c: 0x8c450088  lw          $a1, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A8850u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A880Cu: goto label_1a880c;
            case 0x1A8858u: goto label_1a8858;
            case 0x1A8860u: goto label_1a8860;
            case 0x1A8864u: goto label_1a8864;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A8850u; }
            if (ctx->pc != 0x1A8850u) { return; }
        }
        }
    }
    ctx->pc = 0x1A8850u;
    // 0x1a8850: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8850u;
    {
        const bool branch_taken_0x1a8850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8850u;
            // 0x1a8854: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8850) {
            ctx->pc = 0x1A8864u;
            goto label_1a8864;
        }
    }
    ctx->pc = 0x1A8858u;
label_1a8858:
    // 0x1a8858: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a8858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a885c: 0x0  nop
    ctx->pc = 0x1a885cu;
    // NOP
label_1a8860:
    // 0x1a8860: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a8860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a8864:
    // 0x1a8864: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a8864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a886c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A886Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A886Cu;
            // 0x1a8870: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A880Cu: goto label_1a880c;
            case 0x1A8858u: goto label_1a8858;
            case 0x1A8860u: goto label_1a8860;
            case 0x1A8864u: goto label_1a8864;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A8874u;
    // 0x1a8874: 0x0  nop
    ctx->pc = 0x1a8874u;
    // NOP
}
