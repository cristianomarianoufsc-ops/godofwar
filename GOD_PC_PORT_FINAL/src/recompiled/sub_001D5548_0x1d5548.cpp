#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D5548
// Address: 0x1d5548 - 0x1d5668
void sub_001D5548_0x1d5548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5548_0x1d5548");
#endif

    ctx->pc = 0x1d5548u;

    // 0x1d5548: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d5548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d554c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1d554cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1d5550: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1d5550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1d5554: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d5554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5558: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d5558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d555c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d555cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d5560: 0x3c043e4c  lui         $a0, 0x3E4C
    ctx->pc = 0x1d5560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15948 << 16));
    // 0x1d5564: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x1d5564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x1d5568: 0x3c053e4c  lui         $a1, 0x3E4C
    ctx->pc = 0x1d5568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15948 << 16));
    // 0x1d556c: 0x34a5cccd  ori         $a1, $a1, 0xCCCD
    ctx->pc = 0x1d556cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x1d5570: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x1d5570u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1d5574: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1d5574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1d5578: 0x3c053ecc  lui         $a1, 0x3ECC
    ctx->pc = 0x1d5578u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16076 << 16));
    // 0x1d557c: 0x34a5cccd  ori         $a1, $a1, 0xCCCD
    ctx->pc = 0x1d557cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x1d5580: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1d5580u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1d5584: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1d5584u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1d5588: 0x7e2203b0  sq          $v0, 0x3B0($s1)
    ctx->pc = 0x1d5588u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 944), GPR_VEC(ctx, 2));
    // 0x1d558c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1d558cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1d5590: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1d5590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1d5594: 0x3c043e19  lui         $a0, 0x3E19
    ctx->pc = 0x1d5594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15897 << 16));
    // 0x1d5598: 0x3484999a  ori         $a0, $a0, 0x999A
    ctx->pc = 0x1d5598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x1d559c: 0x3c053ecc  lui         $a1, 0x3ECC
    ctx->pc = 0x1d559cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16076 << 16));
    // 0x1d55a0: 0x34a5cccd  ori         $a1, $a1, 0xCCCD
    ctx->pc = 0x1d55a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x1d55a4: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x1d55a4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1d55a8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1d55a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1d55ac: 0x3c053e19  lui         $a1, 0x3E19
    ctx->pc = 0x1d55acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15897 << 16));
    // 0x1d55b0: 0x34a5999a  ori         $a1, $a1, 0x999A
    ctx->pc = 0x1d55b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39322);
    // 0x1d55b4: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1d55b4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1d55b8: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1d55b8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1d55bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d55bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d55c0: 0x7e2203c0  sq          $v0, 0x3C0($s1)
    ctx->pc = 0x1d55c0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 960), GPR_VEC(ctx, 2));
    // 0x1d55c4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1d55c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1d55c8: 0xc05f9ae  jal         func_17E6B8
    ctx->pc = 0x1D55C8u;
    SET_GPR_U32(ctx, 31, 0x1D55D0u);
    ctx->pc = 0x1D55CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D55C8u;
            // 0x1d55cc: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E6B8u;
    if (runtime->hasFunction(0x17E6B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D55D0u; }
        if (ctx->pc != 0x1D55D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e6b8_0x17e6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D55D0u; }
        if (ctx->pc != 0x1D55D0u) { return; }
    }
    ctx->pc = 0x1D55D0u;
    // 0x1d55d0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d55d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d55d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d55d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d55d8: 0x24a56980  addiu       $a1, $a1, 0x6980
    ctx->pc = 0x1d55d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27008));
    // 0x1d55dc: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D55DCu;
    SET_GPR_U32(ctx, 31, 0x1D55E4u);
    ctx->pc = 0x1D55E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D55DCu;
            // 0x1d55e0: 0x262603b0  addiu       $a2, $s1, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D55E4u; }
        if (ctx->pc != 0x1D55E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D55E4u; }
        if (ctx->pc != 0x1D55E4u) { return; }
    }
    ctx->pc = 0x1D55E4u;
    // 0x1d55e4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d55e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d55e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d55e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d55ec: 0x24a56990  addiu       $a1, $a1, 0x6990
    ctx->pc = 0x1d55ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27024));
    // 0x1d55f0: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D55F0u;
    SET_GPR_U32(ctx, 31, 0x1D55F8u);
    ctx->pc = 0x1D55F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D55F0u;
            // 0x1d55f4: 0x262603b4  addiu       $a2, $s1, 0x3B4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 948));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D55F8u; }
        if (ctx->pc != 0x1D55F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D55F8u; }
        if (ctx->pc != 0x1D55F8u) { return; }
    }
    ctx->pc = 0x1D55F8u;
    // 0x1d55f8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d55f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d55fc: 0x262603b8  addiu       $a2, $s1, 0x3B8
    ctx->pc = 0x1d55fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 952));
    // 0x1d5600: 0x24a569a0  addiu       $a1, $a1, 0x69A0
    ctx->pc = 0x1d5600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27040));
    // 0x1d5604: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D5604u;
    SET_GPR_U32(ctx, 31, 0x1D560Cu);
    ctx->pc = 0x1D5608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5604u;
            // 0x1d5608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D560Cu; }
        if (ctx->pc != 0x1D560Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D560Cu; }
        if (ctx->pc != 0x1D560Cu) { return; }
    }
    ctx->pc = 0x1D560Cu;
    // 0x1d560c: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1D560Cu;
    SET_GPR_U32(ctx, 31, 0x1D5614u);
    ctx->pc = 0x1D5610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D560Cu;
            // 0x1d5610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5614u; }
        if (ctx->pc != 0x1D5614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5614u; }
        if (ctx->pc != 0x1D5614u) { return; }
    }
    ctx->pc = 0x1D5614u;
    // 0x1d5614: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d5614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d5618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d561c: 0x24a569b0  addiu       $a1, $a1, 0x69B0
    ctx->pc = 0x1d561cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27056));
    // 0x1d5620: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D5620u;
    SET_GPR_U32(ctx, 31, 0x1D5628u);
    ctx->pc = 0x1D5624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5620u;
            // 0x1d5624: 0x262603c0  addiu       $a2, $s1, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5628u; }
        if (ctx->pc != 0x1D5628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5628u; }
        if (ctx->pc != 0x1D5628u) { return; }
    }
    ctx->pc = 0x1D5628u;
    // 0x1d5628: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d5628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d562c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d562cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5630: 0x24a569c0  addiu       $a1, $a1, 0x69C0
    ctx->pc = 0x1d5630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27072));
    // 0x1d5634: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D5634u;
    SET_GPR_U32(ctx, 31, 0x1D563Cu);
    ctx->pc = 0x1D5638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5634u;
            // 0x1d5638: 0x262603c4  addiu       $a2, $s1, 0x3C4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 964));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D563Cu; }
        if (ctx->pc != 0x1D563Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D563Cu; }
        if (ctx->pc != 0x1D563Cu) { return; }
    }
    ctx->pc = 0x1D563Cu;
    // 0x1d563c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d563cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d5640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5644: 0x262603c8  addiu       $a2, $s1, 0x3C8
    ctx->pc = 0x1d5644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 968));
    // 0x1d5648: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D5648u;
    SET_GPR_U32(ctx, 31, 0x1D5650u);
    ctx->pc = 0x1D564Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5648u;
            // 0x1d564c: 0x24a569d0  addiu       $a1, $a1, 0x69D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5650u; }
        if (ctx->pc != 0x1D5650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5650u; }
        if (ctx->pc != 0x1D5650u) { return; }
    }
    ctx->pc = 0x1D5650u;
    // 0x1d5650: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1d5650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d5654: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1d5654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d5658: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d5658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d565c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D565Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D565Cu;
            // 0x1d5660: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D5664u;
    // 0x1d5664: 0x0  nop
    ctx->pc = 0x1d5664u;
    // NOP
}
