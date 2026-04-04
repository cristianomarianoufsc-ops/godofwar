#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021F798
// Address: 0x21f798 - 0x21f918
void sub_0021F798_0x21f798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F798_0x21f798");
#endif

    ctx->pc = 0x21f798u;

    // 0x21f798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21f798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21f79c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x21f79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x21f7a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21f7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21f7a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21f7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21f7a8: 0xc087f30  jal         func_21FCC0
    ctx->pc = 0x21F7A8u;
    SET_GPR_U32(ctx, 31, 0x21F7B0u);
    ctx->pc = 0x21FCC0u;
    if (runtime->hasFunction(0x21FCC0u)) {
        auto targetFn = runtime->lookupFunction(0x21FCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F7B0u; }
        if (ctx->pc != 0x21F7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_21fcc0_0x21fce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F7B0u; }
        if (ctx->pc != 0x21F7B0u) { return; }
    }
    ctx->pc = 0x21F7B0u;
    // 0x21f7b0: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x21F7B0u;
    {
        const bool branch_taken_0x21f7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F7B0u;
            // 0x21f7b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f7b0) {
            ctx->pc = 0x21F868u;
            goto label_21f868;
        }
    }
    ctx->pc = 0x21F7B8u;
    // 0x21f7b8: 0xc08757e  jal         func_21D5F8
    ctx->pc = 0x21F7B8u;
    SET_GPR_U32(ctx, 31, 0x21F7C0u);
    ctx->pc = 0x21F7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F7B8u;
            // 0x21f7bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D5F8u;
    if (runtime->hasFunction(0x21D5F8u)) {
        auto targetFn = runtime->lookupFunction(0x21D5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F7C0u; }
        if (ctx->pc != 0x21F7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D5F8_0x21d5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F7C0u; }
        if (ctx->pc != 0x21F7C0u) { return; }
    }
    ctx->pc = 0x21F7C0u;
    // 0x21f7c0: 0xc087f3a  jal         func_21FCE8
    ctx->pc = 0x21F7C0u;
    SET_GPR_U32(ctx, 31, 0x21F7C8u);
    ctx->pc = 0x21FCE8u;
    if (runtime->hasFunction(0x21FCE8u)) {
        auto targetFn = runtime->lookupFunction(0x21FCE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F7C8u; }
        if (ctx->pc != 0x21F7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_21fce8_0x21fd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F7C8u; }
        if (ctx->pc != 0x21F7C8u) { return; }
    }
    ctx->pc = 0x21F7C8u;
    // 0x21f7c8: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x21F7C8u;
    {
        const bool branch_taken_0x21f7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F7C8u;
            // 0x21f7cc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f7c8) {
            ctx->pc = 0x21F900u;
            goto label_21f900;
        }
    }
    ctx->pc = 0x21F7D0u;
    // 0x21f7d0: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x21f7d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21f7d4: 0xc076cf4  jal         func_1DB3D0
    ctx->pc = 0x21F7D4u;
    SET_GPR_U32(ctx, 31, 0x21F7DCu);
    ctx->pc = 0x21F7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F7D4u;
            // 0x21f7d8: 0x8c44cd58  lw          $a0, -0x32A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB3D0u;
    if (runtime->hasFunction(0x1DB3D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F7DCu; }
        if (ctx->pc != 0x21F7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1db3d0_0x1db418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F7DCu; }
        if (ctx->pc != 0x21F7DCu) { return; }
    }
    ctx->pc = 0x21F7DCu;
    // 0x21f7dc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x21F7DCu;
    {
        const bool branch_taken_0x21f7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F7DCu;
            // 0x21f7e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f7dc) {
            ctx->pc = 0x21F83Cu;
            goto label_21f83c;
        }
    }
    ctx->pc = 0x21F7E4u;
    // 0x21f7e4: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x21f7e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21f7e8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21f7ec: 0x0  nop
    ctx->pc = 0x21f7ecu;
    // NOP
label_21f7f0:
    // 0x21f7f0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x21f7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x21f7f4: 0x24425280  addiu       $v0, $v0, 0x5280
    ctx->pc = 0x21f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x21f7f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21f7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f7fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21f7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21f800: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21f800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21f804: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x21f804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x21f808: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21f808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21f80c: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x21f80cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x21f810: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21F810u;
    {
        const bool branch_taken_0x21f810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F810u;
            // 0x21f814: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f810) {
            ctx->pc = 0x21F82Cu;
            goto label_21f82c;
        }
    }
    ctx->pc = 0x21F818u;
    // 0x21f818: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x21f818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x21f81c: 0xc0a34bc  jal         func_28D2F0
    ctx->pc = 0x21F81Cu;
    SET_GPR_U32(ctx, 31, 0x21F824u);
    ctx->pc = 0x21F820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F81Cu;
            // 0x21f820: 0x24a58018  addiu       $a1, $a1, -0x7FE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D2F0u;
    if (runtime->hasFunction(0x28D2F0u)) {
        auto targetFn = runtime->lookupFunction(0x28D2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F824u; }
        if (ctx->pc != 0x21F824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D2F0_0x28d2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F824u; }
        if (ctx->pc != 0x21F824u) { return; }
    }
    ctx->pc = 0x21F824u;
    // 0x21f824: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F824u;
    {
        const bool branch_taken_0x21f824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f824) {
            ctx->pc = 0x21F828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21F824u;
            // 0x21f828: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21F83Cu;
            goto label_21f83c;
        }
    }
    ctx->pc = 0x21F82Cu;
label_21f82c:
    // 0x21f82c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21f82cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21f830: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x21f830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21f834: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x21F834u;
    {
        const bool branch_taken_0x21f834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F834u;
            // 0x21f838: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f834) {
            ctx->pc = 0x21F7F0u;
            runtime->cooperativeGuestYield();
            goto label_21f7f0;
        }
    }
    ctx->pc = 0x21F83Cu;
label_21f83c:
    // 0x21f83c: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x21f83cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x21f840: 0x8e02cb94  lw          $v0, -0x346C($s0)
    ctx->pc = 0x21f840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
    // 0x21f844: 0xac51025c  sw          $s1, 0x25C($v0)
    ctx->pc = 0x21f844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 604), GPR_U32(ctx, 17));
    // 0x21f848: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21f848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f84c: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x21F84Cu;
    SET_GPR_U32(ctx, 31, 0x21F854u);
    ctx->pc = 0x21F850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F84Cu;
            // 0x21f850: 0xac400278  sw          $zero, 0x278($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F854u; }
        if (ctx->pc != 0x21F854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F854u; }
        if (ctx->pc != 0x21F854u) { return; }
    }
    ctx->pc = 0x21F854u;
    // 0x21f854: 0x8e02cb94  lw          $v0, -0x346C($s0)
    ctx->pc = 0x21f854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
    // 0x21f858: 0xc087f2a  jal         func_21FCA8
    ctx->pc = 0x21F858u;
    SET_GPR_U32(ctx, 31, 0x21F860u);
    ctx->pc = 0x21F85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F858u;
            // 0x21f85c: 0xac40027c  sw          $zero, 0x27C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 636), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FCA8u;
    if (runtime->hasFunction(0x21FCA8u)) {
        auto targetFn = runtime->lookupFunction(0x21FCA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F860u; }
        if (ctx->pc != 0x21F860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_21fca8_0x21fcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F860u; }
        if (ctx->pc != 0x21F860u) { return; }
    }
    ctx->pc = 0x21F860u;
    // 0x21f860: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x21F860u;
    {
        const bool branch_taken_0x21f860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F860u;
            // 0x21f864: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f860) {
            ctx->pc = 0x21F904u;
            goto label_21f904;
        }
    }
    ctx->pc = 0x21F868u;
label_21f868:
    // 0x21f868: 0xc08757e  jal         func_21D5F8
    ctx->pc = 0x21F868u;
    SET_GPR_U32(ctx, 31, 0x21F870u);
    ctx->pc = 0x21F86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F868u;
            // 0x21f86c: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D5F8u;
    if (runtime->hasFunction(0x21D5F8u)) {
        auto targetFn = runtime->lookupFunction(0x21D5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F870u; }
        if (ctx->pc != 0x21F870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D5F8_0x21d5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F870u; }
        if (ctx->pc != 0x21F870u) { return; }
    }
    ctx->pc = 0x21F870u;
    // 0x21f870: 0x8e02cb94  lw          $v0, -0x346C($s0)
    ctx->pc = 0x21f870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
    // 0x21f874: 0x8c42027c  lw          $v0, 0x27C($v0)
    ctx->pc = 0x21f874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 636)));
    // 0x21f878: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x21F878u;
    {
        const bool branch_taken_0x21f878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F878u;
            // 0x21f87c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f878) {
            ctx->pc = 0x21F900u;
            goto label_21f900;
        }
    }
    ctx->pc = 0x21F880u;
    // 0x21f880: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21f880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21f884: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21f884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21f888: 0x8c4411d0  lw          $a0, 0x11D0($v0)
    ctx->pc = 0x21f888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4560)));
    // 0x21f88c: 0xc08ac98  jal         func_22B260
    ctx->pc = 0x21F88Cu;
    SET_GPR_U32(ctx, 31, 0x21F894u);
    ctx->pc = 0x21F890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F88Cu;
            // 0x21f890: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B260u;
    if (runtime->hasFunction(0x22B260u)) {
        auto targetFn = runtime->lookupFunction(0x22B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F894u; }
        if (ctx->pc != 0x21F894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B260_0x22b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F894u; }
        if (ctx->pc != 0x21F894u) { return; }
    }
    ctx->pc = 0x21F894u;
    // 0x21f894: 0x8e02cb94  lw          $v0, -0x346C($s0)
    ctx->pc = 0x21f894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
    // 0x21f898: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21f898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f89c: 0x8c430278  lw          $v1, 0x278($v0)
    ctx->pc = 0x21f89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 632)));
    // 0x21f8a0: 0x10640010  beq         $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21F8A0u;
    {
        const bool branch_taken_0x21f8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x21f8a0) {
            ctx->pc = 0x21F8E4u;
            goto label_21f8e4;
        }
    }
    ctx->pc = 0x21F8A8u;
    // 0x21f8a8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x21f8a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21f8ac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F8ACu;
    {
        const bool branch_taken_0x21f8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f8ac) {
            ctx->pc = 0x21F8B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21F8ACu;
            // 0x21f8b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21F8C4u;
            goto label_21f8c4;
        }
    }
    ctx->pc = 0x21F8B4u;
    // 0x21f8b4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21F8B4u;
    {
        const bool branch_taken_0x21f8b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F8B4u;
            // 0x21f8b8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f8b4) {
            ctx->pc = 0x21F8D4u;
            goto label_21f8d4;
        }
    }
    ctx->pc = 0x21F8BCu;
    // 0x21f8bc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x21F8BCu;
    {
        const bool branch_taken_0x21f8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F8BCu;
            // 0x21f8c0: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f8bc) {
            ctx->pc = 0x21F908u;
            goto label_21f908;
        }
    }
    ctx->pc = 0x21F8C4u;
label_21f8c4:
    // 0x21f8c4: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21F8C4u;
    {
        const bool branch_taken_0x21f8c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21F8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F8C4u;
            // 0x21f8c8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f8c4) {
            ctx->pc = 0x21F8F4u;
            goto label_21f8f4;
        }
    }
    ctx->pc = 0x21F8CCu;
    // 0x21f8cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21F8CCu;
    {
        const bool branch_taken_0x21f8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F8CCu;
            // 0x21f8d0: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f8cc) {
            ctx->pc = 0x21F908u;
            goto label_21f908;
        }
    }
    ctx->pc = 0x21F8D4u;
label_21f8d4:
    // 0x21f8d4: 0xc087602  jal         func_21D808
    ctx->pc = 0x21F8D4u;
    SET_GPR_U32(ctx, 31, 0x21F8DCu);
    ctx->pc = 0x21D808u;
    if (runtime->hasFunction(0x21D808u)) {
        auto targetFn = runtime->lookupFunction(0x21D808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F8DCu; }
        if (ctx->pc != 0x21F8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D808_0x21d808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F8DCu; }
        if (ctx->pc != 0x21F8DCu) { return; }
    }
    ctx->pc = 0x21F8DCu;
    // 0x21f8dc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21F8DCu;
    {
        const bool branch_taken_0x21f8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F8DCu;
            // 0x21f8e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f8dc) {
            ctx->pc = 0x21F904u;
            goto label_21f904;
        }
    }
    ctx->pc = 0x21F8E4u;
label_21f8e4:
    // 0x21f8e4: 0xc08761a  jal         func_21D868
    ctx->pc = 0x21F8E4u;
    SET_GPR_U32(ctx, 31, 0x21F8ECu);
    ctx->pc = 0x21F8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F8E4u;
            // 0x21f8e8: 0xac4001a8  sw          $zero, 0x1A8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D868u;
    if (runtime->hasFunction(0x21D868u)) {
        auto targetFn = runtime->lookupFunction(0x21D868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F8ECu; }
        if (ctx->pc != 0x21F8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D868_0x21d868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F8ECu; }
        if (ctx->pc != 0x21F8ECu) { return; }
    }
    ctx->pc = 0x21F8ECu;
    // 0x21f8ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21F8ECu;
    {
        const bool branch_taken_0x21f8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F8ECu;
            // 0x21f8f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f8ec) {
            ctx->pc = 0x21F904u;
            goto label_21f904;
        }
    }
    ctx->pc = 0x21F8F4u;
label_21f8f4:
    // 0x21f8f4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21f8f8: 0xc087602  jal         func_21D808
    ctx->pc = 0x21F8F8u;
    SET_GPR_U32(ctx, 31, 0x21F900u);
    ctx->pc = 0x21F8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F8F8u;
            // 0x21f8fc: 0xac44e5bc  sw          $a0, -0x1A44($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960572), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D808u;
    if (runtime->hasFunction(0x21D808u)) {
        auto targetFn = runtime->lookupFunction(0x21D808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F900u; }
        if (ctx->pc != 0x21F900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D808_0x21d808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F900u; }
        if (ctx->pc != 0x21F900u) { return; }
    }
    ctx->pc = 0x21F900u;
label_21f900:
    // 0x21f900: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21f900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21f904:
    // 0x21f904: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21f904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21f908:
    // 0x21f908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f90c: 0x3e00008  jr          $ra
    ctx->pc = 0x21F90Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F90Cu;
            // 0x21f910: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F7F0u: goto label_21f7f0;
            case 0x21F82Cu: goto label_21f82c;
            case 0x21F83Cu: goto label_21f83c;
            case 0x21F868u: goto label_21f868;
            case 0x21F8C4u: goto label_21f8c4;
            case 0x21F8D4u: goto label_21f8d4;
            case 0x21F8E4u: goto label_21f8e4;
            case 0x21F8F4u: goto label_21f8f4;
            case 0x21F900u: goto label_21f900;
            case 0x21F904u: goto label_21f904;
            case 0x21F908u: goto label_21f908;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21F914u;
    // 0x21f914: 0x0  nop
    ctx->pc = 0x21f914u;
    // NOP
}
