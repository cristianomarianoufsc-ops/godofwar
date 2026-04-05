#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00244E18
// Address: 0x244e18 - 0x244e68
void sub_00244E18_0x244e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244E18_0x244e18");
#endif

    ctx->pc = 0x244e18u;

    // 0x244e18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x244e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x244e1c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x244e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x244e20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x244e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x244e24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x244e24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244e28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244e2c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x244e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x244e30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x244E30u;
    {
        const bool branch_taken_0x244e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244E30u;
            // 0x244e34: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244e30) {
            ctx->pc = 0x244E40u;
            goto label_244e40;
        }
    }
    ctx->pc = 0x244E38u;
    // 0x244e38: 0xc08cc24  jal         func_233090
    ctx->pc = 0x244E38u;
    SET_GPR_U32(ctx, 31, 0x244E40u);
    ctx->pc = 0x233090u;
    if (runtime->hasFunction(0x233090u)) {
        auto targetFn = runtime->lookupFunction(0x233090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244E40u; }
        if (ctx->pc != 0x244E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00233090_0x233090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244E40u; }
        if (ctx->pc != 0x244E40u) { return; }
    }
    ctx->pc = 0x244E40u;
label_244e40:
    // 0x244e40: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x244e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x244e44: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x244E44u;
    {
        const bool branch_taken_0x244e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244e44) {
            ctx->pc = 0x244E48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x244E44u;
            // 0x244e48: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x244E58u;
            goto label_244e58;
        }
    }
    ctx->pc = 0x244E4Cu;
    // 0x244e4c: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x244E4Cu;
    SET_GPR_U32(ctx, 31, 0x244E54u);
    ctx->pc = 0x244E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244E4Cu;
            // 0x244e50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244E54u; }
        if (ctx->pc != 0x244E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244E54u; }
        if (ctx->pc != 0x244E54u) { return; }
    }
    ctx->pc = 0x244E54u;
    // 0x244e54: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x244e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_244e58:
    // 0x244e58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x244e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244e5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244e60: 0x3e00008  jr          $ra
    ctx->pc = 0x244E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244E60u;
            // 0x244e64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244E40u: goto label_244e40;
            case 0x244E58u: goto label_244e58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x244E68u;
}
