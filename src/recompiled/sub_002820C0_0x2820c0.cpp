#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002820C0
// Address: 0x2820c0 - 0x282148
void sub_002820C0_0x2820c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002820C0_0x2820c0");
#endif

    ctx->pc = 0x2820c0u;

    // 0x2820c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2820c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2820c4: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x2820c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x2820c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2820c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2820cc: 0x8c442740  lw          $a0, 0x2740($v0)
    ctx->pc = 0x2820ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10048)));
    // 0x2820d0: 0x3c100032  lui         $s0, 0x32
    ctx->pc = 0x2820d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
    // 0x2820d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2820d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2820d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2820d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2820dc: 0xc0a4f18  jal         func_293C60
    ctx->pc = 0x2820DCu;
    SET_GPR_U32(ctx, 31, 0x2820E4u);
    ctx->pc = 0x2820E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2820DCu;
            // 0x2820e0: 0x26114840  addiu       $s1, $s0, 0x4840 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 18496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2820E4u; }
        if (ctx->pc != 0x2820E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2820E4u; }
        if (ctx->pc != 0x2820E4u) { return; }
    }
    ctx->pc = 0x2820E4u;
    // 0x2820e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2820e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2820e8: 0xc0a5118  jal         func_294460
    ctx->pc = 0x2820E8u;
    SET_GPR_U32(ctx, 31, 0x2820F0u);
    ctx->pc = 0x2820ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2820E8u;
            // 0x2820ec: 0x2625007f  addiu       $a1, $s1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 127));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294460u;
    if (runtime->hasFunction(0x294460u)) {
        auto targetFn = runtime->lookupFunction(0x294460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2820F0u; }
        if (ctx->pc != 0x2820F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294460_0x294460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2820F0u; }
        if (ctx->pc != 0x2820F0u) { return; }
    }
    ctx->pc = 0x2820F0u;
    // 0x2820f0: 0x8e024840  lw          $v0, 0x4840($s0)
    ctx->pc = 0x2820f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18496)));
    // 0x2820f4: 0x58400001  blezl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2820F4u;
    {
        const bool branch_taken_0x2820f4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2820f4) {
            ctx->pc = 0x2820F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2820F4u;
            // 0x2820f8: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2820FCu;
            goto label_2820fc;
        }
    }
    ctx->pc = 0x2820FCu;
label_2820fc:
    // 0x2820fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2820fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282100: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x282100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282104: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x282104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282108: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x282108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28210c: 0x3e00008  jr          $ra
    ctx->pc = 0x28210Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28210Cu;
            // 0x282110: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2820FCu: goto label_2820fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282114u;
    // 0x282114: 0x0  nop
    ctx->pc = 0x282114u;
    // NOP
    // 0x282118: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x282118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x28211c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28211cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x282120: 0x8c442740  lw          $a0, 0x2740($v0)
    ctx->pc = 0x282120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10048)));
    // 0x282124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282128: 0xc0a4f14  jal         func_293C50
    ctx->pc = 0x282128u;
    SET_GPR_U32(ctx, 31, 0x282130u);
    ctx->pc = 0x293C50u;
    if (runtime->hasFunction(0x293C50u)) {
        auto targetFn = runtime->lookupFunction(0x293C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282130u; }
        if (ctx->pc != 0x282130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c50_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282130u; }
        if (ctx->pc != 0x282130u) { return; }
    }
    ctx->pc = 0x282130u;
    // 0x282130: 0xf  sync
    ctx->pc = 0x282130u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x282134: 0x42000038  ei
    ctx->pc = 0x282134u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x282138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28213c: 0x3e00008  jr          $ra
    ctx->pc = 0x28213Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28213Cu;
            // 0x282140: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2820FCu: goto label_2820fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282144u;
    // 0x282144: 0x0  nop
    ctx->pc = 0x282144u;
    // NOP
}
