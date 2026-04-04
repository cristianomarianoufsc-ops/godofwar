#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00196268
// Address: 0x196268 - 0x1962f0
void sub_00196268_0x196268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196268_0x196268");
#endif

    ctx->pc = 0x196268u;

    // 0x196268: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x196268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19626c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19626cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196270: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x196270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x196274: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x196274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x196278: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x196278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19627c: 0x78460030  lq          $a2, 0x30($v0)
    ctx->pc = 0x19627cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x196280: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x196280u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x196284: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x196284u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x196288: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x196288u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x19628c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x19628cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x196290: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x196290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x196294: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x196294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x196298: 0xc089990  jal         func_226640
    ctx->pc = 0x196298u;
    SET_GPR_U32(ctx, 31, 0x1962A0u);
    ctx->pc = 0x19629Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196298u;
            // 0x19629c: 0x7fa60030  sq          $a2, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (runtime->hasFunction(0x226640u)) {
        auto targetFn = runtime->lookupFunction(0x226640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1962A0u; }
        if (ctx->pc != 0x1962A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_226640_0x226680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1962A0u; }
        if (ctx->pc != 0x1962A0u) { return; }
    }
    ctx->pc = 0x1962A0u;
    // 0x1962a0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1962a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1962a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1962a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1962a8: 0x8c64cd58  lw          $a0, -0x32A8($v1)
    ctx->pc = 0x1962a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954328)));
    // 0x1962ac: 0xc0761e2  jal         func_1D8788
    ctx->pc = 0x1962ACu;
    SET_GPR_U32(ctx, 31, 0x1962B4u);
    ctx->pc = 0x1962B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1962ACu;
            // 0x1962b0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8788u;
    if (runtime->hasFunction(0x1D8788u)) {
        auto targetFn = runtime->lookupFunction(0x1D8788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1962B4u; }
        if (ctx->pc != 0x1962B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8788_0x1d8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1962B4u; }
        if (ctx->pc != 0x1962B4u) { return; }
    }
    ctx->pc = 0x1962B4u;
    // 0x1962b4: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1962b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1962b8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1962b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1962bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1962bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1962c0: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1962c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1962c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1962c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1962c8: 0x2463e040  addiu       $v1, $v1, -0x1FC0
    ctx->pc = 0x1962c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959168));
    // 0x1962cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1962ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1962d0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1962d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1962d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1962d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1962d8: 0xc089df8  jal         func_2277E0
    ctx->pc = 0x1962D8u;
    SET_GPR_U32(ctx, 31, 0x1962E0u);
    ctx->pc = 0x1962DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1962D8u;
            // 0x1962dc: 0x24450048  addiu       $a1, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2277E0u;
    if (runtime->hasFunction(0x2277E0u)) {
        auto targetFn = runtime->lookupFunction(0x2277E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1962E0u; }
        if (ctx->pc != 0x1962E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002277E0_0x2277e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1962E0u; }
        if (ctx->pc != 0x1962E0u) { return; }
    }
    ctx->pc = 0x1962E0u;
    // 0x1962e0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1962e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1962e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1962e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1962e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1962E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1962ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1962E8u;
            // 0x1962ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1962F0u;
}
