#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00234588
// Address: 0x234588 - 0x2345e0
void sub_00234588_0x234588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234588_0x234588");
#endif

    ctx->pc = 0x234588u;

    // 0x234588: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x234588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23458c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x23458cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x234590: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x234590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x234594: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x234594u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234598: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x234598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x23459c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x23459cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2345a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2345a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2345a4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2345a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2345a8:
    // 0x2345a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2345a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2345ac: 0xc08d156  jal         func_234558
    ctx->pc = 0x2345ACu;
    SET_GPR_U32(ctx, 31, 0x2345B4u);
    ctx->pc = 0x2345B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2345ACu;
            // 0x2345b0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234558u;
    if (runtime->hasFunction(0x234558u)) {
        auto targetFn = runtime->lookupFunction(0x234558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2345B4u; }
        if (ctx->pc != 0x2345B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_234558_0x234588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2345B4u; }
        if (ctx->pc != 0x2345B4u) { return; }
    }
    ctx->pc = 0x2345B4u;
    // 0x2345b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2345b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2345b8: 0x1622fffb  bne         $s1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2345B8u;
    {
        const bool branch_taken_0x2345b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2345BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2345B8u;
            // 0x2345bc: 0x26100054  addiu       $s0, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2345b8) {
            ctx->pc = 0x2345A8u;
            runtime->cooperativeGuestYield();
            goto label_2345a8;
        }
    }
    ctx->pc = 0x2345C0u;
    // 0x2345c0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2345c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2345c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2345c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2345c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2345c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2345cc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2345ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2345d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2345d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2345d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2345D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2345D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2345D4u;
            // 0x2345d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2345A8u: goto label_2345a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2345DCu;
    // 0x2345dc: 0x0  nop
    ctx->pc = 0x2345dcu;
    // NOP
}
