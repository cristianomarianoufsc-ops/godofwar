#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D2970
// Address: 0x1d2970 - 0x1d29f8
void sub_001D2970_0x1d2970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2970_0x1d2970");
#endif

    ctx->pc = 0x1d2970u;

    // 0x1d2970: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d2970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d2974: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d2974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d2978: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d2978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d297c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1d297cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2980: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d2980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d2984: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d2984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2988: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d2988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1d298c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d298cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d2990: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d2990u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2994: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d2994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2998: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d2998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d299c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1d299cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1d29a0: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1d29a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1d29a4: 0x40f809  jalr        $v0
    ctx->pc = 0x1D29A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D29ACu);
        ctx->pc = 0x1D29A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D29A4u;
            // 0x1d29a8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D29ACu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D29BCu: goto label_1d29bc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D29ACu; }
            if (ctx->pc != 0x1D29ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1D29ACu;
    // 0x1d29ac: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D29ACu;
    {
        const bool branch_taken_0x1d29ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D29ACu;
            // 0x1d29b0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29ac) {
            ctx->pc = 0x1D29BCu;
            goto label_1d29bc;
        }
    }
    ctx->pc = 0x1D29B4u;
    // 0x1d29b4: 0xc08235e  jal         func_208D78
    ctx->pc = 0x1D29B4u;
    SET_GPR_U32(ctx, 31, 0x1D29BCu);
    ctx->pc = 0x1D29B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D29B4u;
            // 0x1d29b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D29BCu; }
        if (ctx->pc != 0x1D29BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D29BCu; }
        if (ctx->pc != 0x1D29BCu) { return; }
    }
    ctx->pc = 0x1D29BCu;
label_1d29bc:
    // 0x1d29bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d29bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29c0: 0xc0821f6  jal         func_2087D8
    ctx->pc = 0x1D29C0u;
    SET_GPR_U32(ctx, 31, 0x1D29C8u);
    ctx->pc = 0x1D29C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D29C0u;
            // 0x1d29c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2087D8u;
    if (runtime->hasFunction(0x2087D8u)) {
        auto targetFn = runtime->lookupFunction(0x2087D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D29C8u; }
        if (ctx->pc != 0x1D29C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002087D8_0x2087d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D29C8u; }
        if (ctx->pc != 0x1D29C8u) { return; }
    }
    ctx->pc = 0x1D29C8u;
    // 0x1d29c8: 0x96220072  lhu         $v0, 0x72($s1)
    ctx->pc = 0x1d29c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 114)));
    // 0x1d29cc: 0xae330040  sw          $s3, 0x40($s1)
    ctx->pc = 0x1d29ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 19));
    // 0x1d29d0: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x1d29d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x1d29d4: 0xa2200083  sb          $zero, 0x83($s1)
    ctx->pc = 0x1d29d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 131), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d29d8: 0xa6220072  sh          $v0, 0x72($s1)
    ctx->pc = 0x1d29d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 114), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d29dc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d29dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d29e0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d29e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d29e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d29e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d29e8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1d29e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d29ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d29ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d29f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D29F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D29F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D29F0u;
            // 0x1d29f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D29BCu: goto label_1d29bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D29F8u;
}
