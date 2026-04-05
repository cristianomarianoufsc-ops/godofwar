#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001520B0
// Address: 0x1520b0 - 0x152110
void sub_001520B0_0x1520b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001520B0_0x1520b0");
#endif

    ctx->pc = 0x1520b0u;

    // 0x1520b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1520b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1520b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1520b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1520b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1520b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1520bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1520bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1520c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1520c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1520c4: 0xae200074  sw          $zero, 0x74($s1)
    ctx->pc = 0x1520c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
    // 0x1520c8: 0xc05d506  jal         func_175418
    ctx->pc = 0x1520C8u;
    SET_GPR_U32(ctx, 31, 0x1520D0u);
    ctx->pc = 0x1520CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1520C8u;
            // 0x1520cc: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175418u;
    if (runtime->hasFunction(0x175418u)) {
        auto targetFn = runtime->lookupFunction(0x175418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1520D0u; }
        if (ctx->pc != 0x1520D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175418_0x175420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1520D0u; }
        if (ctx->pc != 0x1520D0u) { return; }
    }
    ctx->pc = 0x1520D0u;
    // 0x1520d0: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1520d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1520d4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1520D4u;
    {
        const bool branch_taken_0x1520d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1520D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1520D4u;
            // 0x1520d8: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1520d4) {
            ctx->pc = 0x1520F8u;
            goto label_1520f8;
        }
    }
    ctx->pc = 0x1520DCu;
    // 0x1520dc: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x1520dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_1520e0:
    // 0x1520e0: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x1520e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1520e4: 0xc0547fe  jal         func_151FF8
    ctx->pc = 0x1520E4u;
    SET_GPR_U32(ctx, 31, 0x1520ECu);
    ctx->pc = 0x1520E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1520E4u;
            // 0x1520e8: 0x10200a  movz        $a0, $zero, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151FF8u;
    if (runtime->hasFunction(0x151FF8u)) {
        auto targetFn = runtime->lookupFunction(0x151FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1520ECu; }
        if (ctx->pc != 0x1520ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151FF8_0x151ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1520ECu; }
        if (ctx->pc != 0x1520ECu) { return; }
    }
    ctx->pc = 0x1520ECu;
    // 0x1520ec: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1520ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1520f0: 0x5600fffb  bnel        $s0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1520F0u;
    {
        const bool branch_taken_0x1520f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1520f0) {
            ctx->pc = 0x1520F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1520F0u;
            // 0x1520f4: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1520E0u;
            runtime->cooperativeGuestYield();
            goto label_1520e0;
        }
    }
    ctx->pc = 0x1520F8u;
label_1520f8:
    // 0x1520f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1520f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1520fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1520fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152104: 0x3e00008  jr          $ra
    ctx->pc = 0x152104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152104u;
            // 0x152108: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1520E0u: goto label_1520e0;
            case 0x1520F8u: goto label_1520f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15210Cu;
    // 0x15210c: 0x0  nop
    ctx->pc = 0x15210cu;
    // NOP
}
