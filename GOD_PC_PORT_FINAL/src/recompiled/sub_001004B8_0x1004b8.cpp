#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001004B8
// Address: 0x1004b8 - 0x100510
void sub_001004B8_0x1004b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001004B8_0x1004b8");
#endif

    ctx->pc = 0x1004b8u;

    // 0x1004b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1004b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1004bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1004bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1004c0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1004c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1004c4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1004c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1004c8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1004c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1004cc: 0x1044000d  beq         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1004CCu;
    {
        const bool branch_taken_0x1004cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1004D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1004CCu;
            // 0x1004d0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1004cc) {
            ctx->pc = 0x100504u;
            goto label_100504;
        }
    }
    ctx->pc = 0x1004D4u;
    // 0x1004d4: 0x0  nop
    ctx->pc = 0x1004d4u;
    // NOP
label_1004d8:
    // 0x1004d8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1004d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1004dc: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1004dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1004e0: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1004e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1004e4: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1004e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1004e8: 0x40f809  jalr        $v0
    ctx->pc = 0x1004E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1004F0u);
        ctx->pc = 0x1004ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1004E8u;
            // 0x1004ec: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1004F0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1004D8u: goto label_1004d8;
            case 0x100504u: goto label_100504;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1004F0u; }
            if (ctx->pc != 0x1004F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1004F0u;
    // 0x1004f0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1004f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1004f4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1004f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1004f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1004f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1004fc: 0x1443fff6  bne         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1004FCu;
    {
        const bool branch_taken_0x1004fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x100500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1004FCu;
            // 0x100500: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1004fc) {
            ctx->pc = 0x1004D8u;
            runtime->cooperativeGuestYield();
            goto label_1004d8;
        }
    }
    ctx->pc = 0x100504u;
label_100504:
    // 0x100504: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100508: 0x3e00008  jr          $ra
    ctx->pc = 0x100508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10050Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100508u;
            // 0x10050c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1004D8u: goto label_1004d8;
            case 0x100504u: goto label_100504;
            default: break;
        }
        return;
    }
    ctx->pc = 0x100510u;
}
