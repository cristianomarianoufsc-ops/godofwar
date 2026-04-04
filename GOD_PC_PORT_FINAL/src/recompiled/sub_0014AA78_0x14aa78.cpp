#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014AA78
// Address: 0x14aa78 - 0x14ab00
void sub_0014AA78_0x14aa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AA78_0x14aa78");
#endif

    ctx->pc = 0x14aa78u;

    // 0x14aa78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14aa78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14aa7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14aa7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14aa80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14aa80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aa84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14aa84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14aa88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14aa88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14aa8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14aa8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aa90: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x14aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14aa94: 0x0  nop
    ctx->pc = 0x14aa94u;
    // NOP
label_14aa98:
    // 0x14aa98: 0x248300e4  addiu       $v1, $a0, 0xE4
    ctx->pc = 0x14aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 228));
    // 0x14aa9c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x14aa9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14aaa0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14aaa4: 0x1450000c  bne         $v0, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x14AAA4u;
    {
        const bool branch_taken_0x14aaa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x14AAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AAA4u;
            // 0x14aaa8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aaa4) {
            ctx->pc = 0x14AAD8u;
            goto label_14aad8;
        }
    }
    ctx->pc = 0x14AAACu;
    // 0x14aaac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x14aaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14aab0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14aab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14aab4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x14aab4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14aab8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x14aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14aabc: 0x40f809  jalr        $v0
    ctx->pc = 0x14AABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14AAC4u);
        ctx->pc = 0x14AAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AABCu;
            // 0x14aac0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x14AAC4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14AA98u: goto label_14aa98;
            case 0x14AAD8u: goto label_14aad8;
            case 0x14AAE8u: goto label_14aae8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14AAC4u; }
            if (ctx->pc != 0x14AAC4u) { return; }
        }
        }
    }
    ctx->pc = 0x14AAC4u;
    // 0x14aac4: 0xc0530bc  jal         func_14C2F0
    ctx->pc = 0x14AAC4u;
    SET_GPR_U32(ctx, 31, 0x14AACCu);
    ctx->pc = 0x14AAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AAC4u;
            // 0x14aac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C2F0u;
    if (runtime->hasFunction(0x14C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x14C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AACCu; }
        if (ctx->pc != 0x14AACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C2F0_0x14c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AACCu; }
        if (ctx->pc != 0x14AACCu) { return; }
    }
    ctx->pc = 0x14AACCu;
    // 0x14aacc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x14aaccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x14aad0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14AAD0u;
    {
        const bool branch_taken_0x14aad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AAD0u;
            // 0x14aad4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aad0) {
            ctx->pc = 0x14AAE8u;
            goto label_14aae8;
        }
    }
    ctx->pc = 0x14AAD8u;
label_14aad8:
    // 0x14aad8: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x14aad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x14aadc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x14AADCu;
    {
        const bool branch_taken_0x14aadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AADCu;
            // 0x14aae0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aadc) {
            ctx->pc = 0x14AA98u;
            runtime->cooperativeGuestYield();
            goto label_14aa98;
        }
    }
    ctx->pc = 0x14AAE4u;
    // 0x14aae4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14aae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14aae8:
    // 0x14aae8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14aae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14aaec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14aaecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14aaf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14aaf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14aaf4: 0x3e00008  jr          $ra
    ctx->pc = 0x14AAF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AAF4u;
            // 0x14aaf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14AA98u: goto label_14aa98;
            case 0x14AAD8u: goto label_14aad8;
            case 0x14AAE8u: goto label_14aae8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14AAFCu;
    // 0x14aafc: 0x0  nop
    ctx->pc = 0x14aafcu;
    // NOP
}
