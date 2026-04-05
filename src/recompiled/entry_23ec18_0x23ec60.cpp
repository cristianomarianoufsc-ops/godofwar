#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23ec18
// Address: 0x23ec18 - 0x23ec60
void entry_23ec18_0x23ec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23ec18_0x23ec60");
#endif

    ctx->pc = 0x23ec18u;

    // 0x23ec18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23ec18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23ec1c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23ec1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23ec20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23ec20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23ec24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23ec24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ec28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ec28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23ec2c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x23ec2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x23ec30: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23EC30u;
    {
        const bool branch_taken_0x23ec30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EC30u;
            // 0x23ec34: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec30) {
            ctx->pc = 0x23EC40u;
            goto label_23ec40;
        }
    }
    ctx->pc = 0x23EC38u;
    // 0x23ec38: 0xc04c4a2  jal         func_131288
    ctx->pc = 0x23EC38u;
    SET_GPR_U32(ctx, 31, 0x23EC40u);
    ctx->pc = 0x23EC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23EC38u;
            // 0x23ec3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131288u;
    if (runtime->hasFunction(0x131288u)) {
        auto targetFn = runtime->lookupFunction(0x131288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EC40u; }
        if (ctx->pc != 0x23EC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131288_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EC40u; }
        if (ctx->pc != 0x23EC40u) { return; }
    }
    ctx->pc = 0x23EC40u;
label_23ec40:
    // 0x23ec40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ec40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ec44: 0xc08e218  jal         func_238860
    ctx->pc = 0x23EC44u;
    SET_GPR_U32(ctx, 31, 0x23EC4Cu);
    ctx->pc = 0x23EC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23EC44u;
            // 0x23ec48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EC4Cu; }
        if (ctx->pc != 0x23EC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EC4Cu; }
        if (ctx->pc != 0x23EC4Cu) { return; }
    }
    ctx->pc = 0x23EC4Cu;
    // 0x23ec4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23ec4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ec50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23ec50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ec54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23ec54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ec58: 0x3e00008  jr          $ra
    ctx->pc = 0x23EC58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EC58u;
            // 0x23ec5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23EC40u: goto label_23ec40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23EC60u;
}
