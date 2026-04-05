#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017C398
// Address: 0x17c398 - 0x17c418
void sub_0017C398_0x17c398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C398_0x17c398");
#endif

    ctx->pc = 0x17c398u;

    // 0x17c398: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17c398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17c39c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17c39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17c3a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17c3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17c3a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c3a8: 0xc05ef92  jal         func_17BE48
    ctx->pc = 0x17C3A8u;
    SET_GPR_U32(ctx, 31, 0x17C3B0u);
    ctx->pc = 0x17C3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C3A8u;
            // 0x17c3ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17BE48u;
    if (runtime->hasFunction(0x17BE48u)) {
        auto targetFn = runtime->lookupFunction(0x17BE48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C3B0u; }
        if (ctx->pc != 0x17C3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017BE48_0x17be48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C3B0u; }
        if (ctx->pc != 0x17C3B0u) { return; }
    }
    ctx->pc = 0x17C3B0u;
    // 0x17c3b0: 0x241001c0  addiu       $s0, $zero, 0x1C0
    ctx->pc = 0x17c3b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x17c3b4: 0x0  nop
    ctx->pc = 0x17c3b4u;
    // NOP
label_17c3b8:
    // 0x17c3b8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x17c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x17c3bc: 0x2308018  mult        $s0, $s1, $s0
    ctx->pc = 0x17c3bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x17c3c0: 0x2442d9c0  addiu       $v0, $v0, -0x2640
    ctx->pc = 0x17c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957504));
    // 0x17c3c4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x17c3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x17c3c8: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x17c3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x17c3cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17c3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c3d0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x17c3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17c3d4: 0xc05f110  jal         func_17C440
    ctx->pc = 0x17C3D4u;
    SET_GPR_U32(ctx, 31, 0x17C3DCu);
    ctx->pc = 0x17C3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C3D4u;
            // 0x17c3d8: 0x24070011  addiu       $a3, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C440u;
    if (runtime->hasFunction(0x17C440u)) {
        auto targetFn = runtime->lookupFunction(0x17C440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C3DCu; }
        if (ctx->pc != 0x17C3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C440_0x17c440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C3DCu; }
        if (ctx->pc != 0x17C3DCu) { return; }
    }
    ctx->pc = 0x17C3DCu;
    // 0x17c3dc: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x17c3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x17c3e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17c3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c3e4: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x17c3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x17c3e8: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x17c3e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x17c3ec: 0xc05f110  jal         func_17C440
    ctx->pc = 0x17C3ECu;
    SET_GPR_U32(ctx, 31, 0x17C3F4u);
    ctx->pc = 0x17C3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C3ECu;
            // 0x17c3f0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C440u;
    if (runtime->hasFunction(0x17C440u)) {
        auto targetFn = runtime->lookupFunction(0x17C440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C3F4u; }
        if (ctx->pc != 0x17C3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C440_0x17c440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C3F4u; }
        if (ctx->pc != 0x17C3F4u) { return; }
    }
    ctx->pc = 0x17C3F4u;
    // 0x17c3f4: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x17c3f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17c3f8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x17C3F8u;
    {
        const bool branch_taken_0x17c3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C3F8u;
            // 0x17c3fc: 0x241001c0  addiu       $s0, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c3f8) {
            ctx->pc = 0x17C3B8u;
            runtime->cooperativeGuestYield();
            goto label_17c3b8;
        }
    }
    ctx->pc = 0x17C400u;
    // 0x17c400: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17c400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c404: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17c404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c40c: 0x3e00008  jr          $ra
    ctx->pc = 0x17C40Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C40Cu;
            // 0x17c410: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C3B8u: goto label_17c3b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17C414u;
    // 0x17c414: 0x0  nop
    ctx->pc = 0x17c414u;
    // NOP
}
