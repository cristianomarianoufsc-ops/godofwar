#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173E30
// Address: 0x173e30 - 0x173e90
void sub_00173E30_0x173e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173E30_0x173e30");
#endif

    ctx->pc = 0x173e30u;

    // 0x173e30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x173e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x173e34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x173e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x173e38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173e3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x173e3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173e40: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x173e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x173e44: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x173e44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x173e48: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x173E48u;
    {
        const bool branch_taken_0x173e48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x173e48) {
            ctx->pc = 0x173E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173E48u;
            // 0x173e4c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173E80u;
            goto label_173e80;
        }
    }
    ctx->pc = 0x173E50u;
    // 0x173e50: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x173e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x173e54: 0x0  nop
    ctx->pc = 0x173e54u;
    // NOP
label_173e58:
    // 0x173e58: 0x2605fff8  addiu       $a1, $s0, -0x8
    ctx->pc = 0x173e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x173e5c: 0x10280a  movz        $a1, $zero, $s0
    ctx->pc = 0x173e5cu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x173e60: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x173e60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x173e64: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x173e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x173e68: 0x40f809  jalr        $v0
    ctx->pc = 0x173E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173E70u);
        ctx->pc = 0x173E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173E68u;
            // 0x173e6c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x173E70u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173E58u: goto label_173e58;
            case 0x173E80u: goto label_173e80;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173E70u; }
            if (ctx->pc != 0x173E70u) { return; }
        }
        }
    }
    ctx->pc = 0x173E70u;
    // 0x173e70: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x173e70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x173e74: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x173E74u;
    {
        const bool branch_taken_0x173e74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x173e74) {
            ctx->pc = 0x173E78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173E74u;
            // 0x173e78: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173E58u;
            runtime->cooperativeGuestYield();
            goto label_173e58;
        }
    }
    ctx->pc = 0x173E7Cu;
    // 0x173e7c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x173e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_173e80:
    // 0x173e80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173e80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173e84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173e88: 0x3e00008  jr          $ra
    ctx->pc = 0x173E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173E88u;
            // 0x173e8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173E58u: goto label_173e58;
            case 0x173E80u: goto label_173e80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173E90u;
}
