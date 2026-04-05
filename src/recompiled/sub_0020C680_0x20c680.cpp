#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020C680
// Address: 0x20c680 - 0x20c720
void sub_0020C680_0x20c680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C680_0x20c680");
#endif

    ctx->pc = 0x20c680u;

    // 0x20c680: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20c680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20c684: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x20c684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x20c688: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x20c688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x20c68c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20c68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c690: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20c690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20c694: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20c694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c698: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x20c698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x20c69c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20c6a0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x20c6a4: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x20c6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x20c6a8: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x20c6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x20c6ac: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x20c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x20c6b0: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x20c6b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x20c6b4: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x20c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x20c6b8: 0x40f809  jalr        $v0
    ctx->pc = 0x20C6B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20C6C0u);
        ctx->pc = 0x20C6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C6B8u;
            // 0x20c6bc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20C6C0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C700u: goto label_20c700;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20C6C0u; }
            if (ctx->pc != 0x20C6C0u) { return; }
        }
        }
    }
    ctx->pc = 0x20C6C0u;
    // 0x20c6c0: 0xc08314e  jal         func_20C538
    ctx->pc = 0x20C6C0u;
    SET_GPR_U32(ctx, 31, 0x20C6C8u);
    ctx->pc = 0x20C6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C6C0u;
            // 0x20c6c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20C538u;
    if (runtime->hasFunction(0x20C538u)) {
        auto targetFn = runtime->lookupFunction(0x20C538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C6C8u; }
        if (ctx->pc != 0x20C6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020C538_0x20c538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C6C8u; }
        if (ctx->pc != 0x20C6C8u) { return; }
    }
    ctx->pc = 0x20C6C8u;
    // 0x20c6c8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20C6C8u;
    {
        const bool branch_taken_0x20c6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C6C8u;
            // 0x20c6cc: 0x3c13002a  lui         $s3, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6c8) {
            ctx->pc = 0x20C700u;
            goto label_20c700;
        }
    }
    ctx->pc = 0x20C6D0u;
    // 0x20c6d0: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x20c6d0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x20c6d4: 0x8e43ed58  lw          $v1, -0x12A8($s2)
    ctx->pc = 0x20c6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962520)));
    // 0x20c6d8: 0x8e62e45c  lw          $v0, -0x1BA4($s3)
    ctx->pc = 0x20c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294960220)));
    // 0x20c6dc: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20C6DCu;
    {
        const bool branch_taken_0x20c6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20C6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C6DCu;
            // 0x20c6e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6dc) {
            ctx->pc = 0x20C700u;
            goto label_20c700;
        }
    }
    ctx->pc = 0x20C6E4u;
    // 0x20c6e4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x20c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x20c6e8: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x20c6e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x20c6ec: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x20c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x20c6f0: 0x40f809  jalr        $v0
    ctx->pc = 0x20C6F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20C6F8u);
        ctx->pc = 0x20C6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C6F0u;
            // 0x20c6f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20C6F8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C700u: goto label_20c700;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20C6F8u; }
            if (ctx->pc != 0x20C6F8u) { return; }
        }
        }
    }
    ctx->pc = 0x20C6F8u;
    // 0x20c6f8: 0x8e42ed58  lw          $v0, -0x12A8($s2)
    ctx->pc = 0x20c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962520)));
    // 0x20c6fc: 0xae62e45c  sw          $v0, -0x1BA4($s3)
    ctx->pc = 0x20c6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294960220), GPR_U32(ctx, 2));
label_20c700:
    // 0x20c700: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x20c700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20c704: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x20c704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20c708: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20c708u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20c70c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x20c70cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c714: 0x3e00008  jr          $ra
    ctx->pc = 0x20C714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C714u;
            // 0x20c718: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C700u: goto label_20c700;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20C71Cu;
    // 0x20c71c: 0x0  nop
    ctx->pc = 0x20c71cu;
    // NOP
}
