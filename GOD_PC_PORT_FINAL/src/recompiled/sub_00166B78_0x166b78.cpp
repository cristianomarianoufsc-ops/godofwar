#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00166B78
// Address: 0x166b78 - 0x166be8
void sub_00166B78_0x166b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166B78_0x166b78");
#endif

    ctx->pc = 0x166b78u;

    // 0x166b78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x166b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x166b7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x166b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x166b80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x166b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166b84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x166b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166b88: 0xc0533c8  jal         func_14CF20
    ctx->pc = 0x166B88u;
    SET_GPR_U32(ctx, 31, 0x166B90u);
    ctx->pc = 0x166B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166B88u;
            // 0x166b8c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14CF20u;
    if (runtime->hasFunction(0x14CF20u)) {
        auto targetFn = runtime->lookupFunction(0x14CF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166B90u; }
        if (ctx->pc != 0x166B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014CF20_0x14cf20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166B90u; }
        if (ctx->pc != 0x166B90u) { return; }
    }
    ctx->pc = 0x166B90u;
    // 0x166b90: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x166b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x166b94: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x166B94u;
    {
        const bool branch_taken_0x166b94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x166b94) {
            ctx->pc = 0x166B98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166B94u;
            // 0x166b98: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166BA8u;
            goto label_166ba8;
        }
    }
    ctx->pc = 0x166B9Cu;
    // 0x166b9c: 0xc0533c8  jal         func_14CF20
    ctx->pc = 0x166B9Cu;
    SET_GPR_U32(ctx, 31, 0x166BA4u);
    ctx->pc = 0x14CF20u;
    if (runtime->hasFunction(0x14CF20u)) {
        auto targetFn = runtime->lookupFunction(0x14CF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166BA4u; }
        if (ctx->pc != 0x166BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014CF20_0x14cf20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166BA4u; }
        if (ctx->pc != 0x166BA4u) { return; }
    }
    ctx->pc = 0x166BA4u;
    // 0x166ba4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x166ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_166ba8:
    // 0x166ba8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x166BA8u;
    {
        const bool branch_taken_0x166ba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x166BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166BA8u;
            // 0x166bac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ba8) {
            ctx->pc = 0x166BD8u;
            goto label_166bd8;
        }
    }
    ctx->pc = 0x166BB0u;
label_166bb0:
    // 0x166bb0: 0xc0533c8  jal         func_14CF20
    ctx->pc = 0x166BB0u;
    SET_GPR_U32(ctx, 31, 0x166BB8u);
    ctx->pc = 0x166BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166BB0u;
            // 0x166bb4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14CF20u;
    if (runtime->hasFunction(0x14CF20u)) {
        auto targetFn = runtime->lookupFunction(0x14CF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166BB8u; }
        if (ctx->pc != 0x166BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014CF20_0x14cf20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166BB8u; }
        if (ctx->pc != 0x166BB8u) { return; }
    }
    ctx->pc = 0x166BB8u;
    // 0x166bb8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x166bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x166bbc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x166BBCu;
    {
        const bool branch_taken_0x166bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x166bbc) {
            ctx->pc = 0x166BC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166BBCu;
            // 0x166bc0: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166BD0u;
            goto label_166bd0;
        }
    }
    ctx->pc = 0x166BC4u;
    // 0x166bc4: 0xc0533c8  jal         func_14CF20
    ctx->pc = 0x166BC4u;
    SET_GPR_U32(ctx, 31, 0x166BCCu);
    ctx->pc = 0x14CF20u;
    if (runtime->hasFunction(0x14CF20u)) {
        auto targetFn = runtime->lookupFunction(0x14CF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166BCCu; }
        if (ctx->pc != 0x166BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014CF20_0x14cf20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166BCCu; }
        if (ctx->pc != 0x166BCCu) { return; }
    }
    ctx->pc = 0x166BCCu;
    // 0x166bcc: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x166bccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_166bd0:
    // 0x166bd0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x166BD0u;
    {
        const bool branch_taken_0x166bd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x166bd0) {
            ctx->pc = 0x166BB0u;
            runtime->cooperativeGuestYield();
            goto label_166bb0;
        }
    }
    ctx->pc = 0x166BD8u;
label_166bd8:
    // 0x166bd8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x166bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166bdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x166bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166be0: 0x3e00008  jr          $ra
    ctx->pc = 0x166BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166BE0u;
            // 0x166be4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166BA8u: goto label_166ba8;
            case 0x166BB0u: goto label_166bb0;
            case 0x166BD0u: goto label_166bd0;
            case 0x166BD8u: goto label_166bd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166BE8u;
}
