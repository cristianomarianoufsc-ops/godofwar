#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172458
// Address: 0x172458 - 0x172500
void sub_00172458_0x172458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172458_0x172458");
#endif

    ctx->pc = 0x172458u;

    // 0x172458: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x172458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17245c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17245cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x172460: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x172460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x172464: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x172464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172468: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x172468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x17246c: 0x2484003c  addiu       $a0, $a0, 0x3C
    ctx->pc = 0x17246cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
    // 0x172470: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x172470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x172474: 0x1044000b  beq         $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x172474u;
    {
        const bool branch_taken_0x172474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x172478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172474u;
            // 0x172478: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172474) {
            ctx->pc = 0x1724A4u;
            goto label_1724a4;
        }
    }
    ctx->pc = 0x17247Cu;
    // 0x17247c: 0x0  nop
    ctx->pc = 0x17247cu;
    // NOP
label_172480:
    // 0x172480: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x172480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x172484: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x172484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172488: 0xc05c88c  jal         func_172230
    ctx->pc = 0x172488u;
    SET_GPR_U32(ctx, 31, 0x172490u);
    ctx->pc = 0x17248Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172488u;
            // 0x17248c: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172230u;
    if (runtime->hasFunction(0x172230u)) {
        auto targetFn = runtime->lookupFunction(0x172230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172490u; }
        if (ctx->pc != 0x172490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172230_0x172230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172490u; }
        if (ctx->pc != 0x172490u) { return; }
    }
    ctx->pc = 0x172490u;
    // 0x172490: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x172490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x172494: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x172494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172498: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x172498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17249c: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17249Cu;
    {
        const bool branch_taken_0x17249c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1724A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17249Cu;
            // 0x1724a0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17249c) {
            ctx->pc = 0x172480u;
            runtime->cooperativeGuestYield();
            goto label_172480;
        }
    }
    ctx->pc = 0x1724A4u;
label_1724a4:
    // 0x1724a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1724a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1724a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1724a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1724ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1724ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1724B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1724ACu;
            // 0x1724b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172480u: goto label_172480;
            case 0x1724A4u: goto label_1724a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1724B4u;
    // 0x1724b4: 0x0  nop
    ctx->pc = 0x1724b4u;
    // NOP
    // 0x1724b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1724b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1724bc: 0x0  nop
    ctx->pc = 0x1724bcu;
    // NOP
    // 0x1724c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1724c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1724c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1724c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1724c8: 0xc05c8a6  jal         func_172298
    ctx->pc = 0x1724C8u;
    SET_GPR_U32(ctx, 31, 0x1724D0u);
    ctx->pc = 0x1724CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1724C8u;
            // 0x1724cc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172298u;
    if (runtime->hasFunction(0x172298u)) {
        auto targetFn = runtime->lookupFunction(0x172298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1724D0u; }
        if (ctx->pc != 0x1724D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_172298_0x1722e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1724D0u; }
        if (ctx->pc != 0x1724D0u) { return; }
    }
    ctx->pc = 0x1724D0u;
    // 0x1724d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1724d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1724d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1724d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1724d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1724D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1724DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1724D8u;
            // 0x1724dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172480u: goto label_172480;
            case 0x1724A4u: goto label_1724a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1724E0u;
    // 0x1724e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1724e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1724e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1724e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1724e8: 0xc05c8b8  jal         func_1722E0
    ctx->pc = 0x1724E8u;
    SET_GPR_U32(ctx, 31, 0x1724F0u);
    ctx->pc = 0x1724ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1724E8u;
            // 0x1724ec: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1722E0u;
    if (runtime->hasFunction(0x1722E0u)) {
        auto targetFn = runtime->lookupFunction(0x1722E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1724F0u; }
        if (ctx->pc != 0x1724F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001722E0_0x1722e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1724F0u; }
        if (ctx->pc != 0x1724F0u) { return; }
    }
    ctx->pc = 0x1724F0u;
    // 0x1724f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1724f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1724f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1724f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1724f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1724F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1724FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1724F8u;
            // 0x1724fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172480u: goto label_172480;
            case 0x1724A4u: goto label_1724a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172500u;
}
