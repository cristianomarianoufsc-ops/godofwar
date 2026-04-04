#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00166C58
// Address: 0x166c58 - 0x166cc8
void sub_00166C58_0x166c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166C58_0x166c58");
#endif

    ctx->pc = 0x166c58u;

    // 0x166c58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x166c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x166c5c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x166c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x166c60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x166c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x166c64: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x166c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x166c68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x166c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166c6c: 0xc059ab2  jal         func_166AC8
    ctx->pc = 0x166C6Cu;
    SET_GPR_U32(ctx, 31, 0x166C74u);
    ctx->pc = 0x166C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166C6Cu;
            // 0x166c70: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166AC8u;
    if (runtime->hasFunction(0x166AC8u)) {
        auto targetFn = runtime->lookupFunction(0x166AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C74u; }
        if (ctx->pc != 0x166C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166AC8_0x166ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C74u; }
        if (ctx->pc != 0x166C74u) { return; }
    }
    ctx->pc = 0x166C74u;
    // 0x166c74: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x166c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x166c78: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x166C78u;
    {
        const bool branch_taken_0x166c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x166C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166C78u;
            // 0x166c7c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c78) {
            ctx->pc = 0x166C9Cu;
            goto label_166c9c;
        }
    }
    ctx->pc = 0x166C80u;
    // 0x166c80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x166c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166c84: 0x0  nop
    ctx->pc = 0x166c84u;
    // NOP
label_166c88:
    // 0x166c88: 0xc059ab2  jal         func_166AC8
    ctx->pc = 0x166C88u;
    SET_GPR_U32(ctx, 31, 0x166C90u);
    ctx->pc = 0x166C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166C88u;
            // 0x166c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166AC8u;
    if (runtime->hasFunction(0x166AC8u)) {
        auto targetFn = runtime->lookupFunction(0x166AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C90u; }
        if (ctx->pc != 0x166C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166AC8_0x166ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C90u; }
        if (ctx->pc != 0x166C90u) { return; }
    }
    ctx->pc = 0x166C90u;
    // 0x166c90: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x166c90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x166c94: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x166C94u;
    {
        const bool branch_taken_0x166c94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x166C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166C94u;
            // 0x166c98: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c94) {
            ctx->pc = 0x166C88u;
            runtime->cooperativeGuestYield();
            goto label_166c88;
        }
    }
    ctx->pc = 0x166C9Cu;
label_166c9c:
    // 0x166c9c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x166C9Cu;
    {
        const bool branch_taken_0x166c9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x166CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166C9Cu;
            // 0x166ca0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c9c) {
            ctx->pc = 0x166CB0u;
            goto label_166cb0;
        }
    }
    ctx->pc = 0x166CA4u;
    // 0x166ca4: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x166ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x166ca8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x166ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x166cac: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x166cacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
label_166cb0:
    // 0x166cb0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x166cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166cb4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x166cb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166cb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x166cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x166CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166CBCu;
            // 0x166cc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166C88u: goto label_166c88;
            case 0x166C9Cu: goto label_166c9c;
            case 0x166CB0u: goto label_166cb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166CC4u;
    // 0x166cc4: 0x0  nop
    ctx->pc = 0x166cc4u;
    // NOP
}
