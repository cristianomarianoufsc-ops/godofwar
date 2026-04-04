#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00265340
// Address: 0x265340 - 0x265394
void FUN_00265340_0x265340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00265340_0x265340");
#endif

    ctx->pc = 0x265340u;

    // 0x265340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x265340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x265344: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x265344u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x265348: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x265348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x26534c: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26534Cu;
    {
        const bool branch_taken_0x26534c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x265350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26534Cu;
            // 0x265350: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26534c) {
            ctx->pc = 0x26537Cu;
            goto label_26537c;
        }
    }
    ctx->pc = 0x265354u;
    // 0x265354: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x265354u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x265358: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26535c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x26535cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x265360: 0x2c630005  sltiu       $v1, $v1, 0x5
    ctx->pc = 0x265360u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x265364: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x265364u;
    {
        const bool branch_taken_0x265364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x265368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265364u;
            // 0x265368: 0xa0820004  sb          $v0, 0x4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265364) {
            ctx->pc = 0x265374u;
            goto label_265374;
        }
    }
    ctx->pc = 0x26536Cu;
    // 0x26536c: 0xc06b714  jal         func_1ADC50
    ctx->pc = 0x26536Cu;
    SET_GPR_U32(ctx, 31, 0x265374u);
    ctx->pc = 0x265370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26536Cu;
            // 0x265370: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ADC50u;
    if (runtime->hasFunction(0x1ADC50u)) {
        auto targetFn = runtime->lookupFunction(0x1ADC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265374u; }
        if (ctx->pc != 0x265374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADC50_0x1adc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265374u; }
        if (ctx->pc != 0x265374u) { return; }
    }
    ctx->pc = 0x265374u;
label_265374:
    // 0x265374: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x265374u;
    {
        const bool branch_taken_0x265374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265374u;
            // 0x265378: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265374) {
            ctx->pc = 0x265394u;
            return;
        }
    }
    ctx->pc = 0x26537Cu;
label_26537c:
    // 0x26537c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26537cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x265380: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x265380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x265384: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x265384u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x265388: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x265388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26538c: 0x40f809  jalr        $v0
    ctx->pc = 0x26538Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x265394u);
        ctx->pc = 0x265390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26538Cu;
            // 0x265390: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x265394u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x265374u: goto label_265374;
            case 0x26537Cu: goto label_26537c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x265394u; }
            if (ctx->pc != 0x265394u) { return; }
        }
        }
    }
    ctx->pc = 0x265394u;
}
