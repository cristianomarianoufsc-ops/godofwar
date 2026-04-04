#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002990D0
// Address: 0x2990d0 - 0x299120
void sub_002990D0_0x2990d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002990D0_0x2990d0");
#endif

    ctx->pc = 0x2990d0u;

    // 0x2990d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2990d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2990d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2990d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2990d8: 0xc0a500c  jal         func_294030
    ctx->pc = 0x2990D8u;
    SET_GPR_U32(ctx, 31, 0x2990E0u);
    ctx->pc = 0x2990DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2990D8u;
            // 0x2990dc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294030u;
    if (runtime->hasFunction(0x294030u)) {
        auto targetFn = runtime->lookupFunction(0x294030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2990E0u; }
        if (ctx->pc != 0x2990E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_294030_0x294050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2990E0u; }
        if (ctx->pc != 0x2990E0u) { return; }
    }
    ctx->pc = 0x2990E0u;
    // 0x2990e0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2990e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2990e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2990e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2990e8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2990E8u;
    {
        const bool branch_taken_0x2990e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2990ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2990E8u;
            // 0x2990ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2990e8) {
            ctx->pc = 0x299114u;
            goto label_299114;
        }
    }
    ctx->pc = 0x2990F0u;
    // 0x2990f0: 0xc0a5028  jal         func_2940A0
    ctx->pc = 0x2990F0u;
    SET_GPR_U32(ctx, 31, 0x2990F8u);
    ctx->pc = 0x2940A0u;
    if (runtime->hasFunction(0x2940A0u)) {
        auto targetFn = runtime->lookupFunction(0x2940A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2990F8u; }
        if (ctx->pc != 0x2990F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2940a0_0x2940b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2990F8u; }
        if (ctx->pc != 0x2990F8u) { return; }
    }
    ctx->pc = 0x2990F8u;
    // 0x2990f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2990f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2990fc: 0xc0a69c0  jal         func_29A700
    ctx->pc = 0x2990FCu;
    SET_GPR_U32(ctx, 31, 0x299104u);
    ctx->pc = 0x299100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2990FCu;
            // 0x299100: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A700u;
    if (runtime->hasFunction(0x29A700u)) {
        auto targetFn = runtime->lookupFunction(0x29A700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299104u; }
        if (ctx->pc != 0x299104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29a700_0x29a7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299104u; }
        if (ctx->pc != 0x299104u) { return; }
    }
    ctx->pc = 0x299104u;
    // 0x299104: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x299104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299108: 0xc0a69c0  jal         func_29A700
    ctx->pc = 0x299108u;
    SET_GPR_U32(ctx, 31, 0x299110u);
    ctx->pc = 0x29910Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299108u;
            // 0x29910c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A700u;
    if (runtime->hasFunction(0x29A700u)) {
        auto targetFn = runtime->lookupFunction(0x29A700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299110u; }
        if (ctx->pc != 0x299110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29a700_0x29a7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299110u; }
        if (ctx->pc != 0x299110u) { return; }
    }
    ctx->pc = 0x299110u;
    // 0x299110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_299114:
    // 0x299114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299118: 0x3e00008  jr          $ra
    ctx->pc = 0x299118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29911Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299118u;
            // 0x29911c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x299114u: goto label_299114;
            default: break;
        }
        return;
    }
    ctx->pc = 0x299120u;
}
