#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00149B10
// Address: 0x149b10 - 0x149b60
void sub_00149B10_0x149b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149B10_0x149b10");
#endif

    ctx->pc = 0x149b10u;

    // 0x149b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149b14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x149b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x149b18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x149b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149b1c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x149B1Cu;
    {
        const bool branch_taken_0x149b1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x149B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149B1Cu;
            // 0x149b20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b1c) {
            ctx->pc = 0x149B4Cu;
            goto label_149b4c;
        }
    }
    ctx->pc = 0x149B24u;
    // 0x149b24: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x149b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_149b28:
    // 0x149b28: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x149b28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x149b2c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x149b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x149b30: 0x40f809  jalr        $v0
    ctx->pc = 0x149B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x149B38u);
        ctx->pc = 0x149B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149B30u;
            // 0x149b34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x149B38u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x149B28u: goto label_149b28;
            case 0x149B4Cu: goto label_149b4c;
            case 0x149B50u: goto label_149b50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x149B38u; }
            if (ctx->pc != 0x149B38u) { return; }
        }
        }
    }
    ctx->pc = 0x149B38u;
    // 0x149b38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x149B38u;
    {
        const bool branch_taken_0x149b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149B38u;
            // 0x149b3c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b38) {
            ctx->pc = 0x149B50u;
            goto label_149b50;
        }
    }
    ctx->pc = 0x149B40u;
    // 0x149b40: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x149b40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x149b44: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x149B44u;
    {
        const bool branch_taken_0x149b44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x149b44) {
            ctx->pc = 0x149B48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x149B44u;
            // 0x149b48: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x149B28u;
            runtime->cooperativeGuestYield();
            goto label_149b28;
        }
    }
    ctx->pc = 0x149B4Cu;
label_149b4c:
    // 0x149b4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x149b4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_149b50:
    // 0x149b50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x149b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149b58: 0x3e00008  jr          $ra
    ctx->pc = 0x149B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149B58u;
            // 0x149b5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x149B28u: goto label_149b28;
            case 0x149B4Cu: goto label_149b4c;
            case 0x149B50u: goto label_149b50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x149B60u;
}
