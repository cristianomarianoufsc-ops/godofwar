#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00245080
// Address: 0x245080 - 0x245140
void sub_00245080_0x245080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245080_0x245080");
#endif

    ctx->pc = 0x245080u;

    // 0x245080: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x245080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x245084: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x245084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x245088: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x245088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x24508c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24508cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x245090: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x245090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x245094: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x245094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24509c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x24509cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2450a0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2450a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2450a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2450a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2450a8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x2450a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2450ac: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x2450acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2450b0: 0x40f809  jalr        $v0
    ctx->pc = 0x2450B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2450B8u);
        ctx->pc = 0x2450B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2450B0u;
            // 0x2450b4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2450B8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x245110u: goto label_245110;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2450B8u; }
            if (ctx->pc != 0x2450B8u) { return; }
        }
        }
    }
    ctx->pc = 0x2450B8u;
    // 0x2450b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2450b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2450bc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2450bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2450c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2450c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2450c4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2450c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2450c8: 0xc090d54  jal         func_243550
    ctx->pc = 0x2450C8u;
    SET_GPR_U32(ctx, 31, 0x2450D0u);
    ctx->pc = 0x2450CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2450C8u;
            // 0x2450cc: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243550u;
    if (runtime->hasFunction(0x243550u)) {
        auto targetFn = runtime->lookupFunction(0x243550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2450D0u; }
        if (ctx->pc != 0x2450D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243550_0x243558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2450D0u; }
        if (ctx->pc != 0x2450D0u) { return; }
    }
    ctx->pc = 0x2450D0u;
    // 0x2450d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2450d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2450d4: 0xc080836  jal         func_2020D8
    ctx->pc = 0x2450D4u;
    SET_GPR_U32(ctx, 31, 0x2450DCu);
    ctx->pc = 0x2450D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2450D4u;
            // 0x2450d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2020D8u;
    if (runtime->hasFunction(0x2020D8u)) {
        auto targetFn = runtime->lookupFunction(0x2020D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2450DCu; }
        if (ctx->pc != 0x2450DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002020D8_0x2020d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2450DCu; }
        if (ctx->pc != 0x2450DCu) { return; }
    }
    ctx->pc = 0x2450DCu;
    // 0x2450dc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2450dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2450e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2450e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2450e4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2450E4u;
    {
        const bool branch_taken_0x2450e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2450E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2450E4u;
            // 0x2450e8: 0xa2420004  sb          $v0, 0x4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450e4) {
            ctx->pc = 0x245110u;
            goto label_245110;
        }
    }
    ctx->pc = 0x2450ECu;
    // 0x2450ec: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2450ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2450f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2450f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2450f4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2450f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2450f8: 0xc0821f6  jal         func_2087D8
    ctx->pc = 0x2450F8u;
    SET_GPR_U32(ctx, 31, 0x245100u);
    ctx->pc = 0x2450FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2450F8u;
            // 0x2450fc: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2087D8u;
    if (runtime->hasFunction(0x2087D8u)) {
        auto targetFn = runtime->lookupFunction(0x2087D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245100u; }
        if (ctx->pc != 0x245100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002087D8_0x2087d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245100u; }
        if (ctx->pc != 0x245100u) { return; }
    }
    ctx->pc = 0x245100u;
    // 0x245100: 0xc08117a  jal         func_2045E8
    ctx->pc = 0x245100u;
    SET_GPR_U32(ctx, 31, 0x245108u);
    ctx->pc = 0x245104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245100u;
            // 0x245104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2045E8u;
    if (runtime->hasFunction(0x2045E8u)) {
        auto targetFn = runtime->lookupFunction(0x2045E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245108u; }
        if (ctx->pc != 0x245108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002045E8_0x2045e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245108u; }
        if (ctx->pc != 0x245108u) { return; }
    }
    ctx->pc = 0x245108u;
    // 0x245108: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x245108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24510c: 0xae620044  sw          $v0, 0x44($s3)
    ctx->pc = 0x24510cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
label_245110:
    // 0x245110: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x245110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x245114: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x245114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x245118: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x245118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24511c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x24511cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x245120: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x245120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245124: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x245124u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245128: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x245128u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24512c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24512cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245130: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x245130u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x245134: 0x3e00008  jr          $ra
    ctx->pc = 0x245134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245134u;
            // 0x245138: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x245110u: goto label_245110;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24513Cu;
    // 0x24513c: 0x0  nop
    ctx->pc = 0x24513cu;
    // NOP
}
