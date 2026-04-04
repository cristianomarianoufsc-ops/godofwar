#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173798
// Address: 0x173798 - 0x1737f8
void sub_00173798_0x173798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173798_0x173798");
#endif

    ctx->pc = 0x173798u;

    // 0x173798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x173798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17379c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17379cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1737a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1737a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1737a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1737a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1737a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1737a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1737ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1737acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1737b0: 0xc05cd44  jal         func_173510
    ctx->pc = 0x1737B0u;
    SET_GPR_U32(ctx, 31, 0x1737B8u);
    ctx->pc = 0x1737B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1737B0u;
            // 0x1737b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173510u;
    if (runtime->hasFunction(0x173510u)) {
        auto targetFn = runtime->lookupFunction(0x173510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1737B8u; }
        if (ctx->pc != 0x1737B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_173510_0x173528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1737B8u; }
        if (ctx->pc != 0x1737B8u) { return; }
    }
    ctx->pc = 0x1737B8u;
    // 0x1737b8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1737B8u;
    {
        const bool branch_taken_0x1737b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1737b8) {
            ctx->pc = 0x1737BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1737B8u;
            // 0x1737bc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1737D4u;
            goto label_1737d4;
        }
    }
    ctx->pc = 0x1737C0u;
    // 0x1737c0: 0xc05cd5c  jal         func_173570
    ctx->pc = 0x1737C0u;
    SET_GPR_U32(ctx, 31, 0x1737C8u);
    ctx->pc = 0x1737C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1737C0u;
            // 0x1737c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173570u;
    if (runtime->hasFunction(0x173570u)) {
        auto targetFn = runtime->lookupFunction(0x173570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1737C8u; }
        if (ctx->pc != 0x1737C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_173570_0x173690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1737C8u; }
        if (ctx->pc != 0x1737C8u) { return; }
    }
    ctx->pc = 0x1737C8u;
    // 0x1737c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1737C8u;
    {
        const bool branch_taken_0x1737c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1737c8) {
            ctx->pc = 0x1737CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1737C8u;
            // 0x1737cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1737E0u;
            goto label_1737e0;
        }
    }
    ctx->pc = 0x1737D0u;
    // 0x1737d0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1737d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1737d4:
    // 0x1737d4: 0xc05cdde  jal         func_173778
    ctx->pc = 0x1737D4u;
    SET_GPR_U32(ctx, 31, 0x1737DCu);
    ctx->pc = 0x1737D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1737D4u;
            // 0x1737d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173778u;
    if (runtime->hasFunction(0x173778u)) {
        auto targetFn = runtime->lookupFunction(0x173778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1737DCu; }
        if (ctx->pc != 0x1737DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173778_0x173778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1737DCu; }
        if (ctx->pc != 0x1737DCu) { return; }
    }
    ctx->pc = 0x1737DCu;
    // 0x1737dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1737dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1737e0:
    // 0x1737e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1737e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1737e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1737e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1737e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1737E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1737ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1737E8u;
            // 0x1737ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1737D4u: goto label_1737d4;
            case 0x1737E0u: goto label_1737e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1737F0u;
    // 0x1737f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1737f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1737f4: 0x0  nop
    ctx->pc = 0x1737f4u;
    // NOP
}
