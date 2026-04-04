#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00144790
// Address: 0x144790 - 0x1447e0
void sub_00144790_0x144790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144790_0x144790");
#endif

    ctx->pc = 0x144790u;

    // 0x144790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x144790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x144794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x144794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144798: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x144798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14479c: 0x8c900ce0  lw          $s0, 0xCE0($a0)
    ctx->pc = 0x14479cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3296)));
    // 0x1447a0: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1447A0u;
    {
        const bool branch_taken_0x1447a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1447a0) {
            ctx->pc = 0x1447A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1447A0u;
            // 0x1447a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1447D0u;
            goto label_1447d0;
        }
    }
    ctx->pc = 0x1447A8u;
    // 0x1447a8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1447a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1447ac: 0x0  nop
    ctx->pc = 0x1447acu;
    // NOP
label_1447b0:
    // 0x1447b0: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1447b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1447b4: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1447b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1447b8: 0x40f809  jalr        $v0
    ctx->pc = 0x1447B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1447C0u);
        ctx->pc = 0x1447BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1447B8u;
            // 0x1447bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1447C0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1447B0u: goto label_1447b0;
            case 0x1447D0u: goto label_1447d0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1447C0u; }
            if (ctx->pc != 0x1447C0u) { return; }
        }
        }
    }
    ctx->pc = 0x1447C0u;
    // 0x1447c0: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x1447c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1447c4: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1447C4u;
    {
        const bool branch_taken_0x1447c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1447c4) {
            ctx->pc = 0x1447C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1447C4u;
            // 0x1447c8: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1447B0u;
            runtime->cooperativeGuestYield();
            goto label_1447b0;
        }
    }
    ctx->pc = 0x1447CCu;
    // 0x1447cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1447ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1447d0:
    // 0x1447d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1447d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1447d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1447D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1447D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1447D4u;
            // 0x1447d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1447B0u: goto label_1447b0;
            case 0x1447D0u: goto label_1447d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1447DCu;
    // 0x1447dc: 0x0  nop
    ctx->pc = 0x1447dcu;
    // NOP
}
