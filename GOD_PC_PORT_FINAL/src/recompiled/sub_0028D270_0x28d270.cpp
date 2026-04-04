#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028D270
// Address: 0x28d270 - 0x28d2f0
void sub_0028D270_0x28d270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D270_0x28d270");
#endif

    ctx->pc = 0x28d270u;

    // 0x28d270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28d270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28d274: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28d274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28d278: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x28d278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x28d27c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28d27cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d280: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x28d280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x28d284: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28d284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d288: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28D288u;
    {
        const bool branch_taken_0x28d288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D288u;
            // 0x28d28c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d288) {
            ctx->pc = 0x28D294u;
            goto label_28d294;
        }
    }
    ctx->pc = 0x28D290u;
label_28d290:
    // 0x28d290: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28d290u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_28d294:
    // 0x28d294: 0x82240000  lb          $a0, 0x0($s1)
    ctx->pc = 0x28d294u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28d298: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28D298u;
    {
        const bool branch_taken_0x28d298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d298) {
            ctx->pc = 0x28D2BCu;
            goto label_28d2bc;
        }
    }
    ctx->pc = 0x28D2A0u;
    // 0x28d2a0: 0xc0a442c  jal         func_2910B0
    ctx->pc = 0x28D2A0u;
    SET_GPR_U32(ctx, 31, 0x28D2A8u);
    ctx->pc = 0x2910B0u;
    if (runtime->hasFunction(0x2910B0u)) {
        auto targetFn = runtime->lookupFunction(0x2910B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D2A8u; }
        if (ctx->pc != 0x28D2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2910b0_0x2910d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D2A8u; }
        if (ctx->pc != 0x28D2A8u) { return; }
    }
    ctx->pc = 0x28D2A8u;
    // 0x28d2a8: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x28d2a8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28d2ac: 0xc0a442c  jal         func_2910B0
    ctx->pc = 0x28D2ACu;
    SET_GPR_U32(ctx, 31, 0x28D2B4u);
    ctx->pc = 0x28D2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D2ACu;
            // 0x28d2b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2910B0u;
    if (runtime->hasFunction(0x2910B0u)) {
        auto targetFn = runtime->lookupFunction(0x2910B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D2B4u; }
        if (ctx->pc != 0x28D2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2910b0_0x2910d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D2B4u; }
        if (ctx->pc != 0x28D2B4u) { return; }
    }
    ctx->pc = 0x28D2B4u;
    // 0x28d2b4: 0x5202fff6  beql        $s0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x28D2B4u;
    {
        const bool branch_taken_0x28d2b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x28d2b4) {
            ctx->pc = 0x28D2B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28D2B4u;
            // 0x28d2b8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28D290u;
            runtime->cooperativeGuestYield();
            goto label_28d290;
        }
    }
    ctx->pc = 0x28D2BCu;
label_28d2bc:
    // 0x28d2bc: 0xc0a442c  jal         func_2910B0
    ctx->pc = 0x28D2BCu;
    SET_GPR_U32(ctx, 31, 0x28D2C4u);
    ctx->pc = 0x28D2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D2BCu;
            // 0x28d2c0: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2910B0u;
    if (runtime->hasFunction(0x2910B0u)) {
        auto targetFn = runtime->lookupFunction(0x2910B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D2C4u; }
        if (ctx->pc != 0x28D2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2910b0_0x2910d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D2C4u; }
        if (ctx->pc != 0x28D2C4u) { return; }
    }
    ctx->pc = 0x28D2C4u;
    // 0x28d2c4: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x28d2c4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28d2c8: 0xc0a442c  jal         func_2910B0
    ctx->pc = 0x28D2C8u;
    SET_GPR_U32(ctx, 31, 0x28D2D0u);
    ctx->pc = 0x28D2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D2C8u;
            // 0x28d2cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2910B0u;
    if (runtime->hasFunction(0x2910B0u)) {
        auto targetFn = runtime->lookupFunction(0x2910B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D2D0u; }
        if (ctx->pc != 0x28D2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2910b0_0x2910d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D2D0u; }
        if (ctx->pc != 0x28D2D0u) { return; }
    }
    ctx->pc = 0x28D2D0u;
    // 0x28d2d0: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x28d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28d2d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28d2d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d2d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28d2d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d2dc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x28d2dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d2e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28d2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x28D2E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D2E4u;
            // 0x28d2e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28D290u: goto label_28d290;
            case 0x28D294u: goto label_28d294;
            case 0x28D2BCu: goto label_28d2bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28D2ECu;
    // 0x28d2ec: 0x0  nop
    ctx->pc = 0x28d2ecu;
    // NOP
}
