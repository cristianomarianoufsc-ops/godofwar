#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00101978
// Address: 0x101978 - 0x1019e0
void sub_00101978_0x101978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101978_0x101978");
#endif

    ctx->pc = 0x101978u;

    // 0x101978: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x101978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10197c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10197cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x101980: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x101980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x101984: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x101984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101988: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x101988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x10198c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x10198cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x101990: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x101990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x101994: 0x1044000e  beq         $v0, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x101994u;
    {
        const bool branch_taken_0x101994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x101998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101994u;
            // 0x101998: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101994) {
            ctx->pc = 0x1019D0u;
            goto label_1019d0;
        }
    }
    ctx->pc = 0x10199Cu;
    // 0x10199c: 0x0  nop
    ctx->pc = 0x10199cu;
    // NOP
label_1019a0:
    // 0x1019a0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1019a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1019a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1019a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1019a8: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1019a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1019ac: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1019acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1019b0: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1019b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1019b4: 0x40f809  jalr        $v0
    ctx->pc = 0x1019B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1019BCu);
        ctx->pc = 0x1019B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1019B4u;
            // 0x1019b8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1019BCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1019A0u: goto label_1019a0;
            case 0x1019D0u: goto label_1019d0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1019BCu; }
            if (ctx->pc != 0x1019BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1019BCu;
    // 0x1019bc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1019bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1019c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1019c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1019c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1019c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1019c8: 0x1443fff5  bne         $v0, $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1019C8u;
    {
        const bool branch_taken_0x1019c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1019CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1019C8u;
            // 0x1019cc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1019c8) {
            ctx->pc = 0x1019A0u;
            runtime->cooperativeGuestYield();
            goto label_1019a0;
        }
    }
    ctx->pc = 0x1019D0u;
label_1019d0:
    // 0x1019d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1019d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1019d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1019d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1019d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1019D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1019DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1019D8u;
            // 0x1019dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1019A0u: goto label_1019a0;
            case 0x1019D0u: goto label_1019d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1019E0u;
}
