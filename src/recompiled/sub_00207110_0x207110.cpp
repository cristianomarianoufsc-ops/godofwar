#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00207110
// Address: 0x207110 - 0x207178
void sub_00207110_0x207110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207110_0x207110");
#endif

    ctx->pc = 0x207110u;

    // 0x207110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x207110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x207114: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x207114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x207118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20711c: 0xc081c1e  jal         func_207078
    ctx->pc = 0x20711Cu;
    SET_GPR_U32(ctx, 31, 0x207124u);
    ctx->pc = 0x207078u;
    if (runtime->hasFunction(0x207078u)) {
        auto targetFn = runtime->lookupFunction(0x207078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207124u; }
        if (ctx->pc != 0x207124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207078_0x207078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207124u; }
        if (ctx->pc != 0x207124u) { return; }
    }
    ctx->pc = 0x207124u;
    // 0x207124: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x207124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207128: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x207128u;
    {
        const bool branch_taken_0x207128 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20712Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207128u;
            // 0x20712c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207128) {
            ctx->pc = 0x207164u;
            goto label_207164;
        }
    }
    ctx->pc = 0x207130u;
    // 0x207130: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x207130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x207134: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x207134u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x207138: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x207138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x20713c: 0x40f809  jalr        $v0
    ctx->pc = 0x20713Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207144u);
        ctx->pc = 0x207140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20713Cu;
            // 0x207140: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x207144u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207164u: goto label_207164;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x207144u; }
            if (ctx->pc != 0x207144u) { return; }
        }
        }
    }
    ctx->pc = 0x207144u;
    // 0x207144: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x207144u;
    {
        const bool branch_taken_0x207144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207144) {
            ctx->pc = 0x207148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207144u;
            // 0x207148: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
            ctx->pc = 0x207164u;
            goto label_207164;
        }
    }
    ctx->pc = 0x20714Cu;
    // 0x20714c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20714cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x207150: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x207150u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x207154: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x207154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x207158: 0x40f809  jalr        $v0
    ctx->pc = 0x207158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207160u);
        ctx->pc = 0x20715Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207158u;
            // 0x20715c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x207160u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207164u: goto label_207164;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x207160u; }
            if (ctx->pc != 0x207160u) { return; }
        }
        }
    }
    ctx->pc = 0x207160u;
    // 0x207160: 0x8c4201b0  lw          $v0, 0x1B0($v0)
    ctx->pc = 0x207160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
label_207164:
    // 0x207164: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x207164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20716c: 0x3e00008  jr          $ra
    ctx->pc = 0x20716Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20716Cu;
            // 0x207170: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207164u: goto label_207164;
            default: break;
        }
        return;
    }
    ctx->pc = 0x207174u;
    // 0x207174: 0x0  nop
    ctx->pc = 0x207174u;
    // NOP
}
