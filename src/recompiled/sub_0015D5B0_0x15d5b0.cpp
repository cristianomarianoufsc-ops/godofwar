#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015D5B0
// Address: 0x15d5b0 - 0x15d610
void sub_0015D5B0_0x15d5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D5B0_0x15d5b0");
#endif

    ctx->pc = 0x15d5b0u;

    // 0x15d5b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15d5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15d5b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15d5b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15d5bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15d5bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d5c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x15d5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x15d5c4: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x15d5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x15d5c8: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x15D5C8u;
    {
        const bool branch_taken_0x15d5c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d5c8) {
            ctx->pc = 0x15D5CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D5C8u;
            // 0x15d5cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D600u;
            goto label_15d600;
        }
    }
    ctx->pc = 0x15D5D0u;
    // 0x15d5d0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x15d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x15d5d4: 0x0  nop
    ctx->pc = 0x15d5d4u;
    // NOP
label_15d5d8:
    // 0x15d5d8: 0x2605fff8  addiu       $a1, $s0, -0x8
    ctx->pc = 0x15d5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x15d5dc: 0x10280a  movz        $a1, $zero, $s0
    ctx->pc = 0x15d5dcu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x15d5e0: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x15d5e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x15d5e4: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x15d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x15d5e8: 0x40f809  jalr        $v0
    ctx->pc = 0x15D5E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15D5F0u);
        ctx->pc = 0x15D5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D5E8u;
            // 0x15d5ec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15D5F0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D5D8u: goto label_15d5d8;
            case 0x15D600u: goto label_15d600;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15D5F0u; }
            if (ctx->pc != 0x15D5F0u) { return; }
        }
        }
    }
    ctx->pc = 0x15D5F0u;
    // 0x15d5f0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x15d5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15d5f4: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x15D5F4u;
    {
        const bool branch_taken_0x15d5f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d5f4) {
            ctx->pc = 0x15D5F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D5F4u;
            // 0x15d5f8: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D5D8u;
            runtime->cooperativeGuestYield();
            goto label_15d5d8;
        }
    }
    ctx->pc = 0x15D5FCu;
    // 0x15d5fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15d5fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15d600:
    // 0x15d600: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d608: 0x3e00008  jr          $ra
    ctx->pc = 0x15D608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D608u;
            // 0x15d60c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D5D8u: goto label_15d5d8;
            case 0x15D600u: goto label_15d600;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D610u;
}
