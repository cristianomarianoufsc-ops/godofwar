#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FE690
// Address: 0x1fe690 - 0x1fe740
void sub_001FE690_0x1fe690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE690_0x1fe690");
#endif

    ctx->pc = 0x1fe690u;

    // 0x1fe690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fe690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fe694: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fe694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1fe698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fe698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fe69c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fe69cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe6a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe6a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fe6a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe6a8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1fe6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fe6ac: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1fe6acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fe6b0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1fe6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1fe6b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FE6B4u;
    {
        const bool branch_taken_0x1fe6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE6B4u;
            // 0x1fe6b8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe6b4) {
            ctx->pc = 0x1FE6E8u;
            goto label_1fe6e8;
        }
    }
    ctx->pc = 0x1FE6BCu;
    // 0x1fe6bc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1fe6bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fe6c0: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1fe6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1fe6c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fe6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fe6c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fe6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fe6cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fe6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe6d0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fe6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fe6d4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1fe6d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1fe6d8: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1fe6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1fe6dc: 0x40f809  jalr        $v0
    ctx->pc = 0x1FE6DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE6E4u);
        ctx->pc = 0x1FE6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE6DCu;
            // 0x1fe6e0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FE6E4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FE6E8u: goto label_1fe6e8;
            case 0x1FE730u: goto label_1fe730;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FE6E4u; }
            if (ctx->pc != 0x1FE6E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1FE6E4u;
    // 0x1fe6e4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1fe6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fe6e8:
    // 0x1fe6e8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1fe6e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fe6ec: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1fe6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1fe6f0: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1fe6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1fe6f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fe6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fe6f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fe6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fe6fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fe6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe700: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fe700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fe704: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1fe704u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1fe708: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1fe708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1fe70c: 0x40f809  jalr        $v0
    ctx->pc = 0x1FE70Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE714u);
        ctx->pc = 0x1FE710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE70Cu;
            // 0x1fe710: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FE714u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FE6E8u: goto label_1fe6e8;
            case 0x1FE730u: goto label_1fe730;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FE714u; }
            if (ctx->pc != 0x1FE714u) { return; }
        }
        }
    }
    ctx->pc = 0x1FE714u;
    // 0x1fe714: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1fe714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1fe718: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE718u;
    {
        const bool branch_taken_0x1fe718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe718) {
            ctx->pc = 0x1FE71Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE718u;
            // 0x1fe71c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE730u;
            goto label_1fe730;
        }
    }
    ctx->pc = 0x1FE720u;
    // 0x1fe720: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x1FE720u;
    SET_GPR_U32(ctx, 31, 0x1FE728u);
    ctx->pc = 0x1FE724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE720u;
            // 0x1fe724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE728u; }
        if (ctx->pc != 0x1FE728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE728u; }
        if (ctx->pc != 0x1FE728u) { return; }
    }
    ctx->pc = 0x1FE728u;
    // 0x1fe728: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fe728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe72c: 0x0  nop
    ctx->pc = 0x1fe72cu;
    // NOP
label_1fe730:
    // 0x1fe730: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fe730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe738: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE738u;
            // 0x1fe73c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FE6E8u: goto label_1fe6e8;
            case 0x1FE730u: goto label_1fe730;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FE740u;
}
