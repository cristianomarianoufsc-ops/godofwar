#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029A378
// Address: 0x29a378 - 0x29a3f8
void sub_0029A378_0x29a378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A378_0x29a378");
#endif

    ctx->pc = 0x29a378u;

    // 0x29a378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a37c: 0x3c0208ca  lui         $v0, 0x8CA
    ctx->pc = 0x29a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2250 << 16));
    // 0x29a380: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a384: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29a384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a388: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29a38c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x29a38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a390: 0x72020019  multu1      $zero, $s0, $v0
    ctx->pc = 0x29a390u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 16) * (uint64_t)GPR_U32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x29a394: 0x820019  multu       $a0, $v0
    ctx->pc = 0x29a394u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x29a398: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x29a398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x29a39c: 0x34a54240  ori         $a1, $a1, 0x4240
    ctx->pc = 0x29a39cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16960);
    // 0x29a3a0: 0x70008010  mfhi1       $s0
    ctx->pc = 0x29a3a0u;
    SET_GPR_U64(ctx, 16, ctx->hi1);
    // 0x29a3a4: 0x3012  mflo        $a2
    ctx->pc = 0x29a3a4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x29a3a8: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x29a3a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x29a3ac: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29a3acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29a3b0: 0x2010  mfhi        $a0
    ctx->pc = 0x29a3b0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x29a3b4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x29a3b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x29a3b8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x29a3b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x29a3bc: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x29a3bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x29a3c0: 0x70003012  mflo1       $a2
    ctx->pc = 0x29a3c0u;
    SET_GPR_U64(ctx, 6, ctx->lo1);
    // 0x29a3c4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29a3c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29a3c8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x29a3c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x29a3cc: 0xc0a0fc6  jal         func_283F18
    ctx->pc = 0x29A3CCu;
    SET_GPR_U32(ctx, 31, 0x29A3D4u);
    ctx->pc = 0x29A3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A3CCu;
            // 0x29a3d0: 0x2068025  or          $s0, $s0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283F18u;
    if (runtime->hasFunction(0x283F18u)) {
        auto targetFn = runtime->lookupFunction(0x283F18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A3D4u; }
        if (ctx->pc != 0x29A3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_283f18_0x2844e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A3D4u; }
        if (ctx->pc != 0x29A3D4u) { return; }
    }
    ctx->pc = 0x29A3D4u;
    // 0x29a3d4: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x29a3d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x29a3d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a3dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a3dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x29A3E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A3E0u;
            // 0x29a3e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29A3E8u;
    // 0x29a3e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x29a3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29a3ec: 0x0  nop
    ctx->pc = 0x29a3ecu;
    // NOP
    // 0x29a3f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x29a3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29a3f4: 0x0  nop
    ctx->pc = 0x29a3f4u;
    // NOP
}
