#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00101A00
// Address: 0x101a00 - 0x101a78
void sub_00101A00_0x101a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101A00_0x101a00");
#endif

    ctx->pc = 0x101a00u;

    // 0x101a00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x101a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x101a04: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x101a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x101a08: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x101a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x101a0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x101a0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101a10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x101a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x101a14: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x101a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x101a18: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x101a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x101a1c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x101a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x101a20: 0x1044000f  beq         $v0, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x101A20u;
    {
        const bool branch_taken_0x101a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x101A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101A20u;
            // 0x101a24: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a20) {
            ctx->pc = 0x101A60u;
            goto label_101a60;
        }
    }
    ctx->pc = 0x101A28u;
label_101a28:
    // 0x101a28: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x101a28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x101a2c: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x101a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x101a30: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x101a30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x101a34: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x101a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x101a38: 0x40f809  jalr        $v0
    ctx->pc = 0x101A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x101A40u);
        ctx->pc = 0x101A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101A38u;
            // 0x101a3c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x101A40u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101A28u: goto label_101a28;
            case 0x101A50u: goto label_101a50;
            case 0x101A60u: goto label_101a60;
            case 0x101A64u: goto label_101a64;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x101A40u; }
            if (ctx->pc != 0x101A40u) { return; }
        }
        }
    }
    ctx->pc = 0x101A40u;
    // 0x101a40: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x101A40u;
    {
        const bool branch_taken_0x101a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x101A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101A40u;
            // 0x101a44: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a40) {
            ctx->pc = 0x101A50u;
            goto label_101a50;
        }
    }
    ctx->pc = 0x101A48u;
    // 0x101a48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x101A48u;
    {
        const bool branch_taken_0x101a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101A48u;
            // 0x101a4c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a48) {
            ctx->pc = 0x101A64u;
            goto label_101a64;
        }
    }
    ctx->pc = 0x101A50u;
label_101a50:
    // 0x101a50: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x101a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101a54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x101a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101a58: 0x1443fff3  bne         $v0, $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x101A58u;
    {
        const bool branch_taken_0x101a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x101A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101A58u;
            // 0x101a5c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a58) {
            ctx->pc = 0x101A28u;
            runtime->cooperativeGuestYield();
            goto label_101a28;
        }
    }
    ctx->pc = 0x101A60u;
label_101a60:
    // 0x101a60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x101a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101a64:
    // 0x101a64: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x101a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101a68: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x101a68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101a6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x101a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101a70: 0x3e00008  jr          $ra
    ctx->pc = 0x101A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101A70u;
            // 0x101a74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101A28u: goto label_101a28;
            case 0x101A50u: goto label_101a50;
            case 0x101A60u: goto label_101a60;
            case 0x101A64u: goto label_101a64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101A78u;
}
