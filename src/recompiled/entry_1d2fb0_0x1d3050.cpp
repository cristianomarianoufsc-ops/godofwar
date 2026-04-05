#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1d2fb0
// Address: 0x1d2fb0 - 0x1d3050
void entry_1d2fb0_0x1d3050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1d2fb0_0x1d3050");
#endif

    ctx->pc = 0x1d2fb0u;

    // 0x1d2fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d2fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d2fb4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d2fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d2fb8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d2fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d2fbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d2fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d2fc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d2fc4: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1d2fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1d2fc8: 0x84510092  lh          $s1, 0x92($v0)
    ctx->pc = 0x1d2fc8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x1d2fcc: 0x1223001c  beq         $s1, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D2FCCu;
    {
        const bool branch_taken_0x1d2fcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D2FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2FCCu;
            // 0x1d2fd0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2fcc) {
            ctx->pc = 0x1D3040u;
            goto label_1d3040;
        }
    }
    ctx->pc = 0x1D2FD4u;
    // 0x1d2fd4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d2fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d2fd8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d2fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d2fdc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1d2fdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1d2fe0: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1d2fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1d2fe4: 0x40f809  jalr        $v0
    ctx->pc = 0x1D2FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D2FECu);
        ctx->pc = 0x1D2FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2FE4u;
            // 0x1d2fe8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D2FECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D302Cu: goto label_1d302c;
            case 0x1D3040u: goto label_1d3040;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D2FECu; }
            if (ctx->pc != 0x1D2FECu) { return; }
        }
        }
    }
    ctx->pc = 0x1D2FECu;
    // 0x1d2fec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d2fecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ff0: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1d2ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d2ff4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1D2FF4u;
    {
        const bool branch_taken_0x1d2ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2ff4) {
            ctx->pc = 0x1D2FF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2FF4u;
            // 0x1d2ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D302Cu;
            goto label_1d302c;
        }
    }
    ctx->pc = 0x1D2FFCu;
    // 0x1d2ffc: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x1d2ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1d3000: 0x5051000f  beql        $v0, $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x1D3000u;
    {
        const bool branch_taken_0x1d3000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1d3000) {
            ctx->pc = 0x1D3004u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3000u;
            // 0x1d3004: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D3040u;
            goto label_1d3040;
        }
    }
    ctx->pc = 0x1D3008u;
    // 0x1d3008: 0xc08235e  jal         func_208D78
    ctx->pc = 0x1D3008u;
    SET_GPR_U32(ctx, 31, 0x1D3010u);
    ctx->pc = 0x1D300Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3008u;
            // 0x1d300c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3010u; }
        if (ctx->pc != 0x1D3010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3010u; }
        if (ctx->pc != 0x1D3010u) { return; }
    }
    ctx->pc = 0x1D3010u;
    // 0x1d3010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3014: 0xc0821f6  jal         func_2087D8
    ctx->pc = 0x1D3014u;
    SET_GPR_U32(ctx, 31, 0x1D301Cu);
    ctx->pc = 0x1D3018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3014u;
            // 0x1d3018: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2087D8u;
    if (runtime->hasFunction(0x2087D8u)) {
        auto targetFn = runtime->lookupFunction(0x2087D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D301Cu; }
        if (ctx->pc != 0x1D301Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002087D8_0x2087d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D301Cu; }
        if (ctx->pc != 0x1D301Cu) { return; }
    }
    ctx->pc = 0x1D301Cu;
    // 0x1d301c: 0xc08117a  jal         func_2045E8
    ctx->pc = 0x1D301Cu;
    SET_GPR_U32(ctx, 31, 0x1D3024u);
    ctx->pc = 0x1D3020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D301Cu;
            // 0x1d3020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2045E8u;
    if (runtime->hasFunction(0x2045E8u)) {
        auto targetFn = runtime->lookupFunction(0x2045E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3024u; }
        if (ctx->pc != 0x1D3024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002045E8_0x2045e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3024u; }
        if (ctx->pc != 0x1D3024u) { return; }
    }
    ctx->pc = 0x1D3024u;
    // 0x1d3024: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D3024u;
    {
        const bool branch_taken_0x1d3024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3024u;
            // 0x1d3028: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3024) {
            ctx->pc = 0x1D3040u;
            goto label_1d3040;
        }
    }
    ctx->pc = 0x1D302Cu;
label_1d302c:
    // 0x1d302c: 0xc0821f6  jal         func_2087D8
    ctx->pc = 0x1D302Cu;
    SET_GPR_U32(ctx, 31, 0x1D3034u);
    ctx->pc = 0x1D3030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D302Cu;
            // 0x1d3030: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2087D8u;
    if (runtime->hasFunction(0x2087D8u)) {
        auto targetFn = runtime->lookupFunction(0x2087D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3034u; }
        if (ctx->pc != 0x1D3034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002087D8_0x2087d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3034u; }
        if (ctx->pc != 0x1D3034u) { return; }
    }
    ctx->pc = 0x1D3034u;
    // 0x1d3034: 0xc08117a  jal         func_2045E8
    ctx->pc = 0x1D3034u;
    SET_GPR_U32(ctx, 31, 0x1D303Cu);
    ctx->pc = 0x1D3038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3034u;
            // 0x1d3038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2045E8u;
    if (runtime->hasFunction(0x2045E8u)) {
        auto targetFn = runtime->lookupFunction(0x2045E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D303Cu; }
        if (ctx->pc != 0x1D303Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002045E8_0x2045e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D303Cu; }
        if (ctx->pc != 0x1D303Cu) { return; }
    }
    ctx->pc = 0x1D303Cu;
    // 0x1d303c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d303cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d3040:
    // 0x1d3040: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d3040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3048: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D304Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3048u;
            // 0x1d304c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D302Cu: goto label_1d302c;
            case 0x1D3040u: goto label_1d3040;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D3050u;
}
