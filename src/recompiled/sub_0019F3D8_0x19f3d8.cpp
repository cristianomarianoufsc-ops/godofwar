#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F3D8
// Address: 0x19f3d8 - 0x19f458
void sub_0019F3D8_0x19f3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F3D8_0x19f3d8");
#endif

    ctx->pc = 0x19f3d8u;

    // 0x19f3d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19f3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19f3dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19f3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19f3e0: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x19f3e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x19f3e4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19f3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19f3e8: 0x8e25c9e8  lw          $a1, -0x3618($s1)
    ctx->pc = 0x19f3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953448)));
    // 0x19f3ec: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x19F3ECu;
    {
        const bool branch_taken_0x19f3ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F3ECu;
            // 0x19f3f0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3ec) {
            ctx->pc = 0x19F440u;
            goto label_19f440;
        }
    }
    ctx->pc = 0x19F3F4u;
    // 0x19f3f4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19f3f8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x19f3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x19f3fc: 0x8c43cd58  lw          $v1, -0x32A8($v0)
    ctx->pc = 0x19f3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x19f400: 0x240203f7  addiu       $v0, $zero, 0x3F7
    ctx->pc = 0x19f400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1015));
    // 0x19f404: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x19f404u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x19f408: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x19f408u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19f40c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x19f40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x19f410: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x19f410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x19f414: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x19f414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x19f418: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19f418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x19f41c: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x19f41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x19f420: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x19F420u;
    SET_GPR_U32(ctx, 31, 0x19F428u);
    ctx->pc = 0x19F424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F420u;
            // 0x19f424: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F428u; }
        if (ctx->pc != 0x19F428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F428u; }
        if (ctx->pc != 0x19F428u) { return; }
    }
    ctx->pc = 0x19F428u;
    // 0x19f428: 0xc60c028c  lwc1        $f12, 0x28C($s0)
    ctx->pc = 0x19f428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19f42c: 0xc079f42  jal         func_1E7D08
    ctx->pc = 0x19F42Cu;
    SET_GPR_U32(ctx, 31, 0x19F434u);
    ctx->pc = 0x19F430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F42Cu;
            // 0x19f430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D08u;
    if (runtime->hasFunction(0x1E7D08u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F434u; }
        if (ctx->pc != 0x19F434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7D08_0x1e7d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F434u; }
        if (ctx->pc != 0x19F434u) { return; }
    }
    ctx->pc = 0x19F434u;
    // 0x19f434: 0xc077c50  jal         func_1DF140
    ctx->pc = 0x19F434u;
    SET_GPR_U32(ctx, 31, 0x19F43Cu);
    ctx->pc = 0x19F438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F434u;
            // 0x19f438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF140u;
    if (runtime->hasFunction(0x1DF140u)) {
        auto targetFn = runtime->lookupFunction(0x1DF140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F43Cu; }
        if (ctx->pc != 0x19F43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF140_0x1df140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F43Cu; }
        if (ctx->pc != 0x19F43Cu) { return; }
    }
    ctx->pc = 0x19F43Cu;
    // 0x19f43c: 0xae20c9e8  sw          $zero, -0x3618($s1)
    ctx->pc = 0x19f43cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953448), GPR_U32(ctx, 0));
label_19f440:
    // 0x19f440: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19f440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f444: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19f444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f448: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19f448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f44c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F44Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F44Cu;
            // 0x19f450: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F440u: goto label_19f440;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19F454u;
    // 0x19f454: 0x0  nop
    ctx->pc = 0x19f454u;
    // NOP
}
