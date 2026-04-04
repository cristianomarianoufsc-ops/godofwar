#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011EC60
// Address: 0x11ec60 - 0x11ecd8
void sub_0011EC60_0x11ec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EC60_0x11ec60");
#endif

    ctx->pc = 0x11ec60u;

    // 0x11ec60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11ec60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11ec64: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11ec64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x11ec68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11ec68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11ec6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11ec6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11ec70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11ec70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec74: 0x8e221050  lw          $v0, 0x1050($s1)
    ctx->pc = 0x11ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4176)));
    // 0x11ec78: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11EC78u;
    {
        const bool branch_taken_0x11ec78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11EC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EC78u;
            // 0x11ec7c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec78) {
            ctx->pc = 0x11ECBCu;
            goto label_11ecbc;
        }
    }
    ctx->pc = 0x11EC80u;
    // 0x11ec80: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x11ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11ec84: 0x0  nop
    ctx->pc = 0x11ec84u;
    // NOP
label_11ec88:
    // 0x11ec88: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x11ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x11ec8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11ec8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11ec90: 0x8c42083c  lw          $v0, 0x83C($v0)
    ctx->pc = 0x11ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2108)));
    // 0x11ec94: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x11ec94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x11ec98: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x11ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x11ec9c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x11ec9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x11eca0: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x11eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x11eca4: 0x40f809  jalr        $v0
    ctx->pc = 0x11ECA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11ECACu);
        ctx->pc = 0x11ECA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ECA4u;
            // 0x11eca8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11ECACu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EC88u: goto label_11ec88;
            case 0x11ECBCu: goto label_11ecbc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11ECACu; }
            if (ctx->pc != 0x11ECACu) { return; }
        }
        }
    }
    ctx->pc = 0x11ECACu;
    // 0x11ecac: 0x8e221050  lw          $v0, 0x1050($s1)
    ctx->pc = 0x11ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4176)));
    // 0x11ecb0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11ecb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11ecb4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x11ECB4u;
    {
        const bool branch_taken_0x11ecb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11ECB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ECB4u;
            // 0x11ecb8: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ecb4) {
            ctx->pc = 0x11EC88u;
            runtime->cooperativeGuestYield();
            goto label_11ec88;
        }
    }
    ctx->pc = 0x11ECBCu;
label_11ecbc:
    // 0x11ecbc: 0xae20105c  sw          $zero, 0x105C($s1)
    ctx->pc = 0x11ecbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4188), GPR_U32(ctx, 0));
    // 0x11ecc0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11ecc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ecc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11ecc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ecc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ecc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11eccc: 0x3e00008  jr          $ra
    ctx->pc = 0x11ECCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11ECD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ECCCu;
            // 0x11ecd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EC88u: goto label_11ec88;
            case 0x11ECBCu: goto label_11ecbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11ECD4u;
    // 0x11ecd4: 0x0  nop
    ctx->pc = 0x11ecd4u;
    // NOP
}
