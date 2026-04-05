#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CE3A8
// Address: 0x1ce3a8 - 0x1ce400
void sub_001CE3A8_0x1ce3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE3A8_0x1ce3a8");
#endif

    ctx->pc = 0x1ce3a8u;

    // 0x1ce3a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ce3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ce3ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ce3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ce3b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ce3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ce3b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ce3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce3b8: 0x9607006c  lhu         $a3, 0x6C($s0)
    ctx->pc = 0x1ce3b8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1ce3bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ce3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce3c0: 0xc073066  jal         func_1CC198
    ctx->pc = 0x1CE3C0u;
    SET_GPR_U32(ctx, 31, 0x1CE3C8u);
    ctx->pc = 0x1CE3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE3C0u;
            // 0x1ce3c4: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC198u;
    if (runtime->hasFunction(0x1CC198u)) {
        auto targetFn = runtime->lookupFunction(0x1CC198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3C8u; }
        if (ctx->pc != 0x1CE3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC198_0x1cc198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3C8u; }
        if (ctx->pc != 0x1CE3C8u) { return; }
    }
    ctx->pc = 0x1CE3C8u;
    // 0x1ce3c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE3C8u;
    {
        const bool branch_taken_0x1ce3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE3C8u;
            // 0x1ce3cc: 0x7ba50000  lq          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce3c8) {
            ctx->pc = 0x1CE3E0u;
            goto label_1ce3e0;
        }
    }
    ctx->pc = 0x1CE3D0u;
    // 0x1ce3d0: 0xc0742ec  jal         func_1D0BB0
    ctx->pc = 0x1CE3D0u;
    SET_GPR_U32(ctx, 31, 0x1CE3D8u);
    ctx->pc = 0x1CE3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE3D0u;
            // 0x1ce3d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BB0u;
    if (runtime->hasFunction(0x1D0BB0u)) {
        auto targetFn = runtime->lookupFunction(0x1D0BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3D8u; }
        if (ctx->pc != 0x1CE3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0BB0_0x1d0bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3D8u; }
        if (ctx->pc != 0x1CE3D8u) { return; }
    }
    ctx->pc = 0x1CE3D8u;
    // 0x1ce3d8: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x1ce3d8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce3dc: 0x0  nop
    ctx->pc = 0x1ce3dcu;
    // NOP
label_1ce3e0:
    // 0x1ce3e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce3e4: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x1ce3e4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce3e8: 0xc0735a0  jal         func_1CD680
    ctx->pc = 0x1CE3E8u;
    SET_GPR_U32(ctx, 31, 0x1CE3F0u);
    ctx->pc = 0x1CE3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE3E8u;
            // 0x1ce3ec: 0x70053ca9  por         $a3, $zero, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CD680u;
    if (runtime->hasFunction(0x1CD680u)) {
        auto targetFn = runtime->lookupFunction(0x1CD680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3F0u; }
        if (ctx->pc != 0x1CE3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD680_0x1cd680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3F0u; }
        if (ctx->pc != 0x1CE3F0u) { return; }
    }
    ctx->pc = 0x1CE3F0u;
    // 0x1ce3f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ce3f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce3f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ce3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE3F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE3F8u;
            // 0x1ce3fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE3E0u: goto label_1ce3e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CE400u;
}
