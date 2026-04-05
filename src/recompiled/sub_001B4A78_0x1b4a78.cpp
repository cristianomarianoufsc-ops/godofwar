#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4A78
// Address: 0x1b4a78 - 0x1b4ae8
void sub_001B4A78_0x1b4a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4A78_0x1b4a78");
#endif

    ctx->pc = 0x1b4a78u;

    // 0x1b4a78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b4a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b4a7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b4a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b4a80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b4a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b4a84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b4a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4a88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b4a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b4a8c: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1b4a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x1b4a90: 0x1050000f  beq         $v0, $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B4A90u;
    {
        const bool branch_taken_0x1b4a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1B4A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A90u;
            // 0x1b4a94: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a90) {
            ctx->pc = 0x1B4AD0u;
            goto label_1b4ad0;
        }
    }
    ctx->pc = 0x1B4A98u;
    // 0x1b4a98: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1b4a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b4a9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b4a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b4aa0:
    // 0x1b4aa0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4AA0u;
    {
        const bool branch_taken_0x1b4aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4AA0u;
            // 0x1b4aa4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4aa0) {
            ctx->pc = 0x1B4AC0u;
            goto label_1b4ac0;
        }
    }
    ctx->pc = 0x1B4AA8u;
    // 0x1b4aa8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1b4aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b4aac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b4aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b4ab0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1b4ab0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b4ab4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1b4ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b4ab8: 0x40f809  jalr        $v0
    ctx->pc = 0x1B4AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B4AC0u);
        ctx->pc = 0x1B4ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4AB8u;
            // 0x1b4abc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B4AC0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4AA0u: goto label_1b4aa0;
            case 0x1B4AC0u: goto label_1b4ac0;
            case 0x1B4AD0u: goto label_1b4ad0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B4AC0u; }
            if (ctx->pc != 0x1B4AC0u) { return; }
        }
        }
    }
    ctx->pc = 0x1B4AC0u;
label_1b4ac0:
    // 0x1b4ac0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1b4ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b4ac4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b4ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4ac8: 0x5462fff5  bnel        $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1B4AC8u;
    {
        const bool branch_taken_0x1b4ac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b4ac8) {
            ctx->pc = 0x1B4ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4AC8u;
            // 0x1b4acc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B4AA0u;
            runtime->cooperativeGuestYield();
            goto label_1b4aa0;
        }
    }
    ctx->pc = 0x1B4AD0u;
label_1b4ad0:
    // 0x1b4ad0: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x1b4ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x1b4ad4: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x1b4ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x1b4ad8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b4ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b4adc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4AE0u;
            // 0x1b4ae4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4AA0u: goto label_1b4aa0;
            case 0x1B4AC0u: goto label_1b4ac0;
            case 0x1B4AD0u: goto label_1b4ad0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B4AE8u;
}
