#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D2AD8
// Address: 0x1d2ad8 - 0x1d2b50
void sub_001D2AD8_0x1d2ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2AD8_0x1d2ad8");
#endif

    ctx->pc = 0x1d2ad8u;

    // 0x1d2ad8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d2ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d2adc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d2adcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d2ae0: 0x8c432878  lw          $v1, 0x2878($v0)
    ctx->pc = 0x1d2ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10360)));
    // 0x1d2ae4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d2ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d2ae8: 0x24422878  addiu       $v0, $v0, 0x2878
    ctx->pc = 0x1d2ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10360));
    // 0x1d2aec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d2aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d2af0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d2af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2af4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1d2af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1d2af8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D2AF8u;
    {
        const bool branch_taken_0x1d2af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D2AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2AF8u;
            // 0x1d2afc: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2af8) {
            ctx->pc = 0x1D2B40u;
            goto label_1d2b40;
        }
    }
    ctx->pc = 0x1D2B00u;
    // 0x1d2b00: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1d2b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1d2b04: 0x0  nop
    ctx->pc = 0x1d2b04u;
    // NOP
label_1d2b08:
    // 0x1d2b08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d2b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b0c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1d2b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d2b10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d2b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d2b14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d2b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d2b18: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1d2b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1d2b1c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d2b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d2b20: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1d2b20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x1d2b24: 0x8c4200fc  lw          $v0, 0xFC($v0)
    ctx->pc = 0x1d2b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1d2b28: 0x40f809  jalr        $v0
    ctx->pc = 0x1D2B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D2B30u);
        ctx->pc = 0x1D2B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2B28u;
            // 0x1d2b2c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D2B30u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2B08u: goto label_1d2b08;
            case 0x1D2B40u: goto label_1d2b40;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D2B30u; }
            if (ctx->pc != 0x1D2B30u) { return; }
        }
        }
    }
    ctx->pc = 0x1D2B30u;
    // 0x1d2b30: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1d2b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1d2b34: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1d2b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2b38: 0x1462fff3  bne         $v1, $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D2B38u;
    {
        const bool branch_taken_0x1d2b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D2B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2B38u;
            // 0x1d2b3c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b38) {
            ctx->pc = 0x1D2B08u;
            runtime->cooperativeGuestYield();
            goto label_1d2b08;
        }
    }
    ctx->pc = 0x1D2B40u;
label_1d2b40:
    // 0x1d2b40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d2b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2b44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d2b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2b48: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2B48u;
            // 0x1d2b4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2B08u: goto label_1d2b08;
            case 0x1D2B40u: goto label_1d2b40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D2B50u;
}
