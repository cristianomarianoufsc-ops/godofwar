#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100B78
// Address: 0x100b78 - 0x100bf0
void sub_00100B78_0x100b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100B78_0x100b78");
#endif

    ctx->pc = 0x100b78u;

    // 0x100b78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x100b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x100b7c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x100b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x100b80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x100b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x100b84: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x100b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100b88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x100b8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x100b8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100b90: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x100b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x100b94: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x100b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x100b98: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x100b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x100b9c: 0x1044000f  beq         $v0, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x100B9Cu;
    {
        const bool branch_taken_0x100b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x100BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100B9Cu;
            // 0x100ba0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b9c) {
            ctx->pc = 0x100BDCu;
            goto label_100bdc;
        }
    }
    ctx->pc = 0x100BA4u;
    // 0x100ba4: 0x0  nop
    ctx->pc = 0x100ba4u;
    // NOP
label_100ba8:
    // 0x100ba8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x100ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x100bac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x100bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100bb0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x100bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100bb4: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x100bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x100bb8: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x100bb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x100bbc: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x100bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x100bc0: 0x40f809  jalr        $v0
    ctx->pc = 0x100BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x100BC8u);
        ctx->pc = 0x100BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100BC0u;
            // 0x100bc4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x100BC8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100BA8u: goto label_100ba8;
            case 0x100BDCu: goto label_100bdc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x100BC8u; }
            if (ctx->pc != 0x100BC8u) { return; }
        }
        }
    }
    ctx->pc = 0x100BC8u;
    // 0x100bc8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x100bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x100bcc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x100bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100bd0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x100bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100bd4: 0x1443fff4  bne         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x100BD4u;
    {
        const bool branch_taken_0x100bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x100BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100BD4u;
            // 0x100bd8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100bd4) {
            ctx->pc = 0x100BA8u;
            runtime->cooperativeGuestYield();
            goto label_100ba8;
        }
    }
    ctx->pc = 0x100BDCu;
label_100bdc:
    // 0x100bdc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x100bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x100be0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x100be0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100be4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100be8: 0x3e00008  jr          $ra
    ctx->pc = 0x100BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100BE8u;
            // 0x100bec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100BA8u: goto label_100ba8;
            case 0x100BDCu: goto label_100bdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x100BF0u;
}
