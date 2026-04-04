#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D3050
// Address: 0x1d3050 - 0x1d3100
void sub_001D3050_0x1d3050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3050_0x1d3050");
#endif

    ctx->pc = 0x1d3050u;

    // 0x1d3050: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d3050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d3054: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d3054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d3058: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d3058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d305c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d305cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3060: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d3060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1d3064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d3068: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d3068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d306c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1d306cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3070: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d3070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d3074: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1d3074u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1d3078: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1d3078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1d307c: 0x40f809  jalr        $v0
    ctx->pc = 0x1D307Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D3084u);
        ctx->pc = 0x1D3080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D307Cu;
            // 0x1d3080: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D3084u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D30DCu: goto label_1d30dc;
            case 0x1D30E8u: goto label_1d30e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D3084u; }
            if (ctx->pc != 0x1D3084u) { return; }
        }
        }
    }
    ctx->pc = 0x1D3084u;
    // 0x1d3084: 0x8e040320  lw          $a0, 0x320($s0)
    ctx->pc = 0x1d3084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1d3088: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1D3088u;
    SET_GPR_U32(ctx, 31, 0x1D3090u);
    ctx->pc = 0x1D308Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3088u;
            // 0x1d308c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3090u; }
        if (ctx->pc != 0x1D3090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3090u; }
        if (ctx->pc != 0x1D3090u) { return; }
    }
    ctx->pc = 0x1D3090u;
    // 0x1d3090: 0x94530270  lhu         $s3, 0x270($v0)
    ctx->pc = 0x1d3090u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x1d3094: 0xc0783d6  jal         func_1E0F58
    ctx->pc = 0x1D3094u;
    SET_GPR_U32(ctx, 31, 0x1D309Cu);
    ctx->pc = 0x1D3098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3094u;
            // 0x1d3098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0F58u;
    if (runtime->hasFunction(0x1E0F58u)) {
        auto targetFn = runtime->lookupFunction(0x1E0F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D309Cu; }
        if (ctx->pc != 0x1D309Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0F58_0x1e0f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D309Cu; }
        if (ctx->pc != 0x1D309Cu) { return; }
    }
    ctx->pc = 0x1D309Cu;
    // 0x1d309c: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x1d309cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x1d30a0: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x1d30a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d30a4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1D30A4u;
    {
        const bool branch_taken_0x1d30a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d30a4) {
            ctx->pc = 0x1D30A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D30A4u;
            // 0x1d30a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D30DCu;
            goto label_1d30dc;
        }
    }
    ctx->pc = 0x1D30ACu;
    // 0x1d30ac: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x1d30acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1d30b0: 0x1053000d  beq         $v0, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x1D30B0u;
    {
        const bool branch_taken_0x1d30b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1D30B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D30B0u;
            // 0x1d30b4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d30b0) {
            ctx->pc = 0x1D30E8u;
            goto label_1d30e8;
        }
    }
    ctx->pc = 0x1D30B8u;
    // 0x1d30b8: 0xc08235e  jal         func_208D78
    ctx->pc = 0x1D30B8u;
    SET_GPR_U32(ctx, 31, 0x1D30C0u);
    ctx->pc = 0x1D30BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D30B8u;
            // 0x1d30bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D30C0u; }
        if (ctx->pc != 0x1D30C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D30C0u; }
        if (ctx->pc != 0x1D30C0u) { return; }
    }
    ctx->pc = 0x1D30C0u;
    // 0x1d30c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d30c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d30c4: 0xc0821f6  jal         func_2087D8
    ctx->pc = 0x1D30C4u;
    SET_GPR_U32(ctx, 31, 0x1D30CCu);
    ctx->pc = 0x1D30C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D30C4u;
            // 0x1d30c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2087D8u;
    if (runtime->hasFunction(0x2087D8u)) {
        auto targetFn = runtime->lookupFunction(0x2087D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D30CCu; }
        if (ctx->pc != 0x1D30CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002087D8_0x2087d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D30CCu; }
        if (ctx->pc != 0x1D30CCu) { return; }
    }
    ctx->pc = 0x1D30CCu;
    // 0x1d30cc: 0xc08117a  jal         func_2045E8
    ctx->pc = 0x1D30CCu;
    SET_GPR_U32(ctx, 31, 0x1D30D4u);
    ctx->pc = 0x1D30D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D30CCu;
            // 0x1d30d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2045E8u;
    if (runtime->hasFunction(0x2045E8u)) {
        auto targetFn = runtime->lookupFunction(0x2045E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D30D4u; }
        if (ctx->pc != 0x1D30D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002045E8_0x2045e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D30D4u; }
        if (ctx->pc != 0x1D30D4u) { return; }
    }
    ctx->pc = 0x1D30D4u;
    // 0x1d30d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D30D4u;
    {
        const bool branch_taken_0x1d30d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D30D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D30D4u;
            // 0x1d30d8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d30d4) {
            ctx->pc = 0x1D30E8u;
            goto label_1d30e8;
        }
    }
    ctx->pc = 0x1D30DCu;
label_1d30dc:
    // 0x1d30dc: 0xc0821f6  jal         func_2087D8
    ctx->pc = 0x1D30DCu;
    SET_GPR_U32(ctx, 31, 0x1D30E4u);
    ctx->pc = 0x1D30E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D30DCu;
            // 0x1d30e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2087D8u;
    if (runtime->hasFunction(0x2087D8u)) {
        auto targetFn = runtime->lookupFunction(0x2087D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D30E4u; }
        if (ctx->pc != 0x1D30E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002087D8_0x2087d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D30E4u; }
        if (ctx->pc != 0x1D30E4u) { return; }
    }
    ctx->pc = 0x1D30E4u;
    // 0x1d30e4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d30e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d30e8:
    // 0x1d30e8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d30e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d30ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d30ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d30f0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1d30f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d30f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d30f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d30f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D30F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D30FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D30F8u;
            // 0x1d30fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D30DCu: goto label_1d30dc;
            case 0x1D30E8u: goto label_1d30e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D3100u;
}
