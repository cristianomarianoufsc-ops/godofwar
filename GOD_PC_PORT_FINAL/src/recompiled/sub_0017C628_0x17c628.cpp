#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017C628
// Address: 0x17c628 - 0x17c688
void sub_0017C628_0x17c628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C628_0x17c628");
#endif

    ctx->pc = 0x17c628u;

    // 0x17c628: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17c628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17c62c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17c62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17c630: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17c630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17c634: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17c634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c63c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17c63cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c640: 0xc0618ee  jal         func_1863B8
    ctx->pc = 0x17C640u;
    SET_GPR_U32(ctx, 31, 0x17C648u);
    ctx->pc = 0x17C644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C640u;
            // 0x17c644: 0x96040000  lhu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1863B8u;
    if (runtime->hasFunction(0x1863B8u)) {
        auto targetFn = runtime->lookupFunction(0x1863B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C648u; }
        if (ctx->pc != 0x17C648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1863b8_0x186418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C648u; }
        if (ctx->pc != 0x17C648u) { return; }
    }
    ctx->pc = 0x17C648u;
    // 0x17c648: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C648u;
    {
        const bool branch_taken_0x17c648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C648u;
            // 0x17c64c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c648) {
            ctx->pc = 0x17C658u;
            goto label_17c658;
        }
    }
    ctx->pc = 0x17C650u;
    // 0x17c650: 0x40f809  jalr        $v0
    ctx->pc = 0x17C650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17C658u);
        ctx->pc = 0x17C654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C650u;
            // 0x17c654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17C658u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C658u: goto label_17c658;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17C658u; }
            if (ctx->pc != 0x17C658u) { return; }
        }
        }
    }
    ctx->pc = 0x17C658u;
label_17c658:
    // 0x17c658: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17c658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17c65c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x17c65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x17c660: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x17c660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x17c664: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17c664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c668: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x17c668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x17c66c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17c66cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c670: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x17c670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x17c674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c678: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x17c678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x17c67c: 0x3e00008  jr          $ra
    ctx->pc = 0x17C67Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C67Cu;
            // 0x17c680: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C658u: goto label_17c658;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17C684u;
    // 0x17c684: 0x0  nop
    ctx->pc = 0x17c684u;
    // NOP
}
