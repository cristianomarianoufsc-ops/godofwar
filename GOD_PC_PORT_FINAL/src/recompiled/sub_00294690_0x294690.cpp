#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00294690
// Address: 0x294690 - 0x2946f8
void sub_00294690_0x294690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294690_0x294690");
#endif

    ctx->pc = 0x294690u;

    // 0x294690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x294690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x294694: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x294694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x294698: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x294698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29469c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29469cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2946a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2946a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2946a4: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x2946a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x2946a8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2946a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2946ac: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2946acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2946b0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2946B0u;
    {
        const bool branch_taken_0x2946b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2946b0) {
            ctx->pc = 0x2946C0u;
            goto label_2946c0;
        }
    }
    ctx->pc = 0x2946B8u;
    // 0x2946b8: 0xc0a648c  jal         func_299230
    ctx->pc = 0x2946B8u;
    SET_GPR_U32(ctx, 31, 0x2946C0u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2946C0u; }
        if (ctx->pc != 0x2946C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2946C0u; }
        if (ctx->pc != 0x2946C0u) { return; }
    }
    ctx->pc = 0x2946C0u;
label_2946c0:
    // 0x2946c0: 0xc0a4e58  jal         func_293960
    ctx->pc = 0x2946C0u;
    SET_GPR_U32(ctx, 31, 0x2946C8u);
    ctx->pc = 0x2946C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2946C0u;
            // 0x2946c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293960u;
    if (runtime->hasFunction(0x293960u)) {
        auto targetFn = runtime->lookupFunction(0x293960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2946C8u; }
        if (ctx->pc != 0x2946C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293960_0x293970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2946C8u; }
        if (ctx->pc != 0x2946C8u) { return; }
    }
    ctx->pc = 0x2946C8u;
    // 0x2946c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2946c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2946cc: 0xf  sync
    ctx->pc = 0x2946ccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2946d0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2946D0u;
    {
        const bool branch_taken_0x2946d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2946D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2946D0u;
            // 0x2946d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2946d0) {
            ctx->pc = 0x2946E4u;
            goto label_2946e4;
        }
    }
    ctx->pc = 0x2946D8u;
    // 0x2946d8: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x2946D8u;
    SET_GPR_U32(ctx, 31, 0x2946E0u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2946E0u; }
        if (ctx->pc != 0x2946E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2946E0u; }
        if (ctx->pc != 0x2946E0u) { return; }
    }
    ctx->pc = 0x2946E0u;
    // 0x2946e0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2946e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2946e4:
    // 0x2946e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2946e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2946e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2946e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2946ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2946ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2946f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2946F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2946F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2946F0u;
            // 0x2946f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2946C0u: goto label_2946c0;
            case 0x2946E4u: goto label_2946e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2946F8u;
}
