#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025A3A0
// Address: 0x25a3a0 - 0x25a408
void sub_0025A3A0_0x25a3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A3A0_0x25a3a0");
#endif

    ctx->pc = 0x25a3a0u;

    // 0x25a3a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a3a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25a3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25a3a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25a3ac: 0xc06a398  jal         func_1A8E60
    ctx->pc = 0x25A3ACu;
    SET_GPR_U32(ctx, 31, 0x25A3B4u);
    ctx->pc = 0x25A3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A3ACu;
            // 0x25a3b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E60u;
    if (runtime->hasFunction(0x1A8E60u)) {
        auto targetFn = runtime->lookupFunction(0x1A8E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A3B4u; }
        if (ctx->pc != 0x25A3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8e60_0x1a8ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A3B4u; }
        if (ctx->pc != 0x25A3B4u) { return; }
    }
    ctx->pc = 0x25A3B4u;
    // 0x25a3b4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x25a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x25a3b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x25a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25a3bc: 0x24428dd0  addiu       $v0, $v0, -0x7230
    ctx->pc = 0x25a3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938064));
    // 0x25a3c0: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x25a3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x25a3c4: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x25a3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    // 0x25a3c8: 0x260300b8  addiu       $v1, $s0, 0xB8
    ctx->pc = 0x25a3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
    // 0x25a3cc: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x25a3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x25a3d0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x25a3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x25a3d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_25a3d8:
    // 0x25a3d8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x25a3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x25a3dc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x25a3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x25a3e0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x25a3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x25a3e4: 0x0  nop
    ctx->pc = 0x25a3e4u;
    // NOP
    // 0x25a3e8: 0x0  nop
    ctx->pc = 0x25a3e8u;
    // NOP
    // 0x25a3ec: 0x1482fffa  bne         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25A3ECu;
    {
        const bool branch_taken_0x25a3ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x25A3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A3ECu;
            // 0x25a3f0: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a3ec) {
            ctx->pc = 0x25A3D8u;
            runtime->cooperativeGuestYield();
            goto label_25a3d8;
        }
    }
    ctx->pc = 0x25A3F4u;
    // 0x25a3f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25a3f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a3f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a3fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25a3fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a400: 0x3e00008  jr          $ra
    ctx->pc = 0x25A400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A400u;
            // 0x25a404: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25A3D8u: goto label_25a3d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25A408u;
}
